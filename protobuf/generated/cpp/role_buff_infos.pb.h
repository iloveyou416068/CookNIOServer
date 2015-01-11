// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: role_buff_infos.proto

#ifndef PROTOBUF_role_5fbuff_5finfos_2eproto__INCLUDED
#define PROTOBUF_role_5fbuff_5finfos_2eproto__INCLUDED

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
void  protobuf_AddDesc_role_5fbuff_5finfos_2eproto();
void protobuf_AssignDesc_role_5fbuff_5finfos_2eproto();
void protobuf_ShutdownFile_role_5fbuff_5finfos_2eproto();

class MsgRoleBuffInfos;

// ===================================================================

class MsgRoleBuffInfos : public ::google::protobuf::MessageLite {
 public:
  MsgRoleBuffInfos();
  virtual ~MsgRoleBuffInfos();

  MsgRoleBuffInfos(const MsgRoleBuffInfos& from);

  inline MsgRoleBuffInfos& operator=(const MsgRoleBuffInfos& from) {
    CopyFrom(from);
    return *this;
  }

  static const MsgRoleBuffInfos& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MsgRoleBuffInfos* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MsgRoleBuffInfos* other);

  // implements Message ----------------------------------------------

  MsgRoleBuffInfos* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MsgRoleBuffInfos& from);
  void MergeFrom(const MsgRoleBuffInfos& from);
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

  // required uint32 buffID = 1;
  inline bool has_buffid() const;
  inline void clear_buffid();
  static const int kBuffIDFieldNumber = 1;
  inline ::google::protobuf::uint32 buffid() const;
  inline void set_buffid(::google::protobuf::uint32 value);

  // required uint64 startTime = 2;
  inline bool has_starttime() const;
  inline void clear_starttime();
  static const int kStartTimeFieldNumber = 2;
  inline ::google::protobuf::uint64 starttime() const;
  inline void set_starttime(::google::protobuf::uint64 value);

  // required uint32 buffCount = 3;
  inline bool has_buffcount() const;
  inline void clear_buffcount();
  static const int kBuffCountFieldNumber = 3;
  inline ::google::protobuf::uint32 buffcount() const;
  inline void set_buffcount(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.MsgRoleBuffInfos)
 private:
  inline void set_has_buffid();
  inline void clear_has_buffid();
  inline void set_has_starttime();
  inline void clear_has_starttime();
  inline void set_has_buffcount();
  inline void clear_has_buffcount();

  ::google::protobuf::uint64 starttime_;
  ::google::protobuf::uint32 buffid_;
  ::google::protobuf::uint32 buffcount_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_role_5fbuff_5finfos_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_role_5fbuff_5finfos_2eproto();
  #endif
  friend void protobuf_AssignDesc_role_5fbuff_5finfos_2eproto();
  friend void protobuf_ShutdownFile_role_5fbuff_5finfos_2eproto();

  void InitAsDefaultInstance();
  static MsgRoleBuffInfos* default_instance_;
};
// ===================================================================


// ===================================================================

// MsgRoleBuffInfos

// required uint32 buffID = 1;
inline bool MsgRoleBuffInfos::has_buffid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgRoleBuffInfos::set_has_buffid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgRoleBuffInfos::clear_has_buffid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgRoleBuffInfos::clear_buffid() {
  buffid_ = 0u;
  clear_has_buffid();
}
inline ::google::protobuf::uint32 MsgRoleBuffInfos::buffid() const {
  return buffid_;
}
inline void MsgRoleBuffInfos::set_buffid(::google::protobuf::uint32 value) {
  set_has_buffid();
  buffid_ = value;
}

// required uint64 startTime = 2;
inline bool MsgRoleBuffInfos::has_starttime() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgRoleBuffInfos::set_has_starttime() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgRoleBuffInfos::clear_has_starttime() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgRoleBuffInfos::clear_starttime() {
  starttime_ = GOOGLE_ULONGLONG(0);
  clear_has_starttime();
}
inline ::google::protobuf::uint64 MsgRoleBuffInfos::starttime() const {
  return starttime_;
}
inline void MsgRoleBuffInfos::set_starttime(::google::protobuf::uint64 value) {
  set_has_starttime();
  starttime_ = value;
}

// required uint32 buffCount = 3;
inline bool MsgRoleBuffInfos::has_buffcount() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MsgRoleBuffInfos::set_has_buffcount() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MsgRoleBuffInfos::clear_has_buffcount() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MsgRoleBuffInfos::clear_buffcount() {
  buffcount_ = 0u;
  clear_has_buffcount();
}
inline ::google::protobuf::uint32 MsgRoleBuffInfos::buffcount() const {
  return buffcount_;
}
inline void MsgRoleBuffInfos::set_buffcount(::google::protobuf::uint32 value) {
  set_has_buffcount();
  buffcount_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_role_5fbuff_5finfos_2eproto__INCLUDED
