-- Generated By protoc-gen-lua Do not Edit
local protobuf = require "protobuf"
module('Msg_pb')


MSGINFO = protobuf.Descriptor();
local MSGINFO_MSGID_FIELD = protobuf.FieldDescriptor();
local MSGINFO_SOURCEPLAYERID_FIELD = protobuf.FieldDescriptor();
local MSGINFO_CONTENT_FIELD = protobuf.FieldDescriptor();
local MSGINFO_MSGTIME_FIELD = protobuf.FieldDescriptor();
local MSGINFO_ROLEID_FIELD = protobuf.FieldDescriptor();
MSGPLAYERITEMINFO = protobuf.Descriptor();
local MSGPLAYERITEMINFO_PLAYERID_FIELD = protobuf.FieldDescriptor();
local MSGPLAYERITEMINFO_ROLEID_FIELD = protobuf.FieldDescriptor();
local MSGPLAYERITEMINFO_PLAYERNAME_FIELD = protobuf.FieldDescriptor();
local MSGPLAYERITEMINFO_LASTMSG_FIELD = protobuf.FieldDescriptor();
local MSGPLAYERITEMINFO_LASTMSGTIME_FIELD = protobuf.FieldDescriptor();
local MSGPLAYERITEMINFO_HASNEWMSG_FIELD = protobuf.FieldDescriptor();
HPMSGPLAYERLIST = protobuf.Descriptor();
HPMSGPLAYERLISTRET = protobuf.Descriptor();
local HPMSGPLAYERLISTRET_VERSION_FIELD = protobuf.FieldDescriptor();
local HPMSGPLAYERLISTRET_ITEMINFO_FIELD = protobuf.FieldDescriptor();
HPSEEPLAYERMSG = protobuf.Descriptor();
local HPSEEPLAYERMSG_PLAYERID_FIELD = protobuf.FieldDescriptor();
HPSEEPLAYERMSGRET = protobuf.Descriptor();
local HPSEEPLAYERMSGRET_VERSION_FIELD = protobuf.FieldDescriptor();
local HPSEEPLAYERMSGRET_MSG_FIELD = protobuf.FieldDescriptor();
HPSENDMSGTOOTHERS = protobuf.Descriptor();
local HPSENDMSGTOOTHERS_RECVPLAYERID_FIELD = protobuf.FieldDescriptor();
local HPSENDMSGTOOTHERS_CONTENT_FIELD = protobuf.FieldDescriptor();
local HPSENDMSGTOOTHERS_MODULEID_FIELD = protobuf.FieldDescriptor();
HPNEWMSGSYNCS = protobuf.Descriptor();
local HPNEWMSGSYNCS_ONEMSG_FIELD = protobuf.FieldDescriptor();
HPDELETEONEPLAYERMSG = protobuf.Descriptor();
local HPDELETEONEPLAYERMSG_PLAYERID_FIELD = protobuf.FieldDescriptor();
HPDELETEALLMSG = protobuf.Descriptor();

MSGINFO_MSGID_FIELD.name = "msgId"
MSGINFO_MSGID_FIELD.full_name = ".MsgInfo.msgId"
MSGINFO_MSGID_FIELD.number = 1
MSGINFO_MSGID_FIELD.index = 0
MSGINFO_MSGID_FIELD.label = 2
MSGINFO_MSGID_FIELD.has_default_value = false
MSGINFO_MSGID_FIELD.default_value = 0
MSGINFO_MSGID_FIELD.type = 5
MSGINFO_MSGID_FIELD.cpp_type = 1

MSGINFO_SOURCEPLAYERID_FIELD.name = "sourcePlayerId"
MSGINFO_SOURCEPLAYERID_FIELD.full_name = ".MsgInfo.sourcePlayerId"
MSGINFO_SOURCEPLAYERID_FIELD.number = 2
MSGINFO_SOURCEPLAYERID_FIELD.index = 1
MSGINFO_SOURCEPLAYERID_FIELD.label = 2
MSGINFO_SOURCEPLAYERID_FIELD.has_default_value = false
MSGINFO_SOURCEPLAYERID_FIELD.default_value = 0
MSGINFO_SOURCEPLAYERID_FIELD.type = 5
MSGINFO_SOURCEPLAYERID_FIELD.cpp_type = 1

