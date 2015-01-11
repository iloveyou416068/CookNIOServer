// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_activation_code_gift.proto

#ifndef PROTOBUF_get_5factivation_5fcode_5fgift_2eproto__INCLUDED
#define PROTOBUF_get_5factivation_5fcode_5fgift_2eproto__INCLUDED

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
void  protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto();
void protobuf_AssignDesc_get_5factivation_5fcode_5fgift_2eproto();
void protobuf_ShutdownFile_get_5factivation_5fcode_5fgift_2eproto();

class GetActivationCodeGiftRequest;
class GetActivationCodeGiftResponse;

// ===================================================================

class GetActivationCodeGiftRequest : public ::google::protobuf::MessageLite {
 public:
  GetActivationCodeGiftRequest();
  virtual ~GetActivationCodeGiftRequest();

  GetActivationCodeGiftRequest(const GetActivationCodeGiftRequest& from);

  inline GetActivationCodeGiftRequest& operator=(const GetActivationCodeGiftRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetActivationCodeGiftRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetActivationCodeGiftRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetActivationCodeGiftRequest* other);

  // implements Message ----------------------------------------------

  GetActivationCodeGiftRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetActivationCodeGiftRequest& from);
  void MergeFrom(const GetActivationCodeGiftRequest& from);
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

  // required string activationCode = 2;
  inline bool has_activationcode() const;
  inline void clear_activationcode();
  static const int kActivationCodeFieldNumber = 2;
  inline const ::std::string& activationcode() const;
  inline void set_activationcode(const ::std::string& value);
  inline void set_activationcode(const char* value);
  inline void set_activationcode(const char* value, size_t size);
  inline ::std::string* mutable_activationcode();
  inline ::std::string* release_activationcode();
  inline void set_allocated_activationcode(::std::string* activationcode);

  // @@protoc_insertion_point(class_scope:sanguo.GetActivationCodeGiftRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_activationcode();
  inline void clear_has_activationcode();

  ::std::string* activationcode_;
  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5factivation_5fcode_5fgift_2eproto();
  friend void protobuf_ShutdownFile_get_5factivation_5fcode_5fgift_2eproto();

  void InitAsDefaultInstance();
  static GetActivationCodeGiftRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetActivationCodeGiftResponse : public ::google::protobuf::MessageLite {
 public:
  GetActivationCodeGiftResponse();
  virtual ~GetActivationCodeGiftResponse();

  GetActivationCodeGiftResponse(const GetActivationCodeGiftResponse& from);

  inline GetActivationCodeGiftResponse& operator=(const GetActivationCodeGiftResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetActivationCodeGiftResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetActivationCodeGiftResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetActivationCodeGiftResponse* other);

  // implements Message ----------------------------------------------

  GetActivationCodeGiftResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetActivationCodeGiftResponse& from);
  void MergeFrom(const GetActivationCodeGiftResponse& from);
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

  // optional string gift = 3;
  inline bool has_gift() const;
  inline void clear_gift();
  static const int kGiftFieldNumber = 3;
  inline const ::std::string& gift() const;
  inline void set_gift(const ::std::string& value);
  inline void set_gift(const char* value);
  inline void set_gift(const char* value, size_t size);
  inline ::std::string* mutable_gift();
  inline ::std::string* release_gift();
  inline void set_allocated_gift(::std::string* gift);

  // @@protoc_insertion_point(class_scope:sanguo.GetActivationCodeGiftResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_gift();
  inline void clear_has_gift();

  int msgid_;
  int status_;
  ::std::string* gift_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5factivation_5fcode_5fgift_2eproto();
  friend void protobuf_ShutdownFile_get_5factivation_5fcode_5fgift_2eproto();

  void InitAsDefaultInstance();
  static GetActivationCodeGiftResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// GetActivationCodeGiftRequest

