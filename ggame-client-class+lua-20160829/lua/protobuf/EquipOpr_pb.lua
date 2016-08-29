-- Generated By protoc-gen-lua Do not Edit
local protobuf = require "protobuf"
local Reward_pb = require("Reward_pb")
local Equip_pb = require("Equip_pb")
local Attribute_pb = require("Attribute_pb")
module('EquipOpr_pb')


HPEQUIPDRESS = protobuf.Descriptor();
local HPEQUIPDRESS_EQUIPID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPDRESS_ROLEID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPDRESS_TYPE_FIELD = protobuf.FieldDescriptor();
HPEQUIPDRESSRET = protobuf.Descriptor();
local HPEQUIPDRESSRET_ONEQUIPID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPDRESSRET_ROLEID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPDRESSRET_OFFEQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPENHANCE = protobuf.Descriptor();
local HPEQUIPENHANCE_EQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPENHANCERET = protobuf.Descriptor();
local HPEQUIPENHANCERET_EQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPSWALLOW = protobuf.Descriptor();
local HPEQUIPSWALLOW_EQUIPID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPSWALLOW_SWALLOWEDEQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPSWALLOWRET = protobuf.Descriptor();
local HPEQUIPSWALLOWRET_EQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPEXTEND = protobuf.Descriptor();
local HPEQUIPEXTEND_EQUIPID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPEXTEND_EXTENDEDEQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPEXTENDRET = protobuf.Descriptor();
local HPEQUIPEXTENDRET_EQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPBAPTIZE = protobuf.Descriptor();
local HPEQUIPBAPTIZE_EQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPBAPTIZERET = protobuf.Descriptor();
local HPEQUIPBAPTIZERET_EQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPPUNCH = protobuf.Descriptor();
local HPEQUIPPUNCH_EQUIPID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPPUNCH_PUNCHPOS_FIELD = protobuf.FieldDescriptor();
HPEQUIPPUNCHRET = protobuf.Descriptor();
local HPEQUIPPUNCHRET_EQUIPID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPPUNCHRET_PUNCHPOS_FIELD = protobuf.FieldDescriptor();
HPEQUIPSTONEDRESS = protobuf.Descriptor();
local HPEQUIPSTONEDRESS_EQUIPID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPSTONEDRESS_PUNCHPOS_FIELD = protobuf.FieldDescriptor();
local HPEQUIPSTONEDRESS_STONEID_FIELD = protobuf.FieldDescriptor();
HPEQUIPSTONEDRESSRET = protobuf.Descriptor();
local HPEQUIPSTONEDRESSRET_EQUIPID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPSTONEDRESSRET_STONEID_FIELD = protobuf.FieldDescriptor();
HPEQUIPSTONEUNDRESS = protobuf.Descriptor();
local HPEQUIPSTONEUNDRESS_EQUIPID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPSTONEUNDRESS_POS_FIELD = protobuf.FieldDescriptor();
HPEQUIPSTONEUNDRESSRET = protobuf.Descriptor();
local HPEQUIPSTONEUNDRESSRET_EQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPSMELTINFO = protobuf.Descriptor();
local HPEQUIPSMELTINFO_VERSION_FIELD = protobuf.FieldDescriptor();
HPEQUIPSMELTINFORET = protobuf.Descriptor();
local HPEQUIPSMELTINFORET_EQUIPINFO_FIELD = protobuf.FieldDescriptor();
local HPEQUIPSMELTINFORET_ITEMINFO_FIELD = protobuf.FieldDescriptor();
local HPEQUIPSMELTINFORET_FREEREFRESHTIMES_FIELD = protobuf.FieldDescriptor();
HPEQUIPSMELT = protobuf.Descriptor();
local HPEQUIPSMELT_EQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPSMELTRET = protobuf.Descriptor();
local HPEQUIPSMELTRET_GEMUNDRESS_FIELD = protobuf.FieldDescriptor();
HPEQUIPCREATEAVAILABLEREFRESH = protobuf.Descriptor();
local HPEQUIPCREATEAVAILABLEREFRESH_VERSION_FIELD = protobuf.FieldDescriptor();
HPEQUIPCREATE = protobuf.Descriptor();
local HPEQUIPCREATE_VERSION_FIELD = protobuf.FieldDescriptor();
HPEQUIPCREATERET = protobuf.Descriptor();
local HPEQUIPCREATERET_REWARDS_FIELD = protobuf.FieldDescriptor();
HPEQUIPSELL = protobuf.Descriptor();
local HPEQUIPSELL_EQUIPID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPSELL_QUALITY_FIELD = protobuf.FieldDescriptor();
HPEQUIPSELLRET = protobuf.Descriptor();
local HPEQUIPSELLRET_REWARDS_FIELD = protobuf.FieldDescriptor();
HPEQUIPBAGEXTEND = protobuf.Descriptor();
local HPEQUIPBAGEXTEND_VERSION_FIELD = protobuf.FieldDescriptor();
HPEQUIPBAGEXTENDRET = protobuf.Descriptor();
local HPEQUIPBAGEXTENDRET_VERSION_FIELD = protobuf.FieldDescriptor();
HPEQUIPLOCK = protobuf.Descriptor();
local HPEQUIPLOCK_EQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPLOCKRET = protobuf.Descriptor();
local HPEQUIPLOCKRET_EQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPSPECIALCREATE = protobuf.Descriptor();
local HPEQUIPSPECIALCREATE_CFGID_FIELD = protobuf.FieldDescriptor();
HPEQUIPSPECIALCREATERET = protobuf.Descriptor();
local HPEQUIPSPECIALCREATERET_CFGID_FIELD = protobuf.FieldDescriptor();
HPEQUIPCOMPOUND = protobuf.Descriptor();
local HPEQUIPCOMPOUND_FROMEQUIPID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPCOMPOUND_TOEQUIPID_FIELD = protobuf.FieldDescriptor();
HPEQUIPCOMPOUNDRET = protobuf.Descriptor();
local HPEQUIPCOMPOUNDRET_FROMEQUIPID_FIELD = protobuf.FieldDescriptor();
local HPEQUIPCOMPOUNDRET_TOEQUIPID_FIELD = protobuf.FieldDescriptor();

HPEQUIPDRESS_EQUIPID_FIELD.name = "equipId"
HPEQUIPDRESS_EQUIPID_FIELD.full_name = ".HPEquipDress.equipId"
HPEQUIPDRESS_EQUIPID_FIELD.number = 1
HPEQUIPDRESS_EQUIPID_FIELD.index = 0
HPEQUIPDRESS_EQUIPID_FIELD.label = 2
HPEQUIPDRESS_EQUIPID_FIELD.has_default_value = false
HPEQUIPDRESS_EQUIPID_FIELD.default_value = 0
HPEQUIPDRESS_EQUIPID_FIELD.type = 3
HPEQUIPDRESS_EQUIPID_FIELD.cpp_type = 2

HPEQUIPDRESS_ROLEID_FIELD.name = "roleId"
HPEQUIPDRESS_ROLEID_FIELD.full_name = ".HPEquipDress.roleId"
HPEQUIPDRESS_ROLEID_FIELD.number = 2
HPEQUIPDRESS_ROLEID_FIELD.index = 1
HPEQUIPDRESS_ROLEID_FIELD.label = 2
HPEQUIPDRESS_ROLEID_FIELD.has_default_value = false
HPEQUIPDRESS_ROLEID_FIELD.default_value = 0
HPEQUIPDRESS_ROLEID_FIELD.type = 5
HPEQUIPDRESS_ROLEID_FIELD.cpp_type = 1

HPEQUIPDRESS_TYPE_FIELD.name = "type"
HPEQUIPDRESS_TYPE_FIELD.full_name = ".HPEquipDress.type"
HPEQUIPDRESS_TYPE_FIELD.number = 3
HPEQUIPDRESS_TYPE_FIELD.index = 2
HPEQUIPDRESS_TYPE_FIELD.label = 2
HPEQUIPDRESS_TYPE_FIELD.has_default_value = false
HPEQUIPDRESS_TYPE_FIELD.default_value = 0
HPEQUIPDRESS_TYPE_FIELD.type = 5
HPEQUIPDRESS_TYPE_FIELD.cpp_type = 1

