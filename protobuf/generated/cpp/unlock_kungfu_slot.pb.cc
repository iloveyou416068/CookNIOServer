// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: unlock_kungfu_slot.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "unlock_kungfu_slot.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_unlock_5fkungfu_5fslot_2eproto() {
  delete UnlockKungfuSlotRequest::default_instance_;
  delete UnlockKungfuSlotResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_open_5fkungfu_5fslot_5fcondition_2eproto();
  UnlockKungfuSlotRequest::default_instance_ = new UnlockKungfuSlotRequest();
  UnlockKungfuSlotResponse::default_instance_ = new UnlockKungfuSlotResponse();
  UnlockKungfuSlotRequest::default_instance_->InitAsDefaultInstance();
  UnlockKungfuSlotResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_unlock_5fkungfu_5fslot_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto_once_);
void protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto_once_,
                 &protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_unlock_5fkungfu_5fslot_2eproto {
  StaticDescriptorInitializer_unlock_5fkungfu_5fslot_2eproto() {
    protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto();
  }
} static_descriptor_initializer_unlock_5fkungfu_5fslot_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int UnlockKungfuSlotRequest::kMsgIDFieldNumber;
const int UnlockKungfuSlotRequest::kKungfuIDFieldNumber;
#endif  // !_MSC_VER

UnlockKungfuSlotRequest::UnlockKungfuSlotRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void UnlockKungfuSlotRequest::InitAsDefaultInstance() {
}

UnlockKungfuSlotRequest::UnlockKungfuSlotRequest(const UnlockKungfuSlotRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void UnlockKungfuSlotRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  kungfuid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UnlockKungfuSlotRequest::~UnlockKungfuSlotRequest() {
  SharedDtor();
}

void UnlockKungfuSlotRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void UnlockKungfuSlotRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UnlockKungfuSlotRequest& UnlockKungfuSlotRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto();
#endif
  return *default_instance_;
}

UnlockKungfuSlotRequest* UnlockKungfuSlotRequest::default_instance_ = NULL;

UnlockKungfuSlotRequest* UnlockKungfuSlotRequest::New() const {
  return new UnlockKungfuSlotRequest;
}

void UnlockKungfuSlotRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    kungfuid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool UnlockKungfuSlotRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_KungfuID;
        break;
      }

      // required uint32 KungfuID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_KungfuID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &kungfuid_)));
          set_has_kungfuid();
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

void UnlockKungfuSlotRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint32 KungfuID = 2;
  if (has_kungfuid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->kungfuid(), output);
  }

}

int UnlockKungfuSlotRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint32 KungfuID = 2;
    if (has_kungfuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->kungfuid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UnlockKungfuSlotRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UnlockKungfuSlotRequest*>(&from));
}

void UnlockKungfuSlotRequest::MergeFrom(const UnlockKungfuSlotRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_kungfuid()) {
      set_kungfuid(from.kungfuid());
    }
  }
}