MSGINFO_CONTENT_FIELD.name = "content"
MSGINFO_CONTENT_FIELD.full_name = ".MsgInfo.content"
MSGINFO_CONTENT_FIELD.number = 3
MSGINFO_CONTENT_FIELD.index = 2
MSGINFO_CONTENT_FIELD.label = 2
MSGINFO_CONTENT_FIELD.has_default_value = false
MSGINFO_CONTENT_FIELD.default_value = ""
MSGINFO_CONTENT_FIELD.type = 9
MSGINFO_CONTENT_FIELD.cpp_type = 9

MSGINFO_MSGTIME_FIELD.name = "msgTime"
MSGINFO_MSGTIME_FIELD.full_name = ".MsgInfo.msgTime"
MSGINFO_MSGTIME_FIELD.number = 4
MSGINFO_MSGTIME_FIELD.index = 3
MSGINFO_MSGTIME_FIELD.label = 2
MSGINFO_MSGTIME_FIELD.has_default_value = false
MSGINFO_MSGTIME_FIELD.default_value = ""
MSGINFO_MSGTIME_FIELD.type = 9
MSGINFO_MSGTIME_FIELD.cpp_type = 9

MSGINFO_ROLEID_FIELD.name = "roleId"
MSGINFO_ROLEID_FIELD.full_name = ".MsgInfo.roleId"
MSGINFO_ROLEID_FIELD.number = 5
MSGINFO_ROLEID_FIELD.index = 4
MSGINFO_ROLEID_FIELD.label = 2
MSGINFO_ROLEID_FIELD.has_default_value = false
MSGINFO_ROLEID_FIELD.default_value = 0
MSGINFO_ROLEID_FIELD.type = 5
MSGINFO_ROLEID_FIELD.cpp_type = 1

MSGINFO.name = "MsgInfo"
MSGINFO.full_name = ".MsgInfo"
MSGINFO.nested_types = {}
MSGINFO.enum_types = {}
MSGINFO.fields = {MSGINFO_MSGID_FIELD, MSGINFO_SOURCEPLAYERID_FIELD, MSGINFO_CONTENT_FIELD, MSGINFO_MSGTIME_FIELD, MSGINFO_ROLEID_FIELD}
MSGINFO.is_extendable = false
MSGINFO.extensions = {}
MSGPLAYERITEMINFO_PLAYERID_FIELD.name = "playerId"
MSGPLAYERITEMINFO_PLAYERID_FIELD.full_name = ".MsgPlayerItemInfo.playerId"
MSGPLAYERITEMINFO_PLAYERID_FIELD.number = 1
MSGPLAYERITEMINFO_PLAYERID_FIELD.index = 0
MSGPLAYERITEMINFO_PLAYERID_FIELD.label = 2
MSGPLAYERITEMINFO_PLAYERID_FIELD.has_default_value = false
MSGPLAYERITEMINFO_PLAYERID_FIELD.default_value = 0
MSGPLAYERITEMINFO_PLAYERID_FIELD.type = 5
MSGPLAYERITEMINFO_PLAYERID_FIELD.cpp_type = 1

MSGPLAYERITEMINFO_ROLEID_FIELD.name = "roleId"
MSGPLAYERITEMINFO_ROLEID_FIELD.full_name = ".MsgPlayerItemInfo.roleId"
MSGPLAYERITEMINFO_ROLEID_FIELD.number = 2
MSGPLAYERITEMINFO_ROLEID_FIELD.index = 1
MSGPLAYERITEMINFO_ROLEID_FIELD.label = 2
MSGPLAYERITEMINFO_ROLEID_FIELD.has_default_value = false
MSGPLAYERITEMINFO_ROLEID_FIELD.default_value = 0
MSGPLAYERITEMINFO_ROLEID_FIELD.type = 5
MSGPLAYERITEMINFO_ROLEID_FIELD.cpp_type = 1

MSGPLAYERITEMINFO_PLAYERNAME_FIELD.name = "playerName"
MSGPLAYERITEMINFO_PLAYERNAME_FIELD.full_name = ".MsgPlayerItemInfo.playerName"
MSGPLAYERITEMINFO_PLAYERNAME_FIELD.number = 3
MSGPLAYERITEMINFO_PLAYERNAME_FIELD.index = 2
MSGPLAYERITEMINFO_PLAYERNAME_FIELD.label = 2
MSGPLAYERITEMINFO_PLAYERNAME_FIELD.has_default_value = false
MSGPLAYERITEMINFO_PLAYERNAME_FIELD.default_value = ""
MSGPLAYERITEMINFO_PLAYERNAME_FIELD.type = 9
MSGPLAYERITEMINFO_PLAYERNAME_FIELD.cpp_type = 9

