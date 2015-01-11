// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: resurrection_in_dungeon.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "resurrection_in_dungeon.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_resurrection_5fin_5fdungeon_2eproto() {
  delete ResurrectionInDungeonRequest::default_instance_;
  delete ResurrectionInDungeonResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_resurrection_5fin_5fdungeon_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_resurrection_5fin_5fdungeon_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ResurrectionInDungeonRequest::default_instance_ = new ResurrectionInDungeonRequest();
  ResurrectionInDungeonResponse::default_instance_ = new ResurrectionInDungeonResponse();
  ResurrectionInDungeonRequest::default_instance_->InitAsDefaultInstance();
  ResurrectionInDungeonResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_resurrection_5fin_5fdungeon_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_resurrection_5fin_5fdungeon_2eproto_once_);
void protobuf_AddDesc_resurrection_5fin_5fdungeon_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_resurrection_5fin_5fdungeon_2eproto_once_,
                 &protobuf_AddDesc_resurrection_5fin_5fdungeon_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_resurrection_5fin_5fdungeon_2eproto {
  StaticDescriptorInitializer_resurrection_5fin_5fdungeon_2eproto() {
    protobuf_AddDesc_resurrection_5fin_5fdungeon_2eproto();
  }
} static_descriptor_initializer_resurrection_5fin_5fdungeon_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ResurrectionInDungeonRequest::kMsgIDFieldNumber;
#endif  // !_MSC_VER

ResurrectionInDungeonRequest::ResurrectionInDungeonRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ResurrectionInDungeonRequest::InitAsDefaultInstance() {
}

ResurrectionInDungeonRequest::ResurrectionInDungeonRequest(const ResurrectionInDungeonRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ResurrectionInDungeonRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ResurrectionInDungeonRequest::~ResurrectionInDungeonRequest() {
  SharedDtor();
}

void ResurrectionInDungeonRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ResurrectionInDungeonRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ResurrectionInDungeonRequest& ResurrectionInDungeonRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_resurrection_5fin_5fdungeon_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_resurrection_5fin_5fdungeon_2eproto();
#endif
  return *default_instance_;
}

ResurrectionInDungeonRequest* ResurrectionInDungeonRequest::default_instance_ = NULL;

ResurrectionInDungeonRequest* ResurrectionInDungeonRequest::New() const {
  return new ResurrectionInDungeonRequest;
}

void ResurrectionInDungeonRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ResurrectionInDungeonRequest::MergePartialFromCodedStream(
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

void ResurrectionInDungeonRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

}

int ResurrectionInDungeonRequest::ByteSize() const {
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

void ResurrectionInDungeonRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ResurrectionInDungeonRequest*>(&from));
}

void ResurrectionInDungeonRequest::MergeFrom(const ResurrectionInDungeonRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
  }
}

void ResurrectionInDungeonRequest::CopyFrom(const ResurrectionInDungeonRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResurrectionInDungeonRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ResurrectionInDungeonRequest::Swap(ResurrectionInDungeonRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ResurrectionInDungeonRequest::GetTypeName() const {
  return "sanguo.ResurrectionInDungeonRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int ResurrectionInDungeonResponse::kMsgIDFieldNumber;
const int ResurrectionInDungeonResponse::kStatusFieldNumber;
const int ResurrectionInDungeonResponse::kGoldFieldNumber;
const int ResurrectionInDungeonResponse::kJadeFieldNumber;
#endif  // !_MSC_VER

ResurrectionInDungeonResponse::ResurrectionInDungeonResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ResurrectionInDungeonResponse::InitAsDefaultInstance() {
}

ResurrectionInDungeonResponse::ResurrectionInDungeonResponse(const ResurrectionInDungeonResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ResurrectionInDungeonResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  gold_ = 0u;
  jade_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ResurrectionInDungeonResponse::~ResurrectionInDungeonResponse() {
  SharedDtor();
}

void ResurrectionInDungeonResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ResurrectionInDungeonResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ResurrectionInDungeonResponse& ResurrectionInDungeonResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_resurrection_5fin_5fdungeon_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_resurrection_5fin_5fdungeon_2eproto();
#endif
  return *default_instance_;
}

ResurrectionInDungeonResponse* ResurrectionInDungeonResponse::default_instance_ = NULL;

ResurrectionInDungeonResponse* ResurrectionInDungeonResponse::New() const {
  return new ResurrectionInDungeonResponse;
}

void ResurrectionInDungeonResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    gold_ = 0u;
    jade_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ResurrectionInDungeonResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(32)) goto parse_gold;
        break;
      }

      // optional uint32 gold = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gold:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gold_)));
          set_has_gold();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_jade;
        break;
      }

      // optional uint32 jade = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_jade:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &jade_)));
          set_has_jade();
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

void ResurrectionInDungeonResponse::SerializeWithCachedSizes(
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

  // optional uint32 gold = 4;
  if (has_gold()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->gold(), output);
  }

  // optional uint32 jade = 5;
  if (has_jade()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->jade(), output);
  }

}

int ResurrectionInDungeonResponse::ByteSize() const {
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

    // optional uint32 gold = 4;
    if (has_gold()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->gold());
    }

    // optional uint32 jade = 5;
    if (has_jade()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->jade());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ResurrectionInDungeonResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ResurrectionInDungeonResponse*>(&from));
}

void ResurrectionInDungeonResponse::MergeFrom(const ResurrectionInDungeonResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_gold()) {
      set_gold(from.gold());
    }
    if (from.has_jade()) {
      set_jade(from.jade());
    }
  }
}

void ResurrectionInDungeonResponse::CopyFrom(const ResurrectionInDungeonResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResurrectionInDungeonResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void ResurrectionInDungeonResponse::Swap(ResurrectionInDungeonResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(gold_, other->gold_);
    std::swap(jade_, other->jade_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ResurrectionInDungeonResponse::GetTypeName() const {
  return "sanguo.ResurrectionInDungeonResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
