// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: level_up_kungfu_skill.proto

#ifndef PROTOBUF_level_5fup_5fkungfu_5fskill_2eproto__INCLUDED
#define PROTOBUF_level_5fup_5fkungfu_5fskill_2eproto__INCLUDED

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
#include "role_cooldown.pb.h"
#include "role_bag_goods.pb.h"
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_level_5fup_5fkungfu_5fskill_2eproto();
void protobuf_AssignDesc_level_5fup_5fkungfu_5fskill_2eproto();
void protobuf_ShutdownFile_level_5fup_5fkungfu_5fskill_2eproto();

class LevelUpKungfuSkillRequest;
class LevelUpKungfuSkillResponse;

// ===================================================================

class LevelUpKungfuSkillRequest : public ::google::protobuf::MessageLite {
 public:
  LevelUpKungfuSkillRequest();
  virtual ~LevelUpKungfuSkillRequest();

  LevelUpKungfuSkillRequest(const LevelUpKungfuSkillRequest& from);

  inline LevelUpKungfuSkillRequest& operator=(const LevelUpKungfuSkillRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const LevelUpKungfuSkillRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const LevelUpKungfuSkillRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(LevelUpKungfuSkillRequest* other);

  // implements Message ----------------------------------------------

  LevelUpKungfuSkillRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const LevelUpKungfuSkillRequest& from);
  void MergeFrom(const LevelUpKungfuSkillRequest& from);
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

  // required uint32 kongFuSkillID = 2;
  inline bool has_kongfuskillid() const;
  inline void clear_kongfuskillid();
  static const int kKongFuSkillIDFieldNumber = 2;
  inline ::google::protobuf::uint32 kongfuskillid() const;
  inline void set_kongfuskillid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.LevelUpKungfuSkillRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_kongfuskillid();
  inline void clear_has_kongfuskillid();

  int msgid_;
  ::google::protobuf::uint32 kongfuskillid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_level_5fup_5fkungfu_5fskill_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_level_5fup_5fkungfu_5fskill_2eproto();
  #endif
  friend void protobuf_AssignDesc_level_5fup_5fkungfu_5fskill_2eproto();
  friend void protobuf_ShutdownFile_level_5fup_5fkungfu_5fskill_2eproto();

  void InitAsDefaultInstance();
  static LevelUpKungfuSkillRequest* default_instance_;
};
// -------------------------------------------------------------------

class LevelUpKungfuSkillResponse : public ::google::protobuf::MessageLite {
 public:
  LevelUpKungfuSkillResponse();
  virtual ~LevelUpKungfuSkillResponse();

  LevelUpKungfuSkillResponse(const LevelUpKungfuSkillResponse& from);

  inline LevelUpKungfuSkillResponse& operator=(const LevelUpKungfuSkillResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const LevelUpKungfuSkillResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const LevelUpKungfuSkillResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(LevelUpKungfuSkillResponse* other);

  // implements Message ----------------------------------------------

  LevelUpKungfuSkillResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const LevelUpKungfuSkillResponse& from);
  void MergeFrom(const LevelUpKungfuSkillResponse& from);
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

  // optional uint64 honour = 4;
  inline bool has_honour() const;
  inline void clear_honour();
  static const int kHonourFieldNumber = 4;
  inline ::google::protobuf::uint64 honour() const;
  inline void set_honour(::google::protobuf::uint64 value);

  // optional .sanguo.MsgRoleCooldown cd = 5;
  inline bool has_cd() const;
  inline void clear_cd();
  static const int kCdFieldNumber = 5;
  inline const ::sanguo::MsgRoleCooldown& cd() const;
  inline ::sanguo::MsgRoleCooldown* mutable_cd();
  inline ::sanguo::MsgRoleCooldown* release_cd();
  inline void set_allocated_cd(::sanguo::MsgRoleCooldown* cd);

  // optional .sanguo.MsgRoleBagGoods item = 6;
  inline bool has_item() const;
  inline void clear_item();
  static const int kItemFieldNumber = 6;
  inline const ::sanguo::MsgRoleBagGoods& item() const;
  inline ::sanguo::MsgRoleBagGoods* mutable_item();
  inline ::sanguo::MsgRoleBagGoods* release_item();
  inline void set_allocated_item(::sanguo::MsgRoleBagGoods* item);

  // @@protoc_insertion_point(class_scope:sanguo.LevelUpKungfuSkillResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_copper();
  inline void clear_has_copper();
  inline void set_has_honour();
  inline void clear_has_honour();
  inline void set_has_cd();
  inline void clear_has_cd();
  inline void set_has_item();
  inline void clear_has_item();

  int msgid_;
  int status_;
  ::google::protobuf::uint64 copper_;
  ::google::protobuf::uint64 honour_;
  ::sanguo::MsgRoleCooldown* cd_;
  ::sanguo::MsgRoleBagGoods* item_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_level_5fup_5fkungfu_5fskill_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_level_5fup_5fkungfu_5fskill_2eproto();
  #endif
  friend void protobuf_AssignDesc_level_5fup_5fkungfu_5fskill_2eproto();
  friend void protobuf_ShutdownFile_level_5fup_5fkungfu_5fskill_2eproto();

