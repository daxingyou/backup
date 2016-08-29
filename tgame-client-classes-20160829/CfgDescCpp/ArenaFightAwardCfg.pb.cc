// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ArenaFightAwardCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ArenaFightAwardCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_ArenaFightAwardCfg_2eproto() {
  delete ArenaFightAwardCfg::default_instance_;
  delete ArenaFightAwardCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ArenaFightAwardCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ArenaFightAwardCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::com::cfg::vo::protobuf_AddDesc_ArenaDailyAwardCfg_2eproto();
  ArenaFightAwardCfg::default_instance_ = new ArenaFightAwardCfg();
  ArenaFightAwardCfgSet::default_instance_ = new ArenaFightAwardCfgSet();
  ArenaFightAwardCfg::default_instance_->InitAsDefaultInstance();
  ArenaFightAwardCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ArenaFightAwardCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ArenaFightAwardCfg_2eproto_once_);
void protobuf_AddDesc_ArenaFightAwardCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ArenaFightAwardCfg_2eproto_once_,
                 &protobuf_AddDesc_ArenaFightAwardCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ArenaFightAwardCfg_2eproto {
  StaticDescriptorInitializer_ArenaFightAwardCfg_2eproto() {
    protobuf_AddDesc_ArenaFightAwardCfg_2eproto();
  }
} static_descriptor_initializer_ArenaFightAwardCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ArenaFightAwardCfg::kLevelFieldNumber;
const int ArenaFightAwardCfg::kWinElmtLstFieldNumber;
const int ArenaFightAwardCfg::kLoseElmtLstFieldNumber;
#endif  // !_MSC_VER

ArenaFightAwardCfg::ArenaFightAwardCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArenaFightAwardCfg::InitAsDefaultInstance() {
}

ArenaFightAwardCfg::ArenaFightAwardCfg(const ArenaFightAwardCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArenaFightAwardCfg::SharedCtor() {
  _cached_size_ = 0;
  level_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArenaFightAwardCfg::~ArenaFightAwardCfg() {
  SharedDtor();
}

void ArenaFightAwardCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ArenaFightAwardCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArenaFightAwardCfg& ArenaFightAwardCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ArenaFightAwardCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ArenaFightAwardCfg_2eproto();
#endif
  return *default_instance_;
}

ArenaFightAwardCfg* ArenaFightAwardCfg::default_instance_ = NULL;

ArenaFightAwardCfg* ArenaFightAwardCfg::New() const {
  return new ArenaFightAwardCfg;
}

void ArenaFightAwardCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    level_ = 0u;
  }
  winelmtlst_.Clear();
  loseelmtlst_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ArenaFightAwardCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Level = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_WinElmtLst;
        break;
      }

      // repeated .com.cfg.vo.ArenaAwardElement WinElmtLst = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_WinElmtLst:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_winelmtlst()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_WinElmtLst;
        if (input->ExpectTag(26)) goto parse_LoseElmtLst;
        break;
      }

      // repeated .com.cfg.vo.ArenaAwardElement LoseElmtLst = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_LoseElmtLst:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_loseelmtlst()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_LoseElmtLst;
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

void ArenaFightAwardCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Level = 1;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->level(), output);
  }

  // repeated .com.cfg.vo.ArenaAwardElement WinElmtLst = 2;
  for (int i = 0; i < this->winelmtlst_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->winelmtlst(i), output);
  }

  // repeated .com.cfg.vo.ArenaAwardElement LoseElmtLst = 3;
  for (int i = 0; i < this->loseelmtlst_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->loseelmtlst(i), output);
  }

}

int ArenaFightAwardCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Level = 1;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

  }
  // repeated .com.cfg.vo.ArenaAwardElement WinElmtLst = 2;
  total_size += 1 * this->winelmtlst_size();
  for (int i = 0; i < this->winelmtlst_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->winelmtlst(i));
  }

  // repeated .com.cfg.vo.ArenaAwardElement LoseElmtLst = 3;
  total_size += 1 * this->loseelmtlst_size();
  for (int i = 0; i < this->loseelmtlst_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->loseelmtlst(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArenaFightAwardCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArenaFightAwardCfg*>(&from));
}