HPEQUIPDRESS.name = "HPEquipDress"
HPEQUIPDRESS.full_name = ".HPEquipDress"
HPEQUIPDRESS.nested_types = {}
HPEQUIPDRESS.enum_types = {}
HPEQUIPDRESS.fields = {HPEQUIPDRESS_EQUIPID_FIELD, HPEQUIPDRESS_ROLEID_FIELD, HPEQUIPDRESS_TYPE_FIELD}
HPEQUIPDRESS.is_extendable = false
HPEQUIPDRESS.extensions = {}
HPEQUIPDRESSRET_ONEQUIPID_FIELD.name = "onEquipId"
HPEQUIPDRESSRET_ONEQUIPID_FIELD.full_name = ".HPEquipDressRet.onEquipId"
HPEQUIPDRESSRET_ONEQUIPID_FIELD.number = 1
HPEQUIPDRESSRET_ONEQUIPID_FIELD.index = 0
HPEQUIPDRESSRET_ONEQUIPID_FIELD.label = 1
HPEQUIPDRESSRET_ONEQUIPID_FIELD.has_default_value = false
HPEQUIPDRESSRET_ONEQUIPID_FIELD.default_value = 0
HPEQUIPDRESSRET_ONEQUIPID_FIELD.type = 3
HPEQUIPDRESSRET_ONEQUIPID_FIELD.cpp_type = 2

HPEQUIPDRESSRET_ROLEID_FIELD.name = "roleId"
HPEQUIPDRESSRET_ROLEID_FIELD.full_name = ".HPEquipDressRet.roleId"
HPEQUIPDRESSRET_ROLEID_FIELD.number = 2
HPEQUIPDRESSRET_ROLEID_FIELD.index = 1
HPEQUIPDRESSRET_ROLEID_FIELD.label = 2
HPEQUIPDRESSRET_ROLEID_FIELD.has_default_value = false
HPEQUIPDRESSRET_ROLEID_FIELD.default_value = 0
HPEQUIPDRESSRET_ROLEID_FIELD.type = 5
HPEQUIPDRESSRET_ROLEID_FIELD.cpp_type = 1

HPEQUIPDRESSRET_OFFEQUIPID_FIELD.name = "offEquipId"
HPEQUIPDRESSRET_OFFEQUIPID_FIELD.full_name = ".HPEquipDressRet.offEquipId"
HPEQUIPDRESSRET_OFFEQUIPID_FIELD.number = 3
HPEQUIPDRESSRET_OFFEQUIPID_FIELD.index = 2
HPEQUIPDRESSRET_OFFEQUIPID_FIELD.label = 1
HPEQUIPDRESSRET_OFFEQUIPID_FIELD.has_default_value = false
HPEQUIPDRESSRET_OFFEQUIPID_FIELD.default_value = 0
HPEQUIPDRESSRET_OFFEQUIPID_FIELD.type = 3
HPEQUIPDRESSRET_OFFEQUIPID_FIELD.cpp_type = 2

HPEQUIPDRESSRET.name = "HPEquipDressRet"
HPEQUIPDRESSRET.full_name = ".HPEquipDressRet"
HPEQUIPDRESSRET.nested_types = {}
HPEQUIPDRESSRET.enum_types = {}
HPEQUIPDRESSRET.fields = {HPEQUIPDRESSRET_ONEQUIPID_FIELD, HPEQUIPDRESSRET_ROLEID_FIELD, HPEQUIPDRESSRET_OFFEQUIPID_FIELD}
HPEQUIPDRESSRET.is_extendable = false
HPEQUIPDRESSRET.extensions = {}
HPEQUIPENHANCE_EQUIPID_FIELD.name = "equipId"
HPEQUIPENHANCE_EQUIPID_FIELD.full_name = ".HPEquipEnhance.equipId"
HPEQUIPENHANCE_EQUIPID_FIELD.number = 1
HPEQUIPENHANCE_EQUIPID_FIELD.index = 0
HPEQUIPENHANCE_EQUIPID_FIELD.label = 2
HPEQUIPENHANCE_EQUIPID_FIELD.has_default_value = false
HPEQUIPENHANCE_EQUIPID_FIELD.default_value = 0
HPEQUIPENHANCE_EQUIPID_FIELD.type = 3
HPEQUIPENHANCE_EQUIPID_FIELD.cpp_type = 2

HPEQUIPENHANCE.name = "HPEquipEnhance"
HPEQUIPENHANCE.full_name = ".HPEquipEnhance"
HPEQUIPENHANCE.nested_types = {}
HPEQUIPENHANCE.enum_types = {}
HPEQUIPENHANCE.fields = {HPEQUIPENHANCE_EQUIPID_FIELD}
HPEQUIPENHANCE.is_extendable = false
HPEQUIPENHANCE.extensions = {}
HPEQUIPENHANCERET_EQUIPID_FIELD.name = "equipId"
HPEQUIPENHANCERET_EQUIPID_FIELD.full_name = ".HPEquipEnhanceRet.equipId"
HPEQUIPENHANCERET_EQUIPID_FIELD.number = 1
HPEQUIPENHANCERET_EQUIPID_FIELD.index = 0
HPEQUIPENHANCERET_EQUIPID_FIELD.label = 2
HPEQUIPENHANCERET_EQUIPID_FIELD.has_default_value = false
HPEQUIPENHANCERET_EQUIPID_FIELD.default_value = 0
HPEQUIPENHANCERET_EQUIPID_FIELD.type = 3
HPEQUIPENHANCERET_EQUIPID_FIELD.cpp_type = 2

HPEQUIPENHANCERET.name = "HPEquipEnhanceRet"
HPEQUIPENHANCERET.full_name = ".HPEquipEnhanceRet"
HPEQUIPENHANCERET.nested_types = {}
HPEQUIPENHANCERET.enum_types = {}
HPEQUIPENHANCERET.fields = {HPEQUIPENHANCERET_EQUIPID_FIELD}
HPEQUIPENHANCERET.is_extendable = false
HPEQUIPENHANCERET.extensions = {}
HPEQUIPSWALLOW_EQUIPID_FIELD.name = "equipId"
HPEQUIPSWALLOW_EQUIPID_FIELD.full_name = ".HPEquipSwallow.equipId"
HPEQUIPSWALLOW_EQUIPID_FIELD.number = 1
HPEQUIPSWALLOW_EQUIPID_FIELD.index = 0
HPEQUIPSWALLOW_EQUIPID_FIELD.label = 2
HPEQUIPSWALLOW_EQUIPID_FIELD.has_default_value = false
HPEQUIPSWALLOW_EQUIPID_FIELD.default_value = 0
HPEQUIPSWALLOW_EQUIPID_FIELD.type = 3
HPEQUIPSWALLOW_EQUIPID_FIELD.cpp_type = 2

HPEQUIPSWALLOW_SWALLOWEDEQUIPID_FIELD.name = "swallowedEquipId"
HPEQUIPSWALLOW_SWALLOWEDEQUIPID_FIELD.full_name = ".HPEquipSwallow.swallowedEquipId"
HPEQUIPSWALLOW_SWALLOWEDEQUIPID_FIELD.number = 2
HPEQUIPSWALLOW_SWALLOWEDEQUIPID_FIELD.index = 1
HPEQUIPSWALLOW_SWALLOWEDEQUIPID_FIELD.label = 3
HPEQUIPSWALLOW_SWALLOWEDEQUIPID_FIELD.has_default_value = false
HPEQUIPSWALLOW_SWALLOWEDEQUIPID_FIELD.default_value = {}
HPEQUIPSWALLOW_SWALLOWEDEQUIPID_FIELD.type = 3
HPEQUIPSWALLOW_SWALLOWEDEQUIPID_FIELD.cpp_type = 2

HPEQUIPSWALLOW.name = "HPEquipSwallow"
HPEQUIPSWALLOW.full_name = ".HPEquipSwallow"
HPEQUIPSWALLOW.nested_types = {}
HPEQUIPSWALLOW.enum_types = {}
HPEQUIPSWALLOW.fields = {HPEQUIPSWALLOW_EQUIPID_FIELD, HPEQUIPSWALLOW_SWALLOWEDEQUIPID_FIELD}
HPEQUIPSWALLOW.is_extendable = false
HPEQUIPSWALLOW.extensions = {}
HPEQUIPSWALLOWRET_EQUIPID_FIELD.name = "equipId"
HPEQUIPSWALLOWRET_EQUIPID_FIELD.full_name = ".HPEquipSwallowRet.equipId"
HPEQUIPSWALLOWRET_EQUIPID_FIELD.number = 1
HPEQUIPSWALLOWRET_EQUIPID_FIELD.index = 0
HPEQUIPSWALLOWRET_EQUIPID_FIELD.label = 2
HPEQUIPSWALLOWRET_EQUIPID_FIELD.has_default_value = false
HPEQUIPSWALLOWRET_EQUIPID_FIELD.default_value = 0
HPEQUIPSWALLOWRET_EQUIPID_FIELD.type = 3
HPEQUIPSWALLOWRET_EQUIPID_FIELD.cpp_type = 2

