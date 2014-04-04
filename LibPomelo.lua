local EventProtocol = require("framework.api.EventProtocol")
local LibPomelo = class("LibPomelo")

JSON = require("cjson")
--event define
local QPEvent = {
	disconnect = 'disconnect',
}
local Route = {
		queryEntry = 'gate.gateHandler.queryEntry',
	}
local JCEvent = require('Common.Config.JCEvent')

LibPomelo.instance_ = false
LibPomelo.getInstance = function ()
	if not LibPomelo.instance_ then 
		LibPomelo.instance_ = LibPomelo.new()
	end
	return LibPomelo.instance_
end

function LibPomelo:ctor()
	self.isPomeloConnected_ = false
	self.isAutoReconnect_ = false--是否自动重连
	local userInfo = GM.U().getMO("UserMO").getUserInfo()
	local userId = userInfo['userId']
	self.gateQueryData_ = {
        userId = userId,
        serverId = 2,
        channelID = 1,
        gameId = 1
    }
	self.qxpomelo_ = QXPomelo:new()--quickPomeloClient
	EventProtocol.extend(self)
	return self
end

function LibPomelo:start(  )
    self:queryEntry(function(host,port)
		self.qxpomelo_:connect(host, port, function(data)
	    	if data.status ~= 0 then 
	    		return self:onConnectFaild_('connector')
	    	end
	    	return self:onConnected_()
	    end)
	end)
end

--设置gate的查徇数据
function LibPomelo:setGateQuery ( data )
	self.gateQueryData_ = data
	return self
end

--开始连接
--连接gate
function LibPomelo:onConnected_ ( ... )
	self.isPomeloConnected_ = true
	self.qxpomelo_:bindEventHandle(function ( eventVO )
		self:onEvent_(eventVO)
	end)
	self:addListener(QPEvent.disconnect)
	self.isAutoReconnect = true
    local route = "connector.entryHandler.enter";
	local data = {
	    userId = 8,
	    gameId = 109,
	    serverId = 1
	}
	self:request(route, data, function ( data )
	   dump(data)
	   print("connector.entryHandler.enter rep")
	end)
	CCLuaLog("pomelo:连接成功")
end

function LibPomelo:onConnectFaild_ ( step )
	CCLuaLog("onConnectFaild_")
	self.isPomeloConnected_ = false
end

function LibPomelo:onDisconnect_ ( ... )
	print("joyPomeloClient:onDisconnect_")
	self.isPomeloConnected_ = false
end

--收到事件 
function LibPomelo:onEvent_ ( eventVO )
	print("JoyPomeloClient:onEvent_");
	if eventVO.event == QPEvent.disconnect then 
		self:onDisconnect_()
	end
	local _event = {
        name = eventVO.event,
        args = JSON.decode(eventVO.msg)
	}
	self:dispatchEvent(_event)
	-- if self.eventHandle then return self:eventHandle(eventVO.event, eventVO.msg) end
end

function LibPomelo:request ( route, data, callBack )
	print("JoyPomeloClient:request", route, data)
	if not self.isPomeloConnected_ then return false end
	self.qxpomelo_:request(route, JSON.encode(data), function(rep)
		local rep = JSON.decode(rep['msg'])
		callBack(rep)
	end)
end

function LibPomelo:notify ( route, msg )
	if not self.isPomeloConnected_ then return false end
	self.qxpomelo_:notify(route, msg)
end

--注册事件监听函数
--事件将会通过该函数回调给外部逻辑
function LibPomelo:bindEventHandle (eventHandle)
	self.eventHandle = eventHandle
end

--添加监听的事件
--如果收到该事件将通过eventHandle回调给外部
function LibPomelo:addListener (eventName)
	self.qxpomelo_:addListener(eventName)
end

function LibPomelo:queryEntry( cb )
	local host, port = unpack(KCPomeloENV[ENV])
	self.qxpomelo_:connect(host, port, function(data)
		dump(data)
        if data.status ~= 0 then return self:onConnectFaild_('gate') end
	   	self.qxpomelo_:request(Route.queryEntry, JSON.encode(self.gateQueryData_), function(data)
	      	local server = JSON.decode(data['msg'])
	      	dump(data)
	      	assert(isset(server, 'host') and isset(server, 'port'), '请求失败!未取得connector server')
			return cb(server['host'], server['port'])
		end)
    end)
end

function LibPomelo:doDisconnect ( ... )
	self.isPomeloConnected = false
	self.eventHandle = nil
	self.isAutoReconnect = false
	self.qxpomelo_:destroy()
end

return LibPomelo