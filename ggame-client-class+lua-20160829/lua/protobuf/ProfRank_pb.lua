-- Generated By protoc-gen-lua Do not Edit
local protobuf = require "protobuf"
module('ProfRank_pb')


RANKITEMINFO = protobuf.Descriptor();
local RANKITEMINFO_CFGITEMID_FIELD = protobuf.FieldDescriptor();
local RANKITEMINFO_LEVEL_FIELD = protobuf.FieldDescriptor();
local RANKITEMINFO_NAME_FIELD = protobuf.FieldDescriptor();
local RANKITEMINFO_RANK_FIELD = protobuf.FieldDescriptor();
local RANKITEMINFO_FIGHTVALUE_FIELD = protobuf.FieldDescriptor();
local RANKITEMINFO_SIGNATURE_FIELD = protobuf.FieldDescriptor();
local RANKITEMINFO_PLAYERID_FIELD = protobuf.FieldDescriptor();
local RANKITEMINFO_TITLE_FIELD = protobuf.FieldDescriptor();
local RANKITEMINFO_ALLIANCENAME_FIELD = protobuf.FieldDescriptor();
local RANKITEMINFO_ALLIANCEID_FIELD = protobuf.FieldDescriptor();
local RANKITEMINFO_ROLEITEMID_FIELD = protobuf.FieldDescriptor();
HPPROFRANKINGLIST = protobuf.Descriptor();
local HPPROFRANKINGLIST_PROFTYPE_FIELD = protobuf.FieldDescriptor();
HPPROFRANKINGLISTRET = protobuf.Descriptor();
local HPPROFRANKINGLISTRET_SELFRANK_FIELD = protobuf.FieldDescriptor();
local HPPROFRANKINGLISTRET_RANKINFO_FIELD = protobuf.FieldDescriptor();
local HPPROFRANKINGLISTRET_VERSION_FIELD = protobuf.FieldDescriptor();

RANKITEMINFO_CFGITEMID_FIELD.name = "cfgItemId"
RANKITEMINFO_CFGITEMID_FIELD.full_name = ".RankItemInfo.cfgItemId"
RANKITEMINFO_CFGITEMID_FIELD.number = 1
RANKITEMINFO_CFGITEMID_FIELD.index = 0
RANKITEMINFO_CFGITEMID_FIELD.label = 2
RANKITEMINFO_CFGITEMID_FIELD.has_default_value = false
RANKITEMINFO_CFGITEMID_FIELD.default_value = 0
RANKITEMINFO_CFGITEMID_FIELD.type = 5
RANKITEMINFO_CFGITEMID_FIELD.cpp_type = 1

RANKITEMINFO_LEVEL_FIELD.name = "level"
RANKITEMINFO_LEVEL_FIELD.full_name = ".RankItemInfo.level"
RANKITEMINFO_LEVEL_FIELD.number = 2
RANKITEMINFO_LEVEL_FIELD.index = 1
RANKITEMINFO_LEVEL_FIELD.label = 2
RANKITEMINFO_LEVEL_FIELD.has_default_value = false
RANKITEMINFO_LEVEL_FIELD.default_value = 0
RANKITEMINFO_LEVEL_FIELD.type = 5
RANKITEMINFO_LEVEL_FIELD.cpp_type = 1

RANKITEMINFO_NAME_FIELD.name = "name"
RANKITEMINFO_NAME_FIELD.full_name = ".RankItemInfo.name"
RANKITEMINFO_NAME_FIELD.number = 3
RANKITEMINFO_NAME_FIELD.index = 2
RANKITEMINFO_NAME_FIELD.label = 2
RANKITEMINFO_NAME_FIELD.has_default_value = false
RANKITEMINFO_NAME_FIELD.default_value = ""
RANKITEMINFO_NAME_FIELD.type = 9
RANKITEMINFO_NAME_FIELD.cpp_type = 9

RANKITEMINFO_RANK_FIELD.name = "rank"
RANKITEMINFO_RANK_FIELD.full_name = ".RankItemInfo.rank"
RANKITEMINFO_RANK_FIELD.number = 4
RANKITEMINFO_RANK_FIELD.index = 3
RANKITEMINFO_RANK_FIELD.label = 2
RANKITEMINFO_RANK_FIELD.has_default_value = false
RANKITEMINFO_RANK_FIELD.default_value = 0
RANKITEMINFO_RANK_FIELD.type = 5
RANKITEMINFO_RANK_FIELD.cpp_type = 1

RANKITEMINFO_FIGHTVALUE_FIELD.name = "fightValue"
RANKITEMINFO_FIGHTVALUE_FIELD.full_name = ".RankItemInfo.fightValue"
RANKITEMINFO_FIGHTVALUE_FIELD.number = 5
RANKITEMINFO_FIGHTVALUE_FIELD.index = 4
RANKITEMINFO_FIGHTVALUE_FIELD.label = 2
RANKITEMINFO_FIGHTVALUE_FIELD.has_default_value = false
RANKITEMINFO_FIGHTVALUE_FIELD.default_value = 0
RANKITEMINFO_FIGHTVALUE_FIELD.type = 5
RANKITEMINFO_FIGHTVALUE_FIELD.cpp_type = 1