HPEQUIPSWALLOWRET.name = "HPEquipSwallowRet"
HPEQUIPSWALLOWRET.full_name = ".HPEquipSwallowRet"
HPEQUIPSWALLOWRET.nested_types = {}
HPEQUIPSWALLOWRET.enum_types = {}
HPEQUIPSWALLOWRET.fields = {HPEQUIPSWALLOWRET_EQUIPID_FIELD}
HPEQUIPSWALLOWRET.is_extendable = false
HPEQUIPSWALLOWRET.extensions = {}
HPEQUIPEXTEND_EQUIPID_FIELD.name = "equipId"
HPEQUIPEXTEND_EQUIPID_FIELD.full_name = ".HPEquipExtend.equipId"
HPEQUIPEXTEND_EQUIPID_FIELD.number = 1
HPEQUIPEXTEND_EQUIPID_FIELD.index = 0
HPEQUIPEXTEND_EQUIPID_FIELD.label = 2
HPEQUIPEXTEND_EQUIPID_FIELD.has_default_value = false
HPEQUIPEXTEND_EQUIPID_FIELD.default_value = 0
HPEQUIPEXTEND_EQUIPID_FIELD.type = 3
HPEQUIPEXTEND_EQUIPID_FIELD.cpp_type = 2

HPEQUIPEXTEND_EXTENDEDEQUIPID_FIELD.name = "extendedEquipId"
HPEQUIPEXTEND_EXTENDEDEQUIPID_FIELD.full_name = ".HPEquipExtend.extendedEquipId"
HPEQUIPEXTEND_EXTENDEDEQUIPID_FIELD.number = 2
HPEQUIPEXTEND_EXTENDEDEQUIPID_FIELD.index = 1
HPEQUIPEXTEND_EXTENDEDEQUIPID_FIELD.label = 2
HPEQUIPEXTEND_EXTENDEDEQUIPID_FIELD.has_default_value = false
HPEQUIPEXTEND_EXTENDEDEQUIPID_FIELD.default_value = 0
HPEQUIPEXTEND_EXTENDEDEQUIPID_FIELD.type = 3
HPEQUIPEXTEND_EXTENDEDEQUIPID_FIELD.cpp_type = 2

HPEQUIPEXTEND.name = "HPEquipExtend"
HPEQUIPEXTEND.full_name = ".HPEquipExtend"
HPEQUIPEXTEND.nested_types = {}
HPEQUIPEXTEND.enum_types = {}
HPEQUIPEXTEND.fields = {HPEQUIPEXTEND_EQUIPID_FIELD, HPEQUIPEXTEND_EXTENDEDEQUIPID_FIELD}
HPEQUIPEXTEND.is_extendable = false
HPEQUIPEXTEND.extensions = {}
HPEQUIPEXTENDRET_EQUIPID_FIELD.name = "equipId"
HPEQUIPEXTENDRET_EQUIPID_FIELD.full_name = ".HPEquipExtendRet.equipId"
HPEQUIPEXTENDRET_EQUIPID_FIELD.number = 1
HPEQUIPEXTENDRET_EQUIPID_FIELD.index = 0
HPEQUIPEXTENDRET_EQUIPID_FIELD.label = 2
HPEQUIPEXTENDRET_EQUIPID_FIELD.has_default_value = false
HPEQUIPEXTENDRET_EQUIPID_FIELD.default_value = 0
HPEQUIPEXTENDRET_EQUIPID_FIELD.type = 3
HPEQUIPEXTENDRET_EQUIPID_FIELD.cpp_type = 2

HPEQUIPEXTENDRET.name = "HPEquipExtendRet"
HPEQUIPEXTENDRET.full_name = ".HPEquipExtendRet"
HPEQUIPEXTENDRET.nested_types = {}
HPEQUIPEXTENDRET.enum_types = {}
HPEQUIPEXTENDRET.fields = {HPEQUIPEXTENDRET_EQUIPID_FIELD}
HPEQUIPEXTENDRET.is_extendable = false
HPEQUIPEXTENDRET.extensions = {}
HPEQUIPBAPTIZE_EQUIPID_FIELD.name = "equipId"
HPEQUIPBAPTIZE_EQUIPID_FIELD.full_name = ".HPEquipBaptize.equipId"
HPEQUIPBAPTIZE_EQUIPID_FIELD.number = 1
HPEQUIPBAPTIZE_EQUIPID_FIELD.index = 0
HPEQUIPBAPTIZE_EQUIPID_FIELD.label = 2
HPEQUIPBAPTIZE_EQUIPID_FIELD.has_default_value = false
HPEQUIPBAPTIZE_EQUIPID_FIELD.default_value = 0
HPEQUIPBAPTIZE_EQUIPID_FIELD.type = 3
HPEQUIPBAPTIZE_EQUIPID_FIELD.cpp_type = 2

HPEQUIPBAPTIZE.name = "HPEquipBaptize"
HPEQUIPBAPTIZE.full_name = ".HPEquipBaptize"
HPEQUIPBAPTIZE.nested_types = {}
HPEQUIPBAPTIZE.enum_types = {}
HPEQUIPBAPTIZE.fields = {HPEQUIPBAPTIZE_EQUIPID_FIELD}
HPEQUIPBAPTIZE.is_extendable = false
HPEQUIPBAPTIZE.extensions = {}
HPEQUIPBAPTIZERET_EQUIPID_FIELD.name = "equipId"
HPEQUIPBAPTIZERET_EQUIPID_FIELD.full_name = ".HPEquipBaptizeRet.equipId"
HPEQUIPBAPTIZERET_EQUIPID_FIELD.number = 1
HPEQUIPBAPTIZERET_EQUIPID_FIELD.index = 0
HPEQUIPBAPTIZERET_EQUIPID_FIELD.label = 2
HPEQUIPBAPTIZERET_EQUIPID_FIELD.has_default_value = false
HPEQUIPBAPTIZERET_EQUIPID_FIELD.default_value = 0
HPEQUIPBAPTIZERET_EQUIPID_FIELD.type = 3
HPEQUIPBAPTIZERET_EQUIPID_FIELD.cpp_type = 2

HPEQUIPBAPTIZERET.name = "HPEquipBaptizeRet"
HPEQUIPBAPTIZERET.full_name = ".HPEquipBaptizeRet"
HPEQUIPBAPTIZERET.nested_types = {}
HPEQUIPBAPTIZERET.enum_types = {}
HPEQUIPBAPTIZERET.fields = {HPEQUIPBAPTIZERET_EQUIPID_FIELD}
HPEQUIPBAPTIZERET.is_extendable = false
HPEQUIPBAPTIZERET.extensions = {}
HPEQUIPPUNCH_EQUIPID_FIELD.name = "equipId"
HPEQUIPPUNCH_EQUIPID_FIELD.full_name = ".HPEquipPunch.equipId"
HPEQUIPPUNCH_EQUIPID_FIELD.number = 1
HPEQUIPPUNCH_EQUIPID_FIELD.index = 0
HPEQUIPPUNCH_EQUIPID_FIELD.label = 2
HPEQUIPPUNCH_EQUIPID_FIELD.has_default_value = false
HPEQUIPPUNCH_EQUIPID_FIELD.default_value = 0
HPEQUIPPUNCH_EQUIPID_FIELD.type = 3
HPEQUIPPUNCH_EQUIPID_FIELD.cpp_type = 2

HPEQUIPPUNCH_PUNCHPOS_FIELD.name = "punchPos"
HPEQUIPPUNCH_PUNCHPOS_FIELD.full_name = ".HPEquipPunch.punchPos"
HPEQUIPPUNCH_PUNCHPOS_FIELD.number = 2
HPEQUIPPUNCH_PUNCHPOS_FIELD.index = 1
HPEQUIPPUNCH_PUNCHPOS_FIELD.label = 2
HPEQUIPPUNCH_PUNCHPOS_FIELD.has_default_value = false
HPEQUIPPUNCH_PUNCHPOS_FIELD.default_value = 0
HPEQUIPPUNCH_PUNCHPOS_FIELD.type = 5
HPEQUIPPUNCH_PUNCHPOS_FIELD.cpp_type = 1