void ArenaFightAwardCfg::MergeFrom(const ArenaFightAwardCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  winelmtlst_.MergeFrom(from.winelmtlst_);
  loseelmtlst_.MergeFrom(from.loseelmtlst_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_level()) {
      set_level(from.level());
    }
  }
}

void ArenaFightAwardCfg::CopyFrom(const ArenaFightAwardCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArenaFightAwardCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < winelmtlst_size(); i++) {
    if (!this->winelmtlst(i).IsInitialized()) return false;
  }
  for (int i = 0; i < loseelmtlst_size(); i++) {
    if (!this->loseelmtlst(i).IsInitialized()) return false;
  }
  return true;
}

void ArenaFightAwardCfg::Swap(ArenaFightAwardCfg* other) {
  if (other != this) {
    std::swap(level_, other->level_);
    winelmtlst_.Swap(&other->winelmtlst_);
    loseelmtlst_.Swap(&other->loseelmtlst_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArenaFightAwardCfg::GetTypeName() const {
  return "com.cfg.vo.ArenaFightAwardCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int ArenaFightAwardCfgSet::kArenaFightAwardCfgFieldNumber;
#endif  // !_MSC_VER

ArenaFightAwardCfgSet::ArenaFightAwardCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArenaFightAwardCfgSet::InitAsDefaultInstance() {
}

ArenaFightAwardCfgSet::ArenaFightAwardCfgSet(const ArenaFightAwardCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArenaFightAwardCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArenaFightAwardCfgSet::~ArenaFightAwardCfgSet() {
  SharedDtor();
}

void ArenaFightAwardCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ArenaFightAwardCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArenaFightAwardCfgSet& ArenaFightAwardCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ArenaFightAwardCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ArenaFightAwardCfg_2eproto();
#endif
  return *default_instance_;
}

ArenaFightAwardCfgSet* ArenaFightAwardCfgSet::default_instance_ = NULL;

ArenaFightAwardCfgSet* ArenaFightAwardCfgSet::New() const {
  return new ArenaFightAwardCfgSet;
}

void ArenaFightAwardCfgSet::Clear() {
  arenafightawardcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ArenaFightAwardCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.ArenaFightAwardCfg arenaFightAwardCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_arenaFightAwardCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_arenafightawardcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_arenaFightAwardCfg;
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

void ArenaFightAwardCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.ArenaFightAwardCfg arenaFightAwardCfg = 1;
  for (int i = 0; i < this->arenafightawardcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->arenafightawardcfg(i), output);
  }

}

int ArenaFightAwardCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.ArenaFightAwardCfg arenaFightAwardCfg = 1;
  total_size += 1 * this->arenafightawardcfg_size();
  for (int i = 0; i < this->arenafightawardcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->arenafightawardcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArenaFightAwardCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArenaFightAwardCfgSet*>(&from));
}

void ArenaFightAwardCfgSet::MergeFrom(const ArenaFightAwardCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  arenafightawardcfg_.MergeFrom(from.arenafightawardcfg_);
}

void ArenaFightAwardCfgSet::CopyFrom(const ArenaFightAwardCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArenaFightAwardCfgSet::IsInitialized() const {

  for (int i = 0; i < arenafightawardcfg_size(); i++) {
    if (!this->arenafightawardcfg(i).IsInitialized()) return false;
  }
  return true;
}

void ArenaFightAwardCfgSet::Swap(ArenaFightAwardCfgSet* other) {
  if (other != this) {
    arenafightawardcfg_.Swap(&other->arenafightawardcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArenaFightAwardCfgSet::GetTypeName() const {
  return "com.cfg.vo.ArenaFightAwardCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)