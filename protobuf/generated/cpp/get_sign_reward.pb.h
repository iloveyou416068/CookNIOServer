// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_sign_reward.proto

#ifndef PROTOBUF_get_5fsign_5freward_2eproto__INCLUDED
#define PROTOBUF_get_5fsign_5freward_2eproto__INCLUDED

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
#include "gift_info.pb.h"
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_get_5fsign_5freward_2eproto();
void protobuf_AssignDesc_get_5fsign_5freward_2eproto();
void protobuf_ShutdownFile_get_5fsign_5freward_2eproto();

class GetSignRewardRequest;
class GetSignRewardResponse;

// ===================================================================

class GetSignRewardRequest : public ::google::protobuf::MessageLite {
 public:
  GetSignRewardRequest();
  virtual ~GetSignRewardRequest();

  GetSignRewardRequest(const GetSignRewardRequest& from);

  inline GetSignRewardRequest& operator=(const GetSignRewardRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetSignRewardRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetSignRewardRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetSignRewardRequest* other);

  // implements Message ----------------------------------------------

  GetSignRewardRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetSignRewardRequest& from);
  void MergeFrom(const GetSignRewardRequest& from);
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

  // required uint64 giftId = 2;
  inline bool has_giftid() const;
  inline void clear_giftid();
  static const int kGiftIdFieldNumber = 2;
  inline ::google::protobuf::uint64 giftid() const;
  inline void set_giftid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:sanguo.GetSignRewardRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_giftid();
  inline void clear_has_giftid();

  ::google::protobuf::uint64 giftid_;
  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5fsign_5freward_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fsign_5freward_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fsign_5freward_2eproto();
  friend void protobuf_ShutdownFile_get_5fsign_5freward_2eproto();

  void InitAsDefaultInstance();
  static GetSignRewardRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetSignRewardResponse : public ::google::protobuf::MessageLite {
 public:
  GetSignRewardResponse();
  virtual ~GetSignRewardResponse();

  GetSignRewardResponse(const GetSignRewardResponse& from);

  inline GetSignRewardResponse& operator=(const GetSignRewardResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetSignRewardResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetSignRewardResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetSignRewardResponse* other);

  // implements Message ----------------------------------------------

  GetSignRewardResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetSignRewardResponse& from);
  void MergeFrom(const GetSignRewardResponse& from);
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

  // optional .sanguo.MsgGiftInfo giftInfo = 3;
  inline bool has_giftinfo() const;
  inline void clear_giftinfo();
  static const int kGiftInfoFieldNumber = 3;
  inline const ::sanguo::MsgGiftInfo& giftinfo() const;
  inline ::sanguo::MsgGiftInfo* mutable_giftinfo();
  inline ::sanguo::MsgGiftInfo* release_giftinfo();
  inline void set_allocated_giftinfo(::sanguo::MsgGiftInfo* giftinfo);

  // @@protoc_insertion_point(class_scope:sanguo.GetSignRewardResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_giftinfo();
  inline void clear_has_giftinfo();

  int msgid_;
  int status_;
  ::sanguo::MsgGiftInfo* giftinfo_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5fsign_5freward_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fsign_5freward_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fsign_5freward_2eproto();
  friend void protobuf_ShutdownFile_get_5fsign_5freward_2eproto();

  void InitAsDefaultInstance();
  static GetSignRewardResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// GetSignRewardRequest

// required .sanguo.MsgID msgID = 1;
inline bool GetSignRewardRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetSignRewardRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetSignRewardRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetSignRewardRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetSignRewardRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetSignRewardRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required uint64 giftId = 2;
inline bool GetSignRewardRequest::has_giftid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetSignRewardRequest::set_has_giftid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetSignRewardRequest::clear_has_giftid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetSignRewardRequest::clear_giftid() {
  giftid_ = GOOGLE_ULONGLONG(0);
  clear_has_giftid();
}
inline ::google::protobuf::uint64 GetSignRewardRequest::giftid() const {
  return giftid_;
}
inline void GetSignRewardRequest::set_giftid(::google::protobuf::uint64 value) {
  set_has_giftid();
  giftid_ = value;
}

// -------------------------------------------------------------------

// GetSignRewardResponse

// required .sanguo.MsgID msgID = 1;
inline bool GetSignRewardResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetSignRewardResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetSignRewardResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetSignRewardResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetSignRewardResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetSignRewardResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool GetSignRewardResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetSignRewardResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetSignRewardResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetSignRewardResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode GetSignRewardResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void GetSignRewardResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional .sanguo.MsgGiftInfo giftInfo = 3;
inline bool GetSignRewardResponse::has_giftinfo() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GetSignRewardResponse::set_has_giftinfo() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GetSignRewardResponse::clear_has_giftinfo() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GetSignRewardResponse::clear_giftinfo() {
  if (giftinfo_ != NULL) giftinfo_->::sanguo::MsgGiftInfo::Clear();
  clear_has_giftinfo();
}
inline const ::sanguo::MsgGiftInfo& GetSignRewardResponse::giftinfo() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return giftinfo_ != NULL ? *giftinfo_ : *default_instance().giftinfo_;
#else
  return giftinfo_ != NULL ? *giftinfo_ : *default_instance_->giftinfo_;
#endif
}
inline ::sanguo::MsgGiftInfo* GetSignRewardResponse::mutable_giftinfo() {
  set_has_giftinfo();
  if (giftinfo_ == NULL) giftinfo_ = new ::sanguo::MsgGiftInfo;
  return giftinfo_;
}
inline ::sanguo::MsgGiftInfo* GetSignRewardResponse::release_giftinfo() {
  clear_has_giftinfo();
  ::sanguo::MsgGiftInfo* temp = giftinfo_;
  giftinfo_ = NULL;
  return temp;
}
inline void GetSignRewardResponse::set_allocated_giftinfo(::sanguo::MsgGiftInfo* giftinfo) {
  delete giftinfo_;
  giftinfo_ = giftinfo;
  if (giftinfo) {
    set_has_giftinfo();
  } else {
    clear_has_giftinfo();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_get_5fsign_5freward_2eproto__INCLUDED
