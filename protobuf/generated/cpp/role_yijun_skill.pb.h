// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: role_yijun_skill.proto

#ifndef PROTOBUF_role_5fyijun_5fskill_2eproto__INCLUDED
#define PROTOBUF_role_5fyijun_5fskill_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace sanguo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_role_5fyijun_5fskill_2eproto();
void protobuf_AssignDesc_role_5fyijun_5fskill_2eproto();
void protobuf_ShutdownFile_role_5fyijun_5fskill_2eproto();

class MsgRoleYijunSkill;

// ===================================================================

class MsgRoleYijunSkill : public ::google::protobuf::MessageLite {
 public:
  MsgRoleYijunSkill();
  virtual ~MsgRoleYijunSkill();

  MsgRoleYijunSkill(const MsgRoleYijunSkill& from);

  inline MsgRoleYijunSkill& operator=(const MsgRoleYijunSkill& from) {
    CopyFrom(from);
    return *this;
  }

  static const MsgRoleYijunSkill& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MsgRoleYijunSkill* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MsgRoleYijunSkill* other);

  // implements Message ----------------------------------------------

  MsgRoleYijunSkill* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MsgRoleYijunSkill& from);
  void MergeFrom(const MsgRoleYijunSkill& from);
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

  // required uint32 attrID = 1;
  inline bool has_attrid() const;
  inline void clear_attrid();
  static const int kAttrIDFieldNumber = 1;
  inline ::google::protobuf::uint32 attrid() const;
  inline void set_attrid(::google::protobuf::uint32 value);

  // required uint32 level = 2;
  inline bool has_level() const;
  inline void clear_level();
  static const int kLevelFieldNumber = 2;
  inline ::google::protobuf::uint32 level() const;
  inline void set_level(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.MsgRoleYijunSkill)
 private:
  inline void set_has_attrid();
  inline void clear_has_attrid();
  inline void set_has_level();
  inline void clear_has_level();

  ::google::protobuf::uint32 attrid_;
  ::google::protobuf::uint32 level_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_role_5fyijun_5fskill_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_role_5fyijun_5fskill_2eproto();
  #endif
  friend void protobuf_AssignDesc_role_5fyijun_5fskill_2eproto();
  friend void protobuf_ShutdownFile_role_5fyijun_5fskill_2eproto();

  void InitAsDefaultInstance();
  static MsgRoleYijunSkill* default_instance_;
};
// ===================================================================


// ===================================================================

// MsgRoleYijunSkill

// required uint32 attrID = 1;
inline bool MsgRoleYijunSkill::has_attrid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgRoleYijunSkill::set_has_attrid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgRoleYijunSkill::clear_has_attrid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgRoleYijunSkill::clear_attrid() {
  attrid_ = 0u;
  clear_has_attrid();
}
inline ::google::protobuf::uint32 MsgRoleYijunSkill::attrid() const {
  return attrid_;
}
inline void MsgRoleYijunSkill::set_attrid(::google::protobuf::uint32 value) {
  set_has_attrid();
  attrid_ = value;
}

// required uint32 level = 2;
inline bool MsgRoleYijunSkill::has_level() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgRoleYijunSkill::set_has_level() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgRoleYijunSkill::clear_has_level() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgRoleYijunSkill::clear_level() {
  level_ = 0u;
  clear_has_level();
}
inline ::google::protobuf::uint32 MsgRoleYijunSkill::level() const {
  return level_;
}
inline void MsgRoleYijunSkill::set_level(::google::protobuf::uint32 value) {
  set_has_level();
  level_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_role_5fyijun_5fskill_2eproto__INCLUDED
