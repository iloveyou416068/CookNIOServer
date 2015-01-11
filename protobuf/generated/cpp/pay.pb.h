// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pay.proto

#ifndef PROTOBUF_pay_2eproto__INCLUDED
#define PROTOBUF_pay_2eproto__INCLUDED

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
void  protobuf_AddDesc_pay_2eproto();
void protobuf_AssignDesc_pay_2eproto();
void protobuf_ShutdownFile_pay_2eproto();

class PayRequest;
class PayResponse;

// ===================================================================

class PayRequest : public ::google::protobuf::MessageLite {
 public:
  PayRequest();
  virtual ~PayRequest();

  PayRequest(const PayRequest& from);

  inline PayRequest& operator=(const PayRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const PayRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PayRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PayRequest* other);

  // implements Message ----------------------------------------------

  PayRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PayRequest& from);
  void MergeFrom(const PayRequest& from);
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

  // required string payDesc = 2;
  inline bool has_paydesc() const;
  inline void clear_paydesc();
  static const int kPayDescFieldNumber = 2;
  inline const ::std::string& paydesc() const;
  inline void set_paydesc(const ::std::string& value);
  inline void set_paydesc(const char* value);
  inline void set_paydesc(const char* value, size_t size);
  inline ::std::string* mutable_paydesc();
  inline ::std::string* release_paydesc();
  inline void set_allocated_paydesc(::std::string* paydesc);

  // required uint32 rechargeInfoID = 3;
  inline bool has_rechargeinfoid() const;
  inline void clear_rechargeinfoid();
  static const int kRechargeInfoIDFieldNumber = 3;
  inline ::google::protobuf::uint32 rechargeinfoid() const;
  inline void set_rechargeinfoid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.PayRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_paydesc();
  inline void clear_has_paydesc();
  inline void set_has_rechargeinfoid();
  inline void clear_has_rechargeinfoid();

  ::std::string* paydesc_;
  int msgid_;
  ::google::protobuf::uint32 rechargeinfoid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_pay_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_pay_2eproto();
  #endif
  friend void protobuf_AssignDesc_pay_2eproto();
  friend void protobuf_ShutdownFile_pay_2eproto();

  void InitAsDefaultInstance();
  static PayRequest* default_instance_;
};
// -------------------------------------------------------------------

class PayResponse : public ::google::protobuf::MessageLite {
 public:
  PayResponse();
  virtual ~PayResponse();

  PayResponse(const PayResponse& from);

  inline PayResponse& operator=(const PayResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const PayResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PayResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PayResponse* other);

  // implements Message ----------------------------------------------

  PayResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PayResponse& from);
  void MergeFrom(const PayResponse& from);
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

  // optional string coolOrderSerial = 3;
  inline bool has_coolorderserial() const;
  inline void clear_coolorderserial();
  static const int kCoolOrderSerialFieldNumber = 3;
  inline const ::std::string& coolorderserial() const;
  inline void set_coolorderserial(const ::std::string& value);
  inline void set_coolorderserial(const char* value);
  inline void set_coolorderserial(const char* value, size_t size);
  inline ::std::string* mutable_coolorderserial();
  inline ::std::string* release_coolorderserial();
  inline void set_allocated_coolorderserial(::std::string* coolorderserial);

  // optional string productPrice = 4;
  inline bool has_productprice() const;
  inline void clear_productprice();
  static const int kProductPriceFieldNumber = 4;
  inline const ::std::string& productprice() const;
  inline void set_productprice(const ::std::string& value);
  inline void set_productprice(const char* value);
  inline void set_productprice(const char* value, size_t size);
  inline ::std::string* mutable_productprice();
  inline ::std::string* release_productprice();
  inline void set_allocated_productprice(::std::string* productprice);

  // optional string productOrignalPrice = 5;
  inline bool has_productorignalprice() const;
  inline void clear_productorignalprice();
  static const int kProductOrignalPriceFieldNumber = 5;
  inline const ::std::string& productorignalprice() const;
  inline void set_productorignalprice(const ::std::string& value);
  inline void set_productorignalprice(const char* value);
  inline void set_productorignalprice(const char* value, size_t size);
  inline ::std::string* mutable_productorignalprice();
  inline ::std::string* release_productorignalprice();
  inline void set_allocated_productorignalprice(::std::string* productorignalprice);

  // optional string jade = 6;
  inline bool has_jade() const;
  inline void clear_jade();
  static const int kJadeFieldNumber = 6;
  inline const ::std::string& jade() const;
  inline void set_jade(const ::std::string& value);
  inline void set_jade(const char* value);
  inline void set_jade(const char* value, size_t size);
  inline ::std::string* mutable_jade();
  inline ::std::string* release_jade();
  inline void set_allocated_jade(::std::string* jade);

  // optional string accessToken = 7;
  inline bool has_accesstoken() const;
  inline void clear_accesstoken();
  static const int kAccessTokenFieldNumber = 7;
  inline const ::std::string& accesstoken() const;
  inline void set_accesstoken(const ::std::string& value);
  inline void set_accesstoken(const char* value);
  inline void set_accesstoken(const char* value, size_t size);
  inline ::std::string* mutable_accesstoken();
  inline ::std::string* release_accesstoken();
  inline void set_allocated_accesstoken(::std::string* accesstoken);

  // @@protoc_insertion_point(class_scope:sanguo.PayResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_coolorderserial();
  inline void clear_has_coolorderserial();
  inline void set_has_productprice();
  inline void clear_has_productprice();
  inline void set_has_productorignalprice();
  inline void clear_has_productorignalprice();
  inline void set_has_jade();
  inline void clear_has_jade();
  inline void set_has_accesstoken();
  inline void clear_has_accesstoken();

  int msgid_;
  int status_;
  ::std::string* coolorderserial_;
  ::std::string* productprice_;
  ::std::string* productorignalprice_;
  ::std::string* jade_;
  ::std::string* accesstoken_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_pay_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_pay_2eproto();
  #endif
  friend void protobuf_AssignDesc_pay_2eproto();
  friend void protobuf_ShutdownFile_pay_2eproto();

  void InitAsDefaultInstance();
  static PayResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// PayRequest

