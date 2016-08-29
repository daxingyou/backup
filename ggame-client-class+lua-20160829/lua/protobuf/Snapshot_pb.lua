-- Generated By protoc-gen-lua Do not Edit
local protobuf = require "protobuf"
local Player_pb = require("Player_pb")
local Equip_pb = require("Equip_pb")
local Skill_pb = require("Skill_pb")
local Alliance_pb = require("Alliance_pb")
local PlayerTitle_pb = require("PlayerTitle_pb")
module('Snapshot_pb')


PLAYERSNAPSHOTINFO = protobuf.Descriptor();
local PLAYERSNAPSHOTINFO_VERSION_FIELD = protobuf.FieldDescriptor();
local PLAYERSNAPSHOTINFO_PLAYERID_FIELD = protobuf.FieldDescriptor();
local PLAYERSNAPSHOTINFO_PLAYERINFO_FIELD = protobuf.FieldDescriptor();
local PLAYERSNAPSHOTINFO_MAINROLEINFO_FIELD = protobuf.FieldDescriptor();
local PLAYERSNAPSHOTINFO_EQUIPINFO_FIELD = protobuf.FieldDescriptor();
local PLAYERSNAPSHOTINFO_SKILLINFO_FIELD = protobuf.FieldDescriptor();
local PLAYERSNAPSHOTINFO_ALLIANCEINFO_FIELD = protobuf.FieldDescriptor();
local PLAYERSNAPSHOTINFO_TITLEINFO_FIELD = protobuf.FieldDescriptor();
local PLAYERSNAPSHOTINFO_MERCENARYINFO_FIELD = protobuf.FieldDescriptor();
HPSEEOTHERPLAYERINFO = protobuf.Descriptor();
local HPSEEOTHERPLAYERINFO_PLAYERID_FIELD = protobuf.FieldDescriptor();
HPSEEOTHERPLAYERINFORET = protobuf.Descriptor();
local HPSEEOTHERPLAYERINFORET_PLAYERINFO_FIELD = protobuf.FieldDescriptor();
local HPSEEOTHERPLAYERINFORET_ISFRIEND_FIELD = protobuf.FieldDescriptor();
local HPSEEOTHERPLAYERINFORET_ISSHIELD_FIELD = protobuf.FieldDescriptor();
local HPSEEOTHERPLAYERINFORET_ISSENDALLOW_FIELD = protobuf.FieldDescriptor();

PLAYERSNAPSHOTINFO_VERSION_FIELD.name = "version"
PLAYERSNAPSHOTINFO_VERSION_FIELD.full_name = ".PlayerSnapshotInfo.version"
PLAYERSNAPSHOTINFO_VERSION_FIELD.number = 1
PLAYERSNAPSHOTINFO_VERSION_FIELD.index = 0
PLAYERSNAPSHOTINFO_VERSION_FIELD.label = 2
PLAYERSNAPSHOTINFO_VERSION_FIELD.has_default_value = false
PLAYERSNAPSHOTINFO_VERSION_FIELD.default_value = 0
PLAYERSNAPSHOTINFO_VERSION_FIELD.type = 5
PLAYERSNAPSHOTINFO_VERSION_FIELD.cpp_type = 1

PLAYERSNAPSHOTINFO_PLAYERID_FIELD.name = "playerId"
PLAYERSNAPSHOTINFO_PLAYERID_FIELD.full_name = ".PlayerSnapshotInfo.playerId"
PLAYERSNAPSHOTINFO_PLAYERID_FIELD.number = 2
PLAYERSNAPSHOTINFO_PLAYERID_FIELD.index = 1
PLAYERSNAPSHOTINFO_PLAYERID_FIELD.label = 2
PLAYERSNAPSHOTINFO_PLAYERID_FIELD.has_default_value = false
PLAYERSNAPSHOTINFO_PLAYERID_FIELD.default_value = 0
PLAYERSNAPSHOTINFO_PLAYERID_FIELD.type = 5
PLAYERSNAPSHOTINFO_PLAYERID_FIELD.cpp_type = 1

PLAYERSNAPSHOTINFO_PLAYERINFO_FIELD.name = "playerInfo"
PLAYERSNAPSHOTINFO_PLAYERINFO_FIELD.full_name = ".PlayerSnapshotInfo.playerInfo"
PLAYERSNAPSHOTINFO_PLAYERINFO_FIELD.number = 3
PLAYERSNAPSHOTINFO_PLAYERINFO_FIELD.index = 2
PLAYERSNAPSHOTINFO_PLAYERINFO_FIELD.label = 2
PLAYERSNAPSHOTINFO_PLAYERINFO_FIELD.has_default_value = false
PLAYERSNAPSHOTINFO_PLAYERINFO_FIELD.default_value = nil
PLAYERSNAPSHOTINFO_PLAYERINFO_FIELD.message_type = Player_pb.PLAYERINFO
PLAYERSNAPSHOTINFO_PLAYERINFO_FIELD.type = 11
PLAYERSNAPSHOTINFO_PLAYERINFO_FIELD.cpp_type = 10

