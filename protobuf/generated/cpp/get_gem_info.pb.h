// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_gem_info.proto

#ifndef PROTOBUF_get_5fgem_5finfo_2eproto__INCLUDED
#define PROTOBUF_get_5fgem_5finfo_2eproto__INCLUDED

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
#include "role_gem_bag_goods.pb.h"
#include "msg_status_code.pb.h"
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_get_5fgem_5finfo_2eproto();
void protobuf_AssignDesc_get_5fgem_5finfo_2eproto();
void protobuf_ShutdownFile_get_5fgem_5finfo_2eproto();

class GetGemInfoRequest;
class GetGemInfoResponse;

// ===================================================================

class GetGemInfoRequest : public ::google::protobuf::MessageLite {
 public:
  GetGemInfoRequest();
  virtual ~GetGemInfoRequest();

  GetGemInfoRequest(const GetGemInfoRequest& from);

  inline GetGemInfoRequest& operator=(const GetGemInfoRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetGemInfoRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetGemInfoRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetGemInfoRequest* other);

  // implements Message ----------------------------------------------

  GetGemInfoRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetGemInfoRequest& from);
  void MergeFrom(const GetGemInfoRequest& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.GetGemInfoRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();

  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5fgem_5finfo_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fgem_5finfo_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fgem_5finfo_2eproto();
  friend void protobuf_ShutdownFile_get_5fgem_5finfo_2eproto();

  void InitAsDefaultInstance();
  static GetGemInfoRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetGemInfoResponse : public ::google::protobuf::MessageLite {
 public:
  GetGemInfoResponse();
  virtual ~GetGemInfoResponse();

  GetGemInfoResponse(const GetGemInfoResponse& from);

  inline GetGemInfoResponse& operator=(const GetGemInfoResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetGemInfoResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetGemInfoResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetGemInfoResponse* other);

  // implements Message ----------------------------------------------

  GetGemInfoResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetGemInfoResponse& from);
  void MergeFrom(const GetGemInfoResponse& from);
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

  // repeated .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;
  inline int rolegembaggoods_size() const;
  inline void clear_rolegembaggoods();
  static const int kRoleGemBagGoodsFieldNumber = 3;
  inline const ::sanguo::MsgRoleGemBagGoods& rolegembaggoods(int index) const;
  inline ::sanguo::MsgRoleGemBagGoods* mutable_rolegembaggoods(int index);
  inline ::sanguo::MsgRoleGemBagGoods* add_rolegembaggoods();
  inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods >&
      rolegembaggoods() const;
  inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods >*
      mutable_rolegembaggoods();

  // repeated .sanguo.MsgRoleGemBagGoods roleGemOnBody = 4;
  inline int rolegemonbody_size() const;
  inline void clear_rolegemonbody();
  static const int kRoleGemOnBodyFieldNumber = 4;
  inline const ::sanguo::MsgRoleGemBagGoods& rolegemonbody(int index) const;
  inline ::sanguo::MsgRoleGemBagGoods* mutable_rolegemonbody(int index);
  inline ::sanguo::MsgRoleGemBagGoods* add_rolegemonbody();
  inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods >&
      rolegemonbody() const;
  inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods >*
      mutable_rolegemonbody();

  // @@protoc_insertion_point(class_scope:sanguo.GetGemInfoResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();

  int msgid_;
  int status_;
  ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods > rolegembaggoods_;
  ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods > rolegemonbody_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5fgem_5finfo_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fgem_5finfo_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fgem_5finfo_2eproto();
  friend void protobuf_ShutdownFile_get_5fgem_5finfo_2eproto();

  void InitAsDefaultInstance();
  static GetGemInfoResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// GetGemInfoRequest

// required .sanguo.MsgID msgID = 1;
inline bool GetGemInfoRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetGemInfoRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetGemInfoRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetGemInfoRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetGemInfoRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetGemInfoRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// -------------------------------------------------------------------

// GetGemInfoResponse

// required .sanguo.MsgID msgID = 1;
inline bool GetGemInfoResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetGemInfoResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetGemInfoResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetGemInfoResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetGemInfoResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetGemInfoResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool GetGemInfoResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetGemInfoResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetGemInfoResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetGemInfoResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode GetGemInfoResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void GetGemInfoResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// repeated .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;
inline int GetGemInfoResponse::rolegembaggoods_size() const {
  return rolegembaggoods_.size();
}
inline void GetGemInfoResponse::clear_rolegembaggoods() {
  rolegembaggoods_.Clear();
}
inline const ::sanguo::MsgRoleGemBagGoods& GetGemInfoResponse::rolegembaggoods(int index) const {
  return rolegembaggoods_.Get(index);
}
inline ::sanguo::MsgRoleGemBagGoods* GetGemInfoResponse::mutable_rolegembaggoods(int index) {
  return rolegembaggoods_.Mutable(index);
}
inline ::sanguo::MsgRoleGemBagGoods* GetGemInfoResponse::add_rolegembaggoods() {
  return rolegembaggoods_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods >&
GetGemInfoResponse::rolegembaggoods() const {
  return rolegembaggoods_;
}
inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods >*
GetGemInfoResponse::mutable_rolegembaggoods() {
  return &rolegembaggoods_;
}

// repeated .sanguo.MsgRoleGemBagGoods roleGemOnBody = 4;
inline int GetGemInfoResponse::rolegemonbody_size() const {
  return rolegemonbody_.size();
}
inline void GetGemInfoResponse::clear_rolegemonbody() {
  rolegemonbody_.Clear();
}
inline const ::sanguo::MsgRoleGemBagGoods& GetGemInfoResponse::rolegemonbody(int index) const {
  return rolegemonbody_.Get(index);
}
inline ::sanguo::MsgRoleGemBagGoods* GetGemInfoResponse::mutable_rolegemonbody(int index) {
  return rolegemonbody_.Mutable(index);
}
inline ::sanguo::MsgRoleGemBagGoods* GetGemInfoResponse::add_rolegemonbody() {
  return rolegemonbody_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods >&
GetGemInfoResponse::rolegemonbody() const {
  return rolegemonbody_;
}
inline ::google::protobuf::RepeatedPtrField< ::sanguo::MsgRoleGemBagGoods >*
GetGemInfoResponse::mutable_rolegemonbody() {
  return &rolegemonbody_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_get_5fgem_5finfo_2eproto__INCLUDED
