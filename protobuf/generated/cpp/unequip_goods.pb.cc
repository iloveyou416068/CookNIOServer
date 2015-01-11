// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: unequip_goods.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "unequip_goods.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_unequip_5fgoods_2eproto() {
  delete UnequipGoodsRequest::default_instance_;
  delete UnequipGoodsResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_unequip_5fgoods_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_unequip_5fgoods_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  UnequipGoodsRequest::default_instance_ = new UnequipGoodsRequest();
  UnequipGoodsResponse::default_instance_ = new UnequipGoodsResponse();
  UnequipGoodsRequest::default_instance_->InitAsDefaultInstance();
  UnequipGoodsResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_unequip_5fgoods_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_unequip_5fgoods_2eproto_once_);
void protobuf_AddDesc_unequip_5fgoods_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_unequip_5fgoods_2eproto_once_,
                 &protobuf_AddDesc_unequip_5fgoods_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_unequip_5fgoods_2eproto {
  StaticDescriptorInitializer_unequip_5fgoods_2eproto() {
    protobuf_AddDesc_unequip_5fgoods_2eproto();
  }
} static_descriptor_initializer_unequip_5fgoods_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int UnequipGoodsRequest::kMsgIDFieldNumber;
const int UnequipGoodsRequest::kPlaceFieldNumber;
#endif  // !_MSC_VER

UnequipGoodsRequest::UnequipGoodsRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void UnequipGoodsRequest::InitAsDefaultInstance() {
}

UnequipGoodsRequest::UnequipGoodsRequest(const UnequipGoodsRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void UnequipGoodsRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  place_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UnequipGoodsRequest::~UnequipGoodsRequest() {
  SharedDtor();
}

void UnequipGoodsRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void UnequipGoodsRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UnequipGoodsRequest& UnequipGoodsRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_unequip_5fgoods_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_unequip_5fgoods_2eproto();
#endif
  return *default_instance_;
}

UnequipGoodsRequest* UnequipGoodsRequest::default_instance_ = NULL;

UnequipGoodsRequest* UnequipGoodsRequest::New() const {
  return new UnequipGoodsRequest;
}

void UnequipGoodsRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    place_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool UnequipGoodsRequest::MergePartialFromCodedStream(
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

void UnequipGoodsRequest::SerializeWithCachedSizes(
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

}

int UnequipGoodsRequest::ByteSize() const {
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

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UnequipGoodsRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UnequipGoodsRequest*>(&from));
}

void UnequipGoodsRequest::MergeFrom(const UnequipGoodsRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_place()) {
      set_place(from.place());
    }
  }
}

void UnequipGoodsRequest::CopyFrom(const UnequipGoodsRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UnequipGoodsRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void UnequipGoodsRequest::Swap(UnequipGoodsRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(place_, other->place_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string UnequipGoodsRequest::GetTypeName() const {
  return "sanguo.UnequipGoodsRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int UnequipGoodsResponse::kMsgIDFieldNumber;
const int UnequipGoodsResponse::kStatusFieldNumber;
#endif  // !_MSC_VER

UnequipGoodsResponse::UnequipGoodsResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void UnequipGoodsResponse::InitAsDefaultInstance() {
}

UnequipGoodsResponse::UnequipGoodsResponse(const UnequipGoodsResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void UnequipGoodsResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UnequipGoodsResponse::~UnequipGoodsResponse() {
  SharedDtor();
}

void UnequipGoodsResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void UnequipGoodsResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UnequipGoodsResponse& UnequipGoodsResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_unequip_5fgoods_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_unequip_5fgoods_2eproto();
#endif
  return *default_instance_;
}

UnequipGoodsResponse* UnequipGoodsResponse::default_instance_ = NULL;

UnequipGoodsResponse* UnequipGoodsResponse::New() const {
  return new UnequipGoodsResponse;
}

void UnequipGoodsResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool UnequipGoodsResponse::MergePartialFromCodedStream(
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

void UnequipGoodsResponse::SerializeWithCachedSizes(
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

int UnequipGoodsResponse::ByteSize() const {
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

void UnequipGoodsResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UnequipGoodsResponse*>(&from));
}

void UnequipGoodsResponse::MergeFrom(const UnequipGoodsResponse& from) {
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

void UnequipGoodsResponse::CopyFrom(const UnequipGoodsResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UnequipGoodsResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void UnequipGoodsResponse::Swap(UnequipGoodsResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string UnequipGoodsResponse::GetTypeName() const {
  return "sanguo.UnequipGoodsResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
