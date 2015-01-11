// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: worldboss_count_down.proto

#ifndef PROTOBUF_worldboss_5fcount_5fdown_2eproto__INCLUDED
#define PROTOBUF_worldboss_5fcount_5fdown_2eproto__INCLUDED

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
void  protobuf_AddDesc_worldboss_5fcount_5fdown_2eproto();
void protobuf_AssignDesc_worldboss_5fcount_5fdown_2eproto();
void protobuf_ShutdownFile_worldboss_5fcount_5fdown_2eproto();

class WorldbossCountDownRequest;
class WorldbossCountDownResponse;

// ===================================================================

class WorldbossCountDownRequest : public ::google::protobuf::MessageLite {
 public:
  WorldbossCountDownRequest();
  virtual ~WorldbossCountDownRequest();

  WorldbossCountDownRequest(const WorldbossCountDownRequest& from);

  inline WorldbossCountDownRequest& operator=(const WorldbossCountDownRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const WorldbossCountDownRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const WorldbossCountDownRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(WorldbossCountDownRequest* other);

  // implements Message ----------------------------------------------

  WorldbossCountDownRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const WorldbossCountDownRequest& from);
  void MergeFrom(const WorldbossCountDownRequest& from);
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

  // required uint64 bossId = 2;
  inline bool has_bossid() const;
  inline void clear_bossid();
  static const int kBossIdFieldNumber = 2;
  inline ::google::protobuf::uint64 bossid() const;
  inline void set_bossid(::google::protobuf::uint64 value);

  // required .sanguo.WorldbossType bossType = 3;
  inline bool has_bosstype() const;
  inline void clear_bosstype();
  static const int kBossTypeFieldNumber = 3;
  inline ::sanguo::WorldbossType bosstype() const;
  inline void set_bosstype(::sanguo::WorldbossType value);

  // @@protoc_insertion_point(class_scope:sanguo.WorldbossCountDownRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_bossid();
  inline void clear_has_bossid();
  inline void set_has_bosstype();
  inline void clear_has_bosstype();

  ::google::protobuf::uint64 bossid_;
  int msgid_;
  int bosstype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_worldboss_5fcount_5fdown_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_worldboss_5fcount_5fdown_2eproto();
  #endif
  friend void protobuf_AssignDesc_worldboss_5fcount_5fdown_2eproto();
  friend void protobuf_ShutdownFile_worldboss_5fcount_5fdown_2eproto();

  void InitAsDefaultInstance();
  static WorldbossCountDownRequest* default_instance_;
};
// -------------------------------------------------------------------

class WorldbossCountDownResponse : public ::google::protobuf::MessageLite {
 public:
  WorldbossCountDownResponse();
  virtual ~WorldbossCountDownResponse();

  WorldbossCountDownResponse(const WorldbossCountDownResponse& from);

  inline WorldbossCountDownResponse& operator=(const WorldbossCountDownResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const WorldbossCountDownResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const WorldbossCountDownResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(WorldbossCountDownResponse* other);

  // implements Message ----------------------------------------------

  WorldbossCountDownResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const WorldbossCountDownResponse& from);
  void MergeFrom(const WorldbossCountDownResponse& from);
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

  // required uint32 type = 3;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 3;
  inline ::google::protobuf::uint32 type() const;
  inline void set_type(::google::protobuf::uint32 value);

  // required uint64 surplusTime = 4;
  inline bool has_surplustime() const;
  inline void clear_surplustime();
  static const int kSurplusTimeFieldNumber = 4;
  inline ::google::protobuf::uint64 surplustime() const;
  inline void set_surplustime(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:sanguo.WorldbossCountDownResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_surplustime();
  inline void clear_has_surplustime();

  int msgid_;
  int status_;
  ::google::protobuf::uint64 surplustime_;
  ::google::protobuf::uint32 type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_worldboss_5fcount_5fdown_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_worldboss_5fcount_5fdown_2eproto();
  #endif
  friend void protobuf_AssignDesc_worldboss_5fcount_5fdown_2eproto();
  friend void protobuf_ShutdownFile_worldboss_5fcount_5fdown_2eproto();

  void InitAsDefaultInstance();
  static WorldbossCountDownResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// WorldbossCountDownRequest

// required .sanguo.MsgID msgID = 1;
inline bool WorldbossCountDownRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorldbossCountDownRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WorldbossCountDownRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WorldbossCountDownRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID WorldbossCountDownRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void WorldbossCountDownRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required uint64 bossId = 2;
inline bool WorldbossCountDownRequest::has_bossid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorldbossCountDownRequest::set_has_bossid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WorldbossCountDownRequest::clear_has_bossid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WorldbossCountDownRequest::clear_bossid() {
  bossid_ = GOOGLE_ULONGLONG(0);
  clear_has_bossid();
}
inline ::google::protobuf::uint64 WorldbossCountDownRequest::bossid() const {
  return bossid_;
}
inline void WorldbossCountDownRequest::set_bossid(::google::protobuf::uint64 value) {
  set_has_bossid();
  bossid_ = value;
}

// required .sanguo.WorldbossType bossType = 3;
inline bool WorldbossCountDownRequest::has_bosstype() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WorldbossCountDownRequest::set_has_bosstype() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WorldbossCountDownRequest::clear_has_bosstype() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WorldbossCountDownRequest::clear_bosstype() {
  bosstype_ = 1;
  clear_has_bosstype();
}
inline ::sanguo::WorldbossType WorldbossCountDownRequest::bosstype() const {
  return static_cast< ::sanguo::WorldbossType >(bosstype_);
}
inline void WorldbossCountDownRequest::set_bosstype(::sanguo::WorldbossType value) {
  assert(::sanguo::WorldbossType_IsValid(value));
  set_has_bosstype();
  bosstype_ = value;
}

// -------------------------------------------------------------------

// WorldbossCountDownResponse

// required .sanguo.MsgID msgID = 1;
inline bool WorldbossCountDownResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorldbossCountDownResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WorldbossCountDownResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WorldbossCountDownResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID WorldbossCountDownResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void WorldbossCountDownResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool WorldbossCountDownResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorldbossCountDownResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WorldbossCountDownResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WorldbossCountDownResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode WorldbossCountDownResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void WorldbossCountDownResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// required uint32 type = 3;
inline bool WorldbossCountDownResponse::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WorldbossCountDownResponse::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WorldbossCountDownResponse::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WorldbossCountDownResponse::clear_type() {
  type_ = 0u;
  clear_has_type();
}
inline ::google::protobuf::uint32 WorldbossCountDownResponse::type() const {
  return type_;
}
inline void WorldbossCountDownResponse::set_type(::google::protobuf::uint32 value) {
  set_has_type();
  type_ = value;
}

// required uint64 surplusTime = 4;
inline bool WorldbossCountDownResponse::has_surplustime() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void WorldbossCountDownResponse::set_has_surplustime() {
  _has_bits_[0] |= 0x00000008u;
}
inline void WorldbossCountDownResponse::clear_has_surplustime() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void WorldbossCountDownResponse::clear_surplustime() {
  surplustime_ = GOOGLE_ULONGLONG(0);
  clear_has_surplustime();
}
inline ::google::protobuf::uint64 WorldbossCountDownResponse::surplustime() const {
  return surplustime_;
}
inline void WorldbossCountDownResponse::set_surplustime(::google::protobuf::uint64 value) {
  set_has_surplustime();
  surplustime_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_worldboss_5fcount_5fdown_2eproto__INCLUDED
