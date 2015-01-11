// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sell_goods.proto

#ifndef PROTOBUF_sell_5fgoods_2eproto__INCLUDED
#define PROTOBUF_sell_5fgoods_2eproto__INCLUDED

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
void  protobuf_AddDesc_sell_5fgoods_2eproto();
void protobuf_AssignDesc_sell_5fgoods_2eproto();
void protobuf_ShutdownFile_sell_5fgoods_2eproto();

class SellGoodsRequest;
class SellGoodsResponse;

// ===================================================================

class SellGoodsRequest : public ::google::protobuf::MessageLite {
 public:
  SellGoodsRequest();
  virtual ~SellGoodsRequest();

  SellGoodsRequest(const SellGoodsRequest& from);

  inline SellGoodsRequest& operator=(const SellGoodsRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const SellGoodsRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const SellGoodsRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(SellGoodsRequest* other);

  // implements Message ----------------------------------------------

  SellGoodsRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const SellGoodsRequest& from);
  void MergeFrom(const SellGoodsRequest& from);
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

  // required uint64 autoIncrID = 2;
  inline bool has_autoincrid() const;
  inline void clear_autoincrid();
  static const int kAutoIncrIDFieldNumber = 2;
  inline ::google::protobuf::uint64 autoincrid() const;
  inline void set_autoincrid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:sanguo.SellGoodsRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_autoincrid();
  inline void clear_has_autoincrid();

  ::google::protobuf::uint64 autoincrid_;
  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_sell_5fgoods_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_sell_5fgoods_2eproto();
  #endif
  friend void protobuf_AssignDesc_sell_5fgoods_2eproto();
  friend void protobuf_ShutdownFile_sell_5fgoods_2eproto();

  void InitAsDefaultInstance();
  static SellGoodsRequest* default_instance_;
};
// -------------------------------------------------------------------

class SellGoodsResponse : public ::google::protobuf::MessageLite {
 public:
  SellGoodsResponse();
  virtual ~SellGoodsResponse();

  SellGoodsResponse(const SellGoodsResponse& from);

  inline SellGoodsResponse& operator=(const SellGoodsResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const SellGoodsResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const SellGoodsResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(SellGoodsResponse* other);

  // implements Message ----------------------------------------------

  SellGoodsResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const SellGoodsResponse& from);
  void MergeFrom(const SellGoodsResponse& from);
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

  // optional uint32 jade = 5;
  inline bool has_jade() const;
  inline void clear_jade();
  static const int kJadeFieldNumber = 5;
  inline ::google::protobuf::uint32 jade() const;
  inline void set_jade(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.SellGoodsResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_copper();
  inline void clear_has_copper();
  inline void set_has_gold();
  inline void clear_has_gold();
  inline void set_has_jade();
  inline void clear_has_jade();

  int msgid_;
  int status_;
  ::google::protobuf::uint64 copper_;
  ::google::protobuf::uint32 gold_;
  ::google::protobuf::uint32 jade_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_sell_5fgoods_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_sell_5fgoods_2eproto();
  #endif
  friend void protobuf_AssignDesc_sell_5fgoods_2eproto();
  friend void protobuf_ShutdownFile_sell_5fgoods_2eproto();

  void InitAsDefaultInstance();
  static SellGoodsResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// SellGoodsRequest

// required .sanguo.MsgID msgID = 1;
inline bool SellGoodsRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SellGoodsRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SellGoodsRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SellGoodsRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID SellGoodsRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void SellGoodsRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required uint64 autoIncrID = 2;
inline bool SellGoodsRequest::has_autoincrid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SellGoodsRequest::set_has_autoincrid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SellGoodsRequest::clear_has_autoincrid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SellGoodsRequest::clear_autoincrid() {
  autoincrid_ = GOOGLE_ULONGLONG(0);
  clear_has_autoincrid();
}
inline ::google::protobuf::uint64 SellGoodsRequest::autoincrid() const {
  return autoincrid_;
}
inline void SellGoodsRequest::set_autoincrid(::google::protobuf::uint64 value) {
  set_has_autoincrid();
  autoincrid_ = value;
}

// -------------------------------------------------------------------

// SellGoodsResponse

// required .sanguo.MsgID msgID = 1;
inline bool SellGoodsResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SellGoodsResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SellGoodsResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SellGoodsResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID SellGoodsResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void SellGoodsResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool SellGoodsResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SellGoodsResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SellGoodsResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SellGoodsResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode SellGoodsResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void SellGoodsResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional uint64 copper = 3;
inline bool SellGoodsResponse::has_copper() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SellGoodsResponse::set_has_copper() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SellGoodsResponse::clear_has_copper() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SellGoodsResponse::clear_copper() {
  copper_ = GOOGLE_ULONGLONG(0);
  clear_has_copper();
}
inline ::google::protobuf::uint64 SellGoodsResponse::copper() const {
  return copper_;
}
inline void SellGoodsResponse::set_copper(::google::protobuf::uint64 value) {
  set_has_copper();
  copper_ = value;
}

// optional uint32 gold = 4;
inline bool SellGoodsResponse::has_gold() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SellGoodsResponse::set_has_gold() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SellGoodsResponse::clear_has_gold() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SellGoodsResponse::clear_gold() {
  gold_ = 0u;
  clear_has_gold();
}
inline ::google::protobuf::uint32 SellGoodsResponse::gold() const {
  return gold_;
}
inline void SellGoodsResponse::set_gold(::google::protobuf::uint32 value) {
  set_has_gold();
  gold_ = value;
}

// optional uint32 jade = 5;
inline bool SellGoodsResponse::has_jade() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SellGoodsResponse::set_has_jade() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SellGoodsResponse::clear_has_jade() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SellGoodsResponse::clear_jade() {
  jade_ = 0u;
  clear_has_jade();
}
inline ::google::protobuf::uint32 SellGoodsResponse::jade() const {
  return jade_;
}
inline void SellGoodsResponse::set_jade(::google::protobuf::uint32 value) {
  set_has_jade();
  jade_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sell_5fgoods_2eproto__INCLUDED
