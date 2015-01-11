// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: confirm_cooldown_over.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "confirm_cooldown_over.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_confirm_5fcooldown_5fover_2eproto() {
  delete ConfirmCooldownOverRequest::default_instance_;
  delete ConfirmCooldownOverResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_confirm_5fcooldown_5fover_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_confirm_5fcooldown_5fover_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_constants_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fcooldown_2eproto();
  ConfirmCooldownOverRequest::default_instance_ = new ConfirmCooldownOverRequest();
  ConfirmCooldownOverResponse::default_instance_ = new ConfirmCooldownOverResponse();
  ConfirmCooldownOverRequest::default_instance_->InitAsDefaultInstance();
  ConfirmCooldownOverResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_confirm_5fcooldown_5fover_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_confirm_5fcooldown_5fover_2eproto_once_);
void protobuf_AddDesc_confirm_5fcooldown_5fover_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_confirm_5fcooldown_5fover_2eproto_once_,
                 &protobuf_AddDesc_confirm_5fcooldown_5fover_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_confirm_5fcooldown_5fover_2eproto {
  StaticDescriptorInitializer_confirm_5fcooldown_5fover_2eproto() {
    protobuf_AddDesc_confirm_5fcooldown_5fover_2eproto();
  }
} static_descriptor_initializer_confirm_5fcooldown_5fover_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ConfirmCooldownOverRequest::kMsgIDFieldNumber;
const int ConfirmCooldownOverRequest::kCooldownTypeFieldNumber;
#endif  // !_MSC_VER

ConfirmCooldownOverRequest::ConfirmCooldownOverRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ConfirmCooldownOverRequest::InitAsDefaultInstance() {
}

ConfirmCooldownOverRequest::ConfirmCooldownOverRequest(const ConfirmCooldownOverRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ConfirmCooldownOverRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  cooldowntype_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ConfirmCooldownOverRequest::~ConfirmCooldownOverRequest() {
  SharedDtor();
}

void ConfirmCooldownOverRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ConfirmCooldownOverRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ConfirmCooldownOverRequest& ConfirmCooldownOverRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_confirm_5fcooldown_5fover_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_confirm_5fcooldown_5fover_2eproto();
#endif
  return *default_instance_;
}

ConfirmCooldownOverRequest* ConfirmCooldownOverRequest::default_instance_ = NULL;

ConfirmCooldownOverRequest* ConfirmCooldownOverRequest::New() const {
  return new ConfirmCooldownOverRequest;
}

void ConfirmCooldownOverRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    cooldowntype_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ConfirmCooldownOverRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_cooldownType;
        break;
      }

      // required .sanguo.CooldownType cooldownType = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_cooldownType:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sanguo::CooldownType_IsValid(value)) {
            set_cooldowntype(static_cast< ::sanguo::CooldownType >(value));
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

void ConfirmCooldownOverRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required .sanguo.CooldownType cooldownType = 2;
  if (has_cooldowntype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->cooldowntype(), output);
  }

}

int ConfirmCooldownOverRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required .sanguo.CooldownType cooldownType = 2;
    if (has_cooldowntype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->cooldowntype());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ConfirmCooldownOverRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ConfirmCooldownOverRequest*>(&from));
}

void ConfirmCooldownOverRequest::MergeFrom(const ConfirmCooldownOverRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_cooldowntype()) {
      set_cooldowntype(from.cooldowntype());
    }
  }
}

void ConfirmCooldownOverRequest::CopyFrom(const ConfirmCooldownOverRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConfirmCooldownOverRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void ConfirmCooldownOverRequest::Swap(ConfirmCooldownOverRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(cooldowntype_, other->cooldowntype_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ConfirmCooldownOverRequest::GetTypeName() const {
  return "sanguo.ConfirmCooldownOverRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int ConfirmCooldownOverResponse::kMsgIDFieldNumber;
const int ConfirmCooldownOverResponse::kStatusFieldNumber;
const int ConfirmCooldownOverResponse::kRoleCooldownFieldNumber;
const int ConfirmCooldownOverResponse::kServerTimeFieldNumber;
#endif  // !_MSC_VER

ConfirmCooldownOverResponse::ConfirmCooldownOverResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ConfirmCooldownOverResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  rolecooldown_ = const_cast< ::sanguo::MsgRoleCooldown*>(
      ::sanguo::MsgRoleCooldown::internal_default_instance());
#else
  rolecooldown_ = const_cast< ::sanguo::MsgRoleCooldown*>(&::sanguo::MsgRoleCooldown::default_instance());
#endif
}

ConfirmCooldownOverResponse::ConfirmCooldownOverResponse(const ConfirmCooldownOverResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ConfirmCooldownOverResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  rolecooldown_ = NULL;
  servertime_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ConfirmCooldownOverResponse::~ConfirmCooldownOverResponse() {
  SharedDtor();
}

void ConfirmCooldownOverResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete rolecooldown_;
  }
}

void ConfirmCooldownOverResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ConfirmCooldownOverResponse& ConfirmCooldownOverResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_confirm_5fcooldown_5fover_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_confirm_5fcooldown_5fover_2eproto();
#endif
  return *default_instance_;
}

ConfirmCooldownOverResponse* ConfirmCooldownOverResponse::default_instance_ = NULL;

ConfirmCooldownOverResponse* ConfirmCooldownOverResponse::New() const {
  return new ConfirmCooldownOverResponse;
}

void ConfirmCooldownOverResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    if (has_rolecooldown()) {
      if (rolecooldown_ != NULL) rolecooldown_->::sanguo::MsgRoleCooldown::Clear();
    }
    servertime_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ConfirmCooldownOverResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(26)) goto parse_roleCooldown;
        break;
      }

      // optional .sanguo.MsgRoleCooldown roleCooldown = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_roleCooldown:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rolecooldown()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_serverTime;
        break;
      }

      // optional uint64 serverTime = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_serverTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &servertime_)));
          set_has_servertime();
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

void ConfirmCooldownOverResponse::SerializeWithCachedSizes(
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

  // optional .sanguo.MsgRoleCooldown roleCooldown = 3;
  if (has_rolecooldown()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->rolecooldown(), output);
  }

  // optional uint64 serverTime = 4;
  if (has_servertime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->servertime(), output);
  }

}

int ConfirmCooldownOverResponse::ByteSize() const {
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

    // optional .sanguo.MsgRoleCooldown roleCooldown = 3;
    if (has_rolecooldown()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->rolecooldown());
    }

    // optional uint64 serverTime = 4;
    if (has_servertime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->servertime());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ConfirmCooldownOverResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ConfirmCooldownOverResponse*>(&from));
}

void ConfirmCooldownOverResponse::MergeFrom(const ConfirmCooldownOverResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_rolecooldown()) {
      mutable_rolecooldown()->::sanguo::MsgRoleCooldown::MergeFrom(from.rolecooldown());
    }
    if (from.has_servertime()) {
      set_servertime(from.servertime());
    }
  }
}

void ConfirmCooldownOverResponse::CopyFrom(const ConfirmCooldownOverResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConfirmCooldownOverResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_rolecooldown()) {
    if (!this->rolecooldown().IsInitialized()) return false;
  }
  return true;
}

void ConfirmCooldownOverResponse::Swap(ConfirmCooldownOverResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(rolecooldown_, other->rolecooldown_);
    std::swap(servertime_, other->servertime_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ConfirmCooldownOverResponse::GetTypeName() const {
  return "sanguo.ConfirmCooldownOverResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