// required .sanguo.MsgID msgID = 1;
inline bool GetActivationCodeGiftRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetActivationCodeGiftRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetActivationCodeGiftRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetActivationCodeGiftRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetActivationCodeGiftRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetActivationCodeGiftRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required string activationCode = 2;
inline bool GetActivationCodeGiftRequest::has_activationcode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetActivationCodeGiftRequest::set_has_activationcode() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetActivationCodeGiftRequest::clear_has_activationcode() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetActivationCodeGiftRequest::clear_activationcode() {
  if (activationcode_ != &::google::protobuf::internal::kEmptyString) {
    activationcode_->clear();
  }
  clear_has_activationcode();
}
inline const ::std::string& GetActivationCodeGiftRequest::activationcode() const {
  return *activationcode_;
}
inline void GetActivationCodeGiftRequest::set_activationcode(const ::std::string& value) {
  set_has_activationcode();
  if (activationcode_ == &::google::protobuf::internal::kEmptyString) {
    activationcode_ = new ::std::string;
  }
  activationcode_->assign(value);
}
inline void GetActivationCodeGiftRequest::set_activationcode(const char* value) {
  set_has_activationcode();
  if (activationcode_ == &::google::protobuf::internal::kEmptyString) {
    activationcode_ = new ::std::string;
  }
  activationcode_->assign(value);
}
inline void GetActivationCodeGiftRequest::set_activationcode(const char* value, size_t size) {
  set_has_activationcode();
  if (activationcode_ == &::google::protobuf::internal::kEmptyString) {
    activationcode_ = new ::std::string;
  }
  activationcode_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GetActivationCodeGiftRequest::mutable_activationcode() {
  set_has_activationcode();
  if (activationcode_ == &::google::protobuf::internal::kEmptyString) {
    activationcode_ = new ::std::string;
  }
  return activationcode_;
}
inline ::std::string* GetActivationCodeGiftRequest::release_activationcode() {
  clear_has_activationcode();
  if (activationcode_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = activationcode_;
    activationcode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void GetActivationCodeGiftRequest::set_allocated_activationcode(::std::string* activationcode) {
  if (activationcode_ != &::google::protobuf::internal::kEmptyString) {
    delete activationcode_;
  }
  if (activationcode) {
    set_has_activationcode();
    activationcode_ = activationcode;
  } else {
    clear_has_activationcode();
    activationcode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// GetActivationCodeGiftResponse

// required .sanguo.MsgID msgID = 1;
inline bool GetActivationCodeGiftResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetActivationCodeGiftResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetActivationCodeGiftResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetActivationCodeGiftResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetActivationCodeGiftResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetActivationCodeGiftResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool GetActivationCodeGiftResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetActivationCodeGiftResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetActivationCodeGiftResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetActivationCodeGiftResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode GetActivationCodeGiftResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void GetActivationCodeGiftResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional string gift = 3;
inline bool GetActivationCodeGiftResponse::has_gift() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GetActivationCodeGiftResponse::set_has_gift() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GetActivationCodeGiftResponse::clear_has_gift() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GetActivationCodeGiftResponse::clear_gift() {
  if (gift_ != &::google::protobuf::internal::kEmptyString) {
    gift_->clear();
  }
  clear_has_gift();
}
inline const ::std::string& GetActivationCodeGiftResponse::gift() const {
  return *gift_;
}
inline void GetActivationCodeGiftResponse::set_gift(const ::std::string& value) {
  set_has_gift();
  if (gift_ == &::google::protobuf::internal::kEmptyString) {
    gift_ = new ::std::string;
  }
  gift_->assign(value);
}
inline void GetActivationCodeGiftResponse::set_gift(const char* value) {
  set_has_gift();
  if (gift_ == &::google::protobuf::internal::kEmptyString) {
    gift_ = new ::std::string;
  }
  gift_->assign(value);
}
inline void GetActivationCodeGiftResponse::set_gift(const char* value, size_t size) {
  set_has_gift();
  if (gift_ == &::google::protobuf::internal::kEmptyString) {
    gift_ = new ::std::string;
  }
  gift_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GetActivationCodeGiftResponse::mutable_gift() {
  set_has_gift();
  if (gift_ == &::google::protobuf::internal::kEmptyString) {
    gift_ = new ::std::string;
  }
  return gift_;
}
inline ::std::string* GetActivationCodeGiftResponse::release_gift() {
  clear_has_gift();
  if (gift_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = gift_;
    gift_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void GetActivationCodeGiftResponse::set_allocated_gift(::std::string* gift) {
  if (gift_ != &::google::protobuf::internal::kEmptyString) {
    delete gift_;
  }
  if (gift) {
    set_has_gift();
    gift_ = gift;
  } else {
    clear_has_gift();
    gift_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_get_5factivation_5fcode_5fgift_2eproto__INCLUDED
