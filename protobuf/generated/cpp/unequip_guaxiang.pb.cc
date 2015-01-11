// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: unequip_guaxiang.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "unequip_guaxiang.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_unequip_5fguaxiang_2eproto() {
  delete UnequipGuaxiangRequest::default_instance_;
  delete UnequipGuaxiangResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_unequip_5fguaxiang_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_unequip_5fguaxiang_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  UnequipGuaxiangRequest::default_instance_ = new UnequipGuaxiangRequest();
  UnequipGuaxiangResponse::default_instance_ = new UnequipGuaxiangResponse();
  UnequipGuaxiangRequest::default_instance_->InitAsDefaultInstance();
  UnequipGuaxiangResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_unequip_5fguaxiang_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_unequip_5fguaxiang_2eproto_once_);
void protobuf_AddDesc_unequip_5fguaxiang_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_unequip_5fguaxiang_2eproto_once_,
                 &protobuf_AddDesc_unequip_5fguaxiang_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_unequip_5fguaxiang_2eproto {
  StaticDescriptorInitializer_unequip_5fguaxiang_2eproto() {
    protobuf_AddDesc_unequip_5fguaxiang_2eproto();
  }
} static_descriptor_initializer_unequip_5fguaxiang_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int UnequipGuaxiangRequest::kMsgIDFieldNumber;
const int UnequipGuaxiangRequest::kPlaceFieldNumber;
const int UnequipGuaxiangRequest::kBagGuaxiangOrderFieldNumber;
#endif  // !_MSC_VER

UnequipGuaxiangRequest::UnequipGuaxiangRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void UnequipGuaxiangRequest::InitAsDefaultInstance() {
}

UnequipGuaxiangRequest::UnequipGuaxiangRequest(const UnequipGuaxiangRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void UnequipGuaxiangRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  place_ = 0u;
  bagguaxiangorder_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UnequipGuaxiangRequest::~UnequipGuaxiangRequest() {
  SharedDtor();
}

void UnequipGuaxiangRequest::SharedDtor() {
  if (bagguaxiangorder_ != &::google::protobuf::internal::kEmptyString) {
    delete bagguaxiangorder_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void UnequipGuaxiangRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UnequipGuaxiangRequest& UnequipGuaxiangRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_unequip_5fguaxiang_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_unequip_5fguaxiang_2eproto();
#endif
  return *default_instance_;
}

UnequipGuaxiangRequest* UnequipGuaxiangRequest::default_instance_ = NULL;

UnequipGuaxiangRequest* UnequipGuaxiangRequest::New() const {
  return new UnequipGuaxiangRequest;
}

void UnequipGuaxiangRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    place_ = 0u;
    if (has_bagguaxiangorder()) {
      if (bagguaxiangorder_ != &::google::protobuf::internal::kEmptyString) {
        bagguaxiangorder_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool UnequipGuaxiangRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_place;
        break;
      }

      // required uint32 place = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_place:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &place_)));
          set_has_place();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_bagGuaxiangOrder;
        break;
      }

      // required string bagGuaxiangOrder = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_bagGuaxiangOrder:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_bagguaxiangorder()));
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

void UnequipGuaxiangRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint32 place = 2;
  if (has_place()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->place(), output);
  }

  // required string bagGuaxiangOrder = 3;
  if (has_bagguaxiangorder()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->bagguaxiangorder(), output);
  }

}

int UnequipGuaxiangRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint32 place = 2;
    if (has_place()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->place());
    }

    // required string bagGuaxiangOrder = 3;
    if (has_bagguaxiangorder()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->bagguaxiangorder());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UnequipGuaxiangRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UnequipGuaxiangRequest*>(&from));
}

void UnequipGuaxiangRequest::MergeFrom(const UnequipGuaxiangRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_place()) {
      set_place(from.place());
    }
    if (from.has_bagguaxiangorder()) {
      set_bagguaxiangorder(from.bagguaxiangorder());
    }
  }
}

void UnequipGuaxiangRequest::CopyFrom(const UnequipGuaxiangRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UnequipGuaxiangRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void UnequipGuaxiangRequest::Swap(UnequipGuaxiangRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(place_, other->place_);
    std::swap(bagguaxiangorder_, other->bagguaxiangorder_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string UnequipGuaxiangRequest::GetTypeName() const {
  return "sanguo.UnequipGuaxiangRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int UnequipGuaxiangResponse::kMsgIDFieldNumber;
const int UnequipGuaxiangResponse::kStatusFieldNumber;
#endif  // !_MSC_VER

UnequipGuaxiangResponse::UnequipGuaxiangResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void UnequipGuaxiangResponse::InitAsDefaultInstance() {
}

UnequipGuaxiangResponse::UnequipGuaxiangResponse(const UnequipGuaxiangResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void UnequipGuaxiangResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UnequipGuaxiangResponse::~UnequipGuaxiangResponse() {
  SharedDtor();
}

void UnequipGuaxiangResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void UnequipGuaxiangResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UnequipGuaxiangResponse& UnequipGuaxiangResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_unequip_5fguaxiang_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_unequip_5fguaxiang_2eproto();
#endif
  return *default_instance_;
}

UnequipGuaxiangResponse* UnequipGuaxiangResponse::default_instance_ = NULL;

UnequipGuaxiangResponse* UnequipGuaxiangResponse::New() const {
  return new UnequipGuaxiangResponse;
}

void UnequipGuaxiangResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool UnequipGuaxiangResponse::MergePartialFromCodedStream(
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

void UnequipGuaxiangResponse::SerializeWithCachedSizes(
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

int UnequipGuaxiangResponse::ByteSize() const {
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

void UnequipGuaxiangResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UnequipGuaxiangResponse*>(&from));
}

void UnequipGuaxiangResponse::MergeFrom(const UnequipGuaxiangResponse& from) {
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

void UnequipGuaxiangResponse::CopyFrom(const UnequipGuaxiangResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UnequipGuaxiangResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void UnequipGuaxiangResponse::Swap(UnequipGuaxiangResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string UnequipGuaxiangResponse::GetTypeName() const {
  return "sanguo.UnequipGuaxiangResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
