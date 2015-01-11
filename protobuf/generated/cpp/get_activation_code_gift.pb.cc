// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_activation_code_gift.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "get_activation_code_gift.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_get_5factivation_5fcode_5fgift_2eproto() {
  delete GetActivationCodeGiftRequest::default_instance_;
  delete GetActivationCodeGiftResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  GetActivationCodeGiftRequest::default_instance_ = new GetActivationCodeGiftRequest();
  GetActivationCodeGiftResponse::default_instance_ = new GetActivationCodeGiftResponse();
  GetActivationCodeGiftRequest::default_instance_->InitAsDefaultInstance();
  GetActivationCodeGiftResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_get_5factivation_5fcode_5fgift_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto_once_);
void protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto_once_,
                 &protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_get_5factivation_5fcode_5fgift_2eproto {
  StaticDescriptorInitializer_get_5factivation_5fcode_5fgift_2eproto() {
    protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto();
  }
} static_descriptor_initializer_get_5factivation_5fcode_5fgift_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int GetActivationCodeGiftRequest::kMsgIDFieldNumber;
const int GetActivationCodeGiftRequest::kActivationCodeFieldNumber;
#endif  // !_MSC_VER

GetActivationCodeGiftRequest::GetActivationCodeGiftRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GetActivationCodeGiftRequest::InitAsDefaultInstance() {
}

GetActivationCodeGiftRequest::GetActivationCodeGiftRequest(const GetActivationCodeGiftRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GetActivationCodeGiftRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  activationcode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetActivationCodeGiftRequest::~GetActivationCodeGiftRequest() {
  SharedDtor();
}

void GetActivationCodeGiftRequest::SharedDtor() {
  if (activationcode_ != &::google::protobuf::internal::kEmptyString) {
    delete activationcode_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GetActivationCodeGiftRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GetActivationCodeGiftRequest& GetActivationCodeGiftRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto();
#endif
  return *default_instance_;
}

GetActivationCodeGiftRequest* GetActivationCodeGiftRequest::default_instance_ = NULL;

GetActivationCodeGiftRequest* GetActivationCodeGiftRequest::New() const {
  return new GetActivationCodeGiftRequest;
}

void GetActivationCodeGiftRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    if (has_activationcode()) {
      if (activationcode_ != &::google::protobuf::internal::kEmptyString) {
        activationcode_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GetActivationCodeGiftRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_activationCode;
        break;
      }

      // required string activationCode = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_activationCode:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_activationcode()));
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

void GetActivationCodeGiftRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required string activationCode = 2;
  if (has_activationcode()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->activationcode(), output);
  }

}

int GetActivationCodeGiftRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required string activationCode = 2;
    if (has_activationcode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->activationcode());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetActivationCodeGiftRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GetActivationCodeGiftRequest*>(&from));
}

void GetActivationCodeGiftRequest::MergeFrom(const GetActivationCodeGiftRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_activationcode()) {
      set_activationcode(from.activationcode());
    }
  }
}

void GetActivationCodeGiftRequest::CopyFrom(const GetActivationCodeGiftRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetActivationCodeGiftRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void GetActivationCodeGiftRequest::Swap(GetActivationCodeGiftRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(activationcode_, other->activationcode_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GetActivationCodeGiftRequest::GetTypeName() const {
  return "sanguo.GetActivationCodeGiftRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int GetActivationCodeGiftResponse::kMsgIDFieldNumber;
const int GetActivationCodeGiftResponse::kStatusFieldNumber;
const int GetActivationCodeGiftResponse::kGiftFieldNumber;
#endif  // !_MSC_VER

GetActivationCodeGiftResponse::GetActivationCodeGiftResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GetActivationCodeGiftResponse::InitAsDefaultInstance() {
}

GetActivationCodeGiftResponse::GetActivationCodeGiftResponse(const GetActivationCodeGiftResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GetActivationCodeGiftResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  gift_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetActivationCodeGiftResponse::~GetActivationCodeGiftResponse() {
  SharedDtor();
}

void GetActivationCodeGiftResponse::SharedDtor() {
  if (gift_ != &::google::protobuf::internal::kEmptyString) {
    delete gift_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GetActivationCodeGiftResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GetActivationCodeGiftResponse& GetActivationCodeGiftResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_get_5factivation_5fcode_5fgift_2eproto();
#endif
  return *default_instance_;
}

GetActivationCodeGiftResponse* GetActivationCodeGiftResponse::default_instance_ = NULL;

GetActivationCodeGiftResponse* GetActivationCodeGiftResponse::New() const {
  return new GetActivationCodeGiftResponse;
}

void GetActivationCodeGiftResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    if (has_gift()) {
      if (gift_ != &::google::protobuf::internal::kEmptyString) {
        gift_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GetActivationCodeGiftResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(26)) goto parse_gift;
        break;
      }

      // optional string gift = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_gift:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gift()));
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

void GetActivationCodeGiftResponse::SerializeWithCachedSizes(
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

  // optional string gift = 3;
  if (has_gift()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->gift(), output);
  }

}

int GetActivationCodeGiftResponse::ByteSize() const {
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

    // optional string gift = 3;
    if (has_gift()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->gift());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetActivationCodeGiftResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GetActivationCodeGiftResponse*>(&from));
}

void GetActivationCodeGiftResponse::MergeFrom(const GetActivationCodeGiftResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_gift()) {
      set_gift(from.gift());
    }
  }
}

void GetActivationCodeGiftResponse::CopyFrom(const GetActivationCodeGiftResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetActivationCodeGiftResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void GetActivationCodeGiftResponse::Swap(GetActivationCodeGiftResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(gift_, other->gift_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GetActivationCodeGiftResponse::GetTypeName() const {
  return "sanguo.GetActivationCodeGiftResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