void UnlockKungfuSlotRequest::CopyFrom(const UnlockKungfuSlotRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UnlockKungfuSlotRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void UnlockKungfuSlotRequest::Swap(UnlockKungfuSlotRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(kungfuid_, other->kungfuid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string UnlockKungfuSlotRequest::GetTypeName() const {
  return "sanguo.UnlockKungfuSlotRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int UnlockKungfuSlotResponse::kMsgIDFieldNumber;
const int UnlockKungfuSlotResponse::kStatusFieldNumber;
const int UnlockKungfuSlotResponse::kKungfuSlotNumFieldNumber;
const int UnlockKungfuSlotResponse::kOpenSlotConditionFieldNumber;
const int UnlockKungfuSlotResponse::kKungfuIDFieldNumber;
#endif  // !_MSC_VER

UnlockKungfuSlotResponse::UnlockKungfuSlotResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void UnlockKungfuSlotResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  openslotcondition_ = const_cast< ::sanguo::MsgOpenKungfuSlotCondition*>(
      ::sanguo::MsgOpenKungfuSlotCondition::internal_default_instance());
#else
  openslotcondition_ = const_cast< ::sanguo::MsgOpenKungfuSlotCondition*>(&::sanguo::MsgOpenKungfuSlotCondition::default_instance());
#endif
}

UnlockKungfuSlotResponse::UnlockKungfuSlotResponse(const UnlockKungfuSlotResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void UnlockKungfuSlotResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  kungfuslotnum_ = 0u;
  openslotcondition_ = NULL;
  kungfuid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UnlockKungfuSlotResponse::~UnlockKungfuSlotResponse() {
  SharedDtor();
}

void UnlockKungfuSlotResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete openslotcondition_;
  }
}

void UnlockKungfuSlotResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UnlockKungfuSlotResponse& UnlockKungfuSlotResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_unlock_5fkungfu_5fslot_2eproto();
#endif
  return *default_instance_;
}

UnlockKungfuSlotResponse* UnlockKungfuSlotResponse::default_instance_ = NULL;

UnlockKungfuSlotResponse* UnlockKungfuSlotResponse::New() const {
  return new UnlockKungfuSlotResponse;
}

void UnlockKungfuSlotResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    kungfuslotnum_ = 0u;
    if (has_openslotcondition()) {
      if (openslotcondition_ != NULL) openslotcondition_->::sanguo::MsgOpenKungfuSlotCondition::Clear();
    }
    kungfuid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool UnlockKungfuSlotResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_kungfuSlotNum;
        break;
      }

      // optional uint32 kungfuSlotNum = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_kungfuSlotNum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &kungfuslotnum_)));
          set_has_kungfuslotnum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_openSlotCondition;
        break;
      }

      // optional .sanguo.MsgOpenKungfuSlotCondition openSlotCondition = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_openSlotCondition:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_openslotcondition()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_KungfuID;
        break;
      }

      // optional uint32 KungfuID = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_KungfuID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &kungfuid_)));
          set_has_kungfuid();
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

void UnlockKungfuSlotResponse::SerializeWithCachedSizes(
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

  // optional uint32 kungfuSlotNum = 3;
  if (has_kungfuslotnum()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->kungfuslotnum(), output);
  }

  // optional .sanguo.MsgOpenKungfuSlotCondition openSlotCondition = 4;
  if (has_openslotcondition()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->openslotcondition(), output);
  }

  // optional uint32 KungfuID = 5;
  if (has_kungfuid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->kungfuid(), output);
  }

}

int UnlockKungfuSlotResponse::ByteSize() const {
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

    // optional uint32 kungfuSlotNum = 3;
    if (has_kungfuslotnum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->kungfuslotnum());
    }

    // optional .sanguo.MsgOpenKungfuSlotCondition openSlotCondition = 4;
    if (has_openslotcondition()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->openslotcondition());
    }

    // optional uint32 KungfuID = 5;
    if (has_kungfuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->kungfuid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UnlockKungfuSlotResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UnlockKungfuSlotResponse*>(&from));
}

void UnlockKungfuSlotResponse::MergeFrom(const UnlockKungfuSlotResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_kungfuslotnum()) {
      set_kungfuslotnum(from.kungfuslotnum());
    }
    if (from.has_openslotcondition()) {
      mutable_openslotcondition()->::sanguo::MsgOpenKungfuSlotCondition::MergeFrom(from.openslotcondition());
    }
    if (from.has_kungfuid()) {
      set_kungfuid(from.kungfuid());
    }
  }
}

void UnlockKungfuSlotResponse::CopyFrom(const UnlockKungfuSlotResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UnlockKungfuSlotResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_openslotcondition()) {
    if (!this->openslotcondition().IsInitialized()) return false;
  }
  return true;
}

void UnlockKungfuSlotResponse::Swap(UnlockKungfuSlotResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(kungfuslotnum_, other->kungfuslotnum_);
    std::swap(openslotcondition_, other->openslotcondition_);
    std::swap(kungfuid_, other->kungfuid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string UnlockKungfuSlotResponse::GetTypeName() const {
  return "sanguo.UnlockKungfuSlotResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