HPEQUIPPUNCH.name = "HPEquipPunch"
HPEQUIPPUNCH.full_name = ".HPEquipPunch"
HPEQUIPPUNCH.nested_types = {}
HPEQUIPPUNCH.enum_types = {}
HPEQUIPPUNCH.fields = {HPEQUIPPUNCH_EQUIPID_FIELD, HPEQUIPPUNCH_PUNCHPOS_FIELD}
HPEQUIPPUNCH.is_extendable = false
HPEQUIPPUNCH.extensions = {}
HPEQUIPPUNCHRET_EQUIPID_FIELD.name = "equipId"
HPEQUIPPUNCHRET_EQUIPID_FIELD.full_name = ".HPEquipPunchRet.equipId"
HPEQUIPPUNCHRET_EQUIPID_FIELD.number = 1
HPEQUIPPUNCHRET_EQUIPID_FIELD.index = 0
HPEQUIPPUNCHRET_EQUIPID_FIELD.label = 2
HPEQUIPPUNCHRET_EQUIPID_FIELD.has_default_value = false
HPEQUIPPUNCHRET_EQUIPID_FIELD.default_value = 0
HPEQUIPPUNCHRET_EQUIPID_FIELD.type = 3
HPEQUIPPUNCHRET_EQUIPID_FIELD.cpp_type = 2

HPEQUIPPUNCHRET_PUNCHPOS_FIELD.name = "punchPos"
HPEQUIPPUNCHRET_PUNCHPOS_FIELD.full_name = ".HPEquipPunchRet.punchPos"
HPEQUIPPUNCHRET_PUNCHPOS_FIELD.number = 2
HPEQUIPPUNCHRET_PUNCHPOS_FIELD.index = 1
HPEQUIPPUNCHRET_PUNCHPOS_FIELD.label = 2
HPEQUIPPUNCHRET_PUNCHPOS_FIELD.has_default_value = false
HPEQUIPPUNCHRET_PUNCHPOS_FIELD.default_value = 0
HPEQUIPPUNCHRET_PUNCHPOS_FIELD.type = 5
HPEQUIPPUNCHRET_PUNCHPOS_FIELD.cpp_type = 1

HPEQUIPPUNCHRET.name = "HPEquipPunchRet"
HPEQUIPPUNCHRET.full_name = ".HPEquipPunchRet"
HPEQUIPPUNCHRET.nested_types = {}
HPEQUIPPUNCHRET.enum_types = {}
HPEQUIPPUNCHRET.fields = {HPEQUIPPUNCHRET_EQUIPID_FIELD, HPEQUIPPUNCHRET_PUNCHPOS_FIELD}
HPEQUIPPUNCHRET.is_extendable = false
HPEQUIPPUNCHRET.extensions = {}
HPEQUIPSTONEDRESS_EQUIPID_FIELD.name = "equipId"
HPEQUIPSTONEDRESS_EQUIPID_FIELD.full_name = ".HPEquipStoneDress.equipId"
HPEQUIPSTONEDRESS_EQUIPID_FIELD.number = 1
HPEQUIPSTONEDRESS_EQUIPID_FIELD.index = 0
HPEQUIPSTONEDRESS_EQUIPID_FIELD.label = 2
HPEQUIPSTONEDRESS_EQUIPID_FIELD.has_default_value = false
HPEQUIPSTONEDRESS_EQUIPID_FIELD.default_value = 0
HPEQUIPSTONEDRESS_EQUIPID_FIELD.type = 3
HPEQUIPSTONEDRESS_EQUIPID_FIELD.cpp_type = 2

HPEQUIPSTONEDRESS_PUNCHPOS_FIELD.name = "punchPos"
HPEQUIPSTONEDRESS_PUNCHPOS_FIELD.full_name = ".HPEquipStoneDress.punchPos"
HPEQUIPSTONEDRESS_PUNCHPOS_FIELD.number = 2
HPEQUIPSTONEDRESS_PUNCHPOS_FIELD.index = 1
HPEQUIPSTONEDRESS_PUNCHPOS_FIELD.label = 2
HPEQUIPSTONEDRESS_PUNCHPOS_FIELD.has_default_value = false
HPEQUIPSTONEDRESS_PUNCHPOS_FIELD.default_value = 0
HPEQUIPSTONEDRESS_PUNCHPOS_FIELD.type = 5
HPEQUIPSTONEDRESS_PUNCHPOS_FIELD.cpp_type = 1

HPEQUIPSTONEDRESS_STONEID_FIELD.name = "stoneId"
HPEQUIPSTONEDRESS_STONEID_FIELD.full_name = ".HPEquipStoneDress.stoneId"
HPEQUIPSTONEDRESS_STONEID_FIELD.number = 3
HPEQUIPSTONEDRESS_STONEID_FIELD.index = 2
HPEQUIPSTONEDRESS_STONEID_FIELD.label = 2
HPEQUIPSTONEDRESS_STONEID_FIELD.has_default_value = false
HPEQUIPSTONEDRESS_STONEID_FIELD.default_value = 0
HPEQUIPSTONEDRESS_STONEID_FIELD.type = 5
HPEQUIPSTONEDRESS_STONEID_FIELD.cpp_type = 1

HPEQUIPSTONEDRESS.name = "HPEquipStoneDress"
HPEQUIPSTONEDRESS.full_name = ".HPEquipStoneDress"
HPEQUIPSTONEDRESS.nested_types = {}
HPEQUIPSTONEDRESS.enum_types = {}
HPEQUIPSTONEDRESS.fields = {HPEQUIPSTONEDRESS_EQUIPID_FIELD, HPEQUIPSTONEDRESS_PUNCHPOS_FIELD, HPEQUIPSTONEDRESS_STONEID_FIELD}
HPEQUIPSTONEDRESS.is_extendable = false
HPEQUIPSTONEDRESS.extensions = {}
HPEQUIPSTONEDRESSRET_EQUIPID_FIELD.name = "equipId"
HPEQUIPSTONEDRESSRET_EQUIPID_FIELD.full_name = ".HPEquipStoneDressRet.equipId"
HPEQUIPSTONEDRESSRET_EQUIPID_FIELD.number = 1
HPEQUIPSTONEDRESSRET_EQUIPID_FIELD.index = 0
HPEQUIPSTONEDRESSRET_EQUIPID_FIELD.label = 2
HPEQUIPSTONEDRESSRET_EQUIPID_FIELD.has_default_value = false
HPEQUIPSTONEDRESSRET_EQUIPID_FIELD.default_value = 0
HPEQUIPSTONEDRESSRET_EQUIPID_FIELD.type = 3
HPEQUIPSTONEDRESSRET_EQUIPID_FIELD.cpp_type = 2

HPEQUIPSTONEDRESSRET_STONEID_FIELD.name = "stoneId"
HPEQUIPSTONEDRESSRET_STONEID_FIELD.full_name = ".HPEquipStoneDressRet.stoneId"
HPEQUIPSTONEDRESSRET_STONEID_FIELD.number = 3
HPEQUIPSTONEDRESSRET_STONEID_FIELD.index = 1
HPEQUIPSTONEDRESSRET_STONEID_FIELD.label = 2
HPEQUIPSTONEDRESSRET_STONEID_FIELD.has_default_value = false
HPEQUIPSTONEDRESSRET_STONEID_FIELD.default_value = 0
HPEQUIPSTONEDRESSRET_STONEID_FIELD.type = 5
HPEQUIPSTONEDRESSRET_STONEID_FIELD.cpp_type = 1

