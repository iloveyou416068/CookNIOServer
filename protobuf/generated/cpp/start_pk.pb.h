// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: start_pk.proto

#ifndef PROTOBUF_start_5fpk_2eproto__INCLUDED
#define PROTOBUF_start_5fpk_2eproto__INCLUDED

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
void  protobuf_AddDesc_start_5fpk_2eproto();
void protobuf_AssignDesc_start_5fpk_2eproto();
void protobuf_ShutdownFile_start_5fpk_2eproto();

class StartPkRequest;
class StartPkResponse;

// ===================================================================

class StartPkRequest : public ::google::protobuf::MessageLite {
 public:
  StartPkRequest();
  virtual ~StartPkRequest();

  StartPkRequest(const StartPkRequest& from);

  inline StartPkRequest& operator=(const StartPkRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const StartPkRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const StartPkRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(StartPkRequest* other);

  // implements Message ----------------------------------------------

  StartPkRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const StartPkRequest& from);
  void MergeFrom(const StartPkRequest& from);
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

  // required uint64 targetId = 2;
  inline bool has_targetid() const;
  inline void clear_targetid();
  static const int kTargetIdFieldNumber = 2;
  inline ::google::protobuf::uint64 targetid() const;
  inline void set_targetid(::google::protobuf::uint64 value);

  // required uint64 targetRank = 3;
  inline bool has_targetrank() const;
  inline void clear_targetrank();
  static const int kTargetRankFieldNumber = 3;
  inline ::google::protobuf::uint64 targetrank() const;
  inline void set_targetrank(::google::protobuf::uint64 value);

  // required uint64 selfRank = 4;
  inline bool has_selfrank() const;
  inline void clear_selfrank();
  static const int kSelfRankFieldNumber = 4;
  inline ::google::protobuf::uint64 selfrank() const;
  inline void set_selfrank(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:sanguo.StartPkRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_targetid();
  inline void clear_has_targetid();
  inline void set_has_targetrank();
  inline void clear_has_targetrank();
  inline void set_has_selfrank();
  inline void clear_has_selfrank();

  ::google::protobuf::uint64 targetid_;
  ::google::protobuf::uint64 targetrank_;
  ::google::protobuf::uint64 selfrank_;
  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_start_5fpk_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_start_5fpk_2eproto();
  #endif
  friend void protobuf_AssignDesc_start_5fpk_2eproto();
  friend void protobuf_ShutdownFile_start_5fpk_2eproto();

  void InitAsDefaultInstance();
  static StartPkRequest* default_instance_;
};
// -------------------------------------------------------------------

class StartPkResponse : public ::google::protobuf::MessageLite {
 public:
  StartPkResponse();
  virtual ~StartPkResponse();

  StartPkResponse(const StartPkResponse& from);

  inline StartPkResponse& operator=(const StartPkResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const StartPkResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const StartPkResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(StartPkResponse* other);

  // implements Message ----------------------------------------------

  StartPkResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const StartPkResponse& from);
  void MergeFrom(const StartPkResponse& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.StartPkResponse)
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
  friend void  protobuf_AddDesc_start_5fpk_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_start_5fpk_2eproto();
  #endif
  friend void protobuf_AssignDesc_start_5fpk_2eproto();
  friend void protobuf_ShutdownFile_start_5fpk_2eproto();

  void InitAsDefaultInstance();
  static StartPkResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// StartPkRequest

// required .sanguo.MsgID msgID = 1;
inline bool StartPkRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StartPkRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StartPkRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StartPkRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID StartPkRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void StartPkRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required uint64 targetId = 2;
inline bool StartPkRequest::has_targetid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StartPkRequest::set_has_targetid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StartPkRequest::clear_has_targetid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StartPkRequest::clear_targetid() {
  targetid_ = GOOGLE_ULONGLONG(0);
  clear_has_targetid();
}
inline ::google::protobuf::uint64 StartPkRequest::targetid() const {
  return targetid_;
}
inline void StartPkRequest::set_targetid(::google::protobuf::uint64 value) {
  set_has_targetid();
  targetid_ = value;
}

// required uint64 targetRank = 3;
inline bool StartPkRequest::has_targetrank() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void StartPkRequest::set_has_targetrank() {
  _has_bits_[0] |= 0x00000004u;
}
inline void StartPkRequest::clear_has_targetrank() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void StartPkRequest::clear_targetrank() {
  targetrank_ = GOOGLE_ULONGLONG(0);
  clear_has_targetrank();
}
inline ::google::protobuf::uint64 StartPkRequest::targetrank() const {
  return targetrank_;
}
inline void StartPkRequest::set_targetrank(::google::protobuf::uint64 value) {
  set_has_targetrank();
  targetrank_ = value;
}

// required uint64 selfRank = 4;
inline bool StartPkRequest::has_selfrank() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void StartPkRequest::set_has_selfrank() {
  _has_bits_[0] |= 0x00000008u;
}
inline void StartPkRequest::clear_has_selfrank() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void StartPkRequest::clear_selfrank() {
  selfrank_ = GOOGLE_ULONGLONG(0);
  clear_has_selfrank();
}
inline ::google::protobuf::uint64 StartPkRequest::selfrank() const {
  return selfrank_;
}
inline void StartPkRequest::set_selfrank(::google::protobuf::uint64 value) {
  set_has_selfrank();
  selfrank_ = value;
}

// -------------------------------------------------------------------

// StartPkResponse

// required .sanguo.MsgID msgID = 1;
inline bool StartPkResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StartPkResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StartPkResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StartPkResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID StartPkResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void StartPkResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool StartPkResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StartPkResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StartPkResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StartPkResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode StartPkResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void StartPkResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_start_5fpk_2eproto__INCLUDED
