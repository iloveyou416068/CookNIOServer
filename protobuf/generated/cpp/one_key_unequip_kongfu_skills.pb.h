// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: one_key_unequip_kongfu_skills.proto

#ifndef PROTOBUF_one_5fkey_5funequip_5fkongfu_5fskills_2eproto__INCLUDED
#define PROTOBUF_one_5fkey_5funequip_5fkongfu_5fskills_2eproto__INCLUDED

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
void  protobuf_AddDesc_one_5fkey_5funequip_5fkongfu_5fskills_2eproto();
void protobuf_AssignDesc_one_5fkey_5funequip_5fkongfu_5fskills_2eproto();
void protobuf_ShutdownFile_one_5fkey_5funequip_5fkongfu_5fskills_2eproto();

class OneKeyUnequipKungfuSkillsRequest;
class OneKeyUnequipKungfuSkillsResponse;

// ===================================================================

class OneKeyUnequipKungfuSkillsRequest : public ::google::protobuf::MessageLite {
 public:
  OneKeyUnequipKungfuSkillsRequest();
  virtual ~OneKeyUnequipKungfuSkillsRequest();

  OneKeyUnequipKungfuSkillsRequest(const OneKeyUnequipKungfuSkillsRequest& from);

  inline OneKeyUnequipKungfuSkillsRequest& operator=(const OneKeyUnequipKungfuSkillsRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const OneKeyUnequipKungfuSkillsRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const OneKeyUnequipKungfuSkillsRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(OneKeyUnequipKungfuSkillsRequest* other);

  // implements Message ----------------------------------------------

  OneKeyUnequipKungfuSkillsRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const OneKeyUnequipKungfuSkillsRequest& from);
  void MergeFrom(const OneKeyUnequipKungfuSkillsRequest& from);
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

  // required uint32 KungfuButtonID = 2;
  inline bool has_kungfubuttonid() const;
  inline void clear_kungfubuttonid();
  static const int kKungfuButtonIDFieldNumber = 2;
  inline ::google::protobuf::uint32 kungfubuttonid() const;
  inline void set_kungfubuttonid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.OneKeyUnequipKungfuSkillsRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_kungfubuttonid();
  inline void clear_has_kungfubuttonid();

  int msgid_;
  ::google::protobuf::uint32 kungfubuttonid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_one_5fkey_5funequip_5fkongfu_5fskills_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_one_5fkey_5funequip_5fkongfu_5fskills_2eproto();
  #endif
  friend void protobuf_AssignDesc_one_5fkey_5funequip_5fkongfu_5fskills_2eproto();
  friend void protobuf_ShutdownFile_one_5fkey_5funequip_5fkongfu_5fskills_2eproto();

  void InitAsDefaultInstance();
  static OneKeyUnequipKungfuSkillsRequest* default_instance_;
};
// -------------------------------------------------------------------

class OneKeyUnequipKungfuSkillsResponse : public ::google::protobuf::MessageLite {
 public:
  OneKeyUnequipKungfuSkillsResponse();
  virtual ~OneKeyUnequipKungfuSkillsResponse();

  OneKeyUnequipKungfuSkillsResponse(const OneKeyUnequipKungfuSkillsResponse& from);

  inline OneKeyUnequipKungfuSkillsResponse& operator=(const OneKeyUnequipKungfuSkillsResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const OneKeyUnequipKungfuSkillsResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const OneKeyUnequipKungfuSkillsResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(OneKeyUnequipKungfuSkillsResponse* other);

  // implements Message ----------------------------------------------

  OneKeyUnequipKungfuSkillsResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const OneKeyUnequipKungfuSkillsResponse& from);
  void MergeFrom(const OneKeyUnequipKungfuSkillsResponse& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.OneKeyUnequipKungfuSkillsResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();

  int msgid_;
  int status_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_one_5fkey_5funequip_5fkongfu_5fskills_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_one_5fkey_5funequip_5fkongfu_5fskills_2eproto();
  #endif
  friend void protobuf_AssignDesc_one_5fkey_5funequip_5fkongfu_5fskills_2eproto();
  friend void protobuf_ShutdownFile_one_5fkey_5funequip_5fkongfu_5fskills_2eproto();

  void InitAsDefaultInstance();
  static OneKeyUnequipKungfuSkillsResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// OneKeyUnequipKungfuSkillsRequest

// required .sanguo.MsgID msgID = 1;
inline bool OneKeyUnequipKungfuSkillsRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OneKeyUnequipKungfuSkillsRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OneKeyUnequipKungfuSkillsRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OneKeyUnequipKungfuSkillsRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID OneKeyUnequipKungfuSkillsRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void OneKeyUnequipKungfuSkillsRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required uint32 KungfuButtonID = 2;
inline bool OneKeyUnequipKungfuSkillsRequest::has_kungfubuttonid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OneKeyUnequipKungfuSkillsRequest::set_has_kungfubuttonid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OneKeyUnequipKungfuSkillsRequest::clear_has_kungfubuttonid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OneKeyUnequipKungfuSkillsRequest::clear_kungfubuttonid() {
  kungfubuttonid_ = 0u;
  clear_has_kungfubuttonid();
}
inline ::google::protobuf::uint32 OneKeyUnequipKungfuSkillsRequest::kungfubuttonid() const {
  return kungfubuttonid_;
}
inline void OneKeyUnequipKungfuSkillsRequest::set_kungfubuttonid(::google::protobuf::uint32 value) {
  set_has_kungfubuttonid();
  kungfubuttonid_ = value;
}

// -------------------------------------------------------------------

// OneKeyUnequipKungfuSkillsResponse

// required .sanguo.MsgID msgID = 1;
inline bool OneKeyUnequipKungfuSkillsResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OneKeyUnequipKungfuSkillsResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OneKeyUnequipKungfuSkillsResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OneKeyUnequipKungfuSkillsResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID OneKeyUnequipKungfuSkillsResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void OneKeyUnequipKungfuSkillsResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool OneKeyUnequipKungfuSkillsResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OneKeyUnequipKungfuSkillsResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OneKeyUnequipKungfuSkillsResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OneKeyUnequipKungfuSkillsResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode OneKeyUnequipKungfuSkillsResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void OneKeyUnequipKungfuSkillsResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_one_5fkey_5funequip_5fkongfu_5fskills_2eproto__INCLUDED