MSGPLAYERITEMINFO_LASTMSG_FIELD.name = "lastMsg"
MSGPLAYERITEMINFO_LASTMSG_FIELD.full_name = ".MsgPlayerItemInfo.lastMsg"
MSGPLAYERITEMINFO_LASTMSG_FIELD.number = 4
MSGPLAYERITEMINFO_LASTMSG_FIELD.index = 3
MSGPLAYERITEMINFO_LASTMSG_FIELD.label = 2
MSGPLAYERITEMINFO_LASTMSG_FIELD.has_default_value = false
MSGPLAYERITEMINFO_LASTMSG_FIELD.default_value = ""
MSGPLAYERITEMINFO_LASTMSG_FIELD.type = 9
MSGPLAYERITEMINFO_LASTMSG_FIELD.cpp_type = 9

MSGPLAYERITEMINFO_LASTMSGTIME_FIELD.name = "lastMsgTime"
MSGPLAYERITEMINFO_LASTMSGTIME_FIELD.full_name = ".MsgPlayerItemInfo.lastMsgTime"
MSGPLAYERITEMINFO_LASTMSGTIME_FIELD.number = 5
MSGPLAYERITEMINFO_LASTMSGTIME_FIELD.index = 4
MSGPLAYERITEMINFO_LASTMSGTIME_FIELD.label = 2
MSGPLAYERITEMINFO_LASTMSGTIME_FIELD.has_default_value = false
MSGPLAYERITEMINFO_LASTMSGTIME_FIELD.default_value = 0
MSGPLAYERITEMINFO_LASTMSGTIME_FIELD.type = 5
MSGPLAYERITEMINFO_LASTMSGTIME_FIELD.cpp_type = 1

MSGPLAYERITEMINFO_HASNEWMSG_FIELD.name = "hasNewMsg"
MSGPLAYERITEMINFO_HASNEWMSG_FIELD.full_name = ".MsgPlayerItemInfo.hasNewMsg"
MSGPLAYERITEMINFO_HASNEWMSG_FIELD.number = 6
MSGPLAYERITEMINFO_HASNEWMSG_FIELD.index = 5
MSGPLAYERITEMINFO_HASNEWMSG_FIELD.label = 2
MSGPLAYERITEMINFO_HASNEWMSG_FIELD.has_default_value = false
MSGPLAYERITEMINFO_HASNEWMSG_FIELD.default_value = 0
MSGPLAYERITEMINFO_HASNEWMSG_FIELD.type = 5
MSGPLAYERITEMINFO_HASNEWMSG_FIELD.cpp_type = 1

MSGPLAYERITEMINFO.name = "MsgPlayerItemInfo"
MSGPLAYERITEMINFO.full_name = ".MsgPlayerItemInfo"
MSGPLAYERITEMINFO.nested_types = {}
MSGPLAYERITEMINFO.enum_types = {}
MSGPLAYERITEMINFO.fields = {MSGPLAYERITEMINFO_PLAYERID_FIELD, MSGPLAYERITEMINFO_ROLEID_FIELD, MSGPLAYERITEMINFO_PLAYERNAME_FIELD, MSGPLAYERITEMINFO_LASTMSG_FIELD, MSGPLAYERITEMINFO_LASTMSGTIME_FIELD, MSGPLAYERITEMINFO_HASNEWMSG_FIELD}
MSGPLAYERITEMINFO.is_extendable = false
MSGPLAYERITEMINFO.extensions = {}
HPMSGPLAYERLIST.name = "HPMsgPlayerList"
HPMSGPLAYERLIST.full_name = ".HPMsgPlayerList"
HPMSGPLAYERLIST.nested_types = {}
HPMSGPLAYERLIST.enum_types = {}
HPMSGPLAYERLIST.fields = {}
HPMSGPLAYERLIST.is_extendable = false
HPMSGPLAYERLIST.extensions = {}
HPMSGPLAYERLISTRET_VERSION_FIELD.name = "version"
HPMSGPLAYERLISTRET_VERSION_FIELD.full_name = ".HPMsgPlayerListRet.version"
HPMSGPLAYERLISTRET_VERSION_FIELD.number = 1
HPMSGPLAYERLISTRET_VERSION_FIELD.index = 0
HPMSGPLAYERLISTRET_VERSION_FIELD.label = 2
HPMSGPLAYERLISTRET_VERSION_FIELD.has_default_value = false
HPMSGPLAYERLISTRET_VERSION_FIELD.default_value = 0
HPMSGPLAYERLISTRET_VERSION_FIELD.type = 5
HPMSGPLAYERLISTRET_VERSION_FIELD.cpp_type = 1