RANKITEMINFO_SIGNATURE_FIELD.name = "signature"
RANKITEMINFO_SIGNATURE_FIELD.full_name = ".RankItemInfo.signature"
RANKITEMINFO_SIGNATURE_FIELD.number = 6
RANKITEMINFO_SIGNATURE_FIELD.index = 5
RANKITEMINFO_SIGNATURE_FIELD.label = 1
RANKITEMINFO_SIGNATURE_FIELD.has_default_value = false
RANKITEMINFO_SIGNATURE_FIELD.default_value = ""
RANKITEMINFO_SIGNATURE_FIELD.type = 9
RANKITEMINFO_SIGNATURE_FIELD.cpp_type = 9

RANKITEMINFO_PLAYERID_FIELD.name = "playerId"
RANKITEMINFO_PLAYERID_FIELD.full_name = ".RankItemInfo.playerId"
RANKITEMINFO_PLAYERID_FIELD.number = 7
RANKITEMINFO_PLAYERID_FIELD.index = 6
RANKITEMINFO_PLAYERID_FIELD.label = 2
RANKITEMINFO_PLAYERID_FIELD.has_default_value = false
RANKITEMINFO_PLAYERID_FIELD.default_value = 0
RANKITEMINFO_PLAYERID_FIELD.type = 5
RANKITEMINFO_PLAYERID_FIELD.cpp_type = 1

RANKITEMINFO_TITLE_FIELD.name = "title"
RANKITEMINFO_TITLE_FIELD.full_name = ".RankItemInfo.title"
RANKITEMINFO_TITLE_FIELD.number = 8
RANKITEMINFO_TITLE_FIELD.index = 7
RANKITEMINFO_TITLE_FIELD.label = 2
RANKITEMINFO_TITLE_FIELD.has_default_value = false
RANKITEMINFO_TITLE_FIELD.default_value = 0
RANKITEMINFO_TITLE_FIELD.type = 5
RANKITEMINFO_TITLE_FIELD.cpp_type = 1

RANKITEMINFO_ALLIANCENAME_FIELD.name = "allianceName"
RANKITEMINFO_ALLIANCENAME_FIELD.full_name = ".RankItemInfo.allianceName"
RANKITEMINFO_ALLIANCENAME_FIELD.number = 9
RANKITEMINFO_ALLIANCENAME_FIELD.index = 8
RANKITEMINFO_ALLIANCENAME_FIELD.label = 1
RANKITEMINFO_ALLIANCENAME_FIELD.has_default_value = false
RANKITEMINFO_ALLIANCENAME_FIELD.default_value = ""
RANKITEMINFO_ALLIANCENAME_FIELD.type = 9
RANKITEMINFO_ALLIANCENAME_FIELD.cpp_type = 9

RANKITEMINFO_ALLIANCEID_FIELD.name = "allianceId"
RANKITEMINFO_ALLIANCEID_FIELD.full_name = ".RankItemInfo.allianceId"
RANKITEMINFO_ALLIANCEID_FIELD.number = 10
RANKITEMINFO_ALLIANCEID_FIELD.index = 9
RANKITEMINFO_ALLIANCEID_FIELD.label = 1
RANKITEMINFO_ALLIANCEID_FIELD.has_default_value = false
RANKITEMINFO_ALLIANCEID_FIELD.default_value = 0
RANKITEMINFO_ALLIANCEID_FIELD.type = 5
RANKITEMINFO_ALLIANCEID_FIELD.cpp_type = 1

RANKITEMINFO_ROLEITEMID_FIELD.name = "roleItemId"
RANKITEMINFO_ROLEITEMID_FIELD.full_name = ".RankItemInfo.roleItemId"
RANKITEMINFO_ROLEITEMID_FIELD.number = 11
RANKITEMINFO_ROLEITEMID_FIELD.index = 10
RANKITEMINFO_ROLEITEMID_FIELD.label = 1
RANKITEMINFO_ROLEITEMID_FIELD.has_default_value = false
RANKITEMINFO_ROLEITEMID_FIELD.default_value = 0
RANKITEMINFO_ROLEITEMID_FIELD.type = 5
RANKITEMINFO_ROLEITEMID_FIELD.cpp_type = 1

