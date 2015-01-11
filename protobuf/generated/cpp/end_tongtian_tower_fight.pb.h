// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: end_tongtian_tower_fight.proto

#ifndef PROTOBUF_end_5ftongtian_5ftower_5ffight_2eproto__INCLUDED
#define PROTOBUF_end_5ftongtian_5ftower_5ffight_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_end_5ftongtian_5ftower_5ffight_2eproto();
void protobuf_AssignDesc_end_5ftongtian_5ftower_5ffight_2eproto();
void protobuf_ShutdownFile_end_5ftongtian_5ftower_5ffight_2eproto();

class EndTongtianTowerFightRequest;
class EndTongtianTowerFightResponse;

// ===================================================================

class EndTongtianTowerFightRequest : public ::google::protobuf::MessageLite {
 public:
  EndTongtianTowerFightRequest();
  virtual ~EndTongtianTowerFightRequest();

  EndTongtianTowerFightRequest(const EndTongtianTowerFightRequest& from);

  inline EndTongtianTowerFightRequest& operator=(const EndTongtianTowerFightRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const EndTongtianTowerFightRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const EndTongtianTowerFightRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(EndTongtianTowerFightRequest* other);

  // implements Message ----------------------------------------------

  EndTongtianTowerFightRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const EndTongtianTowerFightRequest& from);
  void MergeFrom(const EndTongtianTowerFightRequest& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.EndTongtianTowerFightRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();

  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_end_5ftongtian_5ftower_5ffight_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_end_5ftongtian_5ftower_5ffight_2eproto();
  #endif
  friend void protobuf_AssignDesc_end_5ftongtian_5ftower_5ffight_2eproto();
  friend void protobuf_ShutdownFile_end_5ftongtian_5ftower_5ffight_2eproto();

  void InitAsDefaultInstance();
  static EndTongtianTowerFightRequest* default_instance_;
};
// -------------------------------------------------------------------

class EndTongtianTowerFightResponse : public ::google::protobuf::MessageLite {
 public:
  EndTongtianTowerFightResponse();
  virtual ~EndTongtianTowerFightResponse();

  EndTongtianTowerFightResponse(const EndTongtianTowerFightResponse& from);

  inline EndTongtianTowerFightResponse& operator=(const EndTongtianTowerFightResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const EndTongtianTowerFightResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const EndTongtianTowerFightResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(EndTongtianTowerFightResponse* other);

  // implements Message ----------------------------------------------

  EndTongtianTowerFightResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const EndTongtianTowerFightResponse& from);
  void MergeFrom(const EndTongtianTowerFightResponse& from);
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

  // repeated .sanguo.MsgRoleBagGoods goodsinfoData = 3;
  inline int goodsinfodata_size() const;
  inline void clear_goodsinfodata();
  static const int kGoodsinfoDataFieldNumber = 3;
  inline const ::sanguo::MsgRoleBagGoods& goodsinfodata(int index) const;
  inline ::sanguo::MsgRoleBagGoods* mutable_goodsinfodata(int index);
  inline ::sanguo::MsgRoleBagGoods* add_goodsinfodata();
  inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleBagGoods >&
      goodsinfodata() const;
  inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleBagGoods >*
      mutable_goodsinfodata();

  // required uint32 power = 4;
  inline bool has_power() const;
  inline void clear_power();
  static const int kPowerFieldNumber = 4;
  inline ::google::protobuf::uint32 power() const;
  inline void set_power(::google::protobuf::uint32 value);

  // required uint32 currentFloor = 5;
  inline bool has_currentfloor() const;
  inline void clear_currentfloor();
  static const int kCurrentFloorFieldNumber = 5;
  inline ::google::protobuf::uint32 currentfloor() const;
  inline void set_currentfloor(::google::protobuf::uint32 value);

