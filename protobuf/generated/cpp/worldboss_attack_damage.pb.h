// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: worldboss_attack_damage.proto

#ifndef PROTOBUF_worldboss_5fattack_5fdamage_2eproto__INCLUDED
#define PROTOBUF_worldboss_5fattack_5fdamage_2eproto__INCLUDED

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
#include "msg_id.pb.h"
#include "msg_status_code.pb.h"
#include "constants.pb.h"
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_worldboss_5fattack_5fdamage_2eproto();
void protobuf_AssignDesc_worldboss_5fattack_5fdamage_2eproto();
void protobuf_ShutdownFile_worldboss_5fattack_5fdamage_2eproto();

class WorldbossAttackDamageRequest;
class WorldbossAttackDamageResponse;

// ===================================================================

class WorldbossAttackDamageRequest : public ::google::protobuf::MessageLite {
 public:
  WorldbossAttackDamageRequest();
  virtual ~WorldbossAttackDamageRequest();

  WorldbossAttackDamageRequest(const WorldbossAttackDamageRequest& from);

  inline WorldbossAttackDamageRequest& operator=(const WorldbossAttackDamageRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const WorldbossAttackDamageRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const WorldbossAttackDamageRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(WorldbossAttackDamageRequest* other);

  // implements Message ----------------------------------------------

  WorldbossAttackDamageRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const WorldbossAttackDamageRequest& from);
  void MergeFrom(const WorldbossAttackDamageRequest& from);
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

  // required .sanguo.MsgID msgID = 1;
  inline bool has_msgid() const;
  inline void clear_msgid();
  static const int kMsgIDFieldNumber = 1;
  inline ::sanguo::MsgID msgid() const;
  inline void set_msgid(::sanguo::MsgID value);

  // required uint32 damage = 2;
  inline bool has_damage() const;
  inline void clear_damage();
  static const int kDamageFieldNumber = 2;
  inline ::google::protobuf::uint32 damage() const;
  inline void set_damage(::google::protobuf::uint32 value);

  // required uint64 bossId = 3;
  inline bool has_bossid() const;
  inline void clear_bossid();
  static const int kBossIdFieldNumber = 3;
  inline ::google::protobuf::uint64 bossid() const;
  inline void set_bossid(::google::protobuf::uint64 value);

  // required .sanguo.WorldbossType bossType = 4;
  inline bool has_bosstype() const;
  inline void clear_bosstype();
  static const int kBossTypeFieldNumber = 4;
  inline ::sanguo::WorldbossType bosstype() const;
  inline void set_bosstype(::sanguo::WorldbossType value);

  // @@protoc_insertion_point(class_scope:sanguo.WorldbossAttackDamageRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_damage();
  inline void clear_has_damage();
  inline void set_has_bossid();
  inline void clear_has_bossid();
  inline void set_has_bosstype();
  inline void clear_has_bosstype();

  int msgid_;
  ::google::protobuf::uint32 damage_;
  ::google::protobuf::uint64 bossid_;
  int bosstype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_worldboss_5fattack_5fdamage_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_worldboss_5fattack_5fdamage_2eproto();
  #endif
  friend void protobuf_AssignDesc_worldboss_5fattack_5fdamage_2eproto();
  friend void protobuf_ShutdownFile_worldboss_5fattack_5fdamage_2eproto();

  void InitAsDefaultInstance();
  static WorldbossAttackDamageRequest* default_instance_;
};
// -------------------------------------------------------------------

class WorldbossAttackDamageResponse : public ::google::protobuf::MessageLite {
 public:
  WorldbossAttackDamageResponse();
  virtual ~WorldbossAttackDamageResponse();

  WorldbossAttackDamageResponse(const WorldbossAttackDamageResponse& from);

  inline WorldbossAttackDamageResponse& operator=(const WorldbossAttackDamageResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const WorldbossAttackDamageResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const WorldbossAttackDamageResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(WorldbossAttackDamageResponse* other);

  // implements Message ----------------------------------------------

  WorldbossAttackDamageResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const WorldbossAttackDamageResponse& from);
  void MergeFrom(const WorldbossAttackDamageResponse& from);
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

  // required .sanguo.MsgID msgID = 1;
  inline bool has_msgid() const;
  inline void clear_msgid();
  static const int kMsgIDFieldNumber = 1;
  inline ::sanguo::MsgID msgid() const;
  inline void set_msgid(::sanguo::MsgID value);

  // required .sanguo.StatusCode status = 2;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 2;
  inline ::sanguo::StatusCode status() const;
  inline void set_status(::sanguo::StatusCode value);

