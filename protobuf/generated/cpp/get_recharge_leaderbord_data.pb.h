// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_recharge_leaderbord_data.proto

#ifndef PROTOBUF_get_5frecharge_5fleaderbord_5fdata_2eproto__INCLUDED
#define PROTOBUF_get_5frecharge_5fleaderbord_5fdata_2eproto__INCLUDED

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
#include "leader_itembord_data.pb.h"
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_get_5frecharge_5fleaderbord_5fdata_2eproto();
void protobuf_AssignDesc_get_5frecharge_5fleaderbord_5fdata_2eproto();
void protobuf_ShutdownFile_get_5frecharge_5fleaderbord_5fdata_2eproto();

class GetRechargeLeaderbordDataRequest;
class GetRechargeLeaderbordDataResponse;

// ===================================================================

class GetRechargeLeaderbordDataRequest : public ::google::protobuf::MessageLite {
 public:
  GetRechargeLeaderbordDataRequest();
  virtual ~GetRechargeLeaderbordDataRequest();

  GetRechargeLeaderbordDataRequest(const GetRechargeLeaderbordDataRequest& from);

  inline GetRechargeLeaderbordDataRequest& operator=(const GetRechargeLeaderbordDataRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetRechargeLeaderbordDataRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetRechargeLeaderbordDataRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetRechargeLeaderbordDataRequest* other);

  // implements Message ----------------------------------------------

  GetRechargeLeaderbordDataRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetRechargeLeaderbordDataRequest& from);
  void MergeFrom(const GetRechargeLeaderbordDataRequest& from);
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

  // required uint64 activityId = 2;
  inline bool has_activityid() const;
  inline void clear_activityid();
  static const int kActivityIdFieldNumber = 2;
  inline ::google::protobuf::uint64 activityid() const;
  inline void set_activityid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:sanguo.GetRechargeLeaderbordDataRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_activityid();
  inline void clear_has_activityid();

  ::google::protobuf::uint64 activityid_;
  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5frecharge_5fleaderbord_5fdata_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5frecharge_5fleaderbord_5fdata_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5frecharge_5fleaderbord_5fdata_2eproto();
  friend void protobuf_ShutdownFile_get_5frecharge_5fleaderbord_5fdata_2eproto();

  void InitAsDefaultInstance();
  static GetRechargeLeaderbordDataRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetRechargeLeaderbordDataResponse : public ::google::protobuf::MessageLite {
 public:
  GetRechargeLeaderbordDataResponse();
  virtual ~GetRechargeLeaderbordDataResponse();

  GetRechargeLeaderbordDataResponse(const GetRechargeLeaderbordDataResponse& from);

  inline GetRechargeLeaderbordDataResponse& operator=(const GetRechargeLeaderbordDataResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetRechargeLeaderbordDataResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetRechargeLeaderbordDataResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetRechargeLeaderbordDataResponse* other);

  // implements Message ----------------------------------------------

  GetRechargeLeaderbordDataResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetRechargeLeaderbordDataResponse& from);
  void MergeFrom(const GetRechargeLeaderbordDataResponse& from);
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

  // required uint32 rechargeLeaderboard = 3;
  inline bool has_rechargeleaderboard() const;
  inline void clear_rechargeleaderboard();
  static const int kRechargeLeaderboardFieldNumber = 3;
  inline ::google::protobuf::uint32 rechargeleaderboard() const;
  inline void set_rechargeleaderboard(::google::protobuf::uint32 value);

  // repeated .sanguo.MsgLeaderItembordData data = 4;
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 4;
  inline const ::sanguo::MsgLeaderItembordData& data(int index) const;
  inline ::sanguo::MsgLeaderItembordData* mutable_data(int index);
  inline ::sanguo::MsgLeaderItembordData* add_data();
  inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgLeaderItembordData >&
      data() const;
  inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgLeaderItembordData >*
      mutable_data();

  // @@protoc_insertion_point(class_scope:sanguo.GetRechargeLeaderbordDataResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_rechargeleaderboard();
  inline void clear_has_rechargeleaderboard();

  int msgid_;
  int status_;
  ::google::protobuf::RepeatedPtrField< ::sanguo::MsgLeaderItembordData > data_;
  ::google::protobuf::uint32 rechargeleaderboard_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5frecharge_5fleaderbord_5fdata_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5frecharge_5fleaderbord_5fdata_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5frecharge_5fleaderbord_5fdata_2eproto();
  friend void protobuf_ShutdownFile_get_5frecharge_5fleaderbord_5fdata_2eproto();

  void InitAsDefaultInstance();
  static GetRechargeLeaderbordDataResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// GetRechargeLeaderbordDataRequest

