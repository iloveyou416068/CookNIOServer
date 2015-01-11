// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_daily_recharge_reward.proto

#ifndef PROTOBUF_get_5fdaily_5frecharge_5freward_2eproto__INCLUDED
#define PROTOBUF_get_5fdaily_5frecharge_5freward_2eproto__INCLUDED

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
#include "role_bag_goods.pb.h"
#include "role_gem_bag_goods.pb.h"
#include "role_guaxiang_goods.pb.h"
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_get_5fdaily_5frecharge_5freward_2eproto();
void protobuf_AssignDesc_get_5fdaily_5frecharge_5freward_2eproto();
void protobuf_ShutdownFile_get_5fdaily_5frecharge_5freward_2eproto();

class GetDailyRechargeRewardRequest;
class GetDailyRechargeRewardResponse;

// ===================================================================

class GetDailyRechargeRewardRequest : public ::google::protobuf::MessageLite {
 public:
  GetDailyRechargeRewardRequest();
  virtual ~GetDailyRechargeRewardRequest();

  GetDailyRechargeRewardRequest(const GetDailyRechargeRewardRequest& from);

  inline GetDailyRechargeRewardRequest& operator=(const GetDailyRechargeRewardRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetDailyRechargeRewardRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetDailyRechargeRewardRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetDailyRechargeRewardRequest* other);

  // implements Message ----------------------------------------------

  GetDailyRechargeRewardRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetDailyRechargeRewardRequest& from);
  void MergeFrom(const GetDailyRechargeRewardRequest& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.GetDailyRechargeRewardRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();

  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5fdaily_5frecharge_5freward_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fdaily_5frecharge_5freward_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fdaily_5frecharge_5freward_2eproto();
  friend void protobuf_ShutdownFile_get_5fdaily_5frecharge_5freward_2eproto();

  void InitAsDefaultInstance();
  static GetDailyRechargeRewardRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetDailyRechargeRewardResponse : public ::google::protobuf::MessageLite {
 public:
  GetDailyRechargeRewardResponse();
  virtual ~GetDailyRechargeRewardResponse();

  GetDailyRechargeRewardResponse(const GetDailyRechargeRewardResponse& from);

  inline GetDailyRechargeRewardResponse& operator=(const GetDailyRechargeRewardResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetDailyRechargeRewardResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetDailyRechargeRewardResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetDailyRechargeRewardResponse* other);

  // implements Message ----------------------------------------------

  GetDailyRechargeRewardResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetDailyRechargeRewardResponse& from);
  void MergeFrom(const GetDailyRechargeRewardResponse& from);
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

  // optional uint64 copper = 3;
  inline bool has_copper() const;
  inline void clear_copper();
  static const int kCopperFieldNumber = 3;
  inline ::google::protobuf::uint64 copper() const;
  inline void set_copper(::google::protobuf::uint64 value);

  // optional uint32 gold = 4;
  inline bool has_gold() const;
  inline void clear_gold();
  static const int kGoldFieldNumber = 4;
  inline ::google::protobuf::uint32 gold() const;
  inline void set_gold(::google::protobuf::uint32 value);

  // repeated .sanguo.MsgRoleBagGoods goods = 5;
  inline int goods_size() const;
  inline void clear_goods();
  static const int kGoodsFieldNumber = 5;
  inline const ::sanguo::MsgRoleBagGoods& goods(int index) const;
  inline ::sanguo::MsgRoleBagGoods* mutable_goods(int index);
  inline ::sanguo::MsgRoleBagGoods* add_goods();
  inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleBagGoods >&
      goods() const;
  inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleBagGoods >*
      mutable_goods();

  // repeated .sanguo.MsgRoleGemBagGoods gem = 6;
  inline int gem_size() const;
  inline void clear_gem();
  static const int kGemFieldNumber = 6;
  inline const ::sanguo::MsgRoleGemBagGoods& gem(int index) const;
  inline ::sanguo::MsgRoleGemBagGoods* mutable_gem(int index);
  inline ::sanguo::MsgRoleGemBagGoods* add_gem();
  inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods >&
      gem() const;
  inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods >*
      mutable_gem();

  // repeated .sanguo.MsgGuaxiangGoods guaxiang = 7;
  inline int guaxiang_size() const;
  inline void clear_guaxiang();
  static const int kGuaxiangFieldNumber = 7;
  inline const ::sanguo::MsgGuaxiangGoods& guaxiang(int index) const;
  inline ::sanguo::MsgGuaxiangGoods* mutable_guaxiang(int index);
  inline ::sanguo::MsgGuaxiangGoods* add_guaxiang();
  inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgGuaxiangGoods >&
      guaxiang() const;
  inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgGuaxiangGoods >*
      mutable_guaxiang();

  // @@protoc_insertion_point(class_scope:sanguo.GetDailyRechargeRewardResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_copper();
  inline void clear_has_copper();
  inline void set_has_gold();
  inline void clear_has_gold();

  int msgid_;
  int status_;
  ::google::protobuf::uint64 copper_;
  ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleBagGoods > goods_;
  ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods > gem_;
  ::google::protobuf::RepeatedPtrField< ::sanguo::MsgGuaxiangGoods > guaxiang_;
  ::google::protobuf::uint32 gold_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5fdaily_5frecharge_5freward_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fdaily_5frecharge_5freward_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fdaily_5frecharge_5freward_2eproto();
  friend void protobuf_ShutdownFile_get_5fdaily_5frecharge_5freward_2eproto();

  void InitAsDefaultInstance();
  static GetDailyRechargeRewardResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// GetDailyRechargeRewardRequest

// required .sanguo.MsgID msgID = 1;
inline bool GetDailyRechargeRewardRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetDailyRechargeRewardRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetDailyRechargeRewardRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetDailyRechargeRewardRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetDailyRechargeRewardRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetDailyRechargeRewardRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// -------------------------------------------------------------------

// GetDailyRechargeRewardResponse

// required .sanguo.MsgID msgID = 1;
inline bool GetDailyRechargeRewardResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetDailyRechargeRewardResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetDailyRechargeRewardResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetDailyRechargeRewardResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetDailyRechargeRewardResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetDailyRechargeRewardResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool GetDailyRechargeRewardResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetDailyRechargeRewardResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetDailyRechargeRewardResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetDailyRechargeRewardResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode GetDailyRechargeRewardResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void GetDailyRechargeRewardResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional uint64 copper = 3;
inline bool GetDailyRechargeRewardResponse::has_copper() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GetDailyRechargeRewardResponse::set_has_copper() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GetDailyRechargeRewardResponse::clear_has_copper() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GetDailyRechargeRewardResponse::clear_copper() {
  copper_ = GOOGLE_ULONGLONG(0);
  clear_has_copper();
}
inline ::google::protobuf::uint64 GetDailyRechargeRewardResponse::copper() const {
  return copper_;
}
inline void GetDailyRechargeRewardResponse::set_copper(::google::protobuf::uint64 value) {
  set_has_copper();
  copper_ = value;
}

// optional uint32 gold = 4;
inline bool GetDailyRechargeRewardResponse::has_gold() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void GetDailyRechargeRewardResponse::set_has_gold() {
  _has_bits_[0] |= 0x00000008u;
}
inline void GetDailyRechargeRewardResponse::clear_has_gold() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void GetDailyRechargeRewardResponse::clear_gold() {
  gold_ = 0u;
  clear_has_gold();
}
inline ::google::protobuf::uint32 GetDailyRechargeRewardResponse::gold() const {
  return gold_;
}
inline void GetDailyRechargeRewardResponse::set_gold(::google::protobuf::uint32 value) {
  set_has_gold();
  gold_ = value;
}

// repeated .sanguo.MsgRoleBagGoods goods = 5;
inline int GetDailyRechargeRewardResponse::goods_size() const {
  return goods_.size();
}
inline void GetDailyRechargeRewardResponse::clear_goods() {
  goods_.Clear();
}
inline const ::sanguo::MsgRoleBagGoods& GetDailyRechargeRewardResponse::goods(int index) const {
  return goods_.Get(index);
}
inline ::sanguo::MsgRoleBagGoods* GetDailyRechargeRewardResponse::mutable_goods(int index) {
  return goods_.Mutable(index);
}
inline ::sanguo::MsgRoleBagGoods* GetDailyRechargeRewardResponse::add_goods() {
  return goods_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleBagGoods >&
GetDailyRechargeRewardResponse::goods() const {
  return goods_;
}
inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleBagGoods >*
GetDailyRechargeRewardResponse::mutable_goods() {
  return &goods_;
}

// repeated .sanguo.MsgRoleGemBagGoods gem = 6;
inline int GetDailyRechargeRewardResponse::gem_size() const {
  return gem_.size();
}
inline void GetDailyRechargeRewardResponse::clear_gem() {
  gem_.Clear();
}
inline const ::sanguo::MsgRoleGemBagGoods& GetDailyRechargeRewardResponse::gem(int index) const {
  return gem_.Get(index);
}
inline ::sanguo::MsgRoleGemBagGoods* GetDailyRechargeRewardResponse::mutable_gem(int index) {
  return gem_.Mutable(index);
}
inline ::sanguo::MsgRoleGemBagGoods* GetDailyRechargeRewardResponse::add_gem() {
  return gem_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods >&
GetDailyRechargeRewardResponse::gem() const {
  return gem_;
}
inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods >*
GetDailyRechargeRewardResponse::mutable_gem() {
  return &gem_;
}

// repeated .sanguo.MsgGuaxiangGoods guaxiang = 7;
inline int GetDailyRechargeRewardResponse::guaxiang_size() const {
  return guaxiang_.size();
}
inline void GetDailyRechargeRewardResponse::clear_guaxiang() {
  guaxiang_.Clear();
}
inline const ::sanguo::MsgGuaxiangGoods& GetDailyRechargeRewardResponse::guaxiang(int index) const {
  return guaxiang_.Get(index);
}
inline ::sanguo::MsgGuaxiangGoods* GetDailyRechargeRewardResponse::mutable_guaxiang(int index) {
  return guaxiang_.Mutable(index);
}
inline ::sanguo::MsgGuaxiangGoods* GetDailyRechargeRewardResponse::add_guaxiang() {
  return guaxiang_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgGuaxiangGoods >&
GetDailyRechargeRewardResponse::guaxiang() const {
  return guaxiang_;
}
inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgGuaxiangGoods >*
GetDailyRechargeRewardResponse::mutable_guaxiang() {
  return &guaxiang_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_get_5fdaily_5frecharge_5freward_2eproto__INCLUDED
