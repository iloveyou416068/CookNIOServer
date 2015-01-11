// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: send_yijun_defense.proto

#ifndef PROTOBUF_send_5fyijun_5fdefense_2eproto__INCLUDED
#define PROTOBUF_send_5fyijun_5fdefense_2eproto__INCLUDED

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
void  protobuf_AddDesc_send_5fyijun_5fdefense_2eproto();
void protobuf_AssignDesc_send_5fyijun_5fdefense_2eproto();
void protobuf_ShutdownFile_send_5fyijun_5fdefense_2eproto();

class SendYijunDefenseRequest;
class SendYijunDefenseResponse;

// ===================================================================

class SendYijunDefenseRequest : public ::google::protobuf::MessageLite {
 public:
  SendYijunDefenseRequest();
  virtual ~SendYijunDefenseRequest();

  SendYijunDefenseRequest(const SendYijunDefenseRequest& from);

  inline SendYijunDefenseRequest& operator=(const SendYijunDefenseRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const SendYijunDefenseRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const SendYijunDefenseRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(SendYijunDefenseRequest* other);

  // implements Message ----------------------------------------------

  SendYijunDefenseRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const SendYijunDefenseRequest& from);
  void MergeFrom(const SendYijunDefenseRequest& from);
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

  // required uint64 roleID = 2;
  inline bool has_roleid() const;
  inline void clear_roleid();
  static const int kRoleIDFieldNumber = 2;
  inline ::google::protobuf::uint64 roleid() const;
  inline void set_roleid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:sanguo.SendYijunDefenseRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_roleid();
  inline void clear_has_roleid();

  ::google::protobuf::uint64 roleid_;
  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_send_5fyijun_5fdefense_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_send_5fyijun_5fdefense_2eproto();
  #endif
  friend void protobuf_AssignDesc_send_5fyijun_5fdefense_2eproto();
  friend void protobuf_ShutdownFile_send_5fyijun_5fdefense_2eproto();

  void InitAsDefaultInstance();
  static SendYijunDefenseRequest* default_instance_;
};
// -------------------------------------------------------------------

class SendYijunDefenseResponse : public ::google::protobuf::MessageLite {
 public:
  SendYijunDefenseResponse();
  virtual ~SendYijunDefenseResponse();

  SendYijunDefenseResponse(const SendYijunDefenseResponse& from);

  inline SendYijunDefenseResponse& operator=(const SendYijunDefenseResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const SendYijunDefenseResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const SendYijunDefenseResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(SendYijunDefenseResponse* other);

  // implements Message ----------------------------------------------

  SendYijunDefenseResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const SendYijunDefenseResponse& from);
  void MergeFrom(const SendYijunDefenseResponse& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.SendYijunDefenseResponse)
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
  friend void  protobuf_AddDesc_send_5fyijun_5fdefense_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_send_5fyijun_5fdefense_2eproto();
  #endif
  friend void protobuf_AssignDesc_send_5fyijun_5fdefense_2eproto();
  friend void protobuf_ShutdownFile_send_5fyijun_5fdefense_2eproto();

  void InitAsDefaultInstance();
  static SendYijunDefenseResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// SendYijunDefenseRequest

// required .sanguo.MsgID msgID = 1;
inline bool SendYijunDefenseRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SendYijunDefenseRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SendYijunDefenseRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SendYijunDefenseRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID SendYijunDefenseRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void SendYijunDefenseRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required uint64 roleID = 2;
inline bool SendYijunDefenseRequest::has_roleid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SendYijunDefenseRequest::set_has_roleid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SendYijunDefenseRequest::clear_has_roleid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SendYijunDefenseRequest::clear_roleid() {
  roleid_ = GOOGLE_ULONGLONG(0);
  clear_has_roleid();
}
inline ::google::protobuf::uint64 SendYijunDefenseRequest::roleid() const {
  return roleid_;
}
inline void SendYijunDefenseRequest::set_roleid(::google::protobuf::uint64 value) {
  set_has_roleid();
  roleid_ = value;
}

// -------------------------------------------------------------------

// SendYijunDefenseResponse

// required .sanguo.MsgID msgID = 1;
inline bool SendYijunDefenseResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SendYijunDefenseResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SendYijunDefenseResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SendYijunDefenseResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID SendYijunDefenseResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void SendYijunDefenseResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool SendYijunDefenseResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SendYijunDefenseResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SendYijunDefenseResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SendYijunDefenseResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode SendYijunDefenseResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void SendYijunDefenseResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_send_5fyijun_5fdefense_2eproto__INCLUDED
