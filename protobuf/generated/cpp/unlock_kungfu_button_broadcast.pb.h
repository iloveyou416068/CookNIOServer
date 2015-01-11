// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: unlock_kungfu_button_broadcast.proto

#ifndef PROTOBUF_unlock_5fkungfu_5fbutton_5fbroadcast_2eproto__INCLUDED
#define PROTOBUF_unlock_5fkungfu_5fbutton_5fbroadcast_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_unlock_5fkungfu_5fbutton_5fbroadcast_2eproto();
void protobuf_AssignDesc_unlock_5fkungfu_5fbutton_5fbroadcast_2eproto();
void protobuf_ShutdownFile_unlock_5fkungfu_5fbutton_5fbroadcast_2eproto();

class UnlockKungfuButtonBroadCast;

// ===================================================================

class UnlockKungfuButtonBroadCast : public ::google::protobuf::MessageLite {
 public:
  UnlockKungfuButtonBroadCast();
  virtual ~UnlockKungfuButtonBroadCast();

  UnlockKungfuButtonBroadCast(const UnlockKungfuButtonBroadCast& from);

  inline UnlockKungfuButtonBroadCast& operator=(const UnlockKungfuButtonBroadCast& from) {
    CopyFrom(from);
    return *this;
  }

  static const UnlockKungfuButtonBroadCast& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const UnlockKungfuButtonBroadCast* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(UnlockKungfuButtonBroadCast* other);

  // implements Message ----------------------------------------------

  UnlockKungfuButtonBroadCast* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const UnlockKungfuButtonBroadCast& from);
  void MergeFrom(const UnlockKungfuButtonBroadCast& from);
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

  // optional uint32 KungfuID = 3;
  inline bool has_kungfuid() const;
  inline void clear_kungfuid();
  static const int kKungfuIDFieldNumber = 3;
  inline ::google::protobuf::uint32 kungfuid() const;
  inline void set_kungfuid(::google::protobuf::uint32 value);

  // optional uint32 kungfuSlotNum = 4;
  inline bool has_kungfuslotnum() const;
  inline void clear_kungfuslotnum();
  static const int kKungfuSlotNumFieldNumber = 4;
  inline ::google::protobuf::uint32 kungfuslotnum() const;
  inline void set_kungfuslotnum(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.UnlockKungfuButtonBroadCast)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_kungfuid();
  inline void clear_has_kungfuid();
  inline void set_has_kungfuslotnum();
  inline void clear_has_kungfuslotnum();

  int msgid_;
  int status_;
  ::google::protobuf::uint32 kungfuid_;
  ::google::protobuf::uint32 kungfuslotnum_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_unlock_5fkungfu_5fbutton_5fbroadcast_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_unlock_5fkungfu_5fbutton_5fbroadcast_2eproto();
  #endif
  friend void protobuf_AssignDesc_unlock_5fkungfu_5fbutton_5fbroadcast_2eproto();
  friend void protobuf_ShutdownFile_unlock_5fkungfu_5fbutton_5fbroadcast_2eproto();

  void InitAsDefaultInstance();
  static UnlockKungfuButtonBroadCast* default_instance_;
};
// ===================================================================


// ===================================================================

// UnlockKungfuButtonBroadCast

// required .sanguo.MsgID msgID = 1;
inline bool UnlockKungfuButtonBroadCast::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UnlockKungfuButtonBroadCast::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UnlockKungfuButtonBroadCast::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UnlockKungfuButtonBroadCast::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID UnlockKungfuButtonBroadCast::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void UnlockKungfuButtonBroadCast::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool UnlockKungfuButtonBroadCast::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UnlockKungfuButtonBroadCast::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UnlockKungfuButtonBroadCast::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UnlockKungfuButtonBroadCast::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode UnlockKungfuButtonBroadCast::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void UnlockKungfuButtonBroadCast::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional uint32 KungfuID = 3;
inline bool UnlockKungfuButtonBroadCast::has_kungfuid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UnlockKungfuButtonBroadCast::set_has_kungfuid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UnlockKungfuButtonBroadCast::clear_has_kungfuid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UnlockKungfuButtonBroadCast::clear_kungfuid() {
  kungfuid_ = 0u;
  clear_has_kungfuid();
}
inline ::google::protobuf::uint32 UnlockKungfuButtonBroadCast::kungfuid() const {
  return kungfuid_;
}
inline void UnlockKungfuButtonBroadCast::set_kungfuid(::google::protobuf::uint32 value) {
  set_has_kungfuid();
  kungfuid_ = value;
}

// optional uint32 kungfuSlotNum = 4;
inline bool UnlockKungfuButtonBroadCast::has_kungfuslotnum() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void UnlockKungfuButtonBroadCast::set_has_kungfuslotnum() {
  _has_bits_[0] |= 0x00000008u;
}
inline void UnlockKungfuButtonBroadCast::clear_has_kungfuslotnum() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void UnlockKungfuButtonBroadCast::clear_kungfuslotnum() {
  kungfuslotnum_ = 0u;
  clear_has_kungfuslotnum();
}
inline ::google::protobuf::uint32 UnlockKungfuButtonBroadCast::kungfuslotnum() const {
  return kungfuslotnum_;
}
inline void UnlockKungfuButtonBroadCast::set_kungfuslotnum(::google::protobuf::uint32 value) {
  set_has_kungfuslotnum();
  kungfuslotnum_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_unlock_5fkungfu_5fbutton_5fbroadcast_2eproto__INCLUDED