PLAYERSNAPSHOTINFO_MAINROLEINFO_FIELD.name = "mainRoleInfo"
PLAYERSNAPSHOTINFO_MAINROLEINFO_FIELD.full_name = ".PlayerSnapshotInfo.mainRoleInfo"
PLAYERSNAPSHOTINFO_MAINROLEINFO_FIELD.number = 4
PLAYERSNAPSHOTINFO_MAINROLEINFO_FIELD.index = 3
PLAYERSNAPSHOTINFO_MAINROLEINFO_FIELD.label = 2
PLAYERSNAPSHOTINFO_MAINROLEINFO_FIELD.has_default_value = false
PLAYERSNAPSHOTINFO_MAINROLEINFO_FIELD.default_value = nil
PLAYERSNAPSHOTINFO_MAINROLEINFO_FIELD.message_type = Player_pb.ROLEINFO
PLAYERSNAPSHOTINFO_MAINROLEINFO_FIELD.type = 11
PLAYERSNAPSHOTINFO_MAINROLEINFO_FIELD.cpp_type = 10

PLAYERSNAPSHOTINFO_EQUIPINFO_FIELD.name = "equipInfo"
PLAYERSNAPSHOTINFO_EQUIPINFO_FIELD.full_name = ".PlayerSnapshotInfo.equipInfo"
PLAYERSNAPSHOTINFO_EQUIPINFO_FIELD.number = 5
PLAYERSNAPSHOTINFO_EQUIPINFO_FIELD.index = 4
PLAYERSNAPSHOTINFO_EQUIPINFO_FIELD.label = 3
PLAYERSNAPSHOTINFO_EQUIPINFO_FIELD.has_default_value = false
PLAYERSNAPSHOTINFO_EQUIPINFO_FIELD.default_value = {}
PLAYERSNAPSHOTINFO_EQUIPINFO_FIELD.message_type = Equip_pb.EQUIPINFO
PLAYERSNAPSHOTINFO_EQUIPINFO_FIELD.type = 11
PLAYERSNAPSHOTINFO_EQUIPINFO_FIELD.cpp_type = 10

PLAYERSNAPSHOTINFO_SKILLINFO_FIELD.name = "skillInfo"
PLAYERSNAPSHOTINFO_SKILLINFO_FIELD.full_name = ".PlayerSnapshotInfo.skillInfo"
PLAYERSNAPSHOTINFO_SKILLINFO_FIELD.number = 6
PLAYERSNAPSHOTINFO_SKILLINFO_FIELD.index = 5
PLAYERSNAPSHOTINFO_SKILLINFO_FIELD.label = 3
PLAYERSNAPSHOTINFO_SKILLINFO_FIELD.has_default_value = false
PLAYERSNAPSHOTINFO_SKILLINFO_FIELD.default_value = {}
PLAYERSNAPSHOTINFO_SKILLINFO_FIELD.message_type = Skill_pb.SKILLINFO
PLAYERSNAPSHOTINFO_SKILLINFO_FIELD.type = 11
PLAYERSNAPSHOTINFO_SKILLINFO_FIELD.cpp_type = 10

PLAYERSNAPSHOTINFO_ALLIANCEINFO_FIELD.name = "allianceInfo"
PLAYERSNAPSHOTINFO_ALLIANCEINFO_FIELD.full_name = ".PlayerSnapshotInfo.allianceInfo"
PLAYERSNAPSHOTINFO_ALLIANCEINFO_FIELD.number = 7
PLAYERSNAPSHOTINFO_ALLIANCEINFO_FIELD.index = 6
PLAYERSNAPSHOTINFO_ALLIANCEINFO_FIELD.label = 1
PLAYERSNAPSHOTINFO_ALLIANCEINFO_FIELD.has_default_value = false
PLAYERSNAPSHOTINFO_ALLIANCEINFO_FIELD.default_value = nil
PLAYERSNAPSHOTINFO_ALLIANCEINFO_FIELD.message_type = Alliance_pb.ALLIANCEINFO
PLAYERSNAPSHOTINFO_ALLIANCEINFO_FIELD.type = 11
PLAYERSNAPSHOTINFO_ALLIANCEINFO_FIELD.cpp_type = 10