RANKITEMINFO.name = "RankItemInfo"
RANKITEMINFO.full_name = ".RankItemInfo"
RANKITEMINFO.nested_types = {}
RANKITEMINFO.enum_types = {}
RANKITEMINFO.fields = {RANKITEMINFO_CFGITEMID_FIELD, RANKITEMINFO_LEVEL_FIELD, RANKITEMINFO_NAME_FIELD, RANKITEMINFO_RANK_FIELD, RANKITEMINFO_FIGHTVALUE_FIELD, RANKITEMINFO_SIGNATURE_FIELD, RANKITEMINFO_PLAYERID_FIELD, RANKITEMINFO_TITLE_FIELD, RANKITEMINFO_ALLIANCENAME_FIELD, RANKITEMINFO_ALLIANCEID_FIELD, RANKITEMINFO_ROLEITEMID_FIELD}
RANKITEMINFO.is_extendable = false
RANKITEMINFO.extensions = {}
HPPROFRANKINGLIST_PROFTYPE_FIELD.name = "profType"
HPPROFRANKINGLIST_PROFTYPE_FIELD.full_name = ".HPProfRankingList.profType"
HPPROFRANKINGLIST_PROFTYPE_FIELD.number = 1
HPPROFRANKINGLIST_PROFTYPE_FIELD.index = 0
HPPROFRANKINGLIST_PROFTYPE_FIELD.label = 2
HPPROFRANKINGLIST_PROFTYPE_FIELD.has_default_value = false
HPPROFRANKINGLIST_PROFTYPE_FIELD.default_value = 0
HPPROFRANKINGLIST_PROFTYPE_FIELD.type = 5
HPPROFRANKINGLIST_PROFTYPE_FIELD.cpp_type = 1

HPPROFRANKINGLIST.name = "HPProfRankingList"
HPPROFRANKINGLIST.full_name = ".HPProfRankingList"
HPPROFRANKINGLIST.nested_types = {}
HPPROFRANKINGLIST.enum_types = {}
HPPROFRANKINGLIST.fields = {HPPROFRANKINGLIST_PROFTYPE_FIELD}
HPPROFRANKINGLIST.is_extendable = false
HPPROFRANKINGLIST.extensions = {}
HPPROFRANKINGLISTRET_SELFRANK_FIELD.name = "selfRank"
HPPROFRANKINGLISTRET_SELFRANK_FIELD.full_name = ".HPProfRankingListRet.selfRank"
HPPROFRANKINGLISTRET_SELFRANK_FIELD.number = 1
HPPROFRANKINGLISTRET_SELFRANK_FIELD.index = 0
HPPROFRANKINGLISTRET_SELFRANK_FIELD.label = 1
HPPROFRANKINGLISTRET_SELFRANK_FIELD.has_default_value = false
HPPROFRANKINGLISTRET_SELFRANK_FIELD.default_value = 0
HPPROFRANKINGLISTRET_SELFRANK_FIELD.type = 5
HPPROFRANKINGLISTRET_SELFRANK_FIELD.cpp_type = 1

HPPROFRANKINGLISTRET_RANKINFO_FIELD.name = "rankInfo"
HPPROFRANKINGLISTRET_RANKINFO_FIELD.full_name = ".HPProfRankingListRet.rankInfo"
HPPROFRANKINGLISTRET_RANKINFO_FIELD.number = 2
HPPROFRANKINGLISTRET_RANKINFO_FIELD.index = 1
HPPROFRANKINGLISTRET_RANKINFO_FIELD.label = 3
HPPROFRANKINGLISTRET_RANKINFO_FIELD.has_default_value = false
HPPROFRANKINGLISTRET_RANKINFO_FIELD.default_value = {}
HPPROFRANKINGLISTRET_RANKINFO_FIELD.message_type = RANKITEMINFO
HPPROFRANKINGLISTRET_RANKINFO_FIELD.type = 11
HPPROFRANKINGLISTRET_RANKINFO_FIELD.cpp_type = 10

HPPROFRANKINGLISTRET_VERSION_FIELD.name = "version"
HPPROFRANKINGLISTRET_VERSION_FIELD.full_name = ".HPProfRankingListRet.version"
HPPROFRANKINGLISTRET_VERSION_FIELD.number = 3
HPPROFRANKINGLISTRET_VERSION_FIELD.index = 2
HPPROFRANKINGLISTRET_VERSION_FIELD.label = 2
HPPROFRANKINGLISTRET_VERSION_FIELD.has_default_value = false
HPPROFRANKINGLISTRET_VERSION_FIELD.default_value = 0
HPPROFRANKINGLISTRET_VERSION_FIELD.type = 5
HPPROFRANKINGLISTRET_VERSION_FIELD.cpp_type = 1

HPPROFRANKINGLISTRET.name = "HPProfRankingListRet"
HPPROFRANKINGLISTRET.full_name = ".HPProfRankingListRet"
HPPROFRANKINGLISTRET.nested_types = {}
HPPROFRANKINGLISTRET.enum_types = {}
HPPROFRANKINGLISTRET.fields = {HPPROFRANKINGLISTRET_SELFRANK_FIELD, HPPROFRANKINGLISTRET_RANKINFO_FIELD, HPPROFRANKINGLISTRET_VERSION_FIELD}
HPPROFRANKINGLISTRET.is_extendable = false
HPPROFRANKINGLISTRET.extensions = {}

HPProfRankingList = protobuf.Message(HPPROFRANKINGLIST)
HPProfRankingListRet = protobuf.Message(HPPROFRANKINGLISTRET)
RankItemInfo = protobuf.Message(RANKITEMINFO)

