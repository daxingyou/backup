-- Generated By protoc-gen-lua Do not Edit
local protobuf = require "protobuf"
module('Item_pb')


ITEMINFO = protobuf.Descriptor();
local ITEMINFO_ID_FIELD = protobuf.FieldDescriptor();
local ITEMINFO_ITEMID_FIELD = protobuf.FieldDescriptor();
local ITEMINFO_COUNT_FIELD = protobuf.FieldDescriptor();
local ITEMINFO_STATUS_FIELD = protobuf.FieldDescriptor();
local ITEMINFO_EXP_FIELD = protobuf.FieldDescriptor();
HPITEMINFOSYNC = protobuf.Descriptor();
local HPITEMINFOSYNC_ITEMINFOS_FIELD = protobuf.FieldDescriptor();

ITEMINFO_ID_FIELD.name = "id"
ITEMINFO_ID_FIELD.full_name = ".ItemInfo.id"
ITEMINFO_ID_FIELD.number = 1
ITEMINFO_ID_FIELD.index = 0
ITEMINFO_ID_FIELD.label = 2
ITEMINFO_ID_FIELD.has_default_value = false
ITEMINFO_ID_FIELD.default_value = 0
ITEMINFO_ID_FIELD.type = 5
ITEMINFO_ID_FIELD.cpp_type = 1

ITEMINFO_ITEMID_FIELD.name = "itemId"
ITEMINFO_ITEMID_FIELD.full_name = ".ItemInfo.itemId"
ITEMINFO_ITEMID_FIELD.number = 2
ITEMINFO_ITEMID_FIELD.index = 1
ITEMINFO_ITEMID_FIELD.label = 2
ITEMINFO_ITEMID_FIELD.has_default_value = false
ITEMINFO_ITEMID_FIELD.default_value = 0
ITEMINFO_ITEMID_FIELD.type = 5
ITEMINFO_ITEMID_FIELD.cpp_type = 1

ITEMINFO_COUNT_FIELD.name = "count"
ITEMINFO_COUNT_FIELD.full_name = ".ItemInfo.count"
ITEMINFO_COUNT_FIELD.number = 3
ITEMINFO_COUNT_FIELD.index = 2
ITEMINFO_COUNT_FIELD.label = 2
ITEMINFO_COUNT_FIELD.has_default_value = false
ITEMINFO_COUNT_FIELD.default_value = 0
ITEMINFO_COUNT_FIELD.type = 5
ITEMINFO_COUNT_FIELD.cpp_type = 1

ITEMINFO_STATUS_FIELD.name = "status"
ITEMINFO_STATUS_FIELD.full_name = ".ItemInfo.status"
ITEMINFO_STATUS_FIELD.number = 4
ITEMINFO_STATUS_FIELD.index = 3
ITEMINFO_STATUS_FIELD.label = 2
ITEMINFO_STATUS_FIELD.has_default_value = false
ITEMINFO_STATUS_FIELD.default_value = 0
ITEMINFO_STATUS_FIELD.type = 5
ITEMINFO_STATUS_FIELD.cpp_type = 1

ITEMINFO_EXP_FIELD.name = "exp"
ITEMINFO_EXP_FIELD.full_name = ".ItemInfo.exp"
ITEMINFO_EXP_FIELD.number = 5
ITEMINFO_EXP_FIELD.index = 4
ITEMINFO_EXP_FIELD.label = 1
ITEMINFO_EXP_FIELD.has_default_value = false
ITEMINFO_EXP_FIELD.default_value = 0
ITEMINFO_EXP_FIELD.type = 5
ITEMINFO_EXP_FIELD.cpp_type = 1

ITEMINFO.name = "ItemInfo"
ITEMINFO.full_name = ".ItemInfo"
ITEMINFO.nested_types = {}
ITEMINFO.enum_types = {}
ITEMINFO.fields = {ITEMINFO_ID_FIELD, ITEMINFO_ITEMID_FIELD, ITEMINFO_COUNT_FIELD, ITEMINFO_STATUS_FIELD, ITEMINFO_EXP_FIELD}
ITEMINFO.is_extendable = false
ITEMINFO.extensions = {}
HPITEMINFOSYNC_ITEMINFOS_FIELD.name = "itemInfos"
HPITEMINFOSYNC_ITEMINFOS_FIELD.full_name = ".HPItemInfoSync.itemInfos"
HPITEMINFOSYNC_ITEMINFOS_FIELD.number = 1
HPITEMINFOSYNC_ITEMINFOS_FIELD.index = 0
HPITEMINFOSYNC_ITEMINFOS_FIELD.label = 3
HPITEMINFOSYNC_ITEMINFOS_FIELD.has_default_value = false
HPITEMINFOSYNC_ITEMINFOS_FIELD.default_value = {}
HPITEMINFOSYNC_ITEMINFOS_FIELD.message_type = ITEMINFO
HPITEMINFOSYNC_ITEMINFOS_FIELD.type = 11
HPITEMINFOSYNC_ITEMINFOS_FIELD.cpp_type = 10

HPITEMINFOSYNC.name = "HPItemInfoSync"
HPITEMINFOSYNC.full_name = ".HPItemInfoSync"
HPITEMINFOSYNC.nested_types = {}
HPITEMINFOSYNC.enum_types = {}
HPITEMINFOSYNC.fields = {HPITEMINFOSYNC_ITEMINFOS_FIELD}
HPITEMINFOSYNC.is_extendable = false
HPITEMINFOSYNC.extensions = {}

HPItemInfoSync = protobuf.Message(HPITEMINFOSYNC)
ItemInfo = protobuf.Message(ITEMINFO)

