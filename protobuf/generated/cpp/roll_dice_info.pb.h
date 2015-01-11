// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: roll_dice_info.proto

#ifndef PROTOBUF_roll_5fdice_5finfo_2eproto__INCLUDED
#define PROTOBUF_roll_5fdice_5finfo_2eproto__INCLUDED

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
#include "constants.pb.h"
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_roll_5fdice_5finfo_2eproto();
void protobuf_AssignDesc_roll_5fdice_5finfo_2eproto();
void protobuf_ShutdownFile_roll_5fdice_5finfo_2eproto();

class MsgRollDiceInfo;

// ===================================================================

class MsgRollDiceInfo : public ::google::protobuf::MessageLite {
 public:
  MsgRollDiceInfo();
  virtual ~MsgRollDiceInfo();

  MsgRollDiceInfo(const MsgRollDiceInfo& from);

  inline MsgRollDiceInfo& operator=(const MsgRollDiceInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const MsgRollDiceInfo& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MsgRollDiceInfo* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MsgRollDiceInfo* other);

  // implements Message ----------------------------------------------

  MsgRollDiceInfo* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MsgRollDiceInfo& from);
  void MergeFrom(const MsgRollDiceInfo& from);
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

  // required string rewardJson = 1;
  inline bool has_rewardjson() const;
  inline void clear_rewardjson();
  static const int kRewardJsonFieldNumber = 1;
  inline const ::std::string& rewardjson() const;
  inline void set_rewardjson(const ::std::string& value);
  inline void set_rewardjson(const char* value);
  inline void set_rewardjson(const char* value, size_t size);
  inline ::std::string* mutable_rewardjson();
  inline ::std::string* release_rewardjson();
  inline void set_allocated_rewardjson(::std::string* rewardjson);

  // required string desc = 2;
  inline bool has_desc() const;
  inline void clear_desc();
  static const int kDescFieldNumber = 2;
  inline const ::std::string& desc() const;
  inline void set_desc(const ::std::string& value);
  inline void set_desc(const char* value);
  inline void set_desc(const char* value, size_t size);
  inline ::std::string* mutable_desc();
  inline ::std::string* release_desc();
  inline void set_allocated_desc(::std::string* desc);

  // required uint32 dicePoint = 3;
  inline bool has_dicepoint() const;
  inline void clear_dicepoint();
  static const int kDicePointFieldNumber = 3;
  inline ::google::protobuf::uint32 dicepoint() const;
  inline void set_dicepoint(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.MsgRollDiceInfo)
 private:
  inline void set_has_rewardjson();
  inline void clear_has_rewardjson();
  inline void set_has_desc();
  inline void clear_has_desc();
  inline void set_has_dicepoint();
  inline void clear_has_dicepoint();

  ::std::string* rewardjson_;
  ::std::string* desc_;
  ::google::protobuf::uint32 dicepoint_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_roll_5fdice_5finfo_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_roll_5fdice_5finfo_2eproto();
  #endif
  friend void protobuf_AssignDesc_roll_5fdice_5finfo_2eproto();
  friend void protobuf_ShutdownFile_roll_5fdice_5finfo_2eproto();

  void InitAsDefaultInstance();
  static MsgRollDiceInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// MsgRollDiceInfo

// required string rewardJson = 1;
inline bool MsgRollDiceInfo::has_rewardjson() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgRollDiceInfo::set_has_rewardjson() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgRollDiceInfo::clear_has_rewardjson() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgRollDiceInfo::clear_rewardjson() {
  if (rewardjson_ != &::google::protobuf::internal::kEmptyString) {
    rewardjson_->clear();
  }
  clear_has_rewardjson();
}
inline const ::std::string& MsgRollDiceInfo::rewardjson() const {
  return *rewardjson_;
}
inline void MsgRollDiceInfo::set_rewardjson(const ::std::string& value) {
  set_has_rewardjson();
  if (rewardjson_ == &::google::protobuf::internal::kEmptyString) {
    rewardjson_ = new ::std::string;
  }
  rewardjson_->assign(value);
}
inline void MsgRollDiceInfo::set_rewardjson(const char* value) {
  set_has_rewardjson();
  if (rewardjson_ == &::google::protobuf::internal::kEmptyString) {
    rewardjson_ = new ::std::string;
  }
  rewardjson_->assign(value);
}
inline void MsgRollDiceInfo::set_rewardjson(const char* value, size_t size) {
  set_has_rewardjson();
  if (rewardjson_ == &::google::protobuf::internal::kEmptyString) {
    rewardjson_ = new ::std::string;
  }
  rewardjson_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgRollDiceInfo::mutable_rewardjson() {
  set_has_rewardjson();
  if (rewardjson_ == &::google::protobuf::internal::kEmptyString) {
    rewardjson_ = new ::std::string;
  }
  return rewardjson_;
}
inline ::std::string* MsgRollDiceInfo::release_rewardjson() {
  clear_has_rewardjson();
  if (rewardjson_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = rewardjson_;
    rewardjson_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MsgRollDiceInfo::set_allocated_rewardjson(::std::string* rewardjson) {
  if (rewardjson_ != &::google::protobuf::internal::kEmptyString) {
    delete rewardjson_;
  }
  if (rewardjson) {
    set_has_rewardjson();
    rewardjson_ = rewardjson;
  } else {
    clear_has_rewardjson();
    rewardjson_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string desc = 2;
inline bool MsgRollDiceInfo::has_desc() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgRollDiceInfo::set_has_desc() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgRollDiceInfo::clear_has_desc() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgRollDiceInfo::clear_desc() {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    desc_->clear();
  }
  clear_has_desc();
}
inline const ::std::string& MsgRollDiceInfo::desc() const {
  return *desc_;
}
inline void MsgRollDiceInfo::set_desc(const ::std::string& value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void MsgRollDiceInfo::set_desc(const char* value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void MsgRollDiceInfo::set_desc(const char* value, size_t size) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgRollDiceInfo::mutable_desc() {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  return desc_;
}
inline ::std::string* MsgRollDiceInfo::release_desc() {
  clear_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = desc_;
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MsgRollDiceInfo::set_allocated_desc(::std::string* desc) {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    delete desc_;
  }
  if (desc) {
    set_has_desc();
    desc_ = desc;
  } else {
    clear_has_desc();
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 dicePoint = 3;
inline bool MsgRollDiceInfo::has_dicepoint() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MsgRollDiceInfo::set_has_dicepoint() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MsgRollDiceInfo::clear_has_dicepoint() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MsgRollDiceInfo::clear_dicepoint() {
  dicepoint_ = 0u;
  clear_has_dicepoint();
}
inline ::google::protobuf::uint32 MsgRollDiceInfo::dicepoint() const {
  return dicepoint_;
}
inline void MsgRollDiceInfo::set_dicepoint(::google::protobuf::uint32 value) {
  set_has_dicepoint();
  dicepoint_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_roll_5fdice_5finfo_2eproto__INCLUDED
