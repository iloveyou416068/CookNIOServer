// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: remove_mail.proto

#ifndef PROTOBUF_remove_5fmail_2eproto__INCLUDED
#define PROTOBUF_remove_5fmail_2eproto__INCLUDED

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
void  protobuf_AddDesc_remove_5fmail_2eproto();
void protobuf_AssignDesc_remove_5fmail_2eproto();
void protobuf_ShutdownFile_remove_5fmail_2eproto();

class RemoveMailRequest;
class RemoveMailResponse;

// ===================================================================

class RemoveMailRequest : public ::google::protobuf::MessageLite {
 public:
  RemoveMailRequest();
  virtual ~RemoveMailRequest();

  RemoveMailRequest(const RemoveMailRequest& from);

  inline RemoveMailRequest& operator=(const RemoveMailRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const RemoveMailRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const RemoveMailRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(RemoveMailRequest* other);

  // implements Message ----------------------------------------------

  RemoveMailRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const RemoveMailRequest& from);
  void MergeFrom(const RemoveMailRequest& from);
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

  // required uint64 mailId = 2;
  inline bool has_mailid() const;
  inline void clear_mailid();
  static const int kMailIdFieldNumber = 2;
  inline ::google::protobuf::uint64 mailid() const;
  inline void set_mailid(::google::protobuf::uint64 value);

  // required uint32 mailType = 3;
  inline bool has_mailtype() const;
  inline void clear_mailtype();
  static const int kMailTypeFieldNumber = 3;
  inline ::google::protobuf::uint32 mailtype() const;
  inline void set_mailtype(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.RemoveMailRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_mailid();
  inline void clear_has_mailid();
  inline void set_has_mailtype();
  inline void clear_has_mailtype();

  ::google::protobuf::uint64 mailid_;
  int msgid_;
  ::google::protobuf::uint32 mailtype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_remove_5fmail_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_remove_5fmail_2eproto();
  #endif
  friend void protobuf_AssignDesc_remove_5fmail_2eproto();
  friend void protobuf_ShutdownFile_remove_5fmail_2eproto();

  void InitAsDefaultInstance();
  static RemoveMailRequest* default_instance_;
};
// -------------------------------------------------------------------

class RemoveMailResponse : public ::google::protobuf::MessageLite {
 public:
  RemoveMailResponse();
  virtual ~RemoveMailResponse();

  RemoveMailResponse(const RemoveMailResponse& from);

  inline RemoveMailResponse& operator=(const RemoveMailResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const RemoveMailResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const RemoveMailResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(RemoveMailResponse* other);

  // implements Message ----------------------------------------------

  RemoveMailResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const RemoveMailResponse& from);
  void MergeFrom(const RemoveMailResponse& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.RemoveMailResponse)
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
  friend void  protobuf_AddDesc_remove_5fmail_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_remove_5fmail_2eproto();
  #endif
  friend void protobuf_AssignDesc_remove_5fmail_2eproto();
  friend void protobuf_ShutdownFile_remove_5fmail_2eproto();

  void InitAsDefaultInstance();
  static RemoveMailResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// RemoveMailRequest

// required .sanguo.MsgID msgID = 1;
inline bool RemoveMailRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RemoveMailRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RemoveMailRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RemoveMailRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID RemoveMailRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void RemoveMailRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required uint64 mailId = 2;
inline bool RemoveMailRequest::has_mailid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RemoveMailRequest::set_has_mailid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RemoveMailRequest::clear_has_mailid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RemoveMailRequest::clear_mailid() {
  mailid_ = GOOGLE_ULONGLONG(0);
  clear_has_mailid();
}
inline ::google::protobuf::uint64 RemoveMailRequest::mailid() const {
  return mailid_;
}
inline void RemoveMailRequest::set_mailid(::google::protobuf::uint64 value) {
  set_has_mailid();
  mailid_ = value;
}

// required uint32 mailType = 3;
inline bool RemoveMailRequest::has_mailtype() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RemoveMailRequest::set_has_mailtype() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RemoveMailRequest::clear_has_mailtype() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RemoveMailRequest::clear_mailtype() {
  mailtype_ = 0u;
  clear_has_mailtype();
}
inline ::google::protobuf::uint32 RemoveMailRequest::mailtype() const {
  return mailtype_;
}
inline void RemoveMailRequest::set_mailtype(::google::protobuf::uint32 value) {
  set_has_mailtype();
  mailtype_ = value;
}

// -------------------------------------------------------------------

// RemoveMailResponse

// required .sanguo.MsgID msgID = 1;
inline bool RemoveMailResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RemoveMailResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RemoveMailResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RemoveMailResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID RemoveMailResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void RemoveMailResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool RemoveMailResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RemoveMailResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RemoveMailResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RemoveMailResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode RemoveMailResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void RemoveMailResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_remove_5fmail_2eproto__INCLUDED
