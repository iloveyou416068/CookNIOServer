// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: unlock_kungfu_slot.proto

#ifndef PROTOBUF_unlock_5fkungfu_5fslot_2eproto__INCLUDED
#define PROTOBUF_unlock_5fkungfu_5fslot_2eproto__INCLUDED

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
#include "open_kungfu_slot_condition.pb.h"
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto();
void protobuf_AssignDesc_unlock_5fkungfu_5fslot_2eproto();
void protobuf_ShutdownFile_unlock_5fkungfu_5fslot_2eproto();

class UnlockKungfuSlotRequest;
class UnlockKungfuSlotResponse;

// ===================================================================

class UnlockKungfuSlotRequest : public ::google::protobuf::MessageLite {
 public:
  UnlockKungfuSlotRequest();
  virtual ~UnlockKungfuSlotRequest();

  UnlockKungfuSlotRequest(const UnlockKungfuSlotRequest& from);

  inline UnlockKungfuSlotRequest& operator=(const UnlockKungfuSlotRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const UnlockKungfuSlotRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const UnlockKungfuSlotRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(UnlockKungfuSlotRequest* other);

  // implements Message ----------------------------------------------

  UnlockKungfuSlotRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const UnlockKungfuSlotRequest& from);
  void MergeFrom(const UnlockKungfuSlotRequest& from);
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

  // required uint32 KungfuID = 2;
  inline bool has_kungfuid() const;
  inline void clear_kungfuid();
  static const int kKungfuIDFieldNumber = 2;
  inline ::google::protobuf::uint32 kungfuid() const;
  inline void set_kungfuid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.UnlockKungfuSlotRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_kungfuid();
  inline void clear_has_kungfuid();

  int msgid_;
  ::google::protobuf::uint32 kungfuid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto();
  #endif
  friend void protobuf_AssignDesc_unlock_5fkungfu_5fslot_2eproto();
  friend void protobuf_ShutdownFile_unlock_5fkungfu_5fslot_2eproto();

  void InitAsDefaultInstance();
  static UnlockKungfuSlotRequest* default_instance_;
};
// -------------------------------------------------------------------

class UnlockKungfuSlotResponse : public ::google::protobuf::MessageLite {
 public:
  UnlockKungfuSlotResponse();
  virtual ~UnlockKungfuSlotResponse();

  UnlockKungfuSlotResponse(const UnlockKungfuSlotResponse& from);

  inline UnlockKungfuSlotResponse& operator=(const UnlockKungfuSlotResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const UnlockKungfuSlotResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const UnlockKungfuSlotResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(UnlockKungfuSlotResponse* other);

  // implements Message ----------------------------------------------

  UnlockKungfuSlotResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const UnlockKungfuSlotResponse& from);
  void MergeFrom(const UnlockKungfuSlotResponse& from);
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

  // optional uint32 kungfuSlotNum = 3;
  inline bool has_kungfuslotnum() const;
  inline void clear_kungfuslotnum();
  static const int kKungfuSlotNumFieldNumber = 3;
  inline ::google::protobuf::uint32 kungfuslotnum() const;
  inline void set_kungfuslotnum(::google::protobuf::uint32 value);

  // optional .sanguo.MsgOpenKungfuSlotCondition openSlotCondition = 4;
  inline bool has_openslotcondition() const;
  inline void clear_openslotcondition();
  static const int kOpenSlotConditionFieldNumber = 4;
  inline const ::sanguo::MsgOpenKungfuSlotCondition& openslotcondition() const;
  inline ::sanguo::MsgOpenKungfuSlotCondition* mutable_openslotcondition();
  inline ::sanguo::MsgOpenKungfuSlotCondition* release_openslotcondition();
  inline void set_allocated_openslotcondition(::sanguo::MsgOpenKungfuSlotCondition* openslotcondition);

  // optional uint32 KungfuID = 5;
  inline bool has_kungfuid() const;
  inline void clear_kungfuid();
  static const int kKungfuIDFieldNumber = 5;
  inline ::google::protobuf::uint32 kungfuid() const;
  inline void set_kungfuid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.UnlockKungfuSlotResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_kungfuslotnum();
  inline void clear_has_kungfuslotnum();
  inline void set_has_openslotcondition();
  inline void clear_has_openslotcondition();
  inline void set_has_kungfuid();
  inline void clear_has_kungfuid();

  int msgid_;
  int status_;
  ::sanguo::MsgOpenKungfuSlotCondition* openslotcondition_;
  ::google::protobuf::uint32 kungfuslotnum_;
  ::google::protobuf::uint32 kungfuid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto();
  #endif
  friend void protobuf_AssignDesc_unlock_5fkungfu_5fslot_2eproto();
  friend void protobuf_ShutdownFile_unlock_5fkungfu_5fslot_2eproto();

