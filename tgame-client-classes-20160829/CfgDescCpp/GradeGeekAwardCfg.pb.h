// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GradeGeekAwardCfg.proto

#ifndef PROTOBUF_GradeGeekAwardCfg_2eproto__INCLUDED
#define PROTOBUF_GradeGeekAwardCfg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_GradeGeekAwardCfg_2eproto();
void protobuf_AssignDesc_GradeGeekAwardCfg_2eproto();
void protobuf_ShutdownFile_GradeGeekAwardCfg_2eproto();

class GradeGeekAwardElmt;
class GradeGeekAwardCfg;
class GradeGeekAwardCfgSet;

// ===================================================================

class GradeGeekAwardElmt : public ::google::protobuf::MessageLite {
 public:
  GradeGeekAwardElmt();
  virtual ~GradeGeekAwardElmt();

  GradeGeekAwardElmt(const GradeGeekAwardElmt& from);

  inline GradeGeekAwardElmt& operator=(const GradeGeekAwardElmt& from) {
    CopyFrom(from);
    return *this;
  }

  static const GradeGeekAwardElmt& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GradeGeekAwardElmt* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GradeGeekAwardElmt* other);

  // implements Message ----------------------------------------------

  GradeGeekAwardElmt* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GradeGeekAwardElmt& from);
  void MergeFrom(const GradeGeekAwardElmt& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 ElementType = 1;
  inline bool has_elementtype() const;
  inline void clear_elementtype();
  static const int kElementTypeFieldNumber = 1;
  inline ::google::protobuf::uint32 elementtype() const;
  inline void set_elementtype(::google::protobuf::uint32 value);

  // required uint32 ElementID = 2;
  inline bool has_elementid() const;
  inline void clear_elementid();
  static const int kElementIDFieldNumber = 2;
  inline ::google::protobuf::uint32 elementid() const;
  inline void set_elementid(::google::protobuf::uint32 value);

  // required uint32 ElementCnt = 3;
  inline bool has_elementcnt() const;
  inline void clear_elementcnt();
  static const int kElementCntFieldNumber = 3;
  inline ::google::protobuf::uint32 elementcnt() const;
  inline void set_elementcnt(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.GradeGeekAwardElmt)
 private:
  inline void set_has_elementtype();
  inline void clear_has_elementtype();
  inline void set_has_elementid();
  inline void clear_has_elementid();
  inline void set_has_elementcnt();
  inline void clear_has_elementcnt();

  ::google::protobuf::uint32 elementtype_;
  ::google::protobuf::uint32 elementid_;
  ::google::protobuf::uint32 elementcnt_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_GradeGeekAwardCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_GradeGeekAwardCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_GradeGeekAwardCfg_2eproto();
  friend void protobuf_ShutdownFile_GradeGeekAwardCfg_2eproto();

  void InitAsDefaultInstance();
  static GradeGeekAwardElmt* default_instance_;
};
// -------------------------------------------------------------------

class GradeGeekAwardCfg : public ::google::protobuf::MessageLite {
 public:
  GradeGeekAwardCfg();
  virtual ~GradeGeekAwardCfg();

  GradeGeekAwardCfg(const GradeGeekAwardCfg& from);

  inline GradeGeekAwardCfg& operator=(const GradeGeekAwardCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const GradeGeekAwardCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GradeGeekAwardCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GradeGeekAwardCfg* other);

  // implements Message ----------------------------------------------

  GradeGeekAwardCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GradeGeekAwardCfg& from);
  void MergeFrom(const GradeGeekAwardCfg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 Level = 1;
  inline bool has_level() const;
  inline void clear_level();
  static const int kLevelFieldNumber = 1;
  inline ::google::protobuf::uint32 level() const;
  inline void set_level(::google::protobuf::uint32 value);

  // required uint32 Grade = 2;
  inline bool has_grade() const;
  inline void clear_grade();
  static const int kGradeFieldNumber = 2;
  inline ::google::protobuf::uint32 grade() const;
  inline void set_grade(::google::protobuf::uint32 value);

  // required uint32 LimitNum = 3;
  inline bool has_limitnum() const;
  inline void clear_limitnum();
  static const int kLimitNumFieldNumber = 3;
  inline ::google::protobuf::uint32 limitnum() const;
  inline void set_limitnum(::google::protobuf::uint32 value);

  // repeated .com.cfg.vo.GradeGeekAwardElmt ElmtLst = 4;
  inline int elmtlst_size() const;
  inline void clear_elmtlst();
  static const int kElmtLstFieldNumber = 4;
  inline const ::com::cfg::vo::GradeGeekAwardElmt& elmtlst(int index) const;
  inline ::com::cfg::vo::GradeGeekAwardElmt* mutable_elmtlst(int index);
  inline ::com::cfg::vo::GradeGeekAwardElmt* add_elmtlst();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GradeGeekAwardElmt >&
      elmtlst() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GradeGeekAwardElmt >*
      mutable_elmtlst();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.GradeGeekAwardCfg)
 private:
  inline void set_has_level();
  inline void clear_has_level();
  inline void set_has_grade();
  inline void clear_has_grade();
  inline void set_has_limitnum();
  inline void clear_has_limitnum();

  ::google::protobuf::uint32 level_;
  ::google::protobuf::uint32 grade_;
  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GradeGeekAwardElmt > elmtlst_;
  ::google::protobuf::uint32 limitnum_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_GradeGeekAwardCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_GradeGeekAwardCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_GradeGeekAwardCfg_2eproto();
  friend void protobuf_ShutdownFile_GradeGeekAwardCfg_2eproto();

  void InitAsDefaultInstance();
  static GradeGeekAwardCfg* default_instance_;
};
// -------------------------------------------------------------------

class GradeGeekAwardCfgSet : public ::google::protobuf::MessageLite {
 public:
  GradeGeekAwardCfgSet();
  virtual ~GradeGeekAwardCfgSet();

  GradeGeekAwardCfgSet(const GradeGeekAwardCfgSet& from);

  inline GradeGeekAwardCfgSet& operator=(const GradeGeekAwardCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const GradeGeekAwardCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GradeGeekAwardCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GradeGeekAwardCfgSet* other);

  // implements Message ----------------------------------------------

  GradeGeekAwardCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GradeGeekAwardCfgSet& from);
  void MergeFrom(const GradeGeekAwardCfgSet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .com.cfg.vo.GradeGeekAwardCfg gradeGeekAwardCfg = 1;
  inline int gradegeekawardcfg_size() const;
  inline void clear_gradegeekawardcfg();
  static const int kGradeGeekAwardCfgFieldNumber = 1;
  inline const ::com::cfg::vo::GradeGeekAwardCfg& gradegeekawardcfg(int index) const;
  inline ::com::cfg::vo::GradeGeekAwardCfg* mutable_gradegeekawardcfg(int index);
  inline ::com::cfg::vo::GradeGeekAwardCfg* add_gradegeekawardcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GradeGeekAwardCfg >&
      gradegeekawardcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GradeGeekAwardCfg >*
      mutable_gradegeekawardcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.GradeGeekAwardCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GradeGeekAwardCfg > gradegeekawardcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_GradeGeekAwardCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_GradeGeekAwardCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_GradeGeekAwardCfg_2eproto();
  friend void protobuf_ShutdownFile_GradeGeekAwardCfg_2eproto();

  void InitAsDefaultInstance();
  static GradeGeekAwardCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// GradeGeekAwardElmt

// required uint32 ElementType = 1;
inline bool GradeGeekAwardElmt::has_elementtype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GradeGeekAwardElmt::set_has_elementtype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GradeGeekAwardElmt::clear_has_elementtype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GradeGeekAwardElmt::clear_elementtype() {
  elementtype_ = 0u;
  clear_has_elementtype();
}
inline ::google::protobuf::uint32 GradeGeekAwardElmt::elementtype() const {
  return elementtype_;
}
inline void GradeGeekAwardElmt::set_elementtype(::google::protobuf::uint32 value) {
  set_has_elementtype();
  elementtype_ = value;
}

// required uint32 ElementID = 2;
inline bool GradeGeekAwardElmt::has_elementid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GradeGeekAwardElmt::set_has_elementid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GradeGeekAwardElmt::clear_has_elementid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GradeGeekAwardElmt::clear_elementid() {
  elementid_ = 0u;
  clear_has_elementid();
}
inline ::google::protobuf::uint32 GradeGeekAwardElmt::elementid() const {
  return elementid_;
}
inline void GradeGeekAwardElmt::set_elementid(::google::protobuf::uint32 value) {
  set_has_elementid();
  elementid_ = value;
}

// required uint32 ElementCnt = 3;
inline bool GradeGeekAwardElmt::has_elementcnt() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GradeGeekAwardElmt::set_has_elementcnt() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GradeGeekAwardElmt::clear_has_elementcnt() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GradeGeekAwardElmt::clear_elementcnt() {
  elementcnt_ = 0u;
  clear_has_elementcnt();
}
inline ::google::protobuf::uint32 GradeGeekAwardElmt::elementcnt() const {
  return elementcnt_;
}
inline void GradeGeekAwardElmt::set_elementcnt(::google::protobuf::uint32 value) {
  set_has_elementcnt();
  elementcnt_ = value;
}

// -------------------------------------------------------------------

// GradeGeekAwardCfg

// required uint32 Level = 1;
inline bool GradeGeekAwardCfg::has_level() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GradeGeekAwardCfg::set_has_level() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GradeGeekAwardCfg::clear_has_level() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GradeGeekAwardCfg::clear_level() {
  level_ = 0u;
  clear_has_level();
}
inline ::google::protobuf::uint32 GradeGeekAwardCfg::level() const {
  return level_;
}
inline void GradeGeekAwardCfg::set_level(::google::protobuf::uint32 value) {
  set_has_level();
  level_ = value;
}

// required uint32 Grade = 2;
inline bool GradeGeekAwardCfg::has_grade() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GradeGeekAwardCfg::set_has_grade() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GradeGeekAwardCfg::clear_has_grade() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GradeGeekAwardCfg::clear_grade() {
  grade_ = 0u;
  clear_has_grade();
}
inline ::google::protobuf::uint32 GradeGeekAwardCfg::grade() const {
  return grade_;
}
inline void GradeGeekAwardCfg::set_grade(::google::protobuf::uint32 value) {
  set_has_grade();
  grade_ = value;
}

// required uint32 LimitNum = 3;
inline bool GradeGeekAwardCfg::has_limitnum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GradeGeekAwardCfg::set_has_limitnum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GradeGeekAwardCfg::clear_has_limitnum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GradeGeekAwardCfg::clear_limitnum() {
  limitnum_ = 0u;
  clear_has_limitnum();
}
inline ::google::protobuf::uint32 GradeGeekAwardCfg::limitnum() const {
  return limitnum_;
}
inline void GradeGeekAwardCfg::set_limitnum(::google::protobuf::uint32 value) {
  set_has_limitnum();
  limitnum_ = value;
}

// repeated .com.cfg.vo.GradeGeekAwardElmt ElmtLst = 4;
inline int GradeGeekAwardCfg::elmtlst_size() const {
  return elmtlst_.size();
}
inline void GradeGeekAwardCfg::clear_elmtlst() {
  elmtlst_.Clear();
}
inline const ::com::cfg::vo::GradeGeekAwardElmt& GradeGeekAwardCfg::elmtlst(int index) const {
  return elmtlst_.Get(index);
}
inline ::com::cfg::vo::GradeGeekAwardElmt* GradeGeekAwardCfg::mutable_elmtlst(int index) {
  return elmtlst_.Mutable(index);
}
inline ::com::cfg::vo::GradeGeekAwardElmt* GradeGeekAwardCfg::add_elmtlst() {
  return elmtlst_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GradeGeekAwardElmt >&
GradeGeekAwardCfg::elmtlst() const {
  return elmtlst_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GradeGeekAwardElmt >*
GradeGeekAwardCfg::mutable_elmtlst() {
  return &elmtlst_;
}

// -------------------------------------------------------------------

// GradeGeekAwardCfgSet

// repeated .com.cfg.vo.GradeGeekAwardCfg gradeGeekAwardCfg = 1;
inline int GradeGeekAwardCfgSet::gradegeekawardcfg_size() const {
  return gradegeekawardcfg_.size();
}
inline void GradeGeekAwardCfgSet::clear_gradegeekawardcfg() {
  gradegeekawardcfg_.Clear();
}
inline const ::com::cfg::vo::GradeGeekAwardCfg& GradeGeekAwardCfgSet::gradegeekawardcfg(int index) const {
  return gradegeekawardcfg_.Get(index);
}
inline ::com::cfg::vo::GradeGeekAwardCfg* GradeGeekAwardCfgSet::mutable_gradegeekawardcfg(int index) {
  return gradegeekawardcfg_.Mutable(index);
}
inline ::com::cfg::vo::GradeGeekAwardCfg* GradeGeekAwardCfgSet::add_gradegeekawardcfg() {
  return gradegeekawardcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GradeGeekAwardCfg >&
GradeGeekAwardCfgSet::gradegeekawardcfg() const {
  return gradegeekawardcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::GradeGeekAwardCfg >*
GradeGeekAwardCfgSet::mutable_gradegeekawardcfg() {
  return &gradegeekawardcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GradeGeekAwardCfg_2eproto__INCLUDED