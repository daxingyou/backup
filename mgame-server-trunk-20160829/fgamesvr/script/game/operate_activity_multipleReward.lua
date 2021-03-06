local skynet = require "skynet"
local COMMON = require "common"
local logger = require "logger"
local utils  = require "utils"
local operate_activity_service = ...

local redis_service
local gamed

local activity_config
local selfData
local globalData

-- 活动数据
--[[
    id              活动ID
    name            活动名称
    desc            活动规则描述
    type            活动类型
    startTime       开始时间【精确到秒】
    endTime         结束时间
    state           活动状态 【1 添加未启用 2 添加已启用 3 可见 4 运行中 5 过期】
    updateTime      活动最近一次操作时间operate_activities
    icon            活动图标

    rewardRatio     [奖励倍数]
    subType         [宝箱类型]


http://10.10.2.46:7602/gm?gmtype=addactivity&data={"id":260175,"name":"双倍","desc":"双倍","type":1002,"startTime":1465872468,"endTime":1466438399,"icon":"","state":2,"rewardRatio":2, "subType":1}    
 --]]

local CMD = {}
--[[ 必须实现的接口
    CMD.load(data)
    CMD.update
    CMD.remove
    CMD.__checkConfig【内部调用】
    CMD.activity_state_changed(data)
    -- ...
--]]

function CMD.__checkConfig(data)
    local extraAttr = {
        "rewardRatio",
        "subType"
    }
    for _, attr in ipairs(extraAttr) do
        if not data[attr] then
            return false
        end
    end

    -- 如果有更深的数据继续往下判断
    return true
end

function CMD.load(data)
    -- 校验数据合法性
    if not CMD.__checkConfig(data) then
        return false
    end
    activity_config = data
    print("operate_activity_demo.lua<CMD.load> activity_config.id: " .. activity_config.id)

    return true
end

-- 活动调度
-- 如果需要做隔天的判断或者时间的处理 在update中处理
function CMD.update()
end

-- 活动移除处理
-- 移除全局活动数据 移除个人活动数据【框架处理】
-- 如果有排行榜发奖之类的处理 在这里处理
function CMD.remove()
    -- 关闭服务
    skynet.exit()
end

-- 活动状态改变处理
function CMD.activity_state_changed(state)
    activity_config.state = state
end

local traceback = debug.traceback
skynet.start(function()
    logger.trace("operate_activity_multipleReward start...")

    redis_service = skynet.queryservice("redis_service")
    gamed = skynet.queryservice("gamed")

    skynet.dispatch("lua", function(_, _, command, ...)
        local f = CMD[command]
        if not f then
            logger.warningf("unhandled message(%s)", command)
            return skynet.ret()
        end

        local ok, ret = xpcall(f, traceback, ...)
        if not ok then
            logger.warningf("handle message(%s) failed : %s", command, ret)
            return skynet.ret()
        end
        skynet.retpack(ret)
    end)
end)