  // optional uint64 bossHP = 3;
  inline bool has_bosshp() const;
  inline void clear_bosshp();
  static const int kBossHPFieldNumber = 3;
  inline ::google::protobuf::uint64 bosshp() const;
  inline void set_bosshp(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:sanguo.WorldbossAttackDamageResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_bosshp();
  inline void clear_has_bosshp();

  int msgid_;
  int status_;
  ::google::protobuf::uint64 bosshp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_worldboss_5fattack_5fdamage_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_worldboss_5fattack_5fdamage_2eproto();
  #endif
  friend void protobuf_AssignDesc_worldboss_5fattack_5fdamage_2eproto();
  friend void protobuf_ShutdownFile_worldboss_5fattack_5fdamage_2eproto();

  void InitAsDefaultInstance();
  static WorldbossAttackDamageResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// WorldbossAttackDamageRequest

// required .sanguo.MsgID msgID = 1;
inline bool WorldbossAttackDamageRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorldbossAttackDamageRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WorldbossAttackDamageRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WorldbossAttackDamageRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID WorldbossAttackDamageRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void WorldbossAttackDamageRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required uint32 damage = 2;
inline bool WorldbossAttackDamageRequest::has_damage() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorldbossAttackDamageRequest::set_has_damage() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WorldbossAttackDamageRequest::clear_has_damage() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WorldbossAttackDamageRequest::clear_damage() {
  damage_ = 0u;
  clear_has_damage();
}
inline ::google::protobuf::uint32 WorldbossAttackDamageRequest::damage() const {
  return damage_;
}
inline void WorldbossAttackDamageRequest::set_damage(::google::protobuf::uint32 value) {
  set_has_damage();
  damage_ = value;
}

// required uint64 bossId = 3;
inline bool WorldbossAttackDamageRequest::has_bossid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WorldbossAttackDamageRequest::set_has_bossid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WorldbossAttackDamageRequest::clear_has_bossid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WorldbossAttackDamageRequest::clear_bossid() {
  bossid_ = GOOGLE_ULONGLONG(0);
  clear_has_bossid();
}
inline ::google::protobuf::uint64 WorldbossAttackDamageRequest::bossid() const {
  return bossid_;
}
inline void WorldbossAttackDamageRequest::set_bossid(::google::protobuf::uint64 value) {
  set_has_bossid();
  bossid_ = value;
}

// required .sanguo.WorldbossType bossType = 4;
inline bool WorldbossAttackDamageRequest::has_bosstype() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void WorldbossAttackDamageRequest::set_has_bosstype() {
  _has_bits_[0] |= 0x00000008u;
}
inline void WorldbossAttackDamageRequest::clear_has_bosstype() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void WorldbossAttackDamageRequest::clear_bosstype() {
  bosstype_ = 1;
  clear_has_bosstype();
}
inline ::sanguo::WorldbossType WorldbossAttackDamageRequest::bosstype() const {
  return static_cast< ::sanguo::WorldbossType >(bosstype_);
}
inline void WorldbossAttackDamageRequest::set_bosstype(::sanguo::WorldbossType value) {
  assert(::sanguo::WorldbossType_IsValid(value));
  set_has_bosstype();
  bosstype_ = value;
}

// -------------------------------------------------------------------

// WorldbossAttackDamageResponse

// required .sanguo.MsgID msgID = 1;
inline bool WorldbossAttackDamageResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorldbossAttackDamageResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WorldbossAttackDamageResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WorldbossAttackDamageResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID WorldbossAttackDamageResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void WorldbossAttackDamageResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool WorldbossAttackDamageResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorldbossAttackDamageResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WorldbossAttackDamageResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WorldbossAttackDamageResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode WorldbossAttackDamageResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void WorldbossAttackDamageResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional uint64 bossHP = 3;
inline bool WorldbossAttackDamageResponse::has_bosshp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WorldbossAttackDamageResponse::set_has_bosshp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WorldbossAttackDamageResponse::clear_has_bosshp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WorldbossAttackDamageResponse::clear_bosshp() {
  bosshp_ = GOOGLE_ULONGLONG(0);
  clear_has_bosshp();
}
inline ::google::protobuf::uint64 WorldbossAttackDamageResponse::bosshp() const {
  return bosshp_;
}
inline void WorldbossAttackDamageResponse::set_bosshp(::google::protobuf::uint64 value) {
  set_has_bosshp();
  bosshp_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_worldboss_5fattack_5fdamage_2eproto__INCLUDED
