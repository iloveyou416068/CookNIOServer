// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: arena_notice.proto

#ifndef PROTOBUF_arena_5fnotice_2eproto__INCLUDED
#define PROTOBUF_arena_5fnotice_2eproto__INCLUDED

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
void  protobuf_AddDesc_arena_5fnotice_2eproto();
void protobuf_AssignDesc_arena_5fnotice_2eproto();
void protobuf_ShutdownFile_arena_5fnotice_2eproto();

class ArenaNotice;

// ===================================================================

class ArenaNotice : public ::google::protobuf::MessageLite {
 public:
  ArenaNotice();
  virtual ~ArenaNotice();

  ArenaNotice(const ArenaNotice& from);

  inline ArenaNotice& operator=(const ArenaNotice& from) {
    CopyFrom(from);
    return *this;
  }

  static const ArenaNotice& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ArenaNotice* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ArenaNotice* other);

  // implements Message ----------------------------------------------

  ArenaNotice* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ArenaNotice& from);
  void MergeFrom(const ArenaNotice& from);
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

  // required uint32 result = 3;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 3;
  inline ::google::protobuf::uint32 result() const;
  inline void set_result(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sanguo.ArenaNotice)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_result();
  inline void clear_has_result();

  int msgid_;
  int status_;
  ::google::protobuf::uint32 result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_arena_5fnotice_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_arena_5fnotice_2eproto();
  #endif
  friend void protobuf_AssignDesc_arena_5fnotice_2eproto();
  friend void protobuf_ShutdownFile_arena_5fnotice_2eproto();

  void InitAsDefaultInstance();
  static ArenaNotice* default_instance_;
};
// ===================================================================


// ===================================================================

// ArenaNotice

// required .sanguo.MsgID msgID = 1;
inline bool ArenaNotice::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ArenaNotice::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ArenaNotice::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ArenaNotice::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::sanguo::MsgID ArenaNotice::msgid() const {
  return static_cast< ::sanguo::MsgID >(msgid_);
}
inline void ArenaNotice::set_msgid(::sanguo::MsgID value) {
  assert(::sanguo::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// required .sanguo.StatusCode status = 2;
inline bool ArenaNotice::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ArenaNotice::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ArenaNotice::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ArenaNotice::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::sanguo::StatusCode ArenaNotice::status() const {
  return static_cast< ::sanguo::StatusCode >(status_);
}
inline void ArenaNotice::set_status(::sanguo::StatusCode value) {
  assert(::sanguo::StatusCode_IsValid(value));
  set_has_status();
  status_ = value;
}

// required uint32 result = 3;
inline bool ArenaNotice::has_result() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ArenaNotice::set_has_result() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ArenaNotice::clear_has_result() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ArenaNotice::clear_result() {
  result_ = 0u;
  clear_has_result();
}
inline ::google::protobuf::uint32 ArenaNotice::result() const {
  return result_;
}
inline void ArenaNotice::set_result(::google::protobuf::uint32 value) {
  set_has_result();
  result_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_arena_5fnotice_2eproto__INCLUDED