HPMSGPLAYERLISTRET_ITEMINFO_FIELD.name = "itemInfo"
HPMSGPLAYERLISTRET_ITEMINFO_FIELD.full_name = ".HPMsgPlayerListRet.itemInfo"
HPMSGPLAYERLISTRET_ITEMINFO_FIELD.number = 2
HPMSGPLAYERLISTRET_ITEMINFO_FIELD.index = 1
HPMSGPLAYERLISTRET_ITEMINFO_FIELD.label = 3
HPMSGPLAYERLISTRET_ITEMINFO_FIELD.has_default_value = false
HPMSGPLAYERLISTRET_ITEMINFO_FIELD.default_value = {}
HPMSGPLAYERLISTRET_ITEMINFO_FIELD.message_type = MSGPLAYERITEMINFO
HPMSGPLAYERLISTRET_ITEMINFO_FIELD.type = 11
HPMSGPLAYERLISTRET_ITEMINFO_FIELD.cpp_type = 10

HPMSGPLAYERLISTRET.name = "HPMsgPlayerListRet"
HPMSGPLAYERLISTRET.full_name = ".HPMsgPlayerListRet"
HPMSGPLAYERLISTRET.nested_types = {}
HPMSGPLAYERLISTRET.enum_types = {}
HPMSGPLAYERLISTRET.fields = {HPMSGPLAYERLISTRET_VERSION_FIELD, HPMSGPLAYERLISTRET_ITEMINFO_FIELD}
HPMSGPLAYERLISTRET.is_extendable = false
HPMSGPLAYERLISTRET.extensions = {}
HPSEEPLAYERMSG_PLAYERID_FIELD.name = "playerId"
HPSEEPLAYERMSG_PLAYERID_FIELD.full_name = ".HPSeePlayerMsg.playerId"
HPSEEPLAYERMSG_PLAYERID_FIELD.number = 1
HPSEEPLAYERMSG_PLAYERID_FIELD.index = 0
HPSEEPLAYERMSG_PLAYERID_FIELD.label = 2
HPSEEPLAYERMSG_PLAYERID_FIELD.has_default_value = false
HPSEEPLAYERMSG_PLAYERID_FIELD.default_value = 0
HPSEEPLAYERMSG_PLAYERID_FIELD.type = 5
HPSEEPLAYERMSG_PLAYERID_FIELD.cpp_type = 1

HPSEEPLAYERMSG.name = "HPSeePlayerMsg"
HPSEEPLAYERMSG.full_name = ".HPSeePlayerMsg"
HPSEEPLAYERMSG.nested_types = {}
HPSEEPLAYERMSG.enum_types = {}
HPSEEPLAYERMSG.fields = {HPSEEPLAYERMSG_PLAYERID_FIELD}
HPSEEPLAYERMSG.is_extendable = false
HPSEEPLAYERMSG.extensions = {}
HPSEEPLAYERMSGRET_VERSION_FIELD.name = "version"
HPSEEPLAYERMSGRET_VERSION_FIELD.full_name = ".HPSeePlayerMsgRet.version"
HPSEEPLAYERMSGRET_VERSION_FIELD.number = 1
HPSEEPLAYERMSGRET_VERSION_FIELD.index = 0
HPSEEPLAYERMSGRET_VERSION_FIELD.label = 2
HPSEEPLAYERMSGRET_VERSION_FIELD.has_default_value = false
HPSEEPLAYERMSGRET_VERSION_FIELD.default_value = 0
HPSEEPLAYERMSGRET_VERSION_FIELD.type = 5
HPSEEPLAYERMSGRET_VERSION_FIELD.cpp_type = 1

