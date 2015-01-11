// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_newbie_reward_gift.proto

#ifndef PROTOBUF_get_5fnewbie_5freward_5fgift_2eproto__INCLUDED
#define PROTOBUF_get_5fnewbie_5freward_5fgift_2eproto__INCLUDED

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
void  protobuf_AddDesc_get_5fnewbie_5freward_5fgift_2eproto();
void protobuf_AssignDesc_get_5fnewbie_5freward_5fgift_2eproto();
void protobuf_ShutdownFile_get_5fnewbie_5freward_5fgift_2eproto();

class GetNewbieRewardGiftRequest;
class GetNewbieRewardGiftResponse;

// ===================================================================

class GetNewbieRewardGiftRequest : public ::google::protobuf::MessageLite {
 public:
  GetNewbieRewardGiftRequest();
  virtual ~GetNewbieRewardGiftRequest();

  GetNewbieRewardGiftRequest(const GetNewbieRewardGiftRequest& from);

  inline GetNewbieRewardGiftRequest& operator=(const GetNewbieRewardGiftRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetNewbieRewardGiftRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetNewbieRewardGiftRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetNewbieRewardGiftRequest* other);

  // implements Message ----------------------------------------------

  GetNewbieRewardGiftRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetNewbieRewardGiftRequest& from);
  void MergeFrom(const GetNewbieRewardGiftRequest& from);
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

  // @@protoc_insertion_point(class_scope:sanguo.GetNewbieRewardGiftRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();

  int msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5fnewbie_5freward_5fgift_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fnewbie_5freward_5fgift_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fnewbie_5freward_5fgift_2eproto();
  friend void protobuf_ShutdownFile_get_5fnewbie_5freward_5fgift_2eproto();

  void InitAsDefaultInstance();
  static GetNewbieRewardGiftRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetNewbieRewardGiftResponse : public ::google::protobuf::MessageLite {
 public:
  GetNewbieRewardGiftResponse();
  virtual ~GetNewbieRewardGiftResponse();

  GetNewbieRewardGiftResponse(const GetNewbieRewardGiftResponse& from);

  inline GetNewbieRewardGiftResponse& operator=(const GetNewbieRewardGiftResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetNewbieRewardGiftResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetNewbieRewardGiftResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetNewbieRewardGiftResponse* other);

  // implements Message ----------------------------------------------

  GetNewbieRewardGiftResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GetNewbieRewardGiftResponse& from);
  void MergeFrom(const GetNewbieRewardGiftResponse& from);
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

  // required string newbieRewardRecord = 3;
  inline bool has_newbierewardrecord() const;
  inline void clear_newbierewardrecord();
  static const int kNewbieRewardRecordFieldNumber = 3;
  inline const ::std::string& newbierewardrecord() const;
  inline void set_newbierewardrecord(const ::std::string& value);
  inline void set_newbierewardrecord(const char* value);
  inline void set_newbierewardrecord(const char* value, size_t size);
  inline ::std::string* mutable_newbierewardrecord();
  inline ::std::string* release_newbierewardrecord();
  inline void set_allocated_newbierewardrecord(::std::string* newbierewardrecord);

  // required uint32 newbieRewardCount = 4;
  inline bool has_newbierewardcount() const;
  inline void clear_newbierewardcount();
  static const int kNewbieRewardCountFieldNumber = 4;
  inline ::google::protobuf::uint32 newbierewardcount() const;
  inline void set_newbierewardcount(::google::protobuf::uint32 value);

  // repeated string gifts = 5;
  inline int gifts_size() const;
  inline void clear_gifts();
  static const int kGiftsFieldNumber = 5;
  inline const ::std::string& gifts(int index) const;
  inline ::std::string* mutable_gifts(int index);
  inline void set_gifts(int index, const ::std::string& value);
  inline void set_gifts(int index, const char* value);
  inline void set_gifts(int index, const char* value, size_t size);
  inline ::std::string* add_gifts();
  inline void add_gifts(const ::std::string& value);
  inline void add_gifts(const char* value);
  inline void add_gifts(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& gifts() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_gifts();

  // @@protoc_insertion_point(class_scope:sanguo.GetNewbieRewardGiftResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_newbierewardrecord();
  inline void clear_has_newbierewardrecord();
  inline void set_has_newbierewardcount();
  inline void clear_has_newbierewardcount();

  int msgid_;
  int status_;
  ::std::string* newbierewardrecord_;
  ::google::protobuf::RepeatedPtrField< ::std::string> gifts_;
  ::google::protobuf::uint32 newbierewardcount_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_get_5fnewbie_5freward_5fgift_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_get_5fnewbie_5freward_5fgift_2eproto();
  #endif
  friend void protobuf_AssignDesc_get_5fnewbie_5freward_5fgift_2eproto();
  friend void protobuf_ShutdownFile_get_5fnewbie_5freward_5fgift_2eproto();

  void InitAsDefaultInstance();
  static GetNewbieRewardGiftResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// GetNewbieRewardGiftRequest

// required .sanguo.MsgID msgID = 1;
inline bool GetNewbieRewardGiftRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetNewbieRewardGiftRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetNewbieRewardGiftRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetNewbieRewardGiftRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetNewbieRewardGiftRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetNewbieRewardGiftRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// -------------------------------------------------------------------

// GetNewbieRewardGiftResponse

// required .sanguo.MsgID msgID = 1;
inline bool GetNewbieRewardGiftResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetNewbieRewardGiftResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetNewbieRewardGiftResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetNewbieRewardGiftResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID GetNewbieRewardGiftResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void GetNewbieRewardGiftResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool GetNewbieRewardGiftResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetNewbieRewardGiftResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetNewbieRewardGiftResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetNewbieRewardGiftResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode GetNewbieRewardGiftResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void GetNewbieRewardGiftResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// required string newbieRewardRecord = 3;
inline bool GetNewbieRewardGiftResponse::has_newbierewardrecord() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GetNewbieRewardGiftResponse::set_has_newbierewardrecord() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GetNewbieRewardGiftResponse::clear_has_newbierewardrecord() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GetNewbieRewardGiftResponse::clear_newbierewardrecord() {
  if (newbierewardrecord_ != &::google::protobuf::internal::kEmptyString) {
    newbierewardrecord_->clear();
  }
  clear_has_newbierewardrecord();
}
inline const ::std::string& GetNewbieRewardGiftResponse::newbierewardrecord() const {
  return *newbierewardrecord_;
}
inline void GetNewbieRewardGiftResponse::set_newbierewardrecord(const ::std::string& value) {
  set_has_newbierewardrecord();
  if (newbierewardrecord_ == &::google::protobuf::internal::kEmptyString) {
    newbierewardrecord_ = new ::std::string;
  }
  newbierewardrecord_->assign(value);
}
inline void GetNewbieRewardGiftResponse::set_newbierewardrecord(const char* value) {
  set_has_newbierewardrecord();
  if (newbierewardrecord_ == &::google::protobuf::internal::kEmptyString) {
    newbierewardrecord_ = new ::std::string;
  }
  newbierewardrecord_->assign(value);
}
inline void GetNewbieRewardGiftResponse::set_newbierewardrecord(const char* value, size_t size) {
  set_has_newbierewardrecord();
  if (newbierewardrecord_ == &::google::protobuf::internal::kEmptyString) {
    newbierewardrecord_ = new ::std::string;
  }
  newbierewardrecord_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GetNewbieRewardGiftResponse::mutable_newbierewardrecord() {
  set_has_newbierewardrecord();
  if (newbierewardrecord_ == &::google::protobuf::internal::kEmptyString) {
    newbierewardrecord_ = new ::std::string;
  }
  return newbierewardrecord_;
}
inline ::std::string* GetNewbieRewardGiftResponse::release_newbierewardrecord() {
  clear_has_newbierewardrecord();
  if (newbierewardrecord_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = newbierewardrecord_;
    newbierewardrecord_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void GetNewbieRewardGiftResponse::set_allocated_newbierewardrecord(::std::string* newbierewardrecord) {
  if (newbierewardrecord_ != &::google::protobuf::internal::kEmptyString) {
    delete newbierewardrecord_;
  }
  if (newbierewardrecord) {
    set_has_newbierewardrecord();
    newbierewardrecord_ = newbierewardrecord;
  } else {
    clear_has_newbierewardrecord();
    newbierewardrecord_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 newbieRewardCount = 4;
inline bool GetNewbieRewardGiftResponse::has_newbierewardcount() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void GetNewbieRewardGiftResponse::set_has_newbierewardcount() {
  _has_bits_[0] |= 0x00000008u;
}
inline void GetNewbieRewardGiftResponse::clear_has_newbierewardcount() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void GetNewbieRewardGiftResponse::clear_newbierewardcount() {
  newbierewardcount_ = 0u;
  clear_has_newbierewardcount();
}
inline ::google::protobuf::uint32 GetNewbieRewardGiftResponse::newbierewardcount() const {
  return newbierewardcount_;
}
inline void GetNewbieRewardGiftResponse::set_newbierewardcount(::google::protobuf::uint32 value) {
  set_has_newbierewardcount();
  newbierewardcount_ = value;
}

// repeated string gifts = 5;
inline int GetNewbieRewardGiftResponse::gifts_size() const {
  return gifts_.size();
}
inline void GetNewbieRewardGiftResponse::clear_gifts() {
  gifts_.Clear();
}
inline const ::std::string& GetNewbieRewardGiftResponse::gifts(int index) const {
  return gifts_.Get(index);
}
inline ::std::string* GetNewbieRewardGiftResponse::mutable_gifts(int index) {
  return gifts_.Mutable(index);
}
inline void GetNewbieRewardGiftResponse::set_gifts(int index, const ::std::string& value) {
  gifts_.Mutable(index)->assign(value);
}
inline void GetNewbieRewardGiftResponse::set_gifts(int index, const char* value) {
  gifts_.Mutable(index)->assign(value);
}
inline void GetNewbieRewardGiftResponse::set_gifts(int index, const char* value, size_t size) {
  gifts_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GetNewbieRewardGiftResponse::add_gifts() {
  return gifts_.Add();
}
inline void GetNewbieRewardGiftResponse::add_gifts(const ::std::string& value) {
  gifts_.Add()->assign(value);
}
inline void GetNewbieRewardGiftResponse::add_gifts(const char* value) {
  gifts_.Add()->assign(value);
}
inline void GetNewbieRewardGiftResponse::add_gifts(const char* value, size_t size) {
  gifts_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
GetNewbieRewardGiftResponse::gifts() const {
  return gifts_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
GetNewbieRewardGiftResponse::mutable_gifts() {
  return &gifts_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_get_5fnewbie_5freward_5fgift_2eproto__INCLUDED
