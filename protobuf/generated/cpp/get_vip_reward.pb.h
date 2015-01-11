// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_vip_reward.proto

#ifndef PROTOBUF_get_5fvip_5freward_2eproto__INCLUDED
#define PROTOBUF_get_5fvip_5freward_2eproto__INCLUDED

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
void  protobuf_AddDesc_get_5fvip_5freward_2eproto();
void protobuf_AssignDesc_get_5fvip_5freward_2eproto();
void protobuf_ShutdownFile_get_5fvip_5freward_2eproto();

class GetVipRewardRequest;
class GetVipRewardResponse;

// ===================================================================

class GetVipRewardRequest : public ::google::protobuf::MessageLite {
 public:
  GetVipRewardRequest();
  virtual ~GetVipRewardRequest();

  GetVipRewardRequest(const GetVipRewardRequest& from);

  inline GetVipRewardRequest& operator=(const GetVipRewardRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetVipRewardRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetVipRewardRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetVipRewardRequest* other);

  // implements Message ----------------------------------------------

  GetVipRewardRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetVipRewardRequest& from);
  void MergeFrom(const GetVipRewardRequest& from);
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

  // required uint32 vipLevel = 2;
  inline bool has_viplevel() const;
  inline void clear_viplevel();
  static const int kVipLevelFieldNumber = 2;
  inline ::google::protobuf::uint32 viplevel() const;
  inline void set_viplevel(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.GetVipRewardRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_viplevel();
  inline void clear_has_viplevel();

  int msgid_;
  ::google::protobuf::uint32 viplevel_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5fvip_5freward_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fvip_5freward_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fvip_5freward_2eproto();
  friend void protobuf_ShutdownFile_get_5fvip_5freward_2eproto();

  void InitAsDefaultInstance();
  static GetVipRewardRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetVipRewardResponse : public ::google::protobuf::MessageLite {
 public:
  GetVipRewardResponse();
  virtual ~GetVipRewardResponse();

  GetVipRewardResponse(const GetVipRewardResponse& from);

  inline GetVipRewardResponse& operator=(const GetVipRewardResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetVipRewardResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetVipRewardResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetVipRewardResponse* other);

  // implements Message ----------------------------------------------

  GetVipRewardResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetVipRewardResponse& from);
  void MergeFrom(const GetVipRewardResponse& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.GetVipRewardResponse)
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
  friend void  protobuf_AddDesc_get_5fvip_5freward_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fvip_5freward_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fvip_5freward_2eproto();
  friend void protobuf_ShutdownFile_get_5fvip_5freward_2eproto();

  void InitAsDefaultInstance();
  static GetVipRewardResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// GetVipRewardRequest

// required .sanguo.MsgID msgID = 1;
inline bool GetVipRewardRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetVipRewardRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetVipRewardRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetVipRewardRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetVipRewardRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetVipRewardRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required uint32 vipLevel = 2;
inline bool GetVipRewardRequest::has_viplevel() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetVipRewardRequest::set_has_viplevel() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetVipRewardRequest::clear_has_viplevel() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetVipRewardRequest::clear_viplevel() {
  viplevel_ = 0u;
  clear_has_viplevel();
}
inline ::google::protobuf::uint32 GetVipRewardRequest::viplevel() const {
  return viplevel_;
}
inline void GetVipRewardRequest::set_viplevel(::google::protobuf::uint32 value) {
  set_has_viplevel();
  viplevel_ = value;
}

// -------------------------------------------------------------------

// GetVipRewardResponse

// required .sanguo.MsgID msgID = 1;
inline bool GetVipRewardResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetVipRewardResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetVipRewardResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetVipRewardResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetVipRewardResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetVipRewardResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool GetVipRewardResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetVipRewardResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetVipRewardResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetVipRewardResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode GetVipRewardResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void GetVipRewardResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional .sanguo.MsgGiftInfo giftInfo = 3;
inline bool GetVipRewardResponse::has_giftinfo() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GetVipRewardResponse::set_has_giftinfo() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GetVipRewardResponse::clear_has_giftinfo() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GetVipRewardResponse::clear_giftinfo() {
  if (giftinfo_ != NULL) giftinfo_->::sanguo::MsgGiftInfo::Clear();
  clear_has_giftinfo();
}
inline const ::sanguo::MsgGiftInfo& GetVipRewardResponse::giftinfo() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return giftinfo_ != NULL ? *giftinfo_ : *default_instance().giftinfo_;
#else
  return giftinfo_ != NULL ? *giftinfo_ : *default_instance_->giftinfo_;
#endif
}
inline ::sanguo::MsgGiftInfo* GetVipRewardResponse::mutable_giftinfo() {
  set_has_giftinfo();
  if (giftinfo_ == NULL) giftinfo_ = new ::sanguo::MsgGiftInfo;
  return giftinfo_;
}
inline ::sanguo::MsgGiftInfo* GetVipRewardResponse::release_giftinfo() {
  clear_has_giftinfo();
  ::sanguo::MsgGiftInfo* temp = giftinfo_;
  giftinfo_ = NULL;
  return temp;
}
inline void GetVipRewardResponse::set_allocated_giftinfo(::sanguo::MsgGiftInfo* giftinfo) {
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

#endif  // PROTOBUF_get_5fvip_5freward_2eproto__INCLUDED
