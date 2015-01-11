// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: init_tongtian_tower.proto

#ifndef PROTOBUF_init_5ftongtian_5ftower_2eproto__INCLUDED
#define PROTOBUF_init_5ftongtian_5ftower_2eproto__INCLUDED

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
void  protobuf_AddDesc_init_5ftongtian_5ftower_2eproto();
void protobuf_AssignDesc_init_5ftongtian_5ftower_2eproto();
void protobuf_ShutdownFile_init_5ftongtian_5ftower_2eproto();

class InitTongtianTowerRequest;
class InitTongtianTowerResponse;

// ===================================================================

class InitTongtianTowerRequest : public ::google::protobuf::MessageLite {
 public:
  InitTongtianTowerRequest();
  virtual ~InitTongtianTowerRequest();

  InitTongtianTowerRequest(const InitTongtianTowerRequest& from);

  inline InitTongtianTowerRequest& operator=(const InitTongtianTowerRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const InitTongtianTowerRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const InitTongtianTowerRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(InitTongtianTowerRequest* other);

  // implements Message ----------------------------------------------

  InitTongtianTowerRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const InitTongtianTowerRequest& from);
  void MergeFrom(const InitTongtianTowerRequest& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.InitTongtianTowerRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();

  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_init_5ftongtian_5ftower_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_init_5ftongtian_5ftower_2eproto();
  #endif
  friend void protobuf_AssignDesc_init_5ftongtian_5ftower_2eproto();
  friend void protobuf_ShutdownFile_init_5ftongtian_5ftower_2eproto();

  void InitAsDefaultInstance();
  static InitTongtianTowerRequest* default_instance_;
};
// -------------------------------------------------------------------

class InitTongtianTowerResponse : public ::google::protobuf::MessageLite {
 public:
  InitTongtianTowerResponse();
  virtual ~InitTongtianTowerResponse();

  InitTongtianTowerResponse(const InitTongtianTowerResponse& from);

  inline InitTongtianTowerResponse& operator=(const InitTongtianTowerResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const InitTongtianTowerResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const InitTongtianTowerResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(InitTongtianTowerResponse* other);

  // implements Message ----------------------------------------------

  InitTongtianTowerResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const InitTongtianTowerResponse& from);
  void MergeFrom(const InitTongtianTowerResponse& from);
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

  // required uint32 currentFloor = 3;
  inline bool has_currentfloor() const;
  inline void clear_currentfloor();
  static const int kCurrentFloorFieldNumber = 3;
  inline ::google::protobuf::uint32 currentfloor() const;
  inline void set_currentfloor(::google::protobuf::uint32 value);

  // required uint32 maxFloor = 4;
  inline bool has_maxfloor() const;
  inline void clear_maxfloor();
  static const int kMaxFloorFieldNumber = 4;
  inline ::google::protobuf::uint32 maxfloor() const;
  inline void set_maxfloor(::google::protobuf::uint32 value);

  // required uint32 resetTimes = 5;
  inline bool has_resettimes() const;
  inline void clear_resettimes();
  static const int kResetTimesFieldNumber = 5;
  inline ::google::protobuf::uint32 resettimes() const;
  inline void set_resettimes(::google::protobuf::uint32 value);

  // required string kungfutaolu = 6;
  inline bool has_kungfutaolu() const;
  inline void clear_kungfutaolu();
  static const int kKungfutaoluFieldNumber = 6;
  inline const ::std::string& kungfutaolu() const;
  inline void set_kungfutaolu(const ::std::string& value);
  inline void set_kungfutaolu(const char* value);
  inline void set_kungfutaolu(const char* value, size_t size);
  inline ::std::string* mutable_kungfutaolu();
  inline ::std::string* release_kungfutaolu();
  inline void set_allocated_kungfutaolu(::std::string* kungfutaolu);

  // required string kungfustar = 7;
  inline bool has_kungfustar() const;
  inline void clear_kungfustar();
  static const int kKungfustarFieldNumber = 7;
  inline const ::std::string& kungfustar() const;
  inline void set_kungfustar(const ::std::string& value);
  inline void set_kungfustar(const char* value);
  inline void set_kungfustar(const char* value, size_t size);
  inline ::std::string* mutable_kungfustar();
  inline ::std::string* release_kungfustar();
  inline void set_allocated_kungfustar(::std::string* kungfustar);