  void InitAsDefaultInstance();
  static UnlockKungfuSlotResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// UnlockKungfuSlotRequest

// required .sanguo.MsgID msgID = 1;
inline bool UnlockKungfuSlotRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UnlockKungfuSlotRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UnlockKungfuSlotRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UnlockKungfuSlotRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID UnlockKungfuSlotRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void UnlockKungfuSlotRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required uint32 KungfuID = 2;
inline bool UnlockKungfuSlotRequest::has_kungfuid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UnlockKungfuSlotRequest::set_has_kungfuid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UnlockKungfuSlotRequest::clear_has_kungfuid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UnlockKungfuSlotRequest::clear_kungfuid() {
  kungfuid_ = 0u;
  clear_has_kungfuid();
}
inline ::google::protobuf::uint32 UnlockKungfuSlotRequest::kungfuid() const {
  return kungfuid_;
}
inline void UnlockKungfuSlotRequest::set_kungfuid(::google::protobuf::uint32 value) {
  set_has_kungfuid();
  kungfuid_ = value;
}

// -------------------------------------------------------------------

// UnlockKungfuSlotResponse

// required .sanguo.MsgID msgID = 1;
inline bool UnlockKungfuSlotResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UnlockKungfuSlotResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UnlockKungfuSlotResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UnlockKungfuSlotResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID UnlockKungfuSlotResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void UnlockKungfuSlotResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool UnlockKungfuSlotResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UnlockKungfuSlotResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UnlockKungfuSlotResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UnlockKungfuSlotResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode UnlockKungfuSlotResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void UnlockKungfuSlotResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional uint32 kungfuSlotNum = 3;
inline bool UnlockKungfuSlotResponse::has_kungfuslotnum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UnlockKungfuSlotResponse::set_has_kungfuslotnum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UnlockKungfuSlotResponse::clear_has_kungfuslotnum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UnlockKungfuSlotResponse::clear_kungfuslotnum() {
  kungfuslotnum_ = 0u;
  clear_has_kungfuslotnum();
}
inline ::google::protobuf::uint32 UnlockKungfuSlotResponse::kungfuslotnum() const {
  return kungfuslotnum_;
}
inline void UnlockKungfuSlotResponse::set_kungfuslotnum(::google::protobuf::uint32 value) {
  set_has_kungfuslotnum();
  kungfuslotnum_ = value;
}

// optional .sanguo.MsgOpenKungfuSlotCondition openSlotCondition = 4;
inline bool UnlockKungfuSlotResponse::has_openslotcondition() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void UnlockKungfuSlotResponse::set_has_openslotcondition() {
  _has_bits_[0] |= 0x00000008u;
}
inline void UnlockKungfuSlotResponse::clear_has_openslotcondition() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void UnlockKungfuSlotResponse::clear_openslotcondition() {
  if (openslotcondition_ != NULL) openslotcondition_->::sanguo::MsgOpenKungfuSlotCondition::Clear();
  clear_has_openslotcondition();
}
inline const ::sanguo::MsgOpenKungfuSlotCondition& UnlockKungfuSlotResponse::openslotcondition() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return openslotcondition_ != NULL ? *openslotcondition_ : *default_instance().openslotcondition_;
#else
  return openslotcondition_ != NULL ? *openslotcondition_ : *default_instance_->openslotcondition_;
#endif
}
inline ::sanguo::MsgOpenKungfuSlotCondition* UnlockKungfuSlotResponse::mutable_openslotcondition() {
  set_has_openslotcondition();
  if (openslotcondition_ == NULL) openslotcondition_ = new ::sanguo::MsgOpenKungfuSlotCondition;
  return openslotcondition_;
}
inline ::sanguo::MsgOpenKungfuSlotCondition* UnlockKungfuSlotResponse::release_openslotcondition() {
  clear_has_openslotcondition();
  ::sanguo::MsgOpenKungfuSlotCondition* temp = openslotcondition_;
  openslotcondition_ = NULL;
  return temp;
}
inline void UnlockKungfuSlotResponse::set_allocated_openslotcondition(::sanguo::MsgOpenKungfuSlotCondition* openslotcondition) {
  delete openslotcondition_;
  openslotcondition_ = openslotcondition;
  if (openslotcondition) {
    set_has_openslotcondition();
  } else {
    clear_has_openslotcondition();
  }
}

// optional uint32 KungfuID = 5;
inline bool UnlockKungfuSlotResponse::has_kungfuid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void UnlockKungfuSlotResponse::set_has_kungfuid() {
  _has_bits_[0] |= 0x00000010u;
}
inline void UnlockKungfuSlotResponse::clear_has_kungfuid() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void UnlockKungfuSlotResponse::clear_kungfuid() {
  kungfuid_ = 0u;
  clear_has_kungfuid();
}
inline ::google::protobuf::uint32 UnlockKungfuSlotResponse::kungfuid() const {
  return kungfuid_;
}
inline void UnlockKungfuSlotResponse::set_kungfuid(::google::protobuf::uint32 value) {
  set_has_kungfuid();
  kungfuid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_unlock_5fkungfu_5fslot_2eproto__INCLUDED
