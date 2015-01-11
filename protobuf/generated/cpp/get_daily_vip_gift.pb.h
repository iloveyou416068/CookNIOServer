// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_daily_vip_gift.proto

#ifndef PROTOBUF_get_5fdaily_5fvip_5fgift_2eproto__INCLUDED
#define PROTOBUF_get_5fdaily_5fvip_5fgift_2eproto__INCLUDED

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
void  protobuf_AddDesc_get_5fdaily_5fvip_5fgift_2eproto();
void protobuf_AssignDesc_get_5fdaily_5fvip_5fgift_2eproto();
void protobuf_ShutdownFile_get_5fdaily_5fvip_5fgift_2eproto();

class GetDailyVipGiftRequest;
class GetDailyVipGiftResponse;

// ===================================================================

class GetDailyVipGiftRequest : public ::google::protobuf::MessageLite {
 public:
  GetDailyVipGiftRequest();
  virtual ~GetDailyVipGiftRequest();

  GetDailyVipGiftRequest(const GetDailyVipGiftRequest& from);

  inline GetDailyVipGiftRequest& operator=(const GetDailyVipGiftRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetDailyVipGiftRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetDailyVipGiftRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetDailyVipGiftRequest* other);

  // implements Message ----------------------------------------------

  GetDailyVipGiftRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetDailyVipGiftRequest& from);
  void MergeFrom(const GetDailyVipGiftRequest& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.GetDailyVipGiftRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();

  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5fdaily_5fvip_5fgift_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fdaily_5fvip_5fgift_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fdaily_5fvip_5fgift_2eproto();
  friend void protobuf_ShutdownFile_get_5fdaily_5fvip_5fgift_2eproto();

  void InitAsDefaultInstance();
  static GetDailyVipGiftRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetDailyVipGiftResponse : public ::google::protobuf::MessageLite {
 public:
  GetDailyVipGiftResponse();
  virtual ~GetDailyVipGiftResponse();

  GetDailyVipGiftResponse(const GetDailyVipGiftResponse& from);

  inline GetDailyVipGiftResponse& operator=(const GetDailyVipGiftResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetDailyVipGiftResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetDailyVipGiftResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetDailyVipGiftResponse* other);

  // implements Message ----------------------------------------------

  GetDailyVipGiftResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetDailyVipGiftResponse& from);
  void MergeFrom(const GetDailyVipGiftResponse& from);
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

  // optional string gifts = 3;
  inline bool has_gifts() const;
  inline void clear_gifts();
  static const int kGiftsFieldNumber = 3;
  inline const ::std::string& gifts() const;
  inline void set_gifts(const ::std::string& value);
  inline void set_gifts(const char* value);
  inline void set_gifts(const char* value, size_t size);
  inline ::std::string* mutable_gifts();
  inline ::std::string* release_gifts();
  inline void set_allocated_gifts(::std::string* gifts);

  // @@protoc_insertion_point(class_scope:sanguo.GetDailyVipGiftResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_gifts();
  inline void clear_has_gifts();

  int msgid_;
  int status_;
  ::std::string* gifts_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5fdaily_5fvip_5fgift_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fdaily_5fvip_5fgift_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fdaily_5fvip_5fgift_2eproto();
  friend void protobuf_ShutdownFile_get_5fdaily_5fvip_5fgift_2eproto();

  void InitAsDefaultInstance();
  static GetDailyVipGiftResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// GetDailyVipGiftRequest

// required .sanguo.MsgID msgID = 1;
inline bool GetDailyVipGiftRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetDailyVipGiftRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetDailyVipGiftRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetDailyVipGiftRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetDailyVipGiftRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetDailyVipGiftRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// -------------------------------------------------------------------

// GetDailyVipGiftResponse

// required .sanguo.MsgID msgID = 1;
inline bool GetDailyVipGiftResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetDailyVipGiftResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetDailyVipGiftResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetDailyVipGiftResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetDailyVipGiftResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetDailyVipGiftResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool GetDailyVipGiftResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetDailyVipGiftResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetDailyVipGiftResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetDailyVipGiftResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode GetDailyVipGiftResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void GetDailyVipGiftResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional string gifts = 3;
inline bool GetDailyVipGiftResponse::has_gifts() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GetDailyVipGiftResponse::set_has_gifts() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GetDailyVipGiftResponse::clear_has_gifts() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GetDailyVipGiftResponse::clear_gifts() {
  if (gifts_ != &::google::protobuf::internal::kEmptyString) {
    gifts_->clear();
  }
  clear_has_gifts();
}
inline const ::std::string& GetDailyVipGiftResponse::gifts() const {
  return *gifts_;
}
inline void GetDailyVipGiftResponse::set_gifts(const ::std::string& value) {
  set_has_gifts();
  if (gifts_ == &::google::protobuf::internal::kEmptyString) {
    gifts_ = new ::std::string;
  }
  gifts_->assign(value);
}
inline void GetDailyVipGiftResponse::set_gifts(const char* value) {
  set_has_gifts();
  if (gifts_ == &::google::protobuf::internal::kEmptyString) {
    gifts_ = new ::std::string;
  }
  gifts_->assign(value);
}
inline void GetDailyVipGiftResponse::set_gifts(const char* value, size_t size) {
  set_has_gifts();
  if (gifts_ == &::google::protobuf::internal::kEmptyString) {
    gifts_ = new ::std::string;
  }
  gifts_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GetDailyVipGiftResponse::mutable_gifts() {
  set_has_gifts();
  if (gifts_ == &::google::protobuf::internal::kEmptyString) {
    gifts_ = new ::std::string;
  }
  return gifts_;
}
inline ::std::string* GetDailyVipGiftResponse::release_gifts() {
  clear_has_gifts();
  if (gifts_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = gifts_;
    gifts_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void GetDailyVipGiftResponse::set_allocated_gifts(::std::string* gifts) {
  if (gifts_ != &::google::protobuf::internal::kEmptyString) {
    delete gifts_;
  }
  if (gifts) {
    set_has_gifts();
    gifts_ = gifts;
  } else {
    clear_has_gifts();
    gifts_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_get_5fdaily_5fvip_5fgift_2eproto__INCLUDED
