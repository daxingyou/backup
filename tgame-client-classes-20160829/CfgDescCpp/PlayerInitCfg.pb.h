// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerInitCfg.proto

#ifndef PROTOBUF_PlayerInitCfg_2eproto__INCLUDED
#define PROTOBUF_PlayerInitCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_PlayerInitCfg_2eproto();
void protobuf_AssignDesc_PlayerInitCfg_2eproto();
void protobuf_ShutdownFile_PlayerInitCfg_2eproto();

class PlayerInitCfg;
class PlayerInitCfgSet;

// ===================================================================

class PlayerInitCfg : public ::google::protobuf::MessageLite {
 public:
  PlayerInitCfg();
  virtual ~PlayerInitCfg();

  PlayerInitCfg(const PlayerInitCfg& from);

  inline PlayerInitCfg& operator=(const PlayerInitCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const PlayerInitCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PlayerInitCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PlayerInitCfg* other);

  // implements Message ----------------------------------------------

  PlayerInitCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PlayerInitCfg& from);
  void MergeFrom(const PlayerInitCfg& from);
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

  // required uint32 PlayerID = 1;
  inline bool has_playerid() const;
  inline void clear_playerid();
  static const int kPlayerIDFieldNumber = 1;
  inline ::google::protobuf::uint32 playerid() const;
  inline void set_playerid(::google::protobuf::uint32 value);

  // required uint32 WeaponCfgID = 2;
  inline bool has_weaponcfgid() const;
  inline void clear_weaponcfgid();
  static const int kWeaponCfgIDFieldNumber = 2;
  inline ::google::protobuf::uint32 weaponcfgid() const;
  inline void set_weaponcfgid(::google::protobuf::uint32 value);

  // required uint32 DodgeDist = 3;
  inline bool has_dodgedist() const;
  inline void clear_dodgedist();
  static const int kDodgeDistFieldNumber = 3;
  inline ::google::protobuf::uint32 dodgedist() const;
  inline void set_dodgedist(::google::protobuf::uint32 value);

  // required uint32 DodgeCD = 4;
  inline bool has_dodgecd() const;
  inline void clear_dodgecd();
  static const int kDodgeCDFieldNumber = 4;
  inline ::google::protobuf::uint32 dodgecd() const;
  inline void set_dodgecd(::google::protobuf::uint32 value);

  // required uint32 ShowID = 5;
  inline bool has_showid() const;
  inline void clear_showid();
  static const int kShowIDFieldNumber = 5;
  inline ::google::protobuf::uint32 showid() const;
  inline void set_showid(::google::protobuf::uint32 value);

  // required uint32 EvolutionID = 6;
  inline bool has_evolutionid() const;
  inline void clear_evolutionid();
  static const int kEvolutionIDFieldNumber = 6;
  inline ::google::protobuf::uint32 evolutionid() const;
  inline void set_evolutionid(::google::protobuf::uint32 value);

  // required uint32 Hit = 7;
  inline bool has_hit() const;
  inline void clear_hit();
  static const int kHitFieldNumber = 7;
  inline ::google::protobuf::uint32 hit() const;
  inline void set_hit(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.PlayerInitCfg)
 private:
  inline void set_has_playerid();
  inline void clear_has_playerid();
  inline void set_has_weaponcfgid();
  inline void clear_has_weaponcfgid();
  inline void set_has_dodgedist();
  inline void clear_has_dodgedist();
  inline void set_has_dodgecd();
  inline void clear_has_dodgecd();
  inline void set_has_showid();
  inline void clear_has_showid();
  inline void set_has_evolutionid();
  inline void clear_has_evolutionid();
  inline void set_has_hit();
  inline void clear_has_hit();

  ::google::protobuf::uint32 playerid_;
  ::google::protobuf::uint32 weaponcfgid_;
  ::google::protobuf::uint32 dodgedist_;
  ::google::protobuf::uint32 dodgecd_;
  ::google::protobuf::uint32 showid_;
  ::google::protobuf::uint32 evolutionid_;
  ::google::protobuf::uint32 hit_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PlayerInitCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PlayerInitCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_PlayerInitCfg_2eproto();
  friend void protobuf_ShutdownFile_PlayerInitCfg_2eproto();

  void InitAsDefaultInstance();
  static PlayerInitCfg* default_instance_;
};
// -------------------------------------------------------------------

class PlayerInitCfgSet : public ::google::protobuf::MessageLite {
 public:
  PlayerInitCfgSet();
  virtual ~PlayerInitCfgSet();

  PlayerInitCfgSet(const PlayerInitCfgSet& from);

  inline PlayerInitCfgSet& operator=(const PlayerInitCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const PlayerInitCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PlayerInitCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PlayerInitCfgSet* other);

  // implements Message ----------------------------------------------

  PlayerInitCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PlayerInitCfgSet& from);
  void MergeFrom(const PlayerInitCfgSet& from);
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

  // repeated .com.cfg.vo.PlayerInitCfg playerinitcfg = 1;
  inline int playerinitcfg_size() const;
  inline void clear_playerinitcfg();
  static const int kPlayerinitcfgFieldNumber = 1;
  inline const ::com::cfg::vo::PlayerInitCfg& playerinitcfg(int index) const;
  inline ::com::cfg::vo::PlayerInitCfg* mutable_playerinitcfg(int index);
  inline ::com::cfg::vo::PlayerInitCfg* add_playerinitcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PlayerInitCfg >&
      playerinitcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PlayerInitCfg >*
      mutable_playerinitcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.PlayerInitCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PlayerInitCfg > playerinitcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PlayerInitCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PlayerInitCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_PlayerInitCfg_2eproto();
  friend void protobuf_ShutdownFile_PlayerInitCfg_2eproto();

  void InitAsDefaultInstance();
  static PlayerInitCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// PlayerInitCfg