  void InitAsDefaultInstance();
  static LevelUpKungfuSkillResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// LevelUpKungfuSkillRequest

// required .sanguo.MsgID msgID = 1;
inline bool LevelUpKungfuSkillRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LevelUpKungfuSkillRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LevelUpKungfuSkillRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LevelUpKungfuSkillRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID LevelUpKungfuSkillRequest::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void LevelUpKungfuSkillRequest::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required uint32 kongFuSkillID = 2;
inline bool LevelUpKungfuSkillRequest::has_kongfuskillid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LevelUpKungfuSkillRequest::set_has_kongfuskillid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LevelUpKungfuSkillRequest::clear_has_kongfuskillid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LevelUpKungfuSkillRequest::clear_kongfuskillid() {
  kongfuskillid_ = 0u;
  clear_has_kongfuskillid();
}
inline ::google::protobuf::uint32 LevelUpKungfuSkillRequest::kongfuskillid() const {
  return kongfuskillid_;
}
inline void LevelUpKungfuSkillRequest::set_kongfuskillid(::google::protobuf::uint32 value) {
  set_has_kongfuskillid();
  kongfuskillid_ = value;
}

// -------------------------------------------------------------------

// LevelUpKungfuSkillResponse

// required .sanguo.MsgID msgID = 1;
inline bool LevelUpKungfuSkillResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LevelUpKungfuSkillResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LevelUpKungfuSkillResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LevelUpKungfuSkillResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID LevelUpKungfuSkillResponse::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void LevelUpKungfuSkillResponse::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool LevelUpKungfuSkillResponse::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LevelUpKungfuSkillResponse::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LevelUpKungfuSkillResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LevelUpKungfuSkillResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode LevelUpKungfuSkillResponse::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void LevelUpKungfuSkillResponse::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// optional uint64 copper = 3;
inline bool LevelUpKungfuSkillResponse::has_copper() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LevelUpKungfuSkillResponse::set_has_copper() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LevelUpKungfuSkillResponse::clear_has_copper() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LevelUpKungfuSkillResponse::clear_copper() {
  copper_ = GOOGLE_ULONGLONG(0);
  clear_has_copper();
}
inline ::google::protobuf::uint64 LevelUpKungfuSkillResponse::copper() const {
  return copper_;
}
inline void LevelUpKungfuSkillResponse::set_copper(::google::protobuf::uint64 value) {
  set_has_copper();
  copper_ = value;
}

// optional uint64 honour = 4;
inline bool LevelUpKungfuSkillResponse::has_honour() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LevelUpKungfuSkillResponse::set_has_honour() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LevelUpKungfuSkillResponse::clear_has_honour() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LevelUpKungfuSkillResponse::clear_honour() {
  honour_ = GOOGLE_ULONGLONG(0);
  clear_has_honour();
}
inline ::google::protobuf::uint64 LevelUpKungfuSkillResponse::honour() const {
  return honour_;
}
inline void LevelUpKungfuSkillResponse::set_honour(::google::protobuf::uint64 value) {
  set_has_honour();
  honour_ = value;
}

// optional .sanguo.MsgRoleCooldown cd = 5;
inline bool LevelUpKungfuSkillResponse::has_cd() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LevelUpKungfuSkillResponse::set_has_cd() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LevelUpKungfuSkillResponse::clear_has_cd() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LevelUpKungfuSkillResponse::clear_cd() {
  if (cd_ != NULL) cd_->::sanguo::MsgRoleCooldown::Clear();
  clear_has_cd();
}
inline const ::sanguo::MsgRoleCooldown& LevelUpKungfuSkillResponse::cd() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return cd_ != NULL ? *cd_ : *default_instance().cd_;
#else
  return cd_ != NULL ? *cd_ : *default_instance_->cd_;
#endif
}
inline ::sanguo::MsgRoleCooldown* LevelUpKungfuSkillResponse::mutable_cd() {
  set_has_cd();
  if (cd_ == NULL) cd_ = new ::sanguo::MsgRoleCooldown;
  return cd_;
}
inline ::sanguo::MsgRoleCooldown* LevelUpKungfuSkillResponse::release_cd() {
  clear_has_cd();
  ::sanguo::MsgRoleCooldown* temp = cd_;
  cd_ = NULL;
  return temp;
}
inline void LevelUpKungfuSkillResponse::set_allocated_cd(::sanguo::MsgRoleCooldown* cd) {
  delete cd_;
  cd_ = cd;
  if (cd) {
    set_has_cd();
  } else {
    clear_has_cd();
  }
}

// optional .sanguo.MsgRoleBagGoods item = 6;
inline bool LevelUpKungfuSkillResponse::has_item() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void LevelUpKungfuSkillResponse::set_has_item() {
  _has_bits_[0] |= 0x00000020u;
}
inline void LevelUpKungfuSkillResponse::clear_has_item() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void LevelUpKungfuSkillResponse::clear_item() {
  if (item_ != NULL) item_->::sanguo::MsgRoleBagGoods::Clear();
  clear_has_item();
}
inline const ::sanguo::MsgRoleBagGoods& LevelUpKungfuSkillResponse::item() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return item_ != NULL ? *item_ : *default_instance().item_;
#else
  return item_ != NULL ? *item_ : *default_instance_->item_;
#endif
}
inline ::sanguo::MsgRoleBagGoods* LevelUpKungfuSkillResponse::mutable_item() {
  set_has_item();
  if (item_ == NULL) item_ = new ::sanguo::MsgRoleBagGoods;
  return item_;
}
inline ::sanguo::MsgRoleBagGoods* LevelUpKungfuSkillResponse::release_item() {
  clear_has_item();
  ::sanguo::MsgRoleBagGoods* temp = item_;
  item_ = NULL;
  return temp;
}
inline void LevelUpKungfuSkillResponse::set_allocated_item(::sanguo::MsgRoleBagGoods* item) {
  delete item_;
  item_ = item;
  if (item) {
    set_has_item();
  } else {
    clear_has_item();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_level_5fup_5fkungfu_5fskill_2eproto__INCLUDED
