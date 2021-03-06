// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EntryGroupCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "EntryGroupCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_EntryGroupCfg_2eproto() {
  delete EntryGroupCfg::default_instance_;
  delete EntryGroupCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_EntryGroupCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_EntryGroupCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  EntryGroupCfg::default_instance_ = new EntryGroupCfg();
  EntryGroupCfgSet::default_instance_ = new EntryGroupCfgSet();
  EntryGroupCfg::default_instance_->InitAsDefaultInstance();
  EntryGroupCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_EntryGroupCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_EntryGroupCfg_2eproto_once_);
void protobuf_AddDesc_EntryGroupCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_EntryGroupCfg_2eproto_once_,
                 &protobuf_AddDesc_EntryGroupCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_EntryGroupCfg_2eproto {
  StaticDescriptorInitializer_EntryGroupCfg_2eproto() {
    protobuf_AddDesc_EntryGroupCfg_2eproto();
  }
} static_descriptor_initializer_EntryGroupCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int EntryGroupCfg::kEntryGroupIDFieldNumber;
const int EntryGroupCfg::kEntryIDFieldNumber;
#endif  // !_MSC_VER

EntryGroupCfg::EntryGroupCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void EntryGroupCfg::InitAsDefaultInstance() {
}

EntryGroupCfg::EntryGroupCfg(const EntryGroupCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void EntryGroupCfg::SharedCtor() {
  _cached_size_ = 0;
  entrygroupid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EntryGroupCfg::~EntryGroupCfg() {
  SharedDtor();
}

void EntryGroupCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void EntryGroupCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EntryGroupCfg& EntryGroupCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_EntryGroupCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_EntryGroupCfg_2eproto();
#endif
  return *default_instance_;
}

EntryGroupCfg* EntryGroupCfg::default_instance_ = NULL;

EntryGroupCfg* EntryGroupCfg::New() const {
  return new EntryGroupCfg;
}

void EntryGroupCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    entrygroupid_ = 0u;
  }
  entryid_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool EntryGroupCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 EntryGroupID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entrygroupid_)));
          set_has_entrygroupid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_EntryID;
        break;
      }

      // repeated uint32 EntryID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_EntryID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 16, input, this->mutable_entryid())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_entryid())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_EntryID;
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

void EntryGroupCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 EntryGroupID = 1;
  if (has_entrygroupid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->entrygroupid(), output);
  }

  // repeated uint32 EntryID = 2;
  for (int i = 0; i < this->entryid_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      2, this->entryid(i), output);
  }

}

int EntryGroupCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 EntryGroupID = 1;
    if (has_entrygroupid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->entrygroupid());
    }

  }
  // repeated uint32 EntryID = 2;
  {
    int data_size = 0;
    for (int i = 0; i < this->entryid_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->entryid(i));
    }
    total_size += 1 * this->entryid_size() + data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EntryGroupCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EntryGroupCfg*>(&from));
}

void EntryGroupCfg::MergeFrom(const EntryGroupCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  entryid_.MergeFrom(from.entryid_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_entrygroupid()) {
      set_entrygroupid(from.entrygroupid());
    }
  }
}

void EntryGroupCfg::CopyFrom(const EntryGroupCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntryGroupCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void EntryGroupCfg::Swap(EntryGroupCfg* other) {
  if (other != this) {
    std::swap(entrygroupid_, other->entrygroupid_);
    entryid_.Swap(&other->entryid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string EntryGroupCfg::GetTypeName() const {
  return "com.cfg.vo.EntryGroupCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int EntryGroupCfgSet::kEntrygroupcfgFieldNumber;
#endif  // !_MSC_VER

EntryGroupCfgSet::EntryGroupCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void EntryGroupCfgSet::InitAsDefaultInstance() {
}

EntryGroupCfgSet::EntryGroupCfgSet(const EntryGroupCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void EntryGroupCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EntryGroupCfgSet::~EntryGroupCfgSet() {
  SharedDtor();
}

void EntryGroupCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void EntryGroupCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EntryGroupCfgSet& EntryGroupCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_EntryGroupCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_EntryGroupCfg_2eproto();
#endif
  return *default_instance_;
}

EntryGroupCfgSet* EntryGroupCfgSet::default_instance_ = NULL;

EntryGroupCfgSet* EntryGroupCfgSet::New() const {
  return new EntryGroupCfgSet;
}

void EntryGroupCfgSet::Clear() {
  entrygroupcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool EntryGroupCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.EntryGroupCfg entrygroupcfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_entrygroupcfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_entrygroupcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_entrygroupcfg;
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

void EntryGroupCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.EntryGroupCfg entrygroupcfg = 1;
  for (int i = 0; i < this->entrygroupcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->entrygroupcfg(i), output);
  }

}

int EntryGroupCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.EntryGroupCfg entrygroupcfg = 1;
  total_size += 1 * this->entrygroupcfg_size();
  for (int i = 0; i < this->entrygroupcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->entrygroupcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EntryGroupCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EntryGroupCfgSet*>(&from));
}

void EntryGroupCfgSet::MergeFrom(const EntryGroupCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  entrygroupcfg_.MergeFrom(from.entrygroupcfg_);
}

void EntryGroupCfgSet::CopyFrom(const EntryGroupCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntryGroupCfgSet::IsInitialized() const {

  for (int i = 0; i < entrygroupcfg_size(); i++) {
    if (!this->entrygroupcfg(i).IsInitialized()) return false;
  }
  return true;
}

void EntryGroupCfgSet::Swap(EntryGroupCfgSet* other) {
  if (other != this) {
    entrygroupcfg_.Swap(&other->entrygroupcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string EntryGroupCfgSet::GetTypeName() const {
  return "com.cfg.vo.EntryGroupCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