// required uint32 PlayerID = 1;
inline bool PlayerInitCfg::has_playerid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlayerInitCfg::set_has_playerid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlayerInitCfg::clear_has_playerid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlayerInitCfg::clear_playerid() {
  playerid_ = 0u;
  clear_has_playerid();
}
inline ::google::protobuf::uint32 PlayerInitCfg::playerid() const {
  return playerid_;
}
inline void PlayerInitCfg::set_playerid(::google::protobuf::uint32 value) {
  set_has_playerid();
  playerid_ = value;
}

// required uint32 WeaponCfgID = 2;
inline bool PlayerInitCfg::has_weaponcfgid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayerInitCfg::set_has_weaponcfgid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayerInitCfg::clear_has_weaponcfgid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayerInitCfg::clear_weaponcfgid() {
  weaponcfgid_ = 0u;
  clear_has_weaponcfgid();
}
inline ::google::protobuf::uint32 PlayerInitCfg::weaponcfgid() const {
  return weaponcfgid_;
}
inline void PlayerInitCfg::set_weaponcfgid(::google::protobuf::uint32 value) {
  set_has_weaponcfgid();
  weaponcfgid_ = value;
}

// required uint32 DodgeDist = 3;
inline bool PlayerInitCfg::has_dodgedist() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PlayerInitCfg::set_has_dodgedist() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PlayerInitCfg::clear_has_dodgedist() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PlayerInitCfg::clear_dodgedist() {
  dodgedist_ = 0u;
  clear_has_dodgedist();
}
inline ::google::protobuf::uint32 PlayerInitCfg::dodgedist() const {
  return dodgedist_;
}
inline void PlayerInitCfg::set_dodgedist(::google::protobuf::uint32 value) {
  set_has_dodgedist();
  dodgedist_ = value;
}

// required uint32 DodgeCD = 4;
inline bool PlayerInitCfg::has_dodgecd() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PlayerInitCfg::set_has_dodgecd() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PlayerInitCfg::clear_has_dodgecd() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PlayerInitCfg::clear_dodgecd() {
  dodgecd_ = 0u;
  clear_has_dodgecd();
}
inline ::google::protobuf::uint32 PlayerInitCfg::dodgecd() const {
  return dodgecd_;
}
inline void PlayerInitCfg::set_dodgecd(::google::protobuf::uint32 value) {
  set_has_dodgecd();
  dodgecd_ = value;
}

// required uint32 ShowID = 5;
inline bool PlayerInitCfg::has_showid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PlayerInitCfg::set_has_showid() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PlayerInitCfg::clear_has_showid() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PlayerInitCfg::clear_showid() {
  showid_ = 0u;
  clear_has_showid();
}
inline ::google::protobuf::uint32 PlayerInitCfg::showid() const {
  return showid_;
}
inline void PlayerInitCfg::set_showid(::google::protobuf::uint32 value) {
  set_has_showid();
  showid_ = value;
}

// required uint32 EvolutionID = 6;
inline bool PlayerInitCfg::has_evolutionid() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PlayerInitCfg::set_has_evolutionid() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PlayerInitCfg::clear_has_evolutionid() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PlayerInitCfg::clear_evolutionid() {
  evolutionid_ = 0u;
  clear_has_evolutionid();
}
inline ::google::protobuf::uint32 PlayerInitCfg::evolutionid() const {
  return evolutionid_;
}
inline void PlayerInitCfg::set_evolutionid(::google::protobuf::uint32 value) {
  set_has_evolutionid();
  evolutionid_ = value;
}

// required uint32 Hit = 7;
inline bool PlayerInitCfg::has_hit() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void PlayerInitCfg::set_has_hit() {
  _has_bits_[0] |= 0x00000040u;
}
inline void PlayerInitCfg::clear_has_hit() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void PlayerInitCfg::clear_hit() {
  hit_ = 0u;
  clear_has_hit();
}
inline ::google::protobuf::uint32 PlayerInitCfg::hit() const {
  return hit_;
}
inline void PlayerInitCfg::set_hit(::google::protobuf::uint32 value) {
  set_has_hit();
  hit_ = value;
}

// -------------------------------------------------------------------

// PlayerInitCfgSet

// repeated .com.cfg.vo.PlayerInitCfg playerinitcfg = 1;
inline int PlayerInitCfgSet::playerinitcfg_size() const {
  return playerinitcfg_.size();
}
inline void PlayerInitCfgSet::clear_playerinitcfg() {
  playerinitcfg_.Clear();
}
inline const ::com::cfg::vo::PlayerInitCfg& PlayerInitCfgSet::playerinitcfg(int index) const {
  return playerinitcfg_.Get(index);
}
inline ::com::cfg::vo::PlayerInitCfg* PlayerInitCfgSet::mutable_playerinitcfg(int index) {
  return playerinitcfg_.Mutable(index);
}
inline ::com::cfg::vo::PlayerInitCfg* PlayerInitCfgSet::add_playerinitcfg() {
  return playerinitcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PlayerInitCfg >&
PlayerInitCfgSet::playerinitcfg() const {
  return playerinitcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PlayerInitCfg >*
PlayerInitCfgSet::mutable_playerinitcfg() {
  return &playerinitcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PlayerInitCfg_2eproto__INCLUDED