// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: role_gamble_card_reward.proto

#ifndef PROTOBUF_role_5fgamble_5fcard_5freward_2eproto__INCLUDED
#define PROTOBUF_role_5fgamble_5fcard_5freward_2eproto__INCLUDED

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
#include "role_gem_bag_goods.pb.h"
#include "role_bag_goods.pb.h"
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_role_5fgamble_5fcard_5freward_2eproto();
void protobuf_AssignDesc_role_5fgamble_5fcard_5freward_2eproto();
void protobuf_ShutdownFile_role_5fgamble_5fcard_5freward_2eproto();

class MsgGambleCardReward;

// ===================================================================

class MsgGambleCardReward : public ::google::protobuf::MessageLite {
 public:
  MsgGambleCardReward();
  virtual ~MsgGambleCardReward();

  MsgGambleCardReward(const MsgGambleCardReward& from);

  inline MsgGambleCardReward& operator=(const MsgGambleCardReward& from) {
    CopyFrom(from);
    return *this;
  }

  static const MsgGambleCardReward& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MsgGambleCardReward* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MsgGambleCardReward* other);

  // implements Message ----------------------------------------------

  MsgGambleCardReward* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MsgGambleCardReward& from);
  void MergeFrom(const MsgGambleCardReward& from);
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

  // optional uint64 copper = 1;
  inline bool has_copper() const;
  inline void clear_copper();
  static const int kCopperFieldNumber = 1;
  inline ::google::protobuf::uint64 copper() const;
  inline void set_copper(::google::protobuf::uint64 value);

  // optional uint64 honour = 2;
  inline bool has_honour() const;
  inline void clear_honour();
  static const int kHonourFieldNumber = 2;
  inline ::google::protobuf::uint64 honour() const;
  inline void set_honour(::google::protobuf::uint64 value);

  // optional .sanguo.MsgRoleGemBagGoods gem = 3;
  inline bool has_gem() const;
  inline void clear_gem();
  static const int kGemFieldNumber = 3;
  inline const ::sanguo::MsgRoleGemBagGoods& gem() const;
  inline ::sanguo::MsgRoleGemBagGoods* mutable_gem();
  inline ::sanguo::MsgRoleGemBagGoods* release_gem();
  inline void set_allocated_gem(::sanguo::MsgRoleGemBagGoods* gem);

  // optional .sanguo.MsgRoleBagGoods bagGoods = 4;
  inline bool has_baggoods() const;
  inline void clear_baggoods();
  static const int kBagGoodsFieldNumber = 4;
  inline const ::sanguo::MsgRoleBagGoods& baggoods() const;
  inline ::sanguo::MsgRoleBagGoods* mutable_baggoods();
  inline ::sanguo::MsgRoleBagGoods* release_baggoods();
  inline void set_allocated_baggoods(::sanguo::MsgRoleBagGoods* baggoods);

  // @@protoc_insertion_point(class_scope:sanguo.MsgGambleCardReward)
 private:
  inline void set_has_copper();
  inline void clear_has_copper();
  inline void set_has_honour();
  inline void clear_has_honour();
  inline void set_has_gem();
  inline void clear_has_gem();
  inline void set_has_baggoods();
  inline void clear_has_baggoods();

  ::google::protobuf::uint64 copper_;
  ::google::protobuf::uint64 honour_;
  ::sanguo::MsgRoleGemBagGoods* gem_;
  ::sanguo::MsgRoleBagGoods* baggoods_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_role_5fgamble_5fcard_5freward_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_role_5fgamble_5fcard_5freward_2eproto();
  #endif
  friend void protobuf_AssignDesc_role_5fgamble_5fcard_5freward_2eproto();
  friend void protobuf_ShutdownFile_role_5fgamble_5fcard_5freward_2eproto();

  void InitAsDefaultInstance();
  static MsgGambleCardReward* default_instance_;
};
// ===================================================================


// ===================================================================

// MsgGambleCardReward