// required .sanguo.MsgID msgID = 1;
inline bool GetRechargeLeaderbordDataRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetRechargeLeaderbordDataRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetRechargeLeaderbordDataRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetRechargeLeaderbordDataRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetRechargeLeaderbordDataRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetRechargeLeaderbordDataRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required uint64 activityId = 2;
inline bool GetRechargeLeaderbordDataRequest::has_activityid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetRechargeLeaderbordDataRequest::set_has_activityid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetRechargeLeaderbordDataRequest::clear_has_activityid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetRechargeLeaderbordDataRequest::clear_activityid() {
  activityid_ = GOOGLE_ULONGLONG(0);
  clear_has_activityid();
}
inline ::google::protobuf::uint64 GetRechargeLeaderbordDataRequest::activityid() const {
  return activityid_;
}
inline void GetRechargeLeaderbordDataRequest::set_activityid(::google::protobuf::uint64 value) {
  set_has_activityid();
  activityid_ = value;
}

// -------------------------------------------------------------------

// GetRechargeLeaderbordDataResponse

// required .sanguo.MsgID msgID = 1;
inline bool GetRechargeLeaderbordDataResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetRechargeLeaderbordDataResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetRechargeLeaderbordDataResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetRechargeLeaderbordDataResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetRechargeLeaderbordDataResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetRechargeLeaderbordDataResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool GetRechargeLeaderbordDataResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetRechargeLeaderbordDataResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetRechargeLeaderbordDataResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetRechargeLeaderbordDataResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode GetRechargeLeaderbordDataResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void GetRechargeLeaderbordDataResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// required uint32 rechargeLeaderboard = 3;
inline bool GetRechargeLeaderbordDataResponse::has_rechargeleaderboard() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GetRechargeLeaderbordDataResponse::set_has_rechargeleaderboard() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GetRechargeLeaderbordDataResponse::clear_has_rechargeleaderboard() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GetRechargeLeaderbordDataResponse::clear_rechargeleaderboard() {
  rechargeleaderboard_ = 0u;
  clear_has_rechargeleaderboard();
}
inline ::google::protobuf::uint32 GetRechargeLeaderbordDataResponse::rechargeleaderboard() const {
  return rechargeleaderboard_;
}
inline void GetRechargeLeaderbordDataResponse::set_rechargeleaderboard(::google::protobuf::uint32 value) {
  set_has_rechargeleaderboard();
  rechargeleaderboard_ = value;
}

// repeated .sanguo.MsgLeaderItembordData data = 4;
inline int GetRechargeLeaderbordDataResponse::data_size() const {
  return data_.size();
}
inline void GetRechargeLeaderbordDataResponse::clear_data() {
  data_.Clear();
}
inline const ::sanguo::MsgLeaderItembordData& GetRechargeLeaderbordDataResponse::data(int index) const {
  return data_.Get(index);
}
inline ::sanguo::MsgLeaderItembordData* GetRechargeLeaderbordDataResponse::mutable_data(int index) {
  return data_.Mutable(index);
}
inline ::sanguo::MsgLeaderItembordData* GetRechargeLeaderbordDataResponse::add_data() {
  return data_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgLeaderItembordData >&
GetRechargeLeaderbordDataResponse::data() const {
  return data_;
}
inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgLeaderItembordData >*
GetRechargeLeaderbordDataResponse::mutable_data() {
  return &data_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_get_5frecharge_5fleaderbord_5fdata_2eproto__INCLUDED