HPEQUIPSTONEDRESSRET.name = "HPEquipStoneDressRet"
HPEQUIPSTONEDRESSRET.full_name = ".HPEquipStoneDressRet"
HPEQUIPSTONEDRESSRET.nested_types = {}
HPEQUIPSTONEDRESSRET.enum_types = {}
HPEQUIPSTONEDRESSRET.fields = {HPEQUIPSTONEDRESSRET_EQUIPID_FIELD, HPEQUIPSTONEDRESSRET_STONEID_FIELD}
HPEQUIPSTONEDRESSRET.is_extendable = false
HPEQUIPSTONEDRESSRET.extensions = {}
HPEQUIPSTONEUNDRESS_EQUIPID_FIELD.name = "equipId"
HPEQUIPSTONEUNDRESS_EQUIPID_FIELD.full_name = ".HPEquipStoneUndress.equipId"
HPEQUIPSTONEUNDRESS_EQUIPID_FIELD.number = 1
HPEQUIPSTONEUNDRESS_EQUIPID_FIELD.index = 0
HPEQUIPSTONEUNDRESS_EQUIPID_FIELD.label = 2
HPEQUIPSTONEUNDRESS_EQUIPID_FIELD.has_default_value = false
HPEQUIPSTONEUNDRESS_EQUIPID_FIELD.default_value = 0
HPEQUIPSTONEUNDRESS_EQUIPID_FIELD.type = 3
HPEQUIPSTONEUNDRESS_EQUIPID_FIELD.cpp_type = 2

HPEQUIPSTONEUNDRESS_POS_FIELD.name = "pos"
HPEQUIPSTONEUNDRESS_POS_FIELD.full_name = ".HPEquipStoneUndress.pos"
HPEQUIPSTONEUNDRESS_POS_FIELD.number = 2
HPEQUIPSTONEUNDRESS_POS_FIELD.index = 1
HPEQUIPSTONEUNDRESS_POS_FIELD.label = 2
HPEQUIPSTONEUNDRESS_POS_FIELD.has_default_value = false
HPEQUIPSTONEUNDRESS_POS_FIELD.default_value = 0
HPEQUIPSTONEUNDRESS_POS_FIELD.type = 5
HPEQUIPSTONEUNDRESS_POS_FIELD.cpp_type = 1

HPEQUIPSTONEUNDRESS.name = "HPEquipStoneUndress"
HPEQUIPSTONEUNDRESS.full_name = ".HPEquipStoneUndress"
HPEQUIPSTONEUNDRESS.nested_types = {}
HPEQUIPSTONEUNDRESS.enum_types = {}
HPEQUIPSTONEUNDRESS.fields = {HPEQUIPSTONEUNDRESS_EQUIPID_FIELD, HPEQUIPSTONEUNDRESS_POS_FIELD}
HPEQUIPSTONEUNDRESS.is_extendable = false
HPEQUIPSTONEUNDRESS.extensions = {}
HPEQUIPSTONEUNDRESSRET_EQUIPID_FIELD.name = "equipId"
HPEQUIPSTONEUNDRESSRET_EQUIPID_FIELD.full_name = ".HPEquipStoneUndressRet.equipId"
HPEQUIPSTONEUNDRESSRET_EQUIPID_FIELD.number = 1
HPEQUIPSTONEUNDRESSRET_EQUIPID_FIELD.index = 0
HPEQUIPSTONEUNDRESSRET_EQUIPID_FIELD.label = 2
HPEQUIPSTONEUNDRESSRET_EQUIPID_FIELD.has_default_value = false
HPEQUIPSTONEUNDRESSRET_EQUIPID_FIELD.default_value = 0
HPEQUIPSTONEUNDRESSRET_EQUIPID_FIELD.type = 3
HPEQUIPSTONEUNDRESSRET_EQUIPID_FIELD.cpp_type = 2

HPEQUIPSTONEUNDRESSRET.name = "HPEquipStoneUndressRet"
HPEQUIPSTONEUNDRESSRET.full_name = ".HPEquipStoneUndressRet"
HPEQUIPSTONEUNDRESSRET.nested_types = {}
HPEQUIPSTONEUNDRESSRET.enum_types = {}
HPEQUIPSTONEUNDRESSRET.fields = {HPEQUIPSTONEUNDRESSRET_EQUIPID_FIELD}
HPEQUIPSTONEUNDRESSRET.is_extendable = false
HPEQUIPSTONEUNDRESSRET.extensions = {}
HPEQUIPSMELTINFO_VERSION_FIELD.name = "version"
HPEQUIPSMELTINFO_VERSION_FIELD.full_name = ".HPEquipSmeltInfo.version"
HPEQUIPSMELTINFO_VERSION_FIELD.number = 1
HPEQUIPSMELTINFO_VERSION_FIELD.index = 0
HPEQUIPSMELTINFO_VERSION_FIELD.label = 1
HPEQUIPSMELTINFO_VERSION_FIELD.has_default_value = true
HPEQUIPSMELTINFO_VERSION_FIELD.default_value = 1
HPEQUIPSMELTINFO_VERSION_FIELD.type = 5
HPEQUIPSMELTINFO_VERSION_FIELD.cpp_type = 1

HPEQUIPSMELTINFO.name = "HPEquipSmeltInfo"
HPEQUIPSMELTINFO.full_name = ".HPEquipSmeltInfo"
HPEQUIPSMELTINFO.nested_types = {}
HPEQUIPSMELTINFO.enum_types = {}
HPEQUIPSMELTINFO.fields = {HPEQUIPSMELTINFO_VERSION_FIELD}
HPEQUIPSMELTINFO.is_extendable = false
HPEQUIPSMELTINFO.extensions = {}
HPEQUIPSMELTINFORET_EQUIPINFO_FIELD.name = "equipInfo"
HPEQUIPSMELTINFORET_EQUIPINFO_FIELD.full_name = ".HPEquipSmeltInfoRet.equipInfo"
HPEQUIPSMELTINFORET_EQUIPINFO_FIELD.number = 1
HPEQUIPSMELTINFORET_EQUIPINFO_FIELD.index = 0
HPEQUIPSMELTINFORET_EQUIPINFO_FIELD.label = 1
HPEQUIPSMELTINFORET_EQUIPINFO_FIELD.has_default_value = false
HPEQUIPSMELTINFORET_EQUIPINFO_FIELD.default_value = nil
HPEQUIPSMELTINFORET_EQUIPINFO_FIELD.message_type = Equip_pb.EQUIPINFO
HPEQUIPSMELTINFORET_EQUIPINFO_FIELD.type = 11
HPEQUIPSMELTINFORET_EQUIPINFO_FIELD.cpp_type = 10

HPEQUIPSMELTINFORET_ITEMINFO_FIELD.name = "itemInfo"
HPEQUIPSMELTINFORET_ITEMINFO_FIELD.full_name = ".HPEquipSmeltInfoRet.itemInfo"
HPEQUIPSMELTINFORET_ITEMINFO_FIELD.number = 2
HPEQUIPSMELTINFORET_ITEMINFO_FIELD.index = 1
HPEQUIPSMELTINFORET_ITEMINFO_FIELD.label = 1
HPEQUIPSMELTINFORET_ITEMINFO_FIELD.has_default_value = false
HPEQUIPSMELTINFORET_ITEMINFO_FIELD.default_value = nil
HPEQUIPSMELTINFORET_ITEMINFO_FIELD.message_type = Reward_pb.REWARDITEM
HPEQUIPSMELTINFORET_ITEMINFO_FIELD.type = 11
HPEQUIPSMELTINFORET_ITEMINFO_FIELD.cpp_type = 10

HPEQUIPSMELTINFORET_FREEREFRESHTIMES_FIELD.name = "freeRefreshTimes"
HPEQUIPSMELTINFORET_FREEREFRESHTIMES_FIELD.full_name = ".HPEquipSmeltInfoRet.freeRefreshTimes"
HPEQUIPSMELTINFORET_FREEREFRESHTIMES_FIELD.number = 3
HPEQUIPSMELTINFORET_FREEREFRESHTIMES_FIELD.index = 2
HPEQUIPSMELTINFORET_FREEREFRESHTIMES_FIELD.label = 2
HPEQUIPSMELTINFORET_FREEREFRESHTIMES_FIELD.has_default_value = false
HPEQUIPSMELTINFORET_FREEREFRESHTIMES_FIELD.default_value = 0
HPEQUIPSMELTINFORET_FREEREFRESHTIMES_FIELD.type = 5
HPEQUIPSMELTINFORET_FREEREFRESHTIMES_FIELD.cpp_type = 1

HPEQUIPSMELTINFORET.name = "HPEquipSmeltInfoRet"
HPEQUIPSMELTINFORET.full_name = ".HPEquipSmeltInfoRet"
HPEQUIPSMELTINFORET.nested_types = {}
HPEQUIPSMELTINFORET.enum_types = {}
HPEQUIPSMELTINFORET.fields = {HPEQUIPSMELTINFORET_EQUIPINFO_FIELD, HPEQUIPSMELTINFORET_ITEMINFO_FIELD, HPEQUIPSMELTINFORET_FREEREFRESHTIMES_FIELD}
HPEQUIPSMELTINFORET.is_extendable = false
HPEQUIPSMELTINFORET.extensions = {}
HPEQUIPSMELT_EQUIPID_FIELD.name = "equipId"
HPEQUIPSMELT_EQUIPID_FIELD.full_name = ".HPEquipSmelt.equipId"
HPEQUIPSMELT_EQUIPID_FIELD.number = 1
HPEQUIPSMELT_EQUIPID_FIELD.index = 0
HPEQUIPSMELT_EQUIPID_FIELD.label = 3
HPEQUIPSMELT_EQUIPID_FIELD.has_default_value = false
HPEQUIPSMELT_EQUIPID_FIELD.default_value = {}
HPEQUIPSMELT_EQUIPID_FIELD.type = 3
HPEQUIPSMELT_EQUIPID_FIELD.cpp_type = 2

HPEQUIPSMELT.name = "HPEquipSmelt"
HPEQUIPSMELT.full_name = ".HPEquipSmelt"
HPEQUIPSMELT.nested_types = {}
HPEQUIPSMELT.enum_types = {}
HPEQUIPSMELT.fields = {HPEQUIPSMELT_EQUIPID_FIELD}
HPEQUIPSMELT.is_extendable = false
HPEQUIPSMELT.extensions = {}
HPEQUIPSMELTRET_GEMUNDRESS_FIELD.name = "gemUndress"
HPEQUIPSMELTRET_GEMUNDRESS_FIELD.full_name = ".HPEquipSmeltRet.gemUndress"
HPEQUIPSMELTRET_GEMUNDRESS_FIELD.number = 1
HPEQUIPSMELTRET_GEMUNDRESS_FIELD.index = 0
HPEQUIPSMELTRET_GEMUNDRESS_FIELD.label = 2
HPEQUIPSMELTRET_GEMUNDRESS_FIELD.has_default_value = false
HPEQUIPSMELTRET_GEMUNDRESS_FIELD.default_value = 0
HPEQUIPSMELTRET_GEMUNDRESS_FIELD.type = 5
HPEQUIPSMELTRET_GEMUNDRESS_FIELD.cpp_type = 1

HPEQUIPSMELTRET.name = "HPEquipSmeltRet"
HPEQUIPSMELTRET.full_name = ".HPEquipSmeltRet"
HPEQUIPSMELTRET.nested_types = {}
HPEQUIPSMELTRET.enum_types = {}
HPEQUIPSMELTRET.fields = {HPEQUIPSMELTRET_GEMUNDRESS_FIELD}
HPEQUIPSMELTRET.is_extendable = false
HPEQUIPSMELTRET.extensions = {}
HPEQUIPCREATEAVAILABLEREFRESH_VERSION_FIELD.name = "version"
HPEQUIPCREATEAVAILABLEREFRESH_VERSION_FIELD.full_name = ".HPEquipCreateAvailableRefresh.version"
HPEQUIPCREATEAVAILABLEREFRESH_VERSION_FIELD.number = 1
HPEQUIPCREATEAVAILABLEREFRESH_VERSION_FIELD.index = 0
HPEQUIPCREATEAVAILABLEREFRESH_VERSION_FIELD.label = 1
HPEQUIPCREATEAVAILABLEREFRESH_VERSION_FIELD.has_default_value = true
HPEQUIPCREATEAVAILABLEREFRESH_VERSION_FIELD.default_value = 1
HPEQUIPCREATEAVAILABLEREFRESH_VERSION_FIELD.type = 5
HPEQUIPCREATEAVAILABLEREFRESH_VERSION_FIELD.cpp_type = 1

HPEQUIPCREATEAVAILABLEREFRESH.name = "HPEquipCreateAvailableRefresh"
HPEQUIPCREATEAVAILABLEREFRESH.full_name = ".HPEquipCreateAvailableRefresh"
HPEQUIPCREATEAVAILABLEREFRESH.nested_types = {}
HPEQUIPCREATEAVAILABLEREFRESH.enum_types = {}
HPEQUIPCREATEAVAILABLEREFRESH.fields = {HPEQUIPCREATEAVAILABLEREFRESH_VERSION_FIELD}
HPEQUIPCREATEAVAILABLEREFRESH.is_extendable = false
HPEQUIPCREATEAVAILABLEREFRESH.extensions = {}
HPEQUIPCREATE_VERSION_FIELD.name = "version"
HPEQUIPCREATE_VERSION_FIELD.full_name = ".HPEquipCreate.version"
HPEQUIPCREATE_VERSION_FIELD.number = 1
HPEQUIPCREATE_VERSION_FIELD.index = 0
HPEQUIPCREATE_VERSION_FIELD.label = 1
HPEQUIPCREATE_VERSION_FIELD.has_default_value = true
HPEQUIPCREATE_VERSION_FIELD.default_value = 1
HPEQUIPCREATE_VERSION_FIELD.type = 5
HPEQUIPCREATE_VERSION_FIELD.cpp_type = 1

HPEQUIPCREATE.name = "HPEquipCreate"
HPEQUIPCREATE.full_name = ".HPEquipCreate"
HPEQUIPCREATE.nested_types = {}
HPEQUIPCREATE.enum_types = {}
HPEQUIPCREATE.fields = {HPEQUIPCREATE_VERSION_FIELD}
HPEQUIPCREATE.is_extendable = false
HPEQUIPCREATE.extensions = {}
HPEQUIPCREATERET_REWARDS_FIELD.name = "rewards"
HPEQUIPCREATERET_REWARDS_FIELD.full_name = ".HPEquipCreateRet.rewards"
HPEQUIPCREATERET_REWARDS_FIELD.number = 1
HPEQUIPCREATERET_REWARDS_FIELD.index = 0
HPEQUIPCREATERET_REWARDS_FIELD.label = 2
HPEQUIPCREATERET_REWARDS_FIELD.has_default_value = false
HPEQUIPCREATERET_REWARDS_FIELD.default_value = nil
HPEQUIPCREATERET_REWARDS_FIELD.message_type = Reward_pb.REWARDINFO
HPEQUIPCREATERET_REWARDS_FIELD.type = 11
HPEQUIPCREATERET_REWARDS_FIELD.cpp_type = 10

HPEQUIPCREATERET.name = "HPEquipCreateRet"
HPEQUIPCREATERET.full_name = ".HPEquipCreateRet"
HPEQUIPCREATERET.nested_types = {}
HPEQUIPCREATERET.enum_types = {}
HPEQUIPCREATERET.fields = {HPEQUIPCREATERET_REWARDS_FIELD}
HPEQUIPCREATERET.is_extendable = false
HPEQUIPCREATERET.extensions = {}
HPEQUIPSELL_EQUIPID_FIELD.name = "equipId"
HPEQUIPSELL_EQUIPID_FIELD.full_name = ".HPEquipSell.equipId"
HPEQUIPSELL_EQUIPID_FIELD.number = 1
HPEQUIPSELL_EQUIPID_FIELD.index = 0
HPEQUIPSELL_EQUIPID_FIELD.label = 1
HPEQUIPSELL_EQUIPID_FIELD.has_default_value = false
HPEQUIPSELL_EQUIPID_FIELD.default_value = 0
HPEQUIPSELL_EQUIPID_FIELD.type = 3
HPEQUIPSELL_EQUIPID_FIELD.cpp_type = 2

HPEQUIPSELL_QUALITY_FIELD.name = "quality"
HPEQUIPSELL_QUALITY_FIELD.full_name = ".HPEquipSell.quality"
HPEQUIPSELL_QUALITY_FIELD.number = 2
HPEQUIPSELL_QUALITY_FIELD.index = 1
HPEQUIPSELL_QUALITY_FIELD.label = 1
HPEQUIPSELL_QUALITY_FIELD.has_default_value = false
HPEQUIPSELL_QUALITY_FIELD.default_value = 0
HPEQUIPSELL_QUALITY_FIELD.type = 5
HPEQUIPSELL_QUALITY_FIELD.cpp_type = 1

