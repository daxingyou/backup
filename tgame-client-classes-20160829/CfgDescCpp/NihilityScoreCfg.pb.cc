// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NihilityScoreCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "NihilityScoreCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_NihilityScoreCfg_2eproto() {
  delete NihilityScoreCfg::default_instance_;
  delete NihilityScoreCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_NihilityScoreCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_NihilityScoreCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  NihilityScoreCfg::default_instance_ = new NihilityScoreCfg();
  NihilityScoreCfgSet::default_instance_ = new NihilityScoreCfgSet();
  NihilityScoreCfg::default_instance_->InitAsDefaultInstance();
  NihilityScoreCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_NihilityScoreCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_NihilityScoreCfg_2eproto_once_);
void protobuf_AddDesc_NihilityScoreCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_NihilityScoreCfg_2eproto_once_,
                 &protobuf_AddDesc_NihilityScoreCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_NihilityScoreCfg_2eproto {
  StaticDescriptorInitializer_NihilityScoreCfg_2eproto() {
    protobuf_AddDesc_NihilityScoreCfg_2eproto();
  }
} static_descriptor_initializer_NihilityScoreCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int NihilityScoreCfg::kLevFieldNumber;
const int NihilityScoreCfg::kScoreFieldNumber;
const int NihilityScoreCfg::kMonsterLevFieldNumber;
#endif  // !_MSC_VER

NihilityScoreCfg::NihilityScoreCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void NihilityScoreCfg::InitAsDefaultInstance() {
}

NihilityScoreCfg::NihilityScoreCfg(const NihilityScoreCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void NihilityScoreCfg::SharedCtor() {
  _cached_size_ = 0;
  lev_ = 0u;
  score_ = 0u;
  monsterlev_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NihilityScoreCfg::~NihilityScoreCfg() {
  SharedDtor();
}

void NihilityScoreCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void NihilityScoreCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NihilityScoreCfg& NihilityScoreCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_NihilityScoreCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_NihilityScoreCfg_2eproto();
#endif
  return *default_instance_;
}

NihilityScoreCfg* NihilityScoreCfg::default_instance_ = NULL;

NihilityScoreCfg* NihilityScoreCfg::New() const {
  return new NihilityScoreCfg;
}

void NihilityScoreCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    lev_ = 0u;
    score_ = 0u;
    monsterlev_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool NihilityScoreCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Lev = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &lev_)));
          set_has_lev();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_Score;
        break;
      }

      // required uint32 Score = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Score:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &score_)));
          set_has_score();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_MonsterLev;
        break;
      }

      // required uint32 MonsterLev = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_MonsterLev:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &monsterlev_)));
          set_has_monsterlev();
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

void NihilityScoreCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Lev = 1;
  if (has_lev()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->lev(), output);
  }

  // required uint32 Score = 2;
  if (has_score()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->score(), output);
  }

  // required uint32 MonsterLev = 3;
  if (has_monsterlev()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->monsterlev(), output);
  }

}

int NihilityScoreCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Lev = 1;
    if (has_lev()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->lev());
    }

    // required uint32 Score = 2;
    if (has_score()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->score());
    }

    // required uint32 MonsterLev = 3;
    if (has_monsterlev()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->monsterlev());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NihilityScoreCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NihilityScoreCfg*>(&from));
}

void NihilityScoreCfg::MergeFrom(const NihilityScoreCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_lev()) {
      set_lev(from.lev());
    }
    if (from.has_score()) {
      set_score(from.score());
    }
    if (from.has_monsterlev()) {
      set_monsterlev(from.monsterlev());
    }
  }
}

void NihilityScoreCfg::CopyFrom(const NihilityScoreCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NihilityScoreCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void NihilityScoreCfg::Swap(NihilityScoreCfg* other) {
  if (other != this) {
    std::swap(lev_, other->lev_);
    std::swap(score_, other->score_);
    std::swap(monsterlev_, other->monsterlev_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string NihilityScoreCfg::GetTypeName() const {
  return "com.cfg.vo.NihilityScoreCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int NihilityScoreCfgSet::kNihilityScoreCfgFieldNumber;
#endif  // !_MSC_VER

NihilityScoreCfgSet::NihilityScoreCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void NihilityScoreCfgSet::InitAsDefaultInstance() {
}

NihilityScoreCfgSet::NihilityScoreCfgSet(const NihilityScoreCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void NihilityScoreCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NihilityScoreCfgSet::~NihilityScoreCfgSet() {
  SharedDtor();
}

void NihilityScoreCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void NihilityScoreCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NihilityScoreCfgSet& NihilityScoreCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_NihilityScoreCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_NihilityScoreCfg_2eproto();
#endif
  return *default_instance_;
}

NihilityScoreCfgSet* NihilityScoreCfgSet::default_instance_ = NULL;

NihilityScoreCfgSet* NihilityScoreCfgSet::New() const {
  return new NihilityScoreCfgSet;
}

void NihilityScoreCfgSet::Clear() {
  nihilityscorecfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool NihilityScoreCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.NihilityScoreCfg nihilityScoreCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_nihilityScoreCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_nihilityscorecfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_nihilityScoreCfg;
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

void NihilityScoreCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.NihilityScoreCfg nihilityScoreCfg = 1;
  for (int i = 0; i < this->nihilityscorecfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->nihilityscorecfg(i), output);
  }

}

int NihilityScoreCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.NihilityScoreCfg nihilityScoreCfg = 1;
  total_size += 1 * this->nihilityscorecfg_size();
  for (int i = 0; i < this->nihilityscorecfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->nihilityscorecfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NihilityScoreCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NihilityScoreCfgSet*>(&from));
}

void NihilityScoreCfgSet::MergeFrom(const NihilityScoreCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  nihilityscorecfg_.MergeFrom(from.nihilityscorecfg_);
}

void NihilityScoreCfgSet::CopyFrom(const NihilityScoreCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NihilityScoreCfgSet::IsInitialized() const {

  for (int i = 0; i < nihilityscorecfg_size(); i++) {
    if (!this->nihilityscorecfg(i).IsInitialized()) return false;
  }
  return true;
}

void NihilityScoreCfgSet::Swap(NihilityScoreCfgSet* other) {
  if (other != this) {
    nihilityscorecfg_.Swap(&other->nihilityscorecfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string NihilityScoreCfgSet::GetTypeName() const {
  return "com.cfg.vo.NihilityScoreCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)