// optional uint64 copper = 1;
inline bool MsgGambleCardReward::has_copper() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgGambleCardReward::set_has_copper() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgGambleCardReward::clear_has_copper() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgGambleCardReward::clear_copper() {
  copper_ = GOOGLE_ULONGLONG(0);
  clear_has_copper();
}
inline ::google::protobuf::uint64 MsgGambleCardReward::copper() const {
  return copper_;
}
inline void MsgGambleCardReward::set_copper(::google::protobuf::uint64 value) {
  set_has_copper();
  copper_ = value;
}

// optional uint64 honour = 2;
inline bool MsgGambleCardReward::has_honour() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgGambleCardReward::set_has_honour() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgGambleCardReward::clear_has_honour() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgGambleCardReward::clear_honour() {
  honour_ = GOOGLE_ULONGLONG(0);
  clear_has_honour();
}
inline ::google::protobuf::uint64 MsgGambleCardReward::honour() const {
  return honour_;
}
inline void MsgGambleCardReward::set_honour(::google::protobuf::uint64 value) {
  set_has_honour();
  honour_ = value;
}

// optional .sanguo.MsgRoleGemBagGoods gem = 3;
inline bool MsgGambleCardReward::has_gem() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MsgGambleCardReward::set_has_gem() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MsgGambleCardReward::clear_has_gem() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MsgGambleCardReward::clear_gem() {
  if (gem_ != NULL) gem_->::sanguo::MsgRoleGemBagGoods::Clear();
  clear_has_gem();
}
inline const ::sanguo::MsgRoleGemBagGoods& MsgGambleCardReward::gem() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return gem_ != NULL ? *gem_ : *default_instance().gem_;
#else
  return gem_ != NULL ? *gem_ : *default_instance_->gem_;
#endif
}
inline ::sanguo::MsgRoleGemBagGoods* MsgGambleCardReward::mutable_gem() {
  set_has_gem();
  if (gem_ == NULL) gem_ = new ::sanguo::MsgRoleGemBagGoods;
  return gem_;
}
inline ::sanguo::MsgRoleGemBagGoods* MsgGambleCardReward::release_gem() {
  clear_has_gem();
  ::sanguo::MsgRoleGemBagGoods* temp = gem_;
  gem_ = NULL;
  return temp;
}
inline void MsgGambleCardReward::set_allocated_gem(::sanguo::MsgRoleGemBagGoods* gem) {
  delete gem_;
  gem_ = gem;
  if (gem) {
    set_has_gem();
  } else {
    clear_has_gem();
  }
}

// optional .sanguo.MsgRoleBagGoods bagGoods = 4;
inline bool MsgGambleCardReward::has_baggoods() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MsgGambleCardReward::set_has_baggoods() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MsgGambleCardReward::clear_has_baggoods() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MsgGambleCardReward::clear_baggoods() {
  if (baggoods_ != NULL) baggoods_->::sanguo::MsgRoleBagGoods::Clear();
  clear_has_baggoods();
}
inline const ::sanguo::MsgRoleBagGoods& MsgGambleCardReward::baggoods() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return baggoods_ != NULL ? *baggoods_ : *default_instance().baggoods_;
#else
  return baggoods_ != NULL ? *baggoods_ : *default_instance_->baggoods_;
#endif
}
inline ::sanguo::MsgRoleBagGoods* MsgGambleCardReward::mutable_baggoods() {
  set_has_baggoods();
  if (baggoods_ == NULL) baggoods_ = new ::sanguo::MsgRoleBagGoods;
  return baggoods_;
}
inline ::sanguo::MsgRoleBagGoods* MsgGambleCardReward::release_baggoods() {
  clear_has_baggoods();
  ::sanguo::MsgRoleBagGoods* temp = baggoods_;
  baggoods_ = NULL;
  return temp;
}
inline void MsgGambleCardReward::set_allocated_baggoods(::sanguo::MsgRoleBagGoods* baggoods) {
  delete baggoods_;
  baggoods_ = baggoods;
  if (baggoods) {
    set_has_baggoods();
  } else {
    clear_has_baggoods();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_role_5fgamble_5fcard_5freward_2eproto__INCLUDED
