// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PackageCfg.proto

#ifndef PROTOBUF_PackageCfg_2eproto__INCLUDED
#define PROTOBUF_PackageCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_PackageCfg_2eproto();
void protobuf_AssignDesc_PackageCfg_2eproto();
void protobuf_ShutdownFile_PackageCfg_2eproto();

class PackageElmt;
class PackageCfg;
class PackageCfgSet;

// ===================================================================

class PackageElmt : public ::google::protobuf::MessageLite {
 public:
  PackageElmt();
  virtual ~PackageElmt();

  PackageElmt(const PackageElmt& from);

  inline PackageElmt& operator=(const PackageElmt& from) {
    CopyFrom(from);
    return *this;
  }

  static const PackageElmt& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PackageElmt* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PackageElmt* other);

  // implements Message ----------------------------------------------

  PackageElmt* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PackageElmt& from);
  void MergeFrom(const PackageElmt& from);
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

  // required uint32 ElementCntMin = 3;
  inline bool has_elementcntmin() const;
  inline void clear_elementcntmin();
  static const int kElementCntMinFieldNumber = 3;
  inline ::google::protobuf::uint32 elementcntmin() const;
  inline void set_elementcntmin(::google::protobuf::uint32 value);

  // required uint32 ElementCntMax = 4;
  inline bool has_elementcntmax() const;
  inline void clear_elementcntmax();
  static const int kElementCntMaxFieldNumber = 4;
  inline ::google::protobuf::uint32 elementcntmax() const;
  inline void set_elementcntmax(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.PackageElmt)
 private:
  inline void set_has_elementtype();
  inline void clear_has_elementtype();
  inline void set_has_elementid();
  inline void clear_has_elementid();
  inline void set_has_elementcntmin();
  inline void clear_has_elementcntmin();
  inline void set_has_elementcntmax();
  inline void clear_has_elementcntmax();

  ::google::protobuf::uint32 elementtype_;
  ::google::protobuf::uint32 elementid_;
  ::google::protobuf::uint32 elementcntmin_;
  ::google::protobuf::uint32 elementcntmax_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PackageCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PackageCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_PackageCfg_2eproto();
  friend void protobuf_ShutdownFile_PackageCfg_2eproto();

  void InitAsDefaultInstance();
  static PackageElmt* default_instance_;
};
// -------------------------------------------------------------------

class PackageCfg : public ::google::protobuf::MessageLite {
 public:
  PackageCfg();
  virtual ~PackageCfg();

  PackageCfg(const PackageCfg& from);

  inline PackageCfg& operator=(const PackageCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const PackageCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PackageCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PackageCfg* other);

  // implements Message ----------------------------------------------

  PackageCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PackageCfg& from);
  void MergeFrom(const PackageCfg& from);
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

  // required uint32 PackageID = 1;
  inline bool has_packageid() const;
  inline void clear_packageid();
  static const int kPackageIDFieldNumber = 1;
  inline ::google::protobuf::uint32 packageid() const;
  inline void set_packageid(::google::protobuf::uint32 value);

  // required uint32 OpenLv = 2;
  inline bool has_openlv() const;
  inline void clear_openlv();
  static const int kOpenLvFieldNumber = 2;
  inline ::google::protobuf::uint32 openlv() const;
  inline void set_openlv(::google::protobuf::uint32 value);

  // repeated .com.cfg.vo.PackageElmt ElmtLst = 3;
  inline int elmtlst_size() const;
  inline void clear_elmtlst();
  static const int kElmtLstFieldNumber = 3;
  inline const ::com::cfg::vo::PackageElmt& elmtlst(int index) const;
  inline ::com::cfg::vo::PackageElmt* mutable_elmtlst(int index);
  inline ::com::cfg::vo::PackageElmt* add_elmtlst();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PackageElmt >&
      elmtlst() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PackageElmt >*
      mutable_elmtlst();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.PackageCfg)
 private:
  inline void set_has_packageid();
  inline void clear_has_packageid();
  inline void set_has_openlv();
  inline void clear_has_openlv();

  ::google::protobuf::uint32 packageid_;
  ::google::protobuf::uint32 openlv_;
  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PackageElmt > elmtlst_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PackageCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PackageCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_PackageCfg_2eproto();
  friend void protobuf_ShutdownFile_PackageCfg_2eproto();

  void InitAsDefaultInstance();
  static PackageCfg* default_instance_;
};
// -------------------------------------------------------------------

class PackageCfgSet : public ::google::protobuf::MessageLite {
 public:
  PackageCfgSet();
  virtual ~PackageCfgSet();

  PackageCfgSet(const PackageCfgSet& from);

  inline PackageCfgSet& operator=(const PackageCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const PackageCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PackageCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PackageCfgSet* other);

  // implements Message ----------------------------------------------

  PackageCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PackageCfgSet& from);
  void MergeFrom(const PackageCfgSet& from);
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

  // repeated .com.cfg.vo.PackageCfg packagecfg = 1;
  inline int packagecfg_size() const;
  inline void clear_packagecfg();
  static const int kPackagecfgFieldNumber = 1;
  inline const ::com::cfg::vo::PackageCfg& packagecfg(int index) const;
  inline ::com::cfg::vo::PackageCfg* mutable_packagecfg(int index);
  inline ::com::cfg::vo::PackageCfg* add_packagecfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PackageCfg >&
      packagecfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PackageCfg >*
      mutable_packagecfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.PackageCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PackageCfg > packagecfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PackageCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PackageCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_PackageCfg_2eproto();
  friend void protobuf_ShutdownFile_PackageCfg_2eproto();

  void InitAsDefaultInstance();
  static PackageCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// PackageElmt