HPEQUIPSELL.name = "HPEquipSell"
HPEQUIPSELL.full_name = ".HPEquipSell"
HPEQUIPSELL.nested_types = {}
HPEQUIPSELL.enum_types = {}
HPEQUIPSELL.fields = {HPEQUIPSELL_EQUIPID_FIELD, HPEQUIPSELL_QUALITY_FIELD}
HPEQUIPSELL.is_extendable = false
HPEQUIPSELL.extensions = {}
HPEQUIPSELLRET_REWARDS_FIELD.name = "rewards"
HPEQUIPSELLRET_REWARDS_FIELD.full_name = ".HPEquipSellRet.rewards"
HPEQUIPSELLRET_REWARDS_FIELD.number = 1
HPEQUIPSELLRET_REWARDS_FIELD.index = 0
HPEQUIPSELLRET_REWARDS_FIELD.label = 2
HPEQUIPSELLRET_REWARDS_FIELD.has_default_value = false
HPEQUIPSELLRET_REWARDS_FIELD.default_value = nil
HPEQUIPSELLRET_REWARDS_FIELD.message_type = Reward_pb.REWARDINFO
HPEQUIPSELLRET_REWARDS_FIELD.type = 11
HPEQUIPSELLRET_REWARDS_FIELD.cpp_type = 10

HPEQUIPSELLRET.name = "HPEquipSellRet"
HPEQUIPSELLRET.full_name = ".HPEquipSellRet"
HPEQUIPSELLRET.nested_types = {}
HPEQUIPSELLRET.enum_types = {}
HPEQUIPSELLRET.fields = {HPEQUIPSELLRET_REWARDS_FIELD}
HPEQUIPSELLRET.is_extendable = false
HPEQUIPSELLRET.extensions = {}
HPEQUIPBAGEXTEND_VERSION_FIELD.name = "version"
HPEQUIPBAGEXTEND_VERSION_FIELD.full_name = ".HPEquipBagExtend.version"
HPEQUIPBAGEXTEND_VERSION_FIELD.number = 1
HPEQUIPBAGEXTEND_VERSION_FIELD.index = 0
HPEQUIPBAGEXTEND_VERSION_FIELD.label = 1
HPEQUIPBAGEXTEND_VERSION_FIELD.has_default_value = true
HPEQUIPBAGEXTEND_VERSION_FIELD.default_value = 1
HPEQUIPBAGEXTEND_VERSION_FIELD.type = 5
HPEQUIPBAGEXTEND_VERSION_FIELD.cpp_type = 1

HPEQUIPBAGEXTEND.name = "HPEquipBagExtend"
HPEQUIPBAGEXTEND.full_name = ".HPEquipBagExtend"
HPEQUIPBAGEXTEND.nested_types = {}
HPEQUIPBAGEXTEND.enum_types = {}
HPEQUIPBAGEXTEND.fields = {HPEQUIPBAGEXTEND_VERSION_FIELD}
HPEQUIPBAGEXTEND.is_extendable = false
HPEQUIPBAGEXTEND.extensions = {}
HPEQUIPBAGEXTENDRET_VERSION_FIELD.name = "version"
HPEQUIPBAGEXTENDRET_VERSION_FIELD.full_name = ".HPEquipBagExtendRet.version"
HPEQUIPBAGEXTENDRET_VERSION_FIELD.number = 1
HPEQUIPBAGEXTENDRET_VERSION_FIELD.index = 0
HPEQUIPBAGEXTENDRET_VERSION_FIELD.label = 1
HPEQUIPBAGEXTENDRET_VERSION_FIELD.has_default_value = true
HPEQUIPBAGEXTENDRET_VERSION_FIELD.default_value = 1
HPEQUIPBAGEXTENDRET_VERSION_FIELD.type = 5
HPEQUIPBAGEXTENDRET_VERSION_FIELD.cpp_type = 1

HPEQUIPBAGEXTENDRET.name = "HPEquipBagExtendRet"
HPEQUIPBAGEXTENDRET.full_name = ".HPEquipBagExtendRet"
HPEQUIPBAGEXTENDRET.nested_types = {}
HPEQUIPBAGEXTENDRET.enum_types = {}
HPEQUIPBAGEXTENDRET.fields = {HPEQUIPBAGEXTENDRET_VERSION_FIELD}
HPEQUIPBAGEXTENDRET.is_extendable = false
HPEQUIPBAGEXTENDRET.extensions = {}
HPEQUIPLOCK_EQUIPID_FIELD.name = "equipId"
HPEQUIPLOCK_EQUIPID_FIELD.full_name = ".HPEquipLock.equipId"
HPEQUIPLOCK_EQUIPID_FIELD.number = 1
HPEQUIPLOCK_EQUIPID_FIELD.index = 0
HPEQUIPLOCK_EQUIPID_FIELD.label = 2
HPEQUIPLOCK_EQUIPID_FIELD.has_default_value = false
HPEQUIPLOCK_EQUIPID_FIELD.default_value = 0
HPEQUIPLOCK_EQUIPID_FIELD.type = 3
HPEQUIPLOCK_EQUIPID_FIELD.cpp_type = 2

HPEQUIPLOCK.name = "HPEquipLock"
HPEQUIPLOCK.full_name = ".HPEquipLock"
HPEQUIPLOCK.nested_types = {}
HPEQUIPLOCK.enum_types = {}
HPEQUIPLOCK.fields = {HPEQUIPLOCK_EQUIPID_FIELD}
HPEQUIPLOCK.is_extendable = false
HPEQUIPLOCK.extensions = {}
HPEQUIPLOCKRET_EQUIPID_FIELD.name = "equipId"
HPEQUIPLOCKRET_EQUIPID_FIELD.full_name = ".HPEquipLockRet.equipId"
HPEQUIPLOCKRET_EQUIPID_FIELD.number = 1
HPEQUIPLOCKRET_EQUIPID_FIELD.index = 0
HPEQUIPLOCKRET_EQUIPID_FIELD.label = 2
HPEQUIPLOCKRET_EQUIPID_FIELD.has_default_value = false
HPEQUIPLOCKRET_EQUIPID_FIELD.default_value = 0
HPEQUIPLOCKRET_EQUIPID_FIELD.type = 3
HPEQUIPLOCKRET_EQUIPID_FIELD.cpp_type = 2

HPEQUIPLOCKRET.name = "HPEquipLockRet"
HPEQUIPLOCKRET.full_name = ".HPEquipLockRet"
HPEQUIPLOCKRET.nested_types = {}
HPEQUIPLOCKRET.enum_types = {}
HPEQUIPLOCKRET.fields = {HPEQUIPLOCKRET_EQUIPID_FIELD}
HPEQUIPLOCKRET.is_extendable = false
HPEQUIPLOCKRET.extensions = {}
HPEQUIPSPECIALCREATE_CFGID_FIELD.name = "cfgId"
HPEQUIPSPECIALCREATE_CFGID_FIELD.full_name = ".HPEquipSpecialCreate.cfgId"
HPEQUIPSPECIALCREATE_CFGID_FIELD.number = 1
HPEQUIPSPECIALCREATE_CFGID_FIELD.index = 0
HPEQUIPSPECIALCREATE_CFGID_FIELD.label = 2
HPEQUIPSPECIALCREATE_CFGID_FIELD.has_default_value = false
HPEQUIPSPECIALCREATE_CFGID_FIELD.default_value = 0
HPEQUIPSPECIALCREATE_CFGID_FIELD.type = 5
HPEQUIPSPECIALCREATE_CFGID_FIELD.cpp_type = 1

HPEQUIPSPECIALCREATE.name = "HPEquipSpecialCreate"
HPEQUIPSPECIALCREATE.full_name = ".HPEquipSpecialCreate"
HPEQUIPSPECIALCREATE.nested_types = {}
HPEQUIPSPECIALCREATE.enum_types = {}
HPEQUIPSPECIALCREATE.fields = {HPEQUIPSPECIALCREATE_CFGID_FIELD}
HPEQUIPSPECIALCREATE.is_extendable = false
HPEQUIPSPECIALCREATE.extensions = {}
HPEQUIPSPECIALCREATERET_CFGID_FIELD.name = "cfgId"
HPEQUIPSPECIALCREATERET_CFGID_FIELD.full_name = ".HPEquipSpecialCreateRet.cfgId"
HPEQUIPSPECIALCREATERET_CFGID_FIELD.number = 1
HPEQUIPSPECIALCREATERET_CFGID_FIELD.index = 0
HPEQUIPSPECIALCREATERET_CFGID_FIELD.label = 2
HPEQUIPSPECIALCREATERET_CFGID_FIELD.has_default_value = false
HPEQUIPSPECIALCREATERET_CFGID_FIELD.default_value = 0
HPEQUIPSPECIALCREATERET_CFGID_FIELD.type = 5
HPEQUIPSPECIALCREATERET_CFGID_FIELD.cpp_type = 1

