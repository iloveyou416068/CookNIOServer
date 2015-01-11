// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: worldboss_quit_city.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "worldboss_quit_city.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_worldboss_5fquit_5fcity_2eproto() {
  delete WorldbossQuitCityRequest::default_instance_;
  delete WorldbossQuitCityResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_worldboss_5fquit_5fcity_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_worldboss_5fquit_5fcity_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_constants_2eproto();
  WorldbossQuitCityRequest::default_instance_ = new WorldbossQuitCityRequest();
  WorldbossQuitCityResponse::default_instance_ = new WorldbossQuitCityResponse();
  WorldbossQuitCityRequest::default_instance_->InitAsDefaultInstance();
  WorldbossQuitCityResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_worldboss_5fquit_5fcity_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_worldboss_5fquit_5fcity_2eproto_once_);
void protobuf_AddDesc_worldboss_5fquit_5fcity_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_worldboss_5fquit_5fcity_2eproto_once_,
                 &protobuf_AddDesc_worldboss_5fquit_5fcity_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_worldboss_5fquit_5fcity_2eproto {
  StaticDescriptorInitializer_worldboss_5fquit_5fcity_2eproto() {
    protobuf_AddDesc_worldboss_5fquit_5fcity_2eproto();
  }
} static_descriptor_initializer_worldboss_5fquit_5fcity_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int WorldbossQuitCityRequest::kMsgIDFieldNumber;
const int WorldbossQuitCityRequest::kBossIdFieldNumber;
const int WorldbossQuitCityRequest::kBossTypeFieldNumber;
#endif  // !_MSC_VER

WorldbossQuitCityRequest::WorldbossQuitCityRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void WorldbossQuitCityRequest::InitAsDefaultInstance() {
}

WorldbossQuitCityRequest::WorldbossQuitCityRequest(const WorldbossQuitCityRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void WorldbossQuitCityRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  bossid_ = GOOGLE_ULONGLONG(0);
  bosstype_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WorldbossQuitCityRequest::~WorldbossQuitCityRequest() {
  SharedDtor();
}

void WorldbossQuitCityRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void WorldbossQuitCityRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const WorldbossQuitCityRequest& WorldbossQuitCityRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_worldboss_5fquit_5fcity_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_worldboss_5fquit_5fcity_2eproto();
#endif
  return *default_instance_;
}

WorldbossQuitCityRequest* WorldbossQuitCityRequest::default_instance_ = NULL;

WorldbossQuitCityRequest* WorldbossQuitCityRequest::New() const {
  return new WorldbossQuitCityRequest;
}

void WorldbossQuitCityRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    bossid_ = GOOGLE_ULONGLONG(0);
    bosstype_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool WorldbossQuitCityRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_bossId;
        break;
      }

      // required uint64 bossId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bossId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &bossid_)));
          set_has_bossid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_bossType;
        break;
      }

      // required .sanguo.WorldbossType bossType = 3;
      case 3: {
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

void WorldbossQuitCityRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint64 bossId = 2;
  if (has_bossid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->bossid(), output);
  }

  // required .sanguo.WorldbossType bossType = 3;
  if (has_bosstype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->bosstype(), output);
  }

}

int WorldbossQuitCityRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint64 bossId = 2;
    if (has_bossid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->bossid());
    }

    // required .sanguo.WorldbossType bossType = 3;
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

void WorldbossQuitCityRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WorldbossQuitCityRequest*>(&from));
}

void WorldbossQuitCityRequest::MergeFrom(const WorldbossQuitCityRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_bossid()) {
      set_bossid(from.bossid());
    }
    if (from.has_bosstype()) {
      set_bosstype(from.bosstype());
    }
  }
}

void WorldbossQuitCityRequest::CopyFrom(const WorldbossQuitCityRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorldbossQuitCityRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void WorldbossQuitCityRequest::Swap(WorldbossQuitCityRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(bossid_, other->bossid_);
    std::swap(bosstype_, other->bosstype_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string WorldbossQuitCityRequest::GetTypeName() const {
  return "sanguo.WorldbossQuitCityRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int WorldbossQuitCityResponse::kMsgIDFieldNumber;
const int WorldbossQuitCityResponse::kStatusFieldNumber;
#endif  // !_MSC_VER

WorldbossQuitCityResponse::WorldbossQuitCityResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void WorldbossQuitCityResponse::InitAsDefaultInstance() {
}

WorldbossQuitCityResponse::WorldbossQuitCityResponse(const WorldbossQuitCityResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void WorldbossQuitCityResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WorldbossQuitCityResponse::~WorldbossQuitCityResponse() {
  SharedDtor();
}

void WorldbossQuitCityResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void WorldbossQuitCityResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const WorldbossQuitCityResponse& WorldbossQuitCityResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_worldboss_5fquit_5fcity_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_worldboss_5fquit_5fcity_2eproto();
#endif
  return *default_instance_;
}

WorldbossQuitCityResponse* WorldbossQuitCityResponse::default_instance_ = NULL;

WorldbossQuitCityResponse* WorldbossQuitCityResponse::New() const {
  return new WorldbossQuitCityResponse;
}

void WorldbossQuitCityResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool WorldbossQuitCityResponse::MergePartialFromCodedStream(
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

void WorldbossQuitCityResponse::SerializeWithCachedSizes(
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

}

int WorldbossQuitCityResponse::ByteSize() const {
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

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WorldbossQuitCityResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WorldbossQuitCityResponse*>(&from));
}

void WorldbossQuitCityResponse::MergeFrom(const WorldbossQuitCityResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
  }
}

void WorldbossQuitCityResponse::CopyFrom(const WorldbossQuitCityResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorldbossQuitCityResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void WorldbossQuitCityResponse::Swap(WorldbossQuitCityResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string WorldbossQuitCityResponse::GetTypeName() const {
  return "sanguo.WorldbossQuitCityResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
