// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_daily_vip_reward.proto

#ifndef PROTOBUF_get_5fdaily_5fvip_5freward_2eproto__INCLUDED
#define PROTOBUF_get_5fdaily_5fvip_5freward_2eproto__INCLUDED

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
void  protobuf_AddDesc_get_5fdaily_5fvip_5freward_2eproto();
void protobuf_AssignDesc_get_5fdaily_5fvip_5freward_2eproto();
void protobuf_ShutdownFile_get_5fdaily_5fvip_5freward_2eproto();

class GetDailyVipRewardRequest;
class GetDailyVipRewardResponse;

// ===================================================================

class GetDailyVipRewardRequest : public ::google::protobuf::MessageLite {
 public:
  GetDailyVipRewardRequest();
  virtual ~GetDailyVipRewardRequest();

  GetDailyVipRewardRequest(const GetDailyVipRewardRequest& from);

  inline GetDailyVipRewardRequest& operator=(const GetDailyVipRewardRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetDailyVipRewardRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetDailyVipRewardRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetDailyVipRewardRequest* other);

  // implements Message ----------------------------------------------

  GetDailyVipRewardRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetDailyVipRewardRequest& from);
  void MergeFrom(const GetDailyVipRewardRequest& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.GetDailyVipRewardRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();

  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5fdaily_5fvip_5freward_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fdaily_5fvip_5freward_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fdaily_5fvip_5freward_2eproto();
  friend void protobuf_ShutdownFile_get_5fdaily_5fvip_5freward_2eproto();

  void InitAsDefaultInstance();
  static GetDailyVipRewardRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetDailyVipRewardResponse : public ::google::protobuf::MessageLite {
 public:
  GetDailyVipRewardResponse();
  virtual ~GetDailyVipRewardResponse();

  GetDailyVipRewardResponse(const GetDailyVipRewardResponse& from);

  inline GetDailyVipRewardResponse& operator=(const GetDailyVipRewardResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetDailyVipRewardResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetDailyVipRewardResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetDailyVipRewardResponse* other);

  // implements Message ----------------------------------------------

  GetDailyVipRewardResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetDailyVipRewardResponse& from);
  void MergeFrom(const GetDailyVipRewardResponse& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.GetDailyVipRewardResponse)
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
  friend void  protobuf_AddDesc_get_5fdaily_5fvip_5freward_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fdaily_5fvip_5freward_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fdaily_5fvip_5freward_2eproto();
  friend void protobuf_ShutdownFile_get_5fdaily_5fvip_5freward_2eproto();

  void InitAsDefaultInstance();
  static GetDailyVipRewardResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// GetDailyVipRewardRequest

// required .sanguo.MsgID msgID = 1;
inline bool GetDailyVipRewardRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetDailyVipRewardRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetDailyVipRewardRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetDailyVipRewardRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetDailyVipRewardRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetDailyVipRewardRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// -------------------------------------------------------------------

// GetDailyVipRewardResponse

// required .sanguo.MsgID msgID = 1;
inline bool GetDailyVipRewardResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetDailyVipRewardResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetDailyVipRewardResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetDailyVipRewardResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetDailyVipRewardResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetDailyVipRewardResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool GetDailyVipRewardResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetDailyVipRewardResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetDailyVipRewardResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetDailyVipRewardResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode GetDailyVipRewardResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void GetDailyVipRewardResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional .sanguo.MsgGiftInfo giftInfo = 3;
inline bool GetDailyVipRewardResponse::has_giftinfo() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GetDailyVipRewardResponse::set_has_giftinfo() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GetDailyVipRewardResponse::clear_has_giftinfo() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GetDailyVipRewardResponse::clear_giftinfo() {
  if (giftinfo_ != NULL) giftinfo_->::sanguo::MsgGiftInfo::Clear();
  clear_has_giftinfo();
}
inline const ::sanguo::MsgGiftInfo& GetDailyVipRewardResponse::giftinfo() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return giftinfo_ != NULL ? *giftinfo_ : *default_instance().giftinfo_;
#else
  return giftinfo_ != NULL ? *giftinfo_ : *default_instance_->giftinfo_;
#endif
}
inline ::sanguo::MsgGiftInfo* GetDailyVipRewardResponse::mutable_giftinfo() {
  set_has_giftinfo();
  if (giftinfo_ == NULL) giftinfo_ = new ::sanguo::MsgGiftInfo;
  return giftinfo_;
}
inline ::sanguo::MsgGiftInfo* GetDailyVipRewardResponse::release_giftinfo() {
  clear_has_giftinfo();
  ::sanguo::MsgGiftInfo* temp = giftinfo_;
  giftinfo_ = NULL;
  return temp;
}
inline void GetDailyVipRewardResponse::set_allocated_giftinfo(::sanguo::MsgGiftInfo* giftinfo) {
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

#endif  // PROTOBUF_get_5fdaily_5fvip_5freward_2eproto__INCLUDED