HPSEEPLAYERMSGRET_MSG_FIELD.name = "msg"
HPSEEPLAYERMSGRET_MSG_FIELD.full_name = ".HPSeePlayerMsgRet.msg"
HPSEEPLAYERMSGRET_MSG_FIELD.number = 2
HPSEEPLAYERMSGRET_MSG_FIELD.index = 1
HPSEEPLAYERMSGRET_MSG_FIELD.label = 3
HPSEEPLAYERMSGRET_MSG_FIELD.has_default_value = false
HPSEEPLAYERMSGRET_MSG_FIELD.default_value = {}
HPSEEPLAYERMSGRET_MSG_FIELD.message_type = MSGINFO
HPSEEPLAYERMSGRET_MSG_FIELD.type = 11
HPSEEPLAYERMSGRET_MSG_FIELD.cpp_type = 10

HPSEEPLAYERMSGRET.name = "HPSeePlayerMsgRet"
HPSEEPLAYERMSGRET.full_name = ".HPSeePlayerMsgRet"
HPSEEPLAYERMSGRET.nested_types = {}
HPSEEPLAYERMSGRET.enum_types = {}
HPSEEPLAYERMSGRET.fields = {HPSEEPLAYERMSGRET_VERSION_FIELD, HPSEEPLAYERMSGRET_MSG_FIELD}
HPSEEPLAYERMSGRET.is_extendable = false
HPSEEPLAYERMSGRET.extensions = {}
HPSENDMSGTOOTHERS_RECVPLAYERID_FIELD.name = "recvPlayerId"
HPSENDMSGTOOTHERS_RECVPLAYERID_FIELD.full_name = ".HPSendMsgToOthers.recvPlayerId"
HPSENDMSGTOOTHERS_RECVPLAYERID_FIELD.number = 1
HPSENDMSGTOOTHERS_RECVPLAYERID_FIELD.index = 0
HPSENDMSGTOOTHERS_RECVPLAYERID_FIELD.label = 2
HPSENDMSGTOOTHERS_RECVPLAYERID_FIELD.has_default_value = false
HPSENDMSGTOOTHERS_RECVPLAYERID_FIELD.default_value = 0
HPSENDMSGTOOTHERS_RECVPLAYERID_FIELD.type = 5
HPSENDMSGTOOTHERS_RECVPLAYERID_FIELD.cpp_type = 1

HPSENDMSGTOOTHERS_CONTENT_FIELD.name = "content"
HPSENDMSGTOOTHERS_CONTENT_FIELD.full_name = ".HPSendMsgToOthers.content"
HPSENDMSGTOOTHERS_CONTENT_FIELD.number = 2
HPSENDMSGTOOTHERS_CONTENT_FIELD.index = 1
HPSENDMSGTOOTHERS_CONTENT_FIELD.label = 2
HPSENDMSGTOOTHERS_CONTENT_FIELD.has_default_value = false
HPSENDMSGTOOTHERS_CONTENT_FIELD.default_value = ""
HPSENDMSGTOOTHERS_CONTENT_FIELD.type = 9
HPSENDMSGTOOTHERS_CONTENT_FIELD.cpp_type = 9

HPSENDMSGTOOTHERS_MODULEID_FIELD.name = "moduleId"
HPSENDMSGTOOTHERS_MODULEID_FIELD.full_name = ".HPSendMsgToOthers.moduleId"
HPSENDMSGTOOTHERS_MODULEID_FIELD.number = 3
HPSENDMSGTOOTHERS_MODULEID_FIELD.index = 2
HPSENDMSGTOOTHERS_MODULEID_FIELD.label = 1
HPSENDMSGTOOTHERS_MODULEID_FIELD.has_default_value = false
HPSENDMSGTOOTHERS_MODULEID_FIELD.default_value = 0
HPSENDMSGTOOTHERS_MODULEID_FIELD.type = 5
HPSENDMSGTOOTHERS_MODULEID_FIELD.cpp_type = 1

