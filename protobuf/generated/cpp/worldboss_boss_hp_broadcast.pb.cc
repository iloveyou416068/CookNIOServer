// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: worldboss_boss_hp_broadcast.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "worldboss_boss_hp_broadcast.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_worldboss_5fboss_5fhp_5fbroadcast_2eproto() {
  delete WorldbossBossHpBroadcast::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_worldboss_5fboss_5fhp_5fbroadcast_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_worldboss_5fboss_5fhp_5fbroadcast_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_constants_2eproto();
  WorldbossBossHpBroadcast::default_instance_ = new WorldbossBossHpBroadcast();
  WorldbossBossHpBroadcast::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_worldboss_5fboss_5fhp_5fbroadcast_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_worldboss_5fboss_5fhp_5fbroadcast_2eproto_once_);
void protobuf_AddDesc_worldboss_5fboss_5fhp_5fbroadcast_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_worldboss_5fboss_5fhp_5fbroadcast_2eproto_once_,
                 &protobuf_AddDesc_worldboss_5fboss_5fhp_5fbroadcast_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_worldboss_5fboss_5fhp_5fbroadcast_2eproto {
  StaticDescriptorInitializer_worldboss_5fboss_5fhp_5fbroadcast_2eproto() {
    protobuf_AddDesc_worldboss_5fboss_5fhp_5fbroadcast_2eproto();
  }
} static_descriptor_initializer_worldboss_5fboss_5fhp_5fbroadcast_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int WorldbossBossHpBroadcast::kMsgIDFieldNumber;
const int WorldbossBossHpBroadcast::kStatusFieldNumber;
const int WorldbossBossHpBroadcast::kBossHPFieldNumber;
const int WorldbossBossHpBroadcast::kBossTypeFieldNumber;
#endif  // !_MSC_VER

WorldbossBossHpBroadcast::WorldbossBossHpBroadcast()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void WorldbossBossHpBroadcast::InitAsDefaultInstance() {
}

WorldbossBossHpBroadcast::WorldbossBossHpBroadcast(const WorldbossBossHpBroadcast& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void WorldbossBossHpBroadcast::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  bosshp_ = GOOGLE_ULONGLONG(0);
  bosstype_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WorldbossBossHpBroadcast::~WorldbossBossHpBroadcast() {
  SharedDtor();
}

void WorldbossBossHpBroadcast::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void WorldbossBossHpBroadcast::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const WorldbossBossHpBroadcast& WorldbossBossHpBroadcast::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_worldboss_5fboss_5fhp_5fbroadcast_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_worldboss_5fboss_5fhp_5fbroadcast_2eproto();
#endif
  return *default_instance_;
}

WorldbossBossHpBroadcast* WorldbossBossHpBroadcast::default_instance_ = NULL;

WorldbossBossHpBroadcast* WorldbossBossHpBroadcast::New() const {
  return new WorldbossBossHpBroadcast;
}

void WorldbossBossHpBroadcast::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    bosshp_ = GOOGLE_ULONGLONG(0);
    bosstype_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool WorldbossBossHpBroadcast::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .sanguo.MsgID msgID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sanguo::MsgID_IsValid(value)) {
            set_msgid(static_cast< ::sanguo::MsgID >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_status;
        break;
      }

      // required .sanguo.StatusCode status = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_status:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sanguo::StatusCode_IsValid(value)) {
            set_status(static_cast< ::sanguo::StatusCode >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_bossHP;
        break;
      }

      // required uint64 bossHP = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bossHP:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &bosshp_)));
          set_has_bosshp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_bossType;
        break;
      }

      // required .sanguo.WorldbossType bossType = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bossType:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sanguo::WorldbossType_IsValid(value)) {
            set_bosstype(static_cast< ::sanguo::WorldbossType >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void WorldbossBossHpBroadcast::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required .sanguo.StatusCode status = 2;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->status(), output);
  }

  // required uint64 bossHP = 3;
  if (has_bosshp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->bosshp(), output);
  }

  // required .sanguo.WorldbossType bossType = 4;
  if (has_bosstype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->bosstype(), output);
  }

}

int WorldbossBossHpBroadcast::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required .sanguo.StatusCode status = 2;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
    }

    // required uint64 bossHP = 3;
    if (has_bosshp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->bosshp());
    }

    // required .sanguo.WorldbossType bossType = 4;
    if (has_bosstype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->bosstype());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WorldbossBossHpBroadcast::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WorldbossBossHpBroadcast*>(&from));
}

void WorldbossBossHpBroadcast::MergeFrom(const WorldbossBossHpBroadcast& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_bosshp()) {
      set_bosshp(from.bosshp());
    }
    if (from.has_bosstype()) {
      set_bosstype(from.bosstype());
    }
  }
}

void WorldbossBossHpBroadcast::CopyFrom(const WorldbossBossHpBroadcast& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorldbossBossHpBroadcast::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void WorldbossBossHpBroadcast::Swap(WorldbossBossHpBroadcast* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(bosshp_, other->bosshp_);
    std::swap(bosstype_, other->bosstype_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string WorldbossBossHpBroadcast::GetTypeName() const {
  return "sanguo.WorldbossBossHpBroadcast";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
