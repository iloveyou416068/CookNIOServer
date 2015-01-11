// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: accept_non_normal_mission.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "accept_non_normal_mission.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_accept_5fnon_5fnormal_5fmission_2eproto() {
  delete AcceptNonNormalMissionRequest::default_instance_;
  delete AcceptNonNormalMissionResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_accept_5fnon_5fnormal_5fmission_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_accept_5fnon_5fnormal_5fmission_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fmission_2eproto();
  AcceptNonNormalMissionRequest::default_instance_ = new AcceptNonNormalMissionRequest();
  AcceptNonNormalMissionResponse::default_instance_ = new AcceptNonNormalMissionResponse();
  AcceptNonNormalMissionRequest::default_instance_->InitAsDefaultInstance();
  AcceptNonNormalMissionResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_accept_5fnon_5fnormal_5fmission_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_accept_5fnon_5fnormal_5fmission_2eproto_once_);
void protobuf_AddDesc_accept_5fnon_5fnormal_5fmission_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_accept_5fnon_5fnormal_5fmission_2eproto_once_,
                 &protobuf_AddDesc_accept_5fnon_5fnormal_5fmission_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_accept_5fnon_5fnormal_5fmission_2eproto {
  StaticDescriptorInitializer_accept_5fnon_5fnormal_5fmission_2eproto() {
    protobuf_AddDesc_accept_5fnon_5fnormal_5fmission_2eproto();
  }
} static_descriptor_initializer_accept_5fnon_5fnormal_5fmission_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int AcceptNonNormalMissionRequest::kMsgIDFieldNumber;
const int AcceptNonNormalMissionRequest::kAutoIncrIDFieldNumber;
const int AcceptNonNormalMissionRequest::kTypeFieldNumber;
#endif  // !_MSC_VER

AcceptNonNormalMissionRequest::AcceptNonNormalMissionRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AcceptNonNormalMissionRequest::InitAsDefaultInstance() {
}

AcceptNonNormalMissionRequest::AcceptNonNormalMissionRequest(const AcceptNonNormalMissionRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AcceptNonNormalMissionRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  autoincrid_ = GOOGLE_ULONGLONG(0);
  type_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AcceptNonNormalMissionRequest::~AcceptNonNormalMissionRequest() {
  SharedDtor();
}

void AcceptNonNormalMissionRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void AcceptNonNormalMissionRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AcceptNonNormalMissionRequest& AcceptNonNormalMissionRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_accept_5fnon_5fnormal_5fmission_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_accept_5fnon_5fnormal_5fmission_2eproto();
#endif
  return *default_instance_;
}

AcceptNonNormalMissionRequest* AcceptNonNormalMissionRequest::default_instance_ = NULL;

AcceptNonNormalMissionRequest* AcceptNonNormalMissionRequest::New() const {
  return new AcceptNonNormalMissionRequest;
}

void AcceptNonNormalMissionRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    autoincrid_ = GOOGLE_ULONGLONG(0);
    type_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool AcceptNonNormalMissionRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_autoIncrID;
        break;
      }

      // required uint64 autoIncrID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_autoIncrID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &autoincrid_)));
          set_has_autoincrid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }

      // required uint32 type = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_)));
          set_has_type();
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

void AcceptNonNormalMissionRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint64 autoIncrID = 2;
  if (has_autoincrid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->autoincrid(), output);
  }

  // required uint32 type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->type(), output);
  }

}

int AcceptNonNormalMissionRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint64 autoIncrID = 2;
    if (has_autoincrid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->autoincrid());
    }

    // required uint32 type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AcceptNonNormalMissionRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AcceptNonNormalMissionRequest*>(&from));
}

void AcceptNonNormalMissionRequest::MergeFrom(const AcceptNonNormalMissionRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_autoincrid()) {
      set_autoincrid(from.autoincrid());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
}

void AcceptNonNormalMissionRequest::CopyFrom(const AcceptNonNormalMissionRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AcceptNonNormalMissionRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void AcceptNonNormalMissionRequest::Swap(AcceptNonNormalMissionRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(autoincrid_, other->autoincrid_);
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AcceptNonNormalMissionRequest::GetTypeName() const {
  return "sanguo.AcceptNonNormalMissionRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int AcceptNonNormalMissionResponse::kMsgIDFieldNumber;
const int AcceptNonNormalMissionResponse::kStatusFieldNumber;
const int AcceptNonNormalMissionResponse::kNonNormalMissionFieldNumber;
#endif  // !_MSC_VER

AcceptNonNormalMissionResponse::AcceptNonNormalMissionResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AcceptNonNormalMissionResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  nonnormalmission_ = const_cast< ::sanguo::MsgRoleMission*>(
      ::sanguo::MsgRoleMission::internal_default_instance());
#else
  nonnormalmission_ = const_cast< ::sanguo::MsgRoleMission*>(&::sanguo::MsgRoleMission::default_instance());
#endif
}

AcceptNonNormalMissionResponse::AcceptNonNormalMissionResponse(const AcceptNonNormalMissionResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AcceptNonNormalMissionResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  nonnormalmission_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AcceptNonNormalMissionResponse::~AcceptNonNormalMissionResponse() {
  SharedDtor();
}

void AcceptNonNormalMissionResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete nonnormalmission_;
  }
}

void AcceptNonNormalMissionResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AcceptNonNormalMissionResponse& AcceptNonNormalMissionResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_accept_5fnon_5fnormal_5fmission_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_accept_5fnon_5fnormal_5fmission_2eproto();
#endif
  return *default_instance_;
}

AcceptNonNormalMissionResponse* AcceptNonNormalMissionResponse::default_instance_ = NULL;

AcceptNonNormalMissionResponse* AcceptNonNormalMissionResponse::New() const {
  return new AcceptNonNormalMissionResponse;
}

void AcceptNonNormalMissionResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    if (has_nonnormalmission()) {
      if (nonnormalmission_ != NULL) nonnormalmission_->::sanguo::MsgRoleMission::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool AcceptNonNormalMissionResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(26)) goto parse_NonNormalMission;
        break;
      }

      // optional .sanguo.MsgRoleMission NonNormalMission = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_NonNormalMission:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_nonnormalmission()));
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

void AcceptNonNormalMissionResponse::SerializeWithCachedSizes(
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

  // optional .sanguo.MsgRoleMission NonNormalMission = 3;
  if (has_nonnormalmission()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->nonnormalmission(), output);
  }

}

int AcceptNonNormalMissionResponse::ByteSize() const {
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

    // optional .sanguo.MsgRoleMission NonNormalMission = 3;
    if (has_nonnormalmission()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->nonnormalmission());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AcceptNonNormalMissionResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AcceptNonNormalMissionResponse*>(&from));
}

void AcceptNonNormalMissionResponse::MergeFrom(const AcceptNonNormalMissionResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_nonnormalmission()) {
      mutable_nonnormalmission()->::sanguo::MsgRoleMission::MergeFrom(from.nonnormalmission());
    }
  }
}

void AcceptNonNormalMissionResponse::CopyFrom(const AcceptNonNormalMissionResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AcceptNonNormalMissionResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_nonnormalmission()) {
    if (!this->nonnormalmission().IsInitialized()) return false;
  }
  return true;
}

void AcceptNonNormalMissionResponse::Swap(AcceptNonNormalMissionResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(nonnormalmission_, other->nonnormalmission_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AcceptNonNormalMissionResponse::GetTypeName() const {
  return "sanguo.AcceptNonNormalMissionResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