PLAYERSNAPSHOTINFO_TITLEINFO_FIELD.name = "titleInfo"
PLAYERSNAPSHOTINFO_TITLEINFO_FIELD.full_name = ".PlayerSnapshotInfo.titleInfo"
PLAYERSNAPSHOTINFO_TITLEINFO_FIELD.number = 8
PLAYERSNAPSHOTINFO_TITLEINFO_FIELD.index = 7
PLAYERSNAPSHOTINFO_TITLEINFO_FIELD.label = 1
PLAYERSNAPSHOTINFO_TITLEINFO_FIELD.has_default_value = false
PLAYERSNAPSHOTINFO_TITLEINFO_FIELD.default_value = nil
PLAYERSNAPSHOTINFO_TITLEINFO_FIELD.message_type = PlayerTitle_pb.TITLEINFO
PLAYERSNAPSHOTINFO_TITLEINFO_FIELD.type = 11
PLAYERSNAPSHOTINFO_TITLEINFO_FIELD.cpp_type = 10

PLAYERSNAPSHOTINFO_MERCENARYINFO_FIELD.name = "mercenaryInfo"
PLAYERSNAPSHOTINFO_MERCENARYINFO_FIELD.full_name = ".PlayerSnapshotInfo.mercenaryInfo"
PLAYERSNAPSHOTINFO_MERCENARYINFO_FIELD.number = 9
PLAYERSNAPSHOTINFO_MERCENARYINFO_FIELD.index = 8
PLAYERSNAPSHOTINFO_MERCENARYINFO_FIELD.label = 3
PLAYERSNAPSHOTINFO_MERCENARYINFO_FIELD.has_default_value = false
PLAYERSNAPSHOTINFO_MERCENARYINFO_FIELD.default_value = {}
PLAYERSNAPSHOTINFO_MERCENARYINFO_FIELD.message_type = Player_pb.ROLEINFO
PLAYERSNAPSHOTINFO_MERCENARYINFO_FIELD.type = 11
PLAYERSNAPSHOTINFO_MERCENARYINFO_FIELD.cpp_type = 10

PLAYERSNAPSHOTINFO.name = "PlayerSnapshotInfo"
PLAYERSNAPSHOTINFO.full_name = ".PlayerSnapshotInfo"
PLAYERSNAPSHOTINFO.nested_types = {}
PLAYERSNAPSHOTINFO.enum_types = {}
PLAYERSNAPSHOTINFO.fields = {PLAYERSNAPSHOTINFO_VERSION_FIELD, PLAYERSNAPSHOTINFO_PLAYERID_FIELD, PLAYERSNAPSHOTINFO_PLAYERINFO_FIELD, PLAYERSNAPSHOTINFO_MAINROLEINFO_FIELD, PLAYERSNAPSHOTINFO_EQUIPINFO_FIELD, PLAYERSNAPSHOTINFO_SKILLINFO_FIELD, PLAYERSNAPSHOTINFO_ALLIANCEINFO_FIELD, PLAYERSNAPSHOTINFO_TITLEINFO_FIELD, PLAYERSNAPSHOTINFO_MERCENARYINFO_FIELD}
PLAYERSNAPSHOTINFO.is_extendable = false
PLAYERSNAPSHOTINFO.extensions = {}
HPSEEOTHERPLAYERINFO_PLAYERID_FIELD.name = "playerId"
HPSEEOTHERPLAYERINFO_PLAYERID_FIELD.full_name = ".HPSeeOtherPlayerInfo.playerId"
HPSEEOTHERPLAYERINFO_PLAYERID_FIELD.number = 1
HPSEEOTHERPLAYERINFO_PLAYERID_FIELD.index = 0
HPSEEOTHERPLAYERINFO_PLAYERID_FIELD.label = 2
HPSEEOTHERPLAYERINFO_PLAYERID_FIELD.has_default_value = false
HPSEEOTHERPLAYERINFO_PLAYERID_FIELD.default_value = 0
HPSEEOTHERPLAYERINFO_PLAYERID_FIELD.type = 5
HPSEEOTHERPLAYERINFO_PLAYERID_FIELD.cpp_type = 1

HPSEEOTHERPLAYERINFO.name = "HPSeeOtherPlayerInfo"
HPSEEOTHERPLAYERINFO.full_name = ".HPSeeOtherPlayerInfo"
HPSEEOTHERPLAYERINFO.nested_types = {}
HPSEEOTHERPLAYERINFO.enum_types = {}
HPSEEOTHERPLAYERINFO.fields = {HPSEEOTHERPLAYERINFO_PLAYERID_FIELD}
HPSEEOTHERPLAYERINFO.is_extendable = false
HPSEEOTHERPLAYERINFO.extensions = {}
HPSEEOTHERPLAYERINFORET_PLAYERINFO_FIELD.name = "playerInfo"
HPSEEOTHERPLAYERINFORET_PLAYERINFO_FIELD.full_name = ".HPSeeOtherPlayerInfoRet.playerInfo"
HPSEEOTHERPLAYERINFORET_PLAYERINFO_FIELD.number = 1
HPSEEOTHERPLAYERINFORET_PLAYERINFO_FIELD.index = 0
HPSEEOTHERPLAYERINFORET_PLAYERINFO_FIELD.label = 2
HPSEEOTHERPLAYERINFORET_PLAYERINFO_FIELD.has_default_value = false
HPSEEOTHERPLAYERINFORET_PLAYERINFO_FIELD.default_value = nil
HPSEEOTHERPLAYERINFORET_PLAYERINFO_FIELD.message_type = PLAYERSNAPSHOTINFO
HPSEEOTHERPLAYERINFORET_PLAYERINFO_FIELD.type = 11
HPSEEOTHERPLAYERINFORET_PLAYERINFO_FIELD.cpp_type = 10