// required uint32 ElementType = 1;
inline bool PackageElmt::has_elementtype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PackageElmt::set_has_elementtype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PackageElmt::clear_has_elementtype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PackageElmt::clear_elementtype() {
  elementtype_ = 0u;
  clear_has_elementtype();
}
inline ::google::protobuf::uint32 PackageElmt::elementtype() const {
  return elementtype_;
}
inline void PackageElmt::set_elementtype(::google::protobuf::uint32 value) {
  set_has_elementtype();
  elementtype_ = value;
}

// required uint32 ElementID = 2;
inline bool PackageElmt::has_elementid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PackageElmt::set_has_elementid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PackageElmt::clear_has_elementid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PackageElmt::clear_elementid() {
  elementid_ = 0u;
  clear_has_elementid();
}
inline ::google::protobuf::uint32 PackageElmt::elementid() const {
  return elementid_;
}
inline void PackageElmt::set_elementid(::google::protobuf::uint32 value) {
  set_has_elementid();
  elementid_ = value;
}

// required uint32 ElementCntMin = 3;
inline bool PackageElmt::has_elementcntmin() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PackageElmt::set_has_elementcntmin() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PackageElmt::clear_has_elementcntmin() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PackageElmt::clear_elementcntmin() {
  elementcntmin_ = 0u;
  clear_has_elementcntmin();
}
inline ::google::protobuf::uint32 PackageElmt::elementcntmin() const {
  return elementcntmin_;
}
inline void PackageElmt::set_elementcntmin(::google::protobuf::uint32 value) {
  set_has_elementcntmin();
  elementcntmin_ = value;
}

// required uint32 ElementCntMax = 4;
inline bool PackageElmt::has_elementcntmax() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PackageElmt::set_has_elementcntmax() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PackageElmt::clear_has_elementcntmax() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PackageElmt::clear_elementcntmax() {
  elementcntmax_ = 0u;
  clear_has_elementcntmax();
}
inline ::google::protobuf::uint32 PackageElmt::elementcntmax() const {
  return elementcntmax_;
}
inline void PackageElmt::set_elementcntmax(::google::protobuf::uint32 value) {
  set_has_elementcntmax();
  elementcntmax_ = value;
}

// -------------------------------------------------------------------

// PackageCfg

// required uint32 PackageID = 1;
inline bool PackageCfg::has_packageid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PackageCfg::set_has_packageid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PackageCfg::clear_has_packageid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PackageCfg::clear_packageid() {
  packageid_ = 0u;
  clear_has_packageid();
}
inline ::google::protobuf::uint32 PackageCfg::packageid() const {
  return packageid_;
}
inline void PackageCfg::set_packageid(::google::protobuf::uint32 value) {
  set_has_packageid();
  packageid_ = value;
}

// required uint32 OpenLv = 2;
inline bool PackageCfg::has_openlv() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PackageCfg::set_has_openlv() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PackageCfg::clear_has_openlv() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PackageCfg::clear_openlv() {
  openlv_ = 0u;
  clear_has_openlv();
}
inline ::google::protobuf::uint32 PackageCfg::openlv() const {
  return openlv_;
}
inline void PackageCfg::set_openlv(::google::protobuf::uint32 value) {
  set_has_openlv();
  openlv_ = value;
}

// repeated .com.cfg.vo.PackageElmt ElmtLst = 3;
inline int PackageCfg::elmtlst_size() const {
  return elmtlst_.size();
}
inline void PackageCfg::clear_elmtlst() {
  elmtlst_.Clear();
}
inline const ::com::cfg::vo::PackageElmt& PackageCfg::elmtlst(int index) const {
  return elmtlst_.Get(index);
}
inline ::com::cfg::vo::PackageElmt* PackageCfg::mutable_elmtlst(int index) {
  return elmtlst_.Mutable(index);
}
inline ::com::cfg::vo::PackageElmt* PackageCfg::add_elmtlst() {
  return elmtlst_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PackageElmt >&
PackageCfg::elmtlst() const {
  return elmtlst_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PackageElmt >*
PackageCfg::mutable_elmtlst() {
  return &elmtlst_;
}

// -------------------------------------------------------------------

// PackageCfgSet

// repeated .com.cfg.vo.PackageCfg packagecfg = 1;
inline int PackageCfgSet::packagecfg_size() const {
  return packagecfg_.size();
}
inline void PackageCfgSet::clear_packagecfg() {
  packagecfg_.Clear();
}
inline const ::com::cfg::vo::PackageCfg& PackageCfgSet::packagecfg(int index) const {
  return packagecfg_.Get(index);
}
inline ::com::cfg::vo::PackageCfg* PackageCfgSet::mutable_packagecfg(int index) {
  return packagecfg_.Mutable(index);
}
inline ::com::cfg::vo::PackageCfg* PackageCfgSet::add_packagecfg() {
  return packagecfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PackageCfg >&
PackageCfgSet::packagecfg() const {
  return packagecfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PackageCfg >*
PackageCfgSet::mutable_packagecfg() {
  return &packagecfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PackageCfg_2eproto__INCLUDED
