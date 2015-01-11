// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: level_up_yijun_building.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "level_up_yijun_building.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_level_5fup_5fyijun_5fbuilding_2eproto() {
  delete LevelUpYijunBuildingRequest::default_instance_;
  delete LevelUpYijunBuildingResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_level_5fup_5fyijun_5fbuilding_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_level_5fup_5fyijun_5fbuilding_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  LevelUpYijunBuildingRequest::default_instance_ = new LevelUpYijunBuildingRequest();
  LevelUpYijunBuildingResponse::default_instance_ = new LevelUpYijunBuildingResponse();
  LevelUpYijunBuildingRequest::default_instance_->InitAsDefaultInstance();
  LevelUpYijunBuildingResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_level_5fup_5fyijun_5fbuilding_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_level_5fup_5fyijun_5fbuilding_2eproto_once_);
void protobuf_AddDesc_level_5fup_5fyijun_5fbuilding_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_level_5fup_5fyijun_5fbuilding_2eproto_once_,
                 &protobuf_AddDesc_level_5fup_5fyijun_5fbuilding_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_level_5fup_5fyijun_5fbuilding_2eproto {
  StaticDescriptorInitializer_level_5fup_5fyijun_5fbuilding_2eproto() {
    protobuf_AddDesc_level_5fup_5fyijun_5fbuilding_2eproto();
  }
} static_descriptor_initializer_level_5fup_5fyijun_5fbuilding_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int LevelUpYijunBuildingRequest::kMsgIDFieldNumber;
const int LevelUpYijunBuildingRequest::kBuildingIDFieldNumber;
#endif  // !_MSC_VER

LevelUpYijunBuildingRequest::LevelUpYijunBuildingRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void LevelUpYijunBuildingRequest::InitAsDefaultInstance() {
}

LevelUpYijunBuildingRequest::LevelUpYijunBuildingRequest(const LevelUpYijunBuildingRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void LevelUpYijunBuildingRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  buildingid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LevelUpYijunBuildingRequest::~LevelUpYijunBuildingRequest() {
  SharedDtor();
}

void LevelUpYijunBuildingRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void LevelUpYijunBuildingRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LevelUpYijunBuildingRequest& LevelUpYijunBuildingRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_level_5fup_5fyijun_5fbuilding_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_level_5fup_5fyijun_5fbuilding_2eproto();
#endif
  return *default_instance_;
}

LevelUpYijunBuildingRequest* LevelUpYijunBuildingRequest::default_instance_ = NULL;

LevelUpYijunBuildingRequest* LevelUpYijunBuildingRequest::New() const {
  return new LevelUpYijunBuildingRequest;
}

void LevelUpYijunBuildingRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    buildingid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool LevelUpYijunBuildingRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_buildingID;
        break;
      }

      // required uint32 buildingID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_buildingID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &buildingid_)));
          set_has_buildingid();
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

void LevelUpYijunBuildingRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint32 buildingID = 2;
  if (has_buildingid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->buildingid(), output);
  }

}

int LevelUpYijunBuildingRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint32 buildingID = 2;
    if (has_buildingid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->buildingid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LevelUpYijunBuildingRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LevelUpYijunBuildingRequest*>(&from));
}

void LevelUpYijunBuildingRequest::MergeFrom(const LevelUpYijunBuildingRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_buildingid()) {
      set_buildingid(from.buildingid());
    }
  }
}

void LevelUpYijunBuildingRequest::CopyFrom(const LevelUpYijunBuildingRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LevelUpYijunBuildingRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void LevelUpYijunBuildingRequest::Swap(LevelUpYijunBuildingRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(buildingid_, other->buildingid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string LevelUpYijunBuildingRequest::GetTypeName() const {
  return "sanguo.LevelUpYijunBuildingRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int LevelUpYijunBuildingResponse::kMsgIDFieldNumber;
const int LevelUpYijunBuildingResponse::kStatusFieldNumber;
#endif  // !_MSC_VER

LevelUpYijunBuildingResponse::LevelUpYijunBuildingResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void LevelUpYijunBuildingResponse::InitAsDefaultInstance() {
}

LevelUpYijunBuildingResponse::LevelUpYijunBuildingResponse(const LevelUpYijunBuildingResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void LevelUpYijunBuildingResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LevelUpYijunBuildingResponse::~LevelUpYijunBuildingResponse() {
  SharedDtor();
}

void LevelUpYijunBuildingResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void LevelUpYijunBuildingResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LevelUpYijunBuildingResponse& LevelUpYijunBuildingResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_level_5fup_5fyijun_5fbuilding_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_level_5fup_5fyijun_5fbuilding_2eproto();
#endif
  return *default_instance_;
}

LevelUpYijunBuildingResponse* LevelUpYijunBuildingResponse::default_instance_ = NULL;

LevelUpYijunBuildingResponse* LevelUpYijunBuildingResponse::New() const {
  return new LevelUpYijunBuildingResponse;
}

void LevelUpYijunBuildingResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool LevelUpYijunBuildingResponse::MergePartialFromCodedStream(
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

void LevelUpYijunBuildingResponse::SerializeWithCachedSizes(
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

int LevelUpYijunBuildingResponse::ByteSize() const {
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

void LevelUpYijunBuildingResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LevelUpYijunBuildingResponse*>(&from));
}

void LevelUpYijunBuildingResponse::MergeFrom(const LevelUpYijunBuildingResponse& from) {
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

void LevelUpYijunBuildingResponse::CopyFrom(const LevelUpYijunBuildingResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LevelUpYijunBuildingResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void LevelUpYijunBuildingResponse::Swap(LevelUpYijunBuildingResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string LevelUpYijunBuildingResponse::GetTypeName() const {
  return "sanguo.LevelUpYijunBuildingResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