  // @@protoc_insertion_point(class_scope:sanguo.InitTongtianTowerResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_currentfloor();
  inline void clear_has_currentfloor();
  inline void set_has_maxfloor();
  inline void clear_has_maxfloor();
  inline void set_has_resettimes();
  inline void clear_has_resettimes();
  inline void set_has_kungfutaolu();
  inline void clear_has_kungfutaolu();
  inline void set_has_kungfustar();
  inline void clear_has_kungfustar();

  int msgid_;
  int status_;
  ::google::protobuf::uint32 currentfloor_;
  ::google::protobuf::uint32 maxfloor_;
  ::std::string* kungfutaolu_;
  ::std::string* kungfustar_;
  ::google::protobuf::uint32 resettimes_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_init_5ftongtian_5ftower_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_init_5ftongtian_5ftower_2eproto();
  #endif
  friend void protobuf_AssignDesc_init_5ftongtian_5ftower_2eproto();
  friend void protobuf_ShutdownFile_init_5ftongtian_5ftower_2eproto();

  void InitAsDefaultInstance();
  static InitTongtianTowerResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// InitTongtianTowerRequest

// required .sanguo.MsgID msgID = 1;
inline bool InitTongtianTowerRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InitTongtianTowerRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InitTongtianTowerRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InitTongtianTowerRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID InitTongtianTowerRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void InitTongtianTowerRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// -------------------------------------------------------------------

// InitTongtianTowerResponse

// required .sanguo.MsgID msgID = 1;
inline bool InitTongtianTowerResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InitTongtianTowerResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InitTongtianTowerResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InitTongtianTowerResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID InitTongtianTowerResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void InitTongtianTowerResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool InitTongtianTowerResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InitTongtianTowerResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void InitTongtianTowerResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void InitTongtianTowerResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode InitTongtianTowerResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void InitTongtianTowerResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// required uint32 currentFloor = 3;
inline bool InitTongtianTowerResponse::has_currentfloor() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void InitTongtianTowerResponse::set_has_currentfloor() {
  _has_bits_[0] |= 0x00000004u;
}
inline void InitTongtianTowerResponse::clear_has_currentfloor() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void InitTongtianTowerResponse::clear_currentfloor() {
  currentfloor_ = 0u;
  clear_has_currentfloor();
}
inline ::google::protobuf::uint32 InitTongtianTowerResponse::currentfloor() const {
  return currentfloor_;
}
inline void InitTongtianTowerResponse::set_currentfloor(::google::protobuf::uint32 value) {
  set_has_currentfloor();
  currentfloor_ = value;
}

// required uint32 maxFloor = 4;
inline bool InitTongtianTowerResponse::has_maxfloor() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void InitTongtianTowerResponse::set_has_maxfloor() {
  _has_bits_[0] |= 0x00000008u;
}
inline void InitTongtianTowerResponse::clear_has_maxfloor() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void InitTongtianTowerResponse::clear_maxfloor() {
  maxfloor_ = 0u;
  clear_has_maxfloor();
}
inline ::google::protobuf::uint32 InitTongtianTowerResponse::maxfloor() const {
  return maxfloor_;
}
inline void InitTongtianTowerResponse::set_maxfloor(::google::protobuf::uint32 value) {
  set_has_maxfloor();
  maxfloor_ = value;
}

// required uint32 resetTimes = 5;
inline bool InitTongtianTowerResponse::has_resettimes() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void InitTongtianTowerResponse::set_has_resettimes() {
  _has_bits_[0] |= 0x00000010u;
}
inline void InitTongtianTowerResponse::clear_has_resettimes() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void InitTongtianTowerResponse::clear_resettimes() {
  resettimes_ = 0u;
  clear_has_resettimes();
}
inline ::google::protobuf::uint32 InitTongtianTowerResponse::resettimes() const {
  return resettimes_;
}
inline void InitTongtianTowerResponse::set_resettimes(::google::protobuf::uint32 value) {
  set_has_resettimes();
  resettimes_ = value;
}

// required string kungfutaolu = 6;
inline bool InitTongtianTowerResponse::has_kungfutaolu() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void InitTongtianTowerResponse::set_has_kungfutaolu() {
  _has_bits_[0] |= 0x00000020u;
}
inline void InitTongtianTowerResponse::clear_has_kungfutaolu() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void InitTongtianTowerResponse::clear_kungfutaolu() {
  if (kungfutaolu_ != &::google::protobuf::internal::kEmptyString) {
    kungfutaolu_->clear();
  }
  clear_has_kungfutaolu();
}
inline const ::std::string& InitTongtianTowerResponse::kungfutaolu() const {
  return *kungfutaolu_;
}
inline void InitTongtianTowerResponse::set_kungfutaolu(const ::std::string& value) {
  set_has_kungfutaolu();
  if (kungfutaolu_ == &::google::protobuf::internal::kEmptyString) {
    kungfutaolu_ = new ::std::string;
  }
  kungfutaolu_->assign(value);
}
inline void InitTongtianTowerResponse::set_kungfutaolu(const char* value) {
  set_has_kungfutaolu();
  if (kungfutaolu_ == &::google::protobuf::internal::kEmptyString) {
    kungfutaolu_ = new ::std::string;
  }
  kungfutaolu_->assign(value);
}
inline void InitTongtianTowerResponse::set_kungfutaolu(const char* value, size_t size) {
  set_has_kungfutaolu();
  if (kungfutaolu_ == &::google::protobuf::internal::kEmptyString) {
    kungfutaolu_ = new ::std::string;
  }
  kungfutaolu_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* InitTongtianTowerResponse::mutable_kungfutaolu() {
  set_has_kungfutaolu();
  if (kungfutaolu_ == &::google::protobuf::internal::kEmptyString) {
    kungfutaolu_ = new ::std::string;
  }
  return kungfutaolu_;
}
inline ::std::string* InitTongtianTowerResponse::release_kungfutaolu() {
  clear_has_kungfutaolu();
  if (kungfutaolu_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = kungfutaolu_;
    kungfutaolu_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void InitTongtianTowerResponse::set_allocated_kungfutaolu(::std::string* kungfutaolu) {
  if (kungfutaolu_ != &::google::protobuf::internal::kEmptyString) {
    delete kungfutaolu_;
  }
  if (kungfutaolu) {
    set_has_kungfutaolu();
    kungfutaolu_ = kungfutaolu;
  } else {
    clear_has_kungfutaolu();
    kungfutaolu_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string kungfustar = 7;
inline bool InitTongtianTowerResponse::has_kungfustar() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void InitTongtianTowerResponse::set_has_kungfustar() {
  _has_bits_[0] |= 0x00000040u;
}
inline void InitTongtianTowerResponse::clear_has_kungfustar() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void InitTongtianTowerResponse::clear_kungfustar() {
  if (kungfustar_ != &::google::protobuf::internal::kEmptyString) {
    kungfustar_->clear();
  }
  clear_has_kungfustar();
}
inline const ::std::string& InitTongtianTowerResponse::kungfustar() const {
  return *kungfustar_;
}
inline void InitTongtianTowerResponse::set_kungfustar(const ::std::string& value) {
  set_has_kungfustar();
  if (kungfustar_ == &::google::protobuf::internal::kEmptyString) {
    kungfustar_ = new ::std::string;
  }
  kungfustar_->assign(value);
}
inline void InitTongtianTowerResponse::set_kungfustar(const char* value) {
  set_has_kungfustar();
  if (kungfustar_ == &::google::protobuf::internal::kEmptyString) {
    kungfustar_ = new ::std::string;
  }
  kungfustar_->assign(value);
}
inline void InitTongtianTowerResponse::set_kungfustar(const char* value, size_t size) {
  set_has_kungfustar();
  if (kungfustar_ == &::google::protobuf::internal::kEmptyString) {
    kungfustar_ = new ::std::string;
  }
  kungfustar_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* InitTongtianTowerResponse::mutable_kungfustar() {
  set_has_kungfustar();
  if (kungfustar_ == &::google::protobuf::internal::kEmptyString) {
    kungfustar_ = new ::std::string;
  }
  return kungfustar_;
}
inline ::std::string* InitTongtianTowerResponse::release_kungfustar() {
  clear_has_kungfustar();
  if (kungfustar_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = kungfustar_;
    kungfustar_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void InitTongtianTowerResponse::set_allocated_kungfustar(::std::string* kungfustar) {
  if (kungfustar_ != &::google::protobuf::internal::kEmptyString) {
    delete kungfustar_;
  }
  if (kungfustar) {
    set_has_kungfustar();
    kungfustar_ = kungfustar;
  } else {
    clear_has_kungfustar();
    kungfustar_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_init_5ftongtian_5ftower_2eproto__INCLUDED
