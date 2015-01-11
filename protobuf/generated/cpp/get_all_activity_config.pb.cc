// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_all_activity_config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "get_all_activity_config.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_get_5fall_5factivity_5fconfig_2eproto() {
  delete GetAllActivityConfigRequest::default_instance_;
  delete GetAllActivityConfigResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_get_5fall_5factivity_5fconfig_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_get_5fall_5factivity_5fconfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  GetAllActivityConfigRequest::default_instance_ = new GetAllActivityConfigRequest();
  GetAllActivityConfigResponse::default_instance_ = new GetAllActivityConfigResponse();
  GetAllActivityConfigRequest::default_instance_->InitAsDefaultInstance();
  GetAllActivityConfigResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_get_5fall_5factivity_5fconfig_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_get_5fall_5factivity_5fconfig_2eproto_once_);
void protobuf_AddDesc_get_5fall_5factivity_5fconfig_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_get_5fall_5factivity_5fconfig_2eproto_once_,
                 &protobuf_AddDesc_get_5fall_5factivity_5fconfig_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_get_5fall_5factivity_5fconfig_2eproto {
  StaticDescriptorInitializer_get_5fall_5factivity_5fconfig_2eproto() {
    protobuf_AddDesc_get_5fall_5factivity_5fconfig_2eproto();
  }
} static_descriptor_initializer_get_5fall_5factivity_5fconfig_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int GetAllActivityConfigRequest::kMsgIDFieldNumber;
#endif  // !_MSC_VER

GetAllActivityConfigRequest::GetAllActivityConfigRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GetAllActivityConfigRequest::InitAsDefaultInstance() {
}

GetAllActivityConfigRequest::GetAllActivityConfigRequest(const GetAllActivityConfigRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GetAllActivityConfigRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetAllActivityConfigRequest::~GetAllActivityConfigRequest() {
  SharedDtor();
}

void GetAllActivityConfigRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GetAllActivityConfigRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GetAllActivityConfigRequest& GetAllActivityConfigRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_get_5fall_5factivity_5fconfig_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_get_5fall_5factivity_5fconfig_2eproto();
#endif
  return *default_instance_;
}

GetAllActivityConfigRequest* GetAllActivityConfigRequest::default_instance_ = NULL;

GetAllActivityConfigRequest* GetAllActivityConfigRequest::New() const {
  return new GetAllActivityConfigRequest;
}

void GetAllActivityConfigRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GetAllActivityConfigRequest::MergePartialFromCodedStream(
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

void GetAllActivityConfigRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

}

int GetAllActivityConfigRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetAllActivityConfigRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GetAllActivityConfigRequest*>(&from));
}

void GetAllActivityConfigRequest::MergeFrom(const GetAllActivityConfigRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
  }
}

void GetAllActivityConfigRequest::CopyFrom(const GetAllActivityConfigRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetAllActivityConfigRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void GetAllActivityConfigRequest::Swap(GetAllActivityConfigRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GetAllActivityConfigRequest::GetTypeName() const {
  return "sanguo.GetAllActivityConfigRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int GetAllActivityConfigResponse::kMsgIDFieldNumber;
const int GetAllActivityConfigResponse::kStatusFieldNumber;
const int GetAllActivityConfigResponse::kActivityConfigFieldNumber;
#endif  // !_MSC_VER

GetAllActivityConfigResponse::GetAllActivityConfigResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GetAllActivityConfigResponse::InitAsDefaultInstance() {
}

GetAllActivityConfigResponse::GetAllActivityConfigResponse(const GetAllActivityConfigResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GetAllActivityConfigResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetAllActivityConfigResponse::~GetAllActivityConfigResponse() {
  SharedDtor();
}

void GetAllActivityConfigResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GetAllActivityConfigResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GetAllActivityConfigResponse& GetAllActivityConfigResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_get_5fall_5factivity_5fconfig_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_get_5fall_5factivity_5fconfig_2eproto();
#endif
  return *default_instance_;
}

GetAllActivityConfigResponse* GetAllActivityConfigResponse::default_instance_ = NULL;

GetAllActivityConfigResponse* GetAllActivityConfigResponse::New() const {
  return new GetAllActivityConfigResponse;
}

void GetAllActivityConfigResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
  }
  activityconfig_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GetAllActivityConfigResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(26)) goto parse_activityConfig;
        break;
      }

      // repeated string activityConfig = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_activityConfig:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_activityconfig()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_activityConfig;
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

void GetAllActivityConfigResponse::SerializeWithCachedSizes(
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

  // repeated string activityConfig = 3;
  for (int i = 0; i < this->activityconfig_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->activityconfig(i), output);
  }

}

int GetAllActivityConfigResponse::ByteSize() const {
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
  // repeated string activityConfig = 3;
  total_size += 1 * this->activityconfig_size();
  for (int i = 0; i < this->activityconfig_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->activityconfig(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetAllActivityConfigResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GetAllActivityConfigResponse*>(&from));
}

void GetAllActivityConfigResponse::MergeFrom(const GetAllActivityConfigResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  activityconfig_.MergeFrom(from.activityconfig_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
  }
}

void GetAllActivityConfigResponse::CopyFrom(const GetAllActivityConfigResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetAllActivityConfigResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void GetAllActivityConfigResponse::Swap(GetAllActivityConfigResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    activityconfig_.Swap(&other->activityconfig_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GetAllActivityConfigResponse::GetTypeName() const {
  return "sanguo.GetAllActivityConfigResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