  // required uint32 maxFloor = 6;
  inline bool has_maxfloor() const;
  inline void clear_maxfloor();
  static const int kMaxFloorFieldNumber = 6;
  inline ::google::protobuf::uint32 maxfloor() const;
  inline void set_maxfloor(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.EndTongtianTowerFightResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_power();
  inline void clear_has_power();
  inline void set_has_currentfloor();
  inline void clear_has_currentfloor();
  inline void set_has_maxfloor();
  inline void clear_has_maxfloor();

  int msgid_;
  int status_;
  ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleBagGoods > goodsinfodata_;
  ::google::protobuf::uint32 power_;
  ::google::protobuf::uint32 currentfloor_;
  ::google::protobuf::uint32 maxfloor_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_end_5ftongtian_5ftower_5ffight_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_end_5ftongtian_5ftower_5ffight_2eproto();
  #endif
  friend void protobuf_AssignDesc_end_5ftongtian_5ftower_5ffight_2eproto();
  friend void protobuf_ShutdownFile_end_5ftongtian_5ftower_5ffight_2eproto();

  void InitAsDefaultInstance();
  static EndTongtianTowerFightResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// EndTongtianTowerFightRequest

// required .sanguo.MsgID msgID = 1;
inline bool EndTongtianTowerFightRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EndTongtianTowerFightRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EndTongtianTowerFightRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EndTongtianTowerFightRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID EndTongtianTowerFightRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void EndTongtianTowerFightRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// -------------------------------------------------------------------

// EndTongtianTowerFightResponse

// required .sanguo.MsgID msgID = 1;
inline bool EndTongtianTowerFightResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EndTongtianTowerFightResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EndTongtianTowerFightResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EndTongtianTowerFightResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID EndTongtianTowerFightResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void EndTongtianTowerFightResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool EndTongtianTowerFightResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void EndTongtianTowerFightResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void EndTongtianTowerFightResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void EndTongtianTowerFightResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode EndTongtianTowerFightResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void EndTongtianTowerFightResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// repeated .sanguo.MsgRoleBagGoods goodsinfoData = 3;
inline int EndTongtianTowerFightResponse::goodsinfodata_size() const {
  return goodsinfodata_.size();
}
inline void EndTongtianTowerFightResponse::clear_goodsinfodata() {
  goodsinfodata_.Clear();
}
inline const ::sanguo::MsgRoleBagGoods& EndTongtianTowerFightResponse::goodsinfodata(int index) const {
  return goodsinfodata_.Get(index);
}
inline ::sanguo::MsgRoleBagGoods* EndTongtianTowerFightResponse::mutable_goodsinfodata(int index) {
  return goodsinfodata_.Mutable(index);
}
inline ::sanguo::MsgRoleBagGoods* EndTongtianTowerFightResponse::add_goodsinfodata() {
  return goodsinfodata_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleBagGoods >&
EndTongtianTowerFightResponse::goodsinfodata() const {
  return goodsinfodata_;
}
inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleBagGoods >*
EndTongtianTowerFightResponse::mutable_goodsinfodata() {
  return &goodsinfodata_;
}

// required uint32 power = 4;
inline bool EndTongtianTowerFightResponse::has_power() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void EndTongtianTowerFightResponse::set_has_power() {
  _has_bits_[0] |= 0x00000008u;
}
inline void EndTongtianTowerFightResponse::clear_has_power() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void EndTongtianTowerFightResponse::clear_power() {
  power_ = 0u;
  clear_has_power();
}
inline ::google::protobuf::uint32 EndTongtianTowerFightResponse::power() const {
  return power_;
}
inline void EndTongtianTowerFightResponse::set_power(::google::protobuf::uint32 value) {
  set_has_power();
  power_ = value;
}

// required uint32 currentFloor = 5;
inline bool EndTongtianTowerFightResponse::has_currentfloor() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void EndTongtianTowerFightResponse::set_has_currentfloor() {
  _has_bits_[0] |= 0x00000010u;
}
inline void EndTongtianTowerFightResponse::clear_has_currentfloor() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void EndTongtianTowerFightResponse::clear_currentfloor() {
  currentfloor_ = 0u;
  clear_has_currentfloor();
}
inline ::google::protobuf::uint32 EndTongtianTowerFightResponse::currentfloor() const {
  return currentfloor_;
}
inline void EndTongtianTowerFightResponse::set_currentfloor(::google::protobuf::uint32 value) {
  set_has_currentfloor();
  currentfloor_ = value;
}

// required uint32 maxFloor = 6;
inline bool EndTongtianTowerFightResponse::has_maxfloor() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void EndTongtianTowerFightResponse::set_has_maxfloor() {
  _has_bits_[0] |= 0x00000020u;
}
inline void EndTongtianTowerFightResponse::clear_has_maxfloor() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void EndTongtianTowerFightResponse::clear_maxfloor() {
  maxfloor_ = 0u;
  clear_has_maxfloor();
}
inline ::google::protobuf::uint32 EndTongtianTowerFightResponse::maxfloor() const {
  return maxfloor_;
}
inline void EndTongtianTowerFightResponse::set_maxfloor(::google::protobuf::uint32 value) {
  set_has_maxfloor();
  maxfloor_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_end_5ftongtian_5ftower_5ffight_2eproto__INCLUDED
