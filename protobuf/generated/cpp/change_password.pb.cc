// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: change_password.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "change_password.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_change_5fpassword_2eproto() {
  delete ChangePasswordRequest::default_instance_;
  delete ChangePasswordResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_change_5fpassword_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_change_5fpassword_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ChangePasswordRequest::default_instance_ = new ChangePasswordRequest();
  ChangePasswordResponse::default_instance_ = new ChangePasswordResponse();
  ChangePasswordRequest::default_instance_->InitAsDefaultInstance();
  ChangePasswordResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_change_5fpassword_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_change_5fpassword_2eproto_once_);
void protobuf_AddDesc_change_5fpassword_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_change_5fpassword_2eproto_once_,
                 &protobuf_AddDesc_change_5fpassword_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_change_5fpassword_2eproto {
  StaticDescriptorInitializer_change_5fpassword_2eproto() {
    protobuf_AddDesc_change_5fpassword_2eproto();
  }
} static_descriptor_initializer_change_5fpassword_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ChangePasswordRequest::kMsgIDFieldNumber;
const int ChangePasswordRequest::kUserNameFieldNumber;
const int ChangePasswordRequest::kOldPasswordFieldNumber;
const int ChangePasswordRequest::kNewPasswordFieldNumber;
#endif  // !_MSC_VER

ChangePasswordRequest::ChangePasswordRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ChangePasswordRequest::InitAsDefaultInstance() {
}

ChangePasswordRequest::ChangePasswordRequest(const ChangePasswordRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ChangePasswordRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  oldpassword_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  newpassword_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ChangePasswordRequest::~ChangePasswordRequest() {
  SharedDtor();
}

void ChangePasswordRequest::SharedDtor() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (oldpassword_ != &::google::protobuf::internal::kEmptyString) {
    delete oldpassword_;
  }
  if (newpassword_ != &::google::protobuf::internal::kEmptyString) {
    delete newpassword_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ChangePasswordRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ChangePasswordRequest& ChangePasswordRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_change_5fpassword_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_change_5fpassword_2eproto();
#endif
  return *default_instance_;
}

ChangePasswordRequest* ChangePasswordRequest::default_instance_ = NULL;

ChangePasswordRequest* ChangePasswordRequest::New() const {
  return new ChangePasswordRequest;
}

void ChangePasswordRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::kEmptyString) {
        username_->clear();
      }
    }
    if (has_oldpassword()) {
      if (oldpassword_ != &::google::protobuf::internal::kEmptyString) {
        oldpassword_->clear();
      }
    }
    if (has_newpassword()) {
      if (newpassword_ != &::google::protobuf::internal::kEmptyString) {
        newpassword_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ChangePasswordRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_userName;
        break;
      }

      // required string userName = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_userName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_oldPassword;
        break;
      }

      // required string oldPassword = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_oldPassword:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_oldpassword()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_newPassword;
        break;
      }

      // required string newPassword = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_newPassword:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_newpassword()));
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

void ChangePasswordRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required string userName = 2;
  if (has_username()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->username(), output);
  }

  // required string oldPassword = 3;
  if (has_oldpassword()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->oldpassword(), output);
  }

  // required string newPassword = 4;
  if (has_newpassword()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->newpassword(), output);
  }

}

int ChangePasswordRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required string userName = 2;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }

    // required string oldPassword = 3;
    if (has_oldpassword()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->oldpassword());
    }

    // required string newPassword = 4;
    if (has_newpassword()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->newpassword());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChangePasswordRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ChangePasswordRequest*>(&from));
}

void ChangePasswordRequest::MergeFrom(const ChangePasswordRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_oldpassword()) {
      set_oldpassword(from.oldpassword());
    }
    if (from.has_newpassword()) {
      set_newpassword(from.newpassword());
    }
  }
}

void ChangePasswordRequest::CopyFrom(const ChangePasswordRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChangePasswordRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void ChangePasswordRequest::Swap(ChangePasswordRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(username_, other->username_);
    std::swap(oldpassword_, other->oldpassword_);
    std::swap(newpassword_, other->newpassword_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ChangePasswordRequest::GetTypeName() const {
  return "sanguo.ChangePasswordRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int ChangePasswordResponse::kMsgIDFieldNumber;
const int ChangePasswordResponse::kStatusFieldNumber;
const int ChangePasswordResponse::kNewPasswordFieldNumber;
#endif  // !_MSC_VER

ChangePasswordResponse::ChangePasswordResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ChangePasswordResponse::InitAsDefaultInstance() {
}

ChangePasswordResponse::ChangePasswordResponse(const ChangePasswordResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ChangePasswordResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  newpassword_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ChangePasswordResponse::~ChangePasswordResponse() {
  SharedDtor();
}

void ChangePasswordResponse::SharedDtor() {
  if (newpassword_ != &::google::protobuf::internal::kEmptyString) {
    delete newpassword_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ChangePasswordResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ChangePasswordResponse& ChangePasswordResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_change_5fpassword_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_change_5fpassword_2eproto();
#endif
  return *default_instance_;
}

ChangePasswordResponse* ChangePasswordResponse::default_instance_ = NULL;

ChangePasswordResponse* ChangePasswordResponse::New() const {
  return new ChangePasswordResponse;
}

void ChangePasswordResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    if (has_newpassword()) {
      if (newpassword_ != &::google::protobuf::internal::kEmptyString) {
        newpassword_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ChangePasswordResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(26)) goto parse_newPassword;
        break;
      }

      // optional string newPassword = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_newPassword:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_newpassword()));
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

void ChangePasswordResponse::SerializeWithCachedSizes(
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

  // optional string newPassword = 3;
  if (has_newpassword()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->newpassword(), output);
  }

}

int ChangePasswordResponse::ByteSize() const {
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

    // optional string newPassword = 3;
    if (has_newpassword()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->newpassword());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChangePasswordResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ChangePasswordResponse*>(&from));
}

void ChangePasswordResponse::MergeFrom(const ChangePasswordResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_newpassword()) {
      set_newpassword(from.newpassword());
    }
  }
}

void ChangePasswordResponse::CopyFrom(const ChangePasswordResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChangePasswordResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void ChangePasswordResponse::Swap(ChangePasswordResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(newpassword_, other->newpassword_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ChangePasswordResponse::GetTypeName() const {
  return "sanguo.ChangePasswordResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
