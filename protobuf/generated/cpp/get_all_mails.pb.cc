// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_all_mails.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "get_all_mails.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_get_5fall_5fmails_2eproto() {
  delete GetAllMailsRequest::default_instance_;
  delete GetAllMailsResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_get_5fall_5fmails_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_get_5fall_5fmails_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fmail_2eproto();
  GetAllMailsRequest::default_instance_ = new GetAllMailsRequest();
  GetAllMailsResponse::default_instance_ = new GetAllMailsResponse();
  GetAllMailsRequest::default_instance_->InitAsDefaultInstance();
  GetAllMailsResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_get_5fall_5fmails_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_get_5fall_5fmails_2eproto_once_);
void protobuf_AddDesc_get_5fall_5fmails_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_get_5fall_5fmails_2eproto_once_,
                 &protobuf_AddDesc_get_5fall_5fmails_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_get_5fall_5fmails_2eproto {
  StaticDescriptorInitializer_get_5fall_5fmails_2eproto() {
    protobuf_AddDesc_get_5fall_5fmails_2eproto();
  }
} static_descriptor_initializer_get_5fall_5fmails_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int GetAllMailsRequest::kMsgIDFieldNumber;
const int GetAllMailsRequest::kMailTypeFieldNumber;
#endif  // !_MSC_VER

GetAllMailsRequest::GetAllMailsRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GetAllMailsRequest::InitAsDefaultInstance() {
}

GetAllMailsRequest::GetAllMailsRequest(const GetAllMailsRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GetAllMailsRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  mailtype_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetAllMailsRequest::~GetAllMailsRequest() {
  SharedDtor();
}

void GetAllMailsRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GetAllMailsRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GetAllMailsRequest& GetAllMailsRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_get_5fall_5fmails_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_get_5fall_5fmails_2eproto();
#endif
  return *default_instance_;
}

GetAllMailsRequest* GetAllMailsRequest::default_instance_ = NULL;

GetAllMailsRequest* GetAllMailsRequest::New() const {
  return new GetAllMailsRequest;
}

void GetAllMailsRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    mailtype_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GetAllMailsRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_mailType;
        break;
      }

      // required uint32 mailType = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_mailType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &mailtype_)));
          set_has_mailtype();
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

void GetAllMailsRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint32 mailType = 2;
  if (has_mailtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->mailtype(), output);
  }

}

int GetAllMailsRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint32 mailType = 2;
    if (has_mailtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->mailtype());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetAllMailsRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GetAllMailsRequest*>(&from));
}

void GetAllMailsRequest::MergeFrom(const GetAllMailsRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_mailtype()) {
      set_mailtype(from.mailtype());
    }
  }
}

void GetAllMailsRequest::CopyFrom(const GetAllMailsRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetAllMailsRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void GetAllMailsRequest::Swap(GetAllMailsRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(mailtype_, other->mailtype_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GetAllMailsRequest::GetTypeName() const {
  return "sanguo.GetAllMailsRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int GetAllMailsResponse::kMsgIDFieldNumber;
const int GetAllMailsResponse::kStatusFieldNumber;
const int GetAllMailsResponse::kRoleMailsFieldNumber;
#endif  // !_MSC_VER

GetAllMailsResponse::GetAllMailsResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GetAllMailsResponse::InitAsDefaultInstance() {
}

GetAllMailsResponse::GetAllMailsResponse(const GetAllMailsResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GetAllMailsResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetAllMailsResponse::~GetAllMailsResponse() {
  SharedDtor();
}

void GetAllMailsResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GetAllMailsResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GetAllMailsResponse& GetAllMailsResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_get_5fall_5fmails_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_get_5fall_5fmails_2eproto();
#endif
  return *default_instance_;
}

GetAllMailsResponse* GetAllMailsResponse::default_instance_ = NULL;

GetAllMailsResponse* GetAllMailsResponse::New() const {
  return new GetAllMailsResponse;
}

void GetAllMailsResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
  }
  rolemails_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GetAllMailsResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(26)) goto parse_roleMails;
        break;
      }

      // repeated .sanguo.MsgRoleMail roleMails = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_roleMails:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_rolemails()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_roleMails;
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

void GetAllMailsResponse::SerializeWithCachedSizes(
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

  // repeated .sanguo.MsgRoleMail roleMails = 3;
  for (int i = 0; i < this->rolemails_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->rolemails(i), output);
  }

}

int GetAllMailsResponse::ByteSize() const {
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
  // repeated .sanguo.MsgRoleMail roleMails = 3;
  total_size += 1 * this->rolemails_size();
  for (int i = 0; i < this->rolemails_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->rolemails(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetAllMailsResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GetAllMailsResponse*>(&from));
}

void GetAllMailsResponse::MergeFrom(const GetAllMailsResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  rolemails_.MergeFrom(from.rolemails_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
  }
}

void GetAllMailsResponse::CopyFrom(const GetAllMailsResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetAllMailsResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  for (int i = 0; i < rolemails_size(); i++) {
    if (!this->rolemails(i).IsInitialized()) return false;
  }
  return true;
}

void GetAllMailsResponse::Swap(GetAllMailsResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    rolemails_.Swap(&other->rolemails_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GetAllMailsResponse::GetTypeName() const {
  return "sanguo.GetAllMailsResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
