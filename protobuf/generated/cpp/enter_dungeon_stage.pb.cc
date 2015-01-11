// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: enter_dungeon_stage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "enter_dungeon_stage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_enter_5fdungeon_5fstage_2eproto() {
  delete EnterDungeonStageRequest::default_instance_;
  delete EnterDungeonStageResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_enter_5fdungeon_5fstage_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_enter_5fdungeon_5fstage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fbag_5fgoods_2eproto();
  EnterDungeonStageRequest::default_instance_ = new EnterDungeonStageRequest();
  EnterDungeonStageResponse::default_instance_ = new EnterDungeonStageResponse();
  EnterDungeonStageRequest::default_instance_->InitAsDefaultInstance();
  EnterDungeonStageResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_enter_5fdungeon_5fstage_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_enter_5fdungeon_5fstage_2eproto_once_);
void protobuf_AddDesc_enter_5fdungeon_5fstage_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_enter_5fdungeon_5fstage_2eproto_once_,
                 &protobuf_AddDesc_enter_5fdungeon_5fstage_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_enter_5fdungeon_5fstage_2eproto {
  StaticDescriptorInitializer_enter_5fdungeon_5fstage_2eproto() {
    protobuf_AddDesc_enter_5fdungeon_5fstage_2eproto();
  }
} static_descriptor_initializer_enter_5fdungeon_5fstage_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int EnterDungeonStageRequest::kMsgIDFieldNumber;
const int EnterDungeonStageRequest::kStageIdFieldNumber;
const int EnterDungeonStageRequest::kTypeFieldNumber;
#endif  // !_MSC_VER

EnterDungeonStageRequest::EnterDungeonStageRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void EnterDungeonStageRequest::InitAsDefaultInstance() {
}

EnterDungeonStageRequest::EnterDungeonStageRequest(const EnterDungeonStageRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void EnterDungeonStageRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  stageid_ = 0u;
  type_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EnterDungeonStageRequest::~EnterDungeonStageRequest() {
  SharedDtor();
}

void EnterDungeonStageRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void EnterDungeonStageRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EnterDungeonStageRequest& EnterDungeonStageRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_enter_5fdungeon_5fstage_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_enter_5fdungeon_5fstage_2eproto();
#endif
  return *default_instance_;
}

EnterDungeonStageRequest* EnterDungeonStageRequest::default_instance_ = NULL;

EnterDungeonStageRequest* EnterDungeonStageRequest::New() const {
  return new EnterDungeonStageRequest;
}

void EnterDungeonStageRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    stageid_ = 0u;
    type_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool EnterDungeonStageRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_stageId;
        break;
      }

      // required uint32 stageId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_stageId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &stageid_)));
          set_has_stageid();
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

void EnterDungeonStageRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint32 stageId = 2;
  if (has_stageid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->stageid(), output);
  }

  // required uint32 type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->type(), output);
  }

}

int EnterDungeonStageRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint32 stageId = 2;
    if (has_stageid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->stageid());
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

void EnterDungeonStageRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EnterDungeonStageRequest*>(&from));
}

void EnterDungeonStageRequest::MergeFrom(const EnterDungeonStageRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_stageid()) {
      set_stageid(from.stageid());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
}

void EnterDungeonStageRequest::CopyFrom(const EnterDungeonStageRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnterDungeonStageRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void EnterDungeonStageRequest::Swap(EnterDungeonStageRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(stageid_, other->stageid_);
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string EnterDungeonStageRequest::GetTypeName() const {
  return "sanguo.EnterDungeonStageRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int EnterDungeonStageResponse::kMsgIDFieldNumber;
const int EnterDungeonStageResponse::kStatusFieldNumber;
const int EnterDungeonStageResponse::kPowerFieldNumber;
const int EnterDungeonStageResponse::kGoodsAttrIdFieldNumber;
#endif  // !_MSC_VER

EnterDungeonStageResponse::EnterDungeonStageResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void EnterDungeonStageResponse::InitAsDefaultInstance() {
}

EnterDungeonStageResponse::EnterDungeonStageResponse(const EnterDungeonStageResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void EnterDungeonStageResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  power_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EnterDungeonStageResponse::~EnterDungeonStageResponse() {
  SharedDtor();
}

void EnterDungeonStageResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void EnterDungeonStageResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EnterDungeonStageResponse& EnterDungeonStageResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_enter_5fdungeon_5fstage_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_enter_5fdungeon_5fstage_2eproto();
#endif
  return *default_instance_;
}

EnterDungeonStageResponse* EnterDungeonStageResponse::default_instance_ = NULL;

EnterDungeonStageResponse* EnterDungeonStageResponse::New() const {
  return new EnterDungeonStageResponse;
}

void EnterDungeonStageResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    power_ = 0u;
  }
  goodsattrid_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool EnterDungeonStageResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_power;
        break;
      }

      // required uint32 power = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_power:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &power_)));
          set_has_power();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_goodsAttrId;
        break;
      }

      // repeated uint32 goodsAttrId = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_goodsAttrId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 32, input, this->mutable_goodsattrid())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_goodsattrid())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_goodsAttrId;
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

void EnterDungeonStageResponse::SerializeWithCachedSizes(
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

  // required uint32 power = 3;
  if (has_power()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->power(), output);
  }

  // repeated uint32 goodsAttrId = 4;
  for (int i = 0; i < this->goodsattrid_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      4, this->goodsattrid(i), output);
  }

}

int EnterDungeonStageResponse::ByteSize() const {
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

    // required uint32 power = 3;
    if (has_power()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->power());
    }

  }
  // repeated uint32 goodsAttrId = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->goodsattrid_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->goodsattrid(i));
    }
    total_size += 1 * this->goodsattrid_size() + data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EnterDungeonStageResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EnterDungeonStageResponse*>(&from));
}

void EnterDungeonStageResponse::MergeFrom(const EnterDungeonStageResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  goodsattrid_.MergeFrom(from.goodsattrid_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_power()) {
      set_power(from.power());
    }
  }
}

void EnterDungeonStageResponse::CopyFrom(const EnterDungeonStageResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnterDungeonStageResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void EnterDungeonStageResponse::Swap(EnterDungeonStageResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(power_, other->power_);
    goodsattrid_.Swap(&other->goodsattrid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string EnterDungeonStageResponse::GetTypeName() const {
  return "sanguo.EnterDungeonStageResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