HPSEEOTHERPLAYERINFORET_ISFRIEND_FIELD.name = "isFriend"
HPSEEOTHERPLAYERINFORET_ISFRIEND_FIELD.full_name = ".HPSeeOtherPlayerInfoRet.isFriend"
HPSEEOTHERPLAYERINFORET_ISFRIEND_FIELD.number = 2
HPSEEOTHERPLAYERINFORET_ISFRIEND_FIELD.index = 1
HPSEEOTHERPLAYERINFORET_ISFRIEND_FIELD.label = 2
HPSEEOTHERPLAYERINFORET_ISFRIEND_FIELD.has_default_value = false
HPSEEOTHERPLAYERINFORET_ISFRIEND_FIELD.default_value = false
HPSEEOTHERPLAYERINFORET_ISFRIEND_FIELD.type = 8
HPSEEOTHERPLAYERINFORET_ISFRIEND_FIELD.cpp_type = 7

HPSEEOTHERPLAYERINFORET_ISSHIELD_FIELD.name = "isShield"
HPSEEOTHERPLAYERINFORET_ISSHIELD_FIELD.full_name = ".HPSeeOtherPlayerInfoRet.isShield"
HPSEEOTHERPLAYERINFORET_ISSHIELD_FIELD.number = 3
HPSEEOTHERPLAYERINFORET_ISSHIELD_FIELD.index = 2
HPSEEOTHERPLAYERINFORET_ISSHIELD_FIELD.label = 2
HPSEEOTHERPLAYERINFORET_ISSHIELD_FIELD.has_default_value = false
HPSEEOTHERPLAYERINFORET_ISSHIELD_FIELD.default_value = false
HPSEEOTHERPLAYERINFORET_ISSHIELD_FIELD.type = 8
HPSEEOTHERPLAYERINFORET_ISSHIELD_FIELD.cpp_type = 7

HPSEEOTHERPLAYERINFORET_ISSENDALLOW_FIELD.name = "isSendAllow"
HPSEEOTHERPLAYERINFORET_ISSENDALLOW_FIELD.full_name = ".HPSeeOtherPlayerInfoRet.isSendAllow"
HPSEEOTHERPLAYERINFORET_ISSENDALLOW_FIELD.number = 4
HPSEEOTHERPLAYERINFORET_ISSENDALLOW_FIELD.index = 3
HPSEEOTHERPLAYERINFORET_ISSENDALLOW_FIELD.label = 2
HPSEEOTHERPLAYERINFORET_ISSENDALLOW_FIELD.has_default_value = false
HPSEEOTHERPLAYERINFORET_ISSENDALLOW_FIELD.default_value = false
HPSEEOTHERPLAYERINFORET_ISSENDALLOW_FIELD.type = 8
HPSEEOTHERPLAYERINFORET_ISSENDALLOW_FIELD.cpp_type = 7

HPSEEOTHERPLAYERINFORET.name = "HPSeeOtherPlayerInfoRet"
HPSEEOTHERPLAYERINFORET.full_name = ".HPSeeOtherPlayerInfoRet"
HPSEEOTHERPLAYERINFORET.nested_types = {}
HPSEEOTHERPLAYERINFORET.enum_types = {}
HPSEEOTHERPLAYERINFORET.fields = {HPSEEOTHERPLAYERINFORET_PLAYERINFO_FIELD, HPSEEOTHERPLAYERINFORET_ISFRIEND_FIELD, HPSEEOTHERPLAYERINFORET_ISSHIELD_FIELD, HPSEEOTHERPLAYERINFORET_ISSENDALLOW_FIELD}
HPSEEOTHERPLAYERINFORET.is_extendable = false
HPSEEOTHERPLAYERINFORET.extensions = {}

HPSeeOtherPlayerInfo = protobuf.Message(HPSEEOTHERPLAYERINFO)
HPSeeOtherPlayerInfoRet = protobuf.Message(HPSEEOTHERPLAYERINFORET)
PlayerSnapshotInfo = protobuf.Message(PLAYERSNAPSHOTINFO)
