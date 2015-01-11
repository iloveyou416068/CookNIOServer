// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: publish_notice.proto

#ifndef PROTOBUF_publish_5fnotice_2eproto__INCLUDED
#define PROTOBUF_publish_5fnotice_2eproto__INCLUDED

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
void  protobuf_AddDesc_publish_5fnotice_2eproto();
void protobuf_AssignDesc_publish_5fnotice_2eproto();
void protobuf_ShutdownFile_publish_5fnotice_2eproto();

class PublishNoticeRequest;
class PublishNoticeResponse;

// ===================================================================

class PublishNoticeRequest : public ::google::protobuf::MessageLite {
 public:
  PublishNoticeRequest();
  virtual ~PublishNoticeRequest();

  PublishNoticeRequest(const PublishNoticeRequest& from);

  inline PublishNoticeRequest& operator=(const PublishNoticeRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const PublishNoticeRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PublishNoticeRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PublishNoticeRequest* other);

  // implements Message ----------------------------------------------

  PublishNoticeRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PublishNoticeRequest& from);
  void MergeFrom(const PublishNoticeRequest& from);
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

  // required string notice = 2;
  inline bool has_notice() const;
  inline void clear_notice();
  static const int kNoticeFieldNumber = 2;
  inline const ::std::string& notice() const;
  inline void set_notice(const ::std::string& value);
  inline void set_notice(const char* value);
  inline void set_notice(const char* value, size_t size);
  inline ::std::string* mutable_notice();
  inline ::std::string* release_notice();
  inline void set_allocated_notice(::std::string* notice);

  // @@protoc_insertion_point(class_scope:sanguo.PublishNoticeRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_notice();
  inline void clear_has_notice();

  ::std::string* notice_;
  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_publish_5fnotice_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_publish_5fnotice_2eproto();
  #endif
  friend void protobuf_AssignDesc_publish_5fnotice_2eproto();
  friend void protobuf_ShutdownFile_publish_5fnotice_2eproto();

  void InitAsDefaultInstance();
  static PublishNoticeRequest* default_instance_;
};
// -------------------------------------------------------------------

class PublishNoticeResponse : public ::google::protobuf::MessageLite {
 public:
  PublishNoticeResponse();
  virtual ~PublishNoticeResponse();

  PublishNoticeResponse(const PublishNoticeResponse& from);

  inline PublishNoticeResponse& operator=(const PublishNoticeResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const PublishNoticeResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PublishNoticeResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PublishNoticeResponse* other);

  // implements Message ----------------------------------------------

  PublishNoticeResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PublishNoticeResponse& from);
  void MergeFrom(const PublishNoticeResponse& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.PublishNoticeResponse)
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
  friend void  protobuf_AddDesc_publish_5fnotice_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_publish_5fnotice_2eproto();
  #endif
  friend void protobuf_AssignDesc_publish_5fnotice_2eproto();
  friend void protobuf_ShutdownFile_publish_5fnotice_2eproto();

  void InitAsDefaultInstance();
  static PublishNoticeResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// PublishNoticeRequest

// required .sanguo.MsgID msgID = 1;
inline bool PublishNoticeRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PublishNoticeRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PublishNoticeRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PublishNoticeRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID PublishNoticeRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void PublishNoticeRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required string notice = 2;
inline bool PublishNoticeRequest::has_notice() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PublishNoticeRequest::set_has_notice() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PublishNoticeRequest::clear_has_notice() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PublishNoticeRequest::clear_notice() {
  if (notice_ != &::google::protobuf::internal::kEmptyString) {
    notice_->clear();
  }
  clear_has_notice();
}
inline const ::std::string& PublishNoticeRequest::notice() const {
  return *notice_;
}
inline void PublishNoticeRequest::set_notice(const ::std::string& value) {
  set_has_notice();
  if (notice_ == &::google::protobuf::internal::kEmptyString) {
    notice_ = new ::std::string;
  }
  notice_->assign(value);
}
inline void PublishNoticeRequest::set_notice(const char* value) {
  set_has_notice();
  if (notice_ == &::google::protobuf::internal::kEmptyString) {
    notice_ = new ::std::string;
  }
  notice_->assign(value);
}
inline void PublishNoticeRequest::set_notice(const char* value, size_t size) {
  set_has_notice();
  if (notice_ == &::google::protobuf::internal::kEmptyString) {
    notice_ = new ::std::string;
  }
  notice_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PublishNoticeRequest::mutable_notice() {
  set_has_notice();
  if (notice_ == &::google::protobuf::internal::kEmptyString) {
    notice_ = new ::std::string;
  }
  return notice_;
}
inline ::std::string* PublishNoticeRequest::release_notice() {
  clear_has_notice();
  if (notice_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = notice_;
    notice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PublishNoticeRequest::set_allocated_notice(::std::string* notice) {
  if (notice_ != &::google::protobuf::internal::kEmptyString) {
    delete notice_;
  }
  if (notice) {
    set_has_notice();
    notice_ = notice;
  } else {
    clear_has_notice();
    notice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// PublishNoticeResponse

// required .sanguo.MsgID msgID = 1;
inline bool PublishNoticeResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PublishNoticeResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PublishNoticeResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PublishNoticeResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID PublishNoticeResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void PublishNoticeResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool PublishNoticeResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PublishNoticeResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PublishNoticeResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PublishNoticeResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode PublishNoticeResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void PublishNoticeResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_publish_5fnotice_2eproto__INCLUDED
