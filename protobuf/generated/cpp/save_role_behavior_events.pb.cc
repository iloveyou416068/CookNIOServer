// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: save_role_behavior_events.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "save_role_behavior_events.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_save_5frole_5fbehavior_5fevents_2eproto() {
  delete SaveRoleBehaviorEventsRequest::default_instance_;
  delete SaveRoleBehaviorEventsResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_save_5frole_5fbehavior_5fevents_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_save_5frole_5fbehavior_5fevents_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  SaveRoleBehaviorEventsRequest::default_instance_ = new SaveRoleBehaviorEventsRequest();
  SaveRoleBehaviorEventsResponse::default_instance_ = new SaveRoleBehaviorEventsResponse();
  SaveRoleBehaviorEventsRequest::default_instance_->InitAsDefaultInstance();
  SaveRoleBehaviorEventsResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_save_5frole_5fbehavior_5fevents_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_save_5frole_5fbehavior_5fevents_2eproto_once_);
void protobuf_AddDesc_save_5frole_5fbehavior_5fevents_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_save_5frole_5fbehavior_5fevents_2eproto_once_,
                 &protobuf_AddDesc_save_5frole_5fbehavior_5fevents_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_save_5frole_5fbehavior_5fevents_2eproto {
  StaticDescriptorInitializer_save_5frole_5fbehavior_5fevents_2eproto() {
    protobuf_AddDesc_save_5frole_5fbehavior_5fevents_2eproto();
  }
} static_descriptor_initializer_save_5frole_5fbehavior_5fevents_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int SaveRoleBehaviorEventsRequest::kMsgIDFieldNumber;
const int SaveRoleBehaviorEventsRequest::kEventIdFieldNumber;
const int SaveRoleBehaviorEventsRequest::kEventStepKeyFieldNumber;
const int SaveRoleBehaviorEventsRequest::kChannelIDFieldNumber;
#endif  // !_MSC_VER

SaveRoleBehaviorEventsRequest::SaveRoleBehaviorEventsRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SaveRoleBehaviorEventsRequest::InitAsDefaultInstance() {
}

SaveRoleBehaviorEventsRequest::SaveRoleBehaviorEventsRequest(const SaveRoleBehaviorEventsRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SaveRoleBehaviorEventsRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  eventid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  eventstepkey_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  channelid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SaveRoleBehaviorEventsRequest::~SaveRoleBehaviorEventsRequest() {
  SharedDtor();
}

void SaveRoleBehaviorEventsRequest::SharedDtor() {
  if (eventid_ != &::google::protobuf::internal::kEmptyString) {
    delete eventid_;
  }
  if (eventstepkey_ != &::google::protobuf::internal::kEmptyString) {
    delete eventstepkey_;
  }
  if (channelid_ != &::google::protobuf::internal::kEmptyString) {
    delete channelid_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SaveRoleBehaviorEventsRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SaveRoleBehaviorEventsRequest& SaveRoleBehaviorEventsRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_save_5frole_5fbehavior_5fevents_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_save_5frole_5fbehavior_5fevents_2eproto();
#endif
  return *default_instance_;
}

SaveRoleBehaviorEventsRequest* SaveRoleBehaviorEventsRequest::default_instance_ = NULL;

SaveRoleBehaviorEventsRequest* SaveRoleBehaviorEventsRequest::New() const {
  return new SaveRoleBehaviorEventsRequest;
}

void SaveRoleBehaviorEventsRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    if (has_eventid()) {
      if (eventid_ != &::google::protobuf::internal::kEmptyString) {
        eventid_->clear();
      }
    }
    if (has_eventstepkey()) {
      if (eventstepkey_ != &::google::protobuf::internal::kEmptyString) {
        eventstepkey_->clear();
      }
    }
    if (has_channelid()) {
      if (channelid_ != &::google::protobuf::internal::kEmptyString) {
        channelid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SaveRoleBehaviorEventsRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_eventId;
        break;
      }

      // required string eventId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_eventId:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_eventid()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_eventStepKey;
        break;
      }

      // required string eventStepKey = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_eventStepKey:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_eventstepkey()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_channelID;
        break;
      }

      // required string channelID = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_channelID:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_channelid()));
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

void SaveRoleBehaviorEventsRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required string eventId = 2;
  if (has_eventid()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->eventid(), output);
  }

  // required string eventStepKey = 3;
  if (has_eventstepkey()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->eventstepkey(), output);
  }

  // required string channelID = 4;
  if (has_channelid()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->channelid(), output);
  }

}

int SaveRoleBehaviorEventsRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required string eventId = 2;
    if (has_eventid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->eventid());
    }

    // required string eventStepKey = 3;
    if (has_eventstepkey()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->eventstepkey());
    }

    // required string channelID = 4;
    if (has_channelid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->channelid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SaveRoleBehaviorEventsRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SaveRoleBehaviorEventsRequest*>(&from));
}

void SaveRoleBehaviorEventsRequest::MergeFrom(const SaveRoleBehaviorEventsRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_eventid()) {
      set_eventid(from.eventid());
    }
    if (from.has_eventstepkey()) {
      set_eventstepkey(from.eventstepkey());
    }
    if (from.has_channelid()) {
      set_channelid(from.channelid());
    }
  }
}

void SaveRoleBehaviorEventsRequest::CopyFrom(const SaveRoleBehaviorEventsRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SaveRoleBehaviorEventsRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void SaveRoleBehaviorEventsRequest::Swap(SaveRoleBehaviorEventsRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(eventid_, other->eventid_);
    std::swap(eventstepkey_, other->eventstepkey_);
    std::swap(channelid_, other->channelid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SaveRoleBehaviorEventsRequest::GetTypeName() const {
  return "sanguo.SaveRoleBehaviorEventsRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int SaveRoleBehaviorEventsResponse::kMsgIDFieldNumber;
const int SaveRoleBehaviorEventsResponse::kStatusFieldNumber;
#endif  // !_MSC_VER

SaveRoleBehaviorEventsResponse::SaveRoleBehaviorEventsResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SaveRoleBehaviorEventsResponse::InitAsDefaultInstance() {
}

SaveRoleBehaviorEventsResponse::SaveRoleBehaviorEventsResponse(const SaveRoleBehaviorEventsResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SaveRoleBehaviorEventsResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SaveRoleBehaviorEventsResponse::~SaveRoleBehaviorEventsResponse() {
  SharedDtor();
}

void SaveRoleBehaviorEventsResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SaveRoleBehaviorEventsResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SaveRoleBehaviorEventsResponse& SaveRoleBehaviorEventsResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_save_5frole_5fbehavior_5fevents_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_save_5frole_5fbehavior_5fevents_2eproto();
#endif
  return *default_instance_;
}

SaveRoleBehaviorEventsResponse* SaveRoleBehaviorEventsResponse::default_instance_ = NULL;

SaveRoleBehaviorEventsResponse* SaveRoleBehaviorEventsResponse::New() const {
  return new SaveRoleBehaviorEventsResponse;
}

void SaveRoleBehaviorEventsResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SaveRoleBehaviorEventsResponse::MergePartialFromCodedStream(
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

void SaveRoleBehaviorEventsResponse::SerializeWithCachedSizes(
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

int SaveRoleBehaviorEventsResponse::ByteSize() const {
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

void SaveRoleBehaviorEventsResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SaveRoleBehaviorEventsResponse*>(&from));
}

void SaveRoleBehaviorEventsResponse::MergeFrom(const SaveRoleBehaviorEventsResponse& from) {
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

void SaveRoleBehaviorEventsResponse::CopyFrom(const SaveRoleBehaviorEventsResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SaveRoleBehaviorEventsResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void SaveRoleBehaviorEventsResponse::Swap(SaveRoleBehaviorEventsResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SaveRoleBehaviorEventsResponse::GetTypeName() const {
  return "sanguo.SaveRoleBehaviorEventsResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