HPSENDMSGTOOTHERS.name = "HPSendMsgToOthers"
HPSENDMSGTOOTHERS.full_name = ".HPSendMsgToOthers"
HPSENDMSGTOOTHERS.nested_types = {}
HPSENDMSGTOOTHERS.enum_types = {}
HPSENDMSGTOOTHERS.fields = {HPSENDMSGTOOTHERS_RECVPLAYERID_FIELD, HPSENDMSGTOOTHERS_CONTENT_FIELD, HPSENDMSGTOOTHERS_MODULEID_FIELD}
HPSENDMSGTOOTHERS.is_extendable = false
HPSENDMSGTOOTHERS.extensions = {}
HPNEWMSGSYNCS_ONEMSG_FIELD.name = "oneMsg"
HPNEWMSGSYNCS_ONEMSG_FIELD.full_name = ".HPNewMsgSyncS.oneMsg"
HPNEWMSGSYNCS_ONEMSG_FIELD.number = 1
HPNEWMSGSYNCS_ONEMSG_FIELD.index = 0
HPNEWMSGSYNCS_ONEMSG_FIELD.label = 2
HPNEWMSGSYNCS_ONEMSG_FIELD.has_default_value = false
HPNEWMSGSYNCS_ONEMSG_FIELD.default_value = nil
HPNEWMSGSYNCS_ONEMSG_FIELD.message_type = MSGINFO
HPNEWMSGSYNCS_ONEMSG_FIELD.type = 11
HPNEWMSGSYNCS_ONEMSG_FIELD.cpp_type = 10

HPNEWMSGSYNCS.name = "HPNewMsgSyncS"
HPNEWMSGSYNCS.full_name = ".HPNewMsgSyncS"
HPNEWMSGSYNCS.nested_types = {}
HPNEWMSGSYNCS.enum_types = {}
HPNEWMSGSYNCS.fields = {HPNEWMSGSYNCS_ONEMSG_FIELD}
HPNEWMSGSYNCS.is_extendable = false
HPNEWMSGSYNCS.extensions = {}
HPDELETEONEPLAYERMSG_PLAYERID_FIELD.name = "playerId"
HPDELETEONEPLAYERMSG_PLAYERID_FIELD.full_name = ".HPDeleteOnePlayerMsg.playerId"
HPDELETEONEPLAYERMSG_PLAYERID_FIELD.number = 1
HPDELETEONEPLAYERMSG_PLAYERID_FIELD.index = 0
HPDELETEONEPLAYERMSG_PLAYERID_FIELD.label = 2
HPDELETEONEPLAYERMSG_PLAYERID_FIELD.has_default_value = false
HPDELETEONEPLAYERMSG_PLAYERID_FIELD.default_value = 0
HPDELETEONEPLAYERMSG_PLAYERID_FIELD.type = 5
HPDELETEONEPLAYERMSG_PLAYERID_FIELD.cpp_type = 1

HPDELETEONEPLAYERMSG.name = "HPDeleteOnePlayerMsg"
HPDELETEONEPLAYERMSG.full_name = ".HPDeleteOnePlayerMsg"
HPDELETEONEPLAYERMSG.nested_types = {}
HPDELETEONEPLAYERMSG.enum_types = {}
HPDELETEONEPLAYERMSG.fields = {HPDELETEONEPLAYERMSG_PLAYERID_FIELD}
HPDELETEONEPLAYERMSG.is_extendable = false
HPDELETEONEPLAYERMSG.extensions = {}
HPDELETEALLMSG.name = "HPDeleteAllMsg"
HPDELETEALLMSG.full_name = ".HPDeleteAllMsg"
HPDELETEALLMSG.nested_types = {}
HPDELETEALLMSG.enum_types = {}
HPDELETEALLMSG.fields = {}
HPDELETEALLMSG.is_extendable = false
HPDELETEALLMSG.extensions = {}

HPDeleteAllMsg = protobuf.Message(HPDELETEALLMSG)
HPDeleteOnePlayerMsg = protobuf.Message(HPDELETEONEPLAYERMSG)
HPMsgPlayerList = protobuf.Message(HPMSGPLAYERLIST)
HPMsgPlayerListRet = protobuf.Message(HPMSGPLAYERLISTRET)
HPNewMsgSyncS = protobuf.Message(HPNEWMSGSYNCS)
HPSeePlayerMsg = protobuf.Message(HPSEEPLAYERMSG)
HPSeePlayerMsgRet = protobuf.Message(HPSEEPLAYERMSGRET)
HPSendMsgToOthers = protobuf.Message(HPSENDMSGTOOTHERS)
MsgInfo = protobuf.Message(MSGINFO)
MsgPlayerItemInfo = protobuf.Message(MSGPLAYERITEMINFO)