// required .sanguo.MsgID msgID = 1;
inline bool PayRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PayRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PayRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PayRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID PayRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void PayRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required string payDesc = 2;
inline bool PayRequest::has_paydesc() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PayRequest::set_has_paydesc() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PayRequest::clear_has_paydesc() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PayRequest::clear_paydesc() {
  if (paydesc_ != &::google::protobuf::internal::kEmptyString) {
    paydesc_->clear();
  }
  clear_has_paydesc();
}
inline const ::std::string& PayRequest::paydesc() const {
  return *paydesc_;
}
inline void PayRequest::set_paydesc(const ::std::string& value) {
  set_has_paydesc();
  if (paydesc_ == &::google::protobuf::internal::kEmptyString) {
    paydesc_ = new ::std::string;
  }
  paydesc_->assign(value);
}
inline void PayRequest::set_paydesc(const char* value) {
  set_has_paydesc();
  if (paydesc_ == &::google::protobuf::internal::kEmptyString) {
    paydesc_ = new ::std::string;
  }
  paydesc_->assign(value);
}
inline void PayRequest::set_paydesc(const char* value, size_t size) {
  set_has_paydesc();
  if (paydesc_ == &::google::protobuf::internal::kEmptyString) {
    paydesc_ = new ::std::string;
  }
  paydesc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PayRequest::mutable_paydesc() {
  set_has_paydesc();
  if (paydesc_ == &::google::protobuf::internal::kEmptyString) {
    paydesc_ = new ::std::string;
  }
  return paydesc_;
}
inline ::std::string* PayRequest::release_paydesc() {
  clear_has_paydesc();
  if (paydesc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = paydesc_;
    paydesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PayRequest::set_allocated_paydesc(::std::string* paydesc) {
  if (paydesc_ != &::google::protobuf::internal::kEmptyString) {
    delete paydesc_;
  }
  if (paydesc) {
    set_has_paydesc();
    paydesc_ = paydesc;
  } else {
    clear_has_paydesc();
    paydesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 rechargeInfoID = 3;
inline bool PayRequest::has_rechargeinfoid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PayRequest::set_has_rechargeinfoid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PayRequest::clear_has_rechargeinfoid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PayRequest::clear_rechargeinfoid() {
  rechargeinfoid_ = 0u;
  clear_has_rechargeinfoid();
}
inline ::google::protobuf::uint32 PayRequest::rechargeinfoid() const {
  return rechargeinfoid_;
}
inline void PayRequest::set_rechargeinfoid(::google::protobuf::uint32 value) {
  set_has_rechargeinfoid();
  rechargeinfoid_ = value;
}

// -------------------------------------------------------------------

// PayResponse

// required .sanguo.MsgID msgID = 1;
inline bool PayResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PayResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PayResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PayResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID PayResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void PayResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool PayResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PayResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PayResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PayResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode PayResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void PayResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional string coolOrderSerial = 3;
inline bool PayResponse::has_coolorderserial() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PayResponse::set_has_coolorderserial() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PayResponse::clear_has_coolorderserial() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PayResponse::clear_coolorderserial() {
  if (coolorderserial_ != &::google::protobuf::internal::kEmptyString) {
    coolorderserial_->clear();
  }
  clear_has_coolorderserial();
}
inline const ::std::string& PayResponse::coolorderserial() const {
  return *coolorderserial_;
}
inline void PayResponse::set_coolorderserial(const ::std::string& value) {
  set_has_coolorderserial();
  if (coolorderserial_ == &::google::protobuf::internal::kEmptyString) {
    coolorderserial_ = new ::std::string;
  }
  coolorderserial_->assign(value);
}
inline void PayResponse::set_coolorderserial(const char* value) {
  set_has_coolorderserial();
  if (coolorderserial_ == &::google::protobuf::internal::kEmptyString) {
    coolorderserial_ = new ::std::string;
  }
  coolorderserial_->assign(value);
}
inline void PayResponse::set_coolorderserial(const char* value, size_t size) {
  set_has_coolorderserial();
  if (coolorderserial_ == &::google::protobuf::internal::kEmptyString) {
    coolorderserial_ = new ::std::string;
  }
  coolorderserial_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PayResponse::mutable_coolorderserial() {
  set_has_coolorderserial();
  if (coolorderserial_ == &::google::protobuf::internal::kEmptyString) {
    coolorderserial_ = new ::std::string;
  }
  return coolorderserial_;
}
inline ::std::string* PayResponse::release_coolorderserial() {
  clear_has_coolorderserial();
  if (coolorderserial_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = coolorderserial_;
    coolorderserial_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PayResponse::set_allocated_coolorderserial(::std::string* coolorderserial) {
  if (coolorderserial_ != &::google::protobuf::internal::kEmptyString) {
    delete coolorderserial_;
  }
  if (coolorderserial) {
    set_has_coolorderserial();
    coolorderserial_ = coolorderserial;
  } else {
    clear_has_coolorderserial();
    coolorderserial_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string productPrice = 4;
inline bool PayResponse::has_productprice() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PayResponse::set_has_productprice() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PayResponse::clear_has_productprice() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PayResponse::clear_productprice() {
  if (productprice_ != &::google::protobuf::internal::kEmptyString) {
    productprice_->clear();
  }
  clear_has_productprice();
}
inline const ::std::string& PayResponse::productprice() const {
  return *productprice_;
}
inline void PayResponse::set_productprice(const ::std::string& value) {
  set_has_productprice();
  if (productprice_ == &::google::protobuf::internal::kEmptyString) {
    productprice_ = new ::std::string;
  }
  productprice_->assign(value);
}
inline void PayResponse::set_productprice(const char* value) {
  set_has_productprice();
  if (productprice_ == &::google::protobuf::internal::kEmptyString) {
    productprice_ = new ::std::string;
  }
  productprice_->assign(value);
}
inline void PayResponse::set_productprice(const char* value, size_t size) {
  set_has_productprice();
  if (productprice_ == &::google::protobuf::internal::kEmptyString) {
    productprice_ = new ::std::string;
  }
  productprice_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PayResponse::mutable_productprice() {
  set_has_productprice();
  if (productprice_ == &::google::protobuf::internal::kEmptyString) {
    productprice_ = new ::std::string;
  }
  return productprice_;
}
inline ::std::string* PayResponse::release_productprice() {
  clear_has_productprice();
  if (productprice_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = productprice_;
    productprice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PayResponse::set_allocated_productprice(::std::string* productprice) {
  if (productprice_ != &::google::protobuf::internal::kEmptyString) {
    delete productprice_;
  }
  if (productprice) {
    set_has_productprice();
    productprice_ = productprice;
  } else {
    clear_has_productprice();
    productprice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string productOrignalPrice = 5;
inline bool PayResponse::has_productorignalprice() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PayResponse::set_has_productorignalprice() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PayResponse::clear_has_productorignalprice() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PayResponse::clear_productorignalprice() {
  if (productorignalprice_ != &::google::protobuf::internal::kEmptyString) {
    productorignalprice_->clear();
  }
  clear_has_productorignalprice();
}
inline const ::std::string& PayResponse::productorignalprice() const {
  return *productorignalprice_;
}
inline void PayResponse::set_productorignalprice(const ::std::string& value) {
  set_has_productorignalprice();
  if (productorignalprice_ == &::google::protobuf::internal::kEmptyString) {
    productorignalprice_ = new ::std::string;
  }
  productorignalprice_->assign(value);
}
inline void PayResponse::set_productorignalprice(const char* value) {
  set_has_productorignalprice();
  if (productorignalprice_ == &::google::protobuf::internal::kEmptyString) {
    productorignalprice_ = new ::std::string;
  }
  productorignalprice_->assign(value);
}
inline void PayResponse::set_productorignalprice(const char* value, size_t size) {
  set_has_productorignalprice();
  if (productorignalprice_ == &::google::protobuf::internal::kEmptyString) {
    productorignalprice_ = new ::std::string;
  }
  productorignalprice_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PayResponse::mutable_productorignalprice() {
  set_has_productorignalprice();
  if (productorignalprice_ == &::google::protobuf::internal::kEmptyString) {
    productorignalprice_ = new ::std::string;
  }
  return productorignalprice_;
}
inline ::std::string* PayResponse::release_productorignalprice() {
  clear_has_productorignalprice();
  if (productorignalprice_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = productorignalprice_;
    productorignalprice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PayResponse::set_allocated_productorignalprice(::std::string* productorignalprice) {
  if (productorignalprice_ != &::google::protobuf::internal::kEmptyString) {
    delete productorignalprice_;
  }
  if (productorignalprice) {
    set_has_productorignalprice();
    productorignalprice_ = productorignalprice;
  } else {
    clear_has_productorignalprice();
    productorignalprice_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string jade = 6;
inline bool PayResponse::has_jade() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PayResponse::set_has_jade() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PayResponse::clear_has_jade() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PayResponse::clear_jade() {
  if (jade_ != &::google::protobuf::internal::kEmptyString) {
    jade_->clear();
  }
  clear_has_jade();
}
inline const ::std::string& PayResponse::jade() const {
  return *jade_;
}
inline void PayResponse::set_jade(const ::std::string& value) {
  set_has_jade();
  if (jade_ == &::google::protobuf::internal::kEmptyString) {
    jade_ = new ::std::string;
  }
  jade_->assign(value);
}
inline void PayResponse::set_jade(const char* value) {
  set_has_jade();
  if (jade_ == &::google::protobuf::internal::kEmptyString) {
    jade_ = new ::std::string;
  }
  jade_->assign(value);
}
inline void PayResponse::set_jade(const char* value, size_t size) {
  set_has_jade();
  if (jade_ == &::google::protobuf::internal::kEmptyString) {
    jade_ = new ::std::string;
  }
  jade_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PayResponse::mutable_jade() {
  set_has_jade();
  if (jade_ == &::google::protobuf::internal::kEmptyString) {
    jade_ = new ::std::string;
  }
  return jade_;
}
inline ::std::string* PayResponse::release_jade() {
  clear_has_jade();
  if (jade_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = jade_;
    jade_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PayResponse::set_allocated_jade(::std::string* jade) {
  if (jade_ != &::google::protobuf::internal::kEmptyString) {
    delete jade_;
  }
  if (jade) {
    set_has_jade();
    jade_ = jade;
  } else {
    clear_has_jade();
    jade_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string accessToken = 7;
inline bool PayResponse::has_accesstoken() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void PayResponse::set_has_accesstoken() {
  _has_bits_[0] |= 0x00000040u;
}
inline void PayResponse::clear_has_accesstoken() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void PayResponse::clear_accesstoken() {
  if (accesstoken_ != &::google::protobuf::internal::kEmptyString) {
    accesstoken_->clear();
  }
  clear_has_accesstoken();
}
inline const ::std::string& PayResponse::accesstoken() const {
  return *accesstoken_;
}
inline void PayResponse::set_accesstoken(const ::std::string& value) {
  set_has_accesstoken();
  if (accesstoken_ == &::google::protobuf::internal::kEmptyString) {
    accesstoken_ = new ::std::string;
  }
  accesstoken_->assign(value);
}
inline void PayResponse::set_accesstoken(const char* value) {
  set_has_accesstoken();
  if (accesstoken_ == &::google::protobuf::internal::kEmptyString) {
    accesstoken_ = new ::std::string;
  }
  accesstoken_->assign(value);
}
inline void PayResponse::set_accesstoken(const char* value, size_t size) {
  set_has_accesstoken();
  if (accesstoken_ == &::google::protobuf::internal::kEmptyString) {
    accesstoken_ = new ::std::string;
  }
  accesstoken_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PayResponse::mutable_accesstoken() {
  set_has_accesstoken();
  if (accesstoken_ == &::google::protobuf::internal::kEmptyString) {
    accesstoken_ = new ::std::string;
  }
  return accesstoken_;
}
inline ::std::string* PayResponse::release_accesstoken() {
  clear_has_accesstoken();
  if (accesstoken_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = accesstoken_;
    accesstoken_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PayResponse::set_allocated_accesstoken(::std::string* accesstoken) {
  if (accesstoken_ != &::google::protobuf::internal::kEmptyString) {
    delete accesstoken_;
  }
  if (accesstoken) {
    set_has_accesstoken();
    accesstoken_ = accesstoken;
  } else {
    clear_has_accesstoken();
    accesstoken_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pay_2eproto__INCLUDED
