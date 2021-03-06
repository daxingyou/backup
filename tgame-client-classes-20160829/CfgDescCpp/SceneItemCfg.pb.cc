// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SceneItemCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SceneItemCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_SceneItemCfg_2eproto() {
  delete SceneItemCfg::default_instance_;
  delete SceneItemCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_SceneItemCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_SceneItemCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  SceneItemCfg::default_instance_ = new SceneItemCfg();
  SceneItemCfgSet::default_instance_ = new SceneItemCfgSet();
  SceneItemCfg::default_instance_->InitAsDefaultInstance();
  SceneItemCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SceneItemCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_SceneItemCfg_2eproto_once_);
void protobuf_AddDesc_SceneItemCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_SceneItemCfg_2eproto_once_,
                 &protobuf_AddDesc_SceneItemCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SceneItemCfg_2eproto {
  StaticDescriptorInitializer_SceneItemCfg_2eproto() {
    protobuf_AddDesc_SceneItemCfg_2eproto();
  }
} static_descriptor_initializer_SceneItemCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int SceneItemCfg::kItemIDFieldNumber;
const int SceneItemCfg::kItemTypeFieldNumber;
const int SceneItemCfg::kItemResFieldNumber;
const int SceneItemCfg::kHPFieldNumber;
const int SceneItemCfg::kHurtVoiceFieldNumber;
const int SceneItemCfg::kDieVoiceFieldNumber;
const int SceneItemCfg::kTimeFieldNumber;
#endif  // !_MSC_VER

SceneItemCfg::SceneItemCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SceneItemCfg::InitAsDefaultInstance() {
}

SceneItemCfg::SceneItemCfg(const SceneItemCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SceneItemCfg::SharedCtor() {
  _cached_size_ = 0;
  itemid_ = 0u;
  itemtype_ = 0u;
  itemres_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  hp_ = 0u;
  hurtvoice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  dievoice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  time_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SceneItemCfg::~SceneItemCfg() {
  SharedDtor();
}

void SceneItemCfg::SharedDtor() {
  if (itemres_ != &::google::protobuf::internal::kEmptyString) {
    delete itemres_;
  }
  if (hurtvoice_ != &::google::protobuf::internal::kEmptyString) {
    delete hurtvoice_;
  }
  if (dievoice_ != &::google::protobuf::internal::kEmptyString) {
    delete dievoice_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SceneItemCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SceneItemCfg& SceneItemCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_SceneItemCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_SceneItemCfg_2eproto();
#endif
  return *default_instance_;
}

SceneItemCfg* SceneItemCfg::default_instance_ = NULL;

SceneItemCfg* SceneItemCfg::New() const {
  return new SceneItemCfg;
}

void SceneItemCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    itemid_ = 0u;
    itemtype_ = 0u;
    if (has_itemres()) {
      if (itemres_ != &::google::protobuf::internal::kEmptyString) {
        itemres_->clear();
      }
    }
    hp_ = 0u;
    if (has_hurtvoice()) {
      if (hurtvoice_ != &::google::protobuf::internal::kEmptyString) {
        hurtvoice_->clear();
      }
    }
    if (has_dievoice()) {
      if (dievoice_ != &::google::protobuf::internal::kEmptyString) {
        dievoice_->clear();
      }
    }
    time_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SceneItemCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 ItemID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &itemid_)));
          set_has_itemid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_ItemType;
        break;
      }

      // required uint32 ItemType = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ItemType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &itemtype_)));
          set_has_itemtype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_ItemRes;
        break;
      }

      // required string ItemRes = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ItemRes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_itemres()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_HP;
        break;
      }

      // required uint32 HP = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_HP:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &hp_)));
          set_has_hp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_HurtVoice;
        break;
      }

      // required string HurtVoice = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_HurtVoice:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_hurtvoice()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_DieVoice;
        break;
      }

      // required string DieVoice = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_DieVoice:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dievoice()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_Time;
        break;
      }

      // required uint32 Time = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SceneItemCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 ItemID = 1;
  if (has_itemid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->itemid(), output);
  }

  // required uint32 ItemType = 2;
  if (has_itemtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->itemtype(), output);
  }

  // required string ItemRes = 3;
  if (has_itemres()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->itemres(), output);
  }

  // required uint32 HP = 4;
  if (has_hp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->hp(), output);
  }

  // required string HurtVoice = 5;
  if (has_hurtvoice()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->hurtvoice(), output);
  }

  // required string DieVoice = 6;
  if (has_dievoice()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->dievoice(), output);
  }

  // required uint32 Time = 7;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->time(), output);
  }

}

int SceneItemCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 ItemID = 1;
    if (has_itemid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->itemid());
    }

    // required uint32 ItemType = 2;
    if (has_itemtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->itemtype());
    }

    // required string ItemRes = 3;
    if (has_itemres()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->itemres());
    }

    // required uint32 HP = 4;
    if (has_hp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->hp());
    }

    // required string HurtVoice = 5;
    if (has_hurtvoice()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->hurtvoice());
    }

    // required string DieVoice = 6;
    if (has_dievoice()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->dievoice());
    }

    // required uint32 Time = 7;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->time());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SceneItemCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SceneItemCfg*>(&from));
}

void SceneItemCfg::MergeFrom(const SceneItemCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_itemid()) {
      set_itemid(from.itemid());
    }
    if (from.has_itemtype()) {
      set_itemtype(from.itemtype());
    }
    if (from.has_itemres()) {
      set_itemres(from.itemres());
    }
    if (from.has_hp()) {
      set_hp(from.hp());
    }
    if (from.has_hurtvoice()) {
      set_hurtvoice(from.hurtvoice());
    }
    if (from.has_dievoice()) {
      set_dievoice(from.dievoice());
    }
    if (from.has_time()) {
      set_time(from.time());
    }
  }
}

void SceneItemCfg::CopyFrom(const SceneItemCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SceneItemCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;

  return true;
}

void SceneItemCfg::Swap(SceneItemCfg* other) {
  if (other != this) {
    std::swap(itemid_, other->itemid_);
    std::swap(itemtype_, other->itemtype_);
    std::swap(itemres_, other->itemres_);
    std::swap(hp_, other->hp_);
    std::swap(hurtvoice_, other->hurtvoice_);
    std::swap(dievoice_, other->dievoice_);
    std::swap(time_, other->time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SceneItemCfg::GetTypeName() const {
  return "com.cfg.vo.SceneItemCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int SceneItemCfgSet::kSceneItemCfgFieldNumber;
#endif  // !_MSC_VER

SceneItemCfgSet::SceneItemCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SceneItemCfgSet::InitAsDefaultInstance() {
}

SceneItemCfgSet::SceneItemCfgSet(const SceneItemCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SceneItemCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SceneItemCfgSet::~SceneItemCfgSet() {
  SharedDtor();
}

void SceneItemCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SceneItemCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SceneItemCfgSet& SceneItemCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_SceneItemCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_SceneItemCfg_2eproto();
#endif
  return *default_instance_;
}

SceneItemCfgSet* SceneItemCfgSet::default_instance_ = NULL;

SceneItemCfgSet* SceneItemCfgSet::New() const {
  return new SceneItemCfgSet;
}

void SceneItemCfgSet::Clear() {
  sceneitemcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SceneItemCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.SceneItemCfg sceneItemCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_sceneItemCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_sceneitemcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_sceneItemCfg;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SceneItemCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.SceneItemCfg sceneItemCfg = 1;
  for (int i = 0; i < this->sceneitemcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->sceneitemcfg(i), output);
  }

}

int SceneItemCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.SceneItemCfg sceneItemCfg = 1;
  total_size += 1 * this->sceneitemcfg_size();
  for (int i = 0; i < this->sceneitemcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->sceneitemcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SceneItemCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SceneItemCfgSet*>(&from));
}

void SceneItemCfgSet::MergeFrom(const SceneItemCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  sceneitemcfg_.MergeFrom(from.sceneitemcfg_);
}

void SceneItemCfgSet::CopyFrom(const SceneItemCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SceneItemCfgSet::IsInitialized() const {

  for (int i = 0; i < sceneitemcfg_size(); i++) {
    if (!this->sceneitemcfg(i).IsInitialized()) return false;
  }
  return true;
}

void SceneItemCfgSet::Swap(SceneItemCfgSet* other) {
  if (other != this) {
    sceneitemcfg_.Swap(&other->sceneitemcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SceneItemCfgSet::GetTypeName() const {
  return "com.cfg.vo.SceneItemCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