HPEQUIPSPECIALCREATERET.name = "HPEquipSpecialCreateRet"
HPEQUIPSPECIALCREATERET.full_name = ".HPEquipSpecialCreateRet"
HPEQUIPSPECIALCREATERET.nested_types = {}
HPEQUIPSPECIALCREATERET.enum_types = {}
HPEQUIPSPECIALCREATERET.fields = {HPEQUIPSPECIALCREATERET_CFGID_FIELD}
HPEQUIPSPECIALCREATERET.is_extendable = false
HPEQUIPSPECIALCREATERET.extensions = {}
HPEQUIPCOMPOUND_FROMEQUIPID_FIELD.name = "fromEquipId"
HPEQUIPCOMPOUND_FROMEQUIPID_FIELD.full_name = ".HPEquipCompound.fromEquipId"
HPEQUIPCOMPOUND_FROMEQUIPID_FIELD.number = 1
HPEQUIPCOMPOUND_FROMEQUIPID_FIELD.index = 0
HPEQUIPCOMPOUND_FROMEQUIPID_FIELD.label = 2
HPEQUIPCOMPOUND_FROMEQUIPID_FIELD.has_default_value = false
HPEQUIPCOMPOUND_FROMEQUIPID_FIELD.default_value = 0
HPEQUIPCOMPOUND_FROMEQUIPID_FIELD.type = 3
HPEQUIPCOMPOUND_FROMEQUIPID_FIELD.cpp_type = 2

HPEQUIPCOMPOUND_TOEQUIPID_FIELD.name = "toEquipId"
HPEQUIPCOMPOUND_TOEQUIPID_FIELD.full_name = ".HPEquipCompound.toEquipId"
HPEQUIPCOMPOUND_TOEQUIPID_FIELD.number = 2
HPEQUIPCOMPOUND_TOEQUIPID_FIELD.index = 1
HPEQUIPCOMPOUND_TOEQUIPID_FIELD.label = 2
HPEQUIPCOMPOUND_TOEQUIPID_FIELD.has_default_value = false
HPEQUIPCOMPOUND_TOEQUIPID_FIELD.default_value = 0
HPEQUIPCOMPOUND_TOEQUIPID_FIELD.type = 3
HPEQUIPCOMPOUND_TOEQUIPID_FIELD.cpp_type = 2

HPEQUIPCOMPOUND.name = "HPEquipCompound"
HPEQUIPCOMPOUND.full_name = ".HPEquipCompound"
HPEQUIPCOMPOUND.nested_types = {}
HPEQUIPCOMPOUND.enum_types = {}
HPEQUIPCOMPOUND.fields = {HPEQUIPCOMPOUND_FROMEQUIPID_FIELD, HPEQUIPCOMPOUND_TOEQUIPID_FIELD}
HPEQUIPCOMPOUND.is_extendable = false
HPEQUIPCOMPOUND.extensions = {}
HPEQUIPCOMPOUNDRET_FROMEQUIPID_FIELD.name = "fromEquipId"
HPEQUIPCOMPOUNDRET_FROMEQUIPID_FIELD.full_name = ".HPEquipCompoundRet.fromEquipId"
HPEQUIPCOMPOUNDRET_FROMEQUIPID_FIELD.number = 1
HPEQUIPCOMPOUNDRET_FROMEQUIPID_FIELD.index = 0
HPEQUIPCOMPOUNDRET_FROMEQUIPID_FIELD.label = 2
HPEQUIPCOMPOUNDRET_FROMEQUIPID_FIELD.has_default_value = false
HPEQUIPCOMPOUNDRET_FROMEQUIPID_FIELD.default_value = 0
HPEQUIPCOMPOUNDRET_FROMEQUIPID_FIELD.type = 3
HPEQUIPCOMPOUNDRET_FROMEQUIPID_FIELD.cpp_type = 2

HPEQUIPCOMPOUNDRET_TOEQUIPID_FIELD.name = "toEquipId"
HPEQUIPCOMPOUNDRET_TOEQUIPID_FIELD.full_name = ".HPEquipCompoundRet.toEquipId"
HPEQUIPCOMPOUNDRET_TOEQUIPID_FIELD.number = 2
HPEQUIPCOMPOUNDRET_TOEQUIPID_FIELD.index = 1
HPEQUIPCOMPOUNDRET_TOEQUIPID_FIELD.label = 2
HPEQUIPCOMPOUNDRET_TOEQUIPID_FIELD.has_default_value = false
HPEQUIPCOMPOUNDRET_TOEQUIPID_FIELD.default_value = 0
HPEQUIPCOMPOUNDRET_TOEQUIPID_FIELD.type = 3
HPEQUIPCOMPOUNDRET_TOEQUIPID_FIELD.cpp_type = 2

HPEQUIPCOMPOUNDRET.name = "HPEquipCompoundRet"
HPEQUIPCOMPOUNDRET.full_name = ".HPEquipCompoundRet"
HPEQUIPCOMPOUNDRET.nested_types = {}
HPEQUIPCOMPOUNDRET.enum_types = {}
HPEQUIPCOMPOUNDRET.fields = {HPEQUIPCOMPOUNDRET_FROMEQUIPID_FIELD, HPEQUIPCOMPOUNDRET_TOEQUIPID_FIELD}
HPEQUIPCOMPOUNDRET.is_extendable = false
HPEQUIPCOMPOUNDRET.extensions = {}

HPEquipBagExtend = protobuf.Message(HPEQUIPBAGEXTEND)
HPEquipBagExtendRet = protobuf.Message(HPEQUIPBAGEXTENDRET)
HPEquipBaptize = protobuf.Message(HPEQUIPBAPTIZE)
HPEquipBaptizeRet = protobuf.Message(HPEQUIPBAPTIZERET)
HPEquipCompound = protobuf.Message(HPEQUIPCOMPOUND)
HPEquipCompoundRet = protobuf.Message(HPEQUIPCOMPOUNDRET)
HPEquipCreate = protobuf.Message(HPEQUIPCREATE)
HPEquipCreateAvailableRefresh = protobuf.Message(HPEQUIPCREATEAVAILABLEREFRESH)
HPEquipCreateRet = protobuf.Message(HPEQUIPCREATERET)
HPEquipDress = protobuf.Message(HPEQUIPDRESS)
HPEquipDressRet = protobuf.Message(HPEQUIPDRESSRET)
HPEquipEnhance = protobuf.Message(HPEQUIPENHANCE)
HPEquipEnhanceRet = protobuf.Message(HPEQUIPENHANCERET)
HPEquipExtend = protobuf.Message(HPEQUIPEXTEND)
HPEquipExtendRet = protobuf.Message(HPEQUIPEXTENDRET)
HPEquipLock = protobuf.Message(HPEQUIPLOCK)
HPEquipLockRet = protobuf.Message(HPEQUIPLOCKRET)
HPEquipPunch = protobuf.Message(HPEQUIPPUNCH)
HPEquipPunchRet = protobuf.Message(HPEQUIPPUNCHRET)
HPEquipSell = protobuf.Message(HPEQUIPSELL)
HPEquipSellRet = protobuf.Message(HPEQUIPSELLRET)
HPEquipSmelt = protobuf.Message(HPEQUIPSMELT)
HPEquipSmeltInfo = protobuf.Message(HPEQUIPSMELTINFO)
HPEquipSmeltInfoRet = protobuf.Message(HPEQUIPSMELTINFORET)
HPEquipSmeltRet = protobuf.Message(HPEQUIPSMELTRET)
HPEquipSpecialCreate = protobuf.Message(HPEQUIPSPECIALCREATE)
HPEquipSpecialCreateRet = protobuf.Message(HPEQUIPSPECIALCREATERET)
HPEquipStoneDress = protobuf.Message(HPEQUIPSTONEDRESS)
HPEquipStoneDressRet = protobuf.Message(HPEQUIPSTONEDRESSRET)
HPEquipStoneUndress = protobuf.Message(HPEQUIPSTONEUNDRESS)
HPEquipStoneUndressRet = protobuf.Message(HPEQUIPSTONEUNDRESSRET)
HPEquipSwallow = protobuf.Message(HPEQUIPSWALLOW)
HPEquipSwallowRet = protobuf.Message(HPEQUIPSWALLOWRET)

