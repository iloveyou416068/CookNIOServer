// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: use_bag_goods.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "use_bag_goods.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_use_5fbag_5fgoods_2eproto() {
  delete UseBagGoodsRequest::default_instance_;
  delete UseBagGoodsResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_use_5fbag_5fgoods_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_use_5fbag_5fgoods_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fbag_5fgoods_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fcooldown_2eproto();
  UseBagGoodsRequest::default_instance_ = new UseBagGoodsRequest();
  UseBagGoodsResponse::default_instance_ = new UseBagGoodsResponse();
  UseBagGoodsRequest::default_instance_->InitAsDefaultInstance();
  UseBagGoodsResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_use_5fbag_5fgoods_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_use_5fbag_5fgoods_2eproto_once_);
void protobuf_AddDesc_use_5fbag_5fgoods_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_use_5fbag_5fgoods_2eproto_once_,
                 &protobuf_AddDesc_use_5fbag_5fgoods_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_use_5fbag_5fgoods_2eproto {
  StaticDescriptorInitializer_use_5fbag_5fgoods_2eproto() {
    protobuf_AddDesc_use_5fbag_5fgoods_2eproto();
  }
} static_descriptor_initializer_use_5fbag_5fgoods_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int UseBagGoodsRequest::kMsgIDFieldNumber;
const int UseBagGoodsRequest::kAutoIncrIDFieldNumber;
const int UseBagGoodsRequest::kCountFieldNumber;
#endif  // !_MSC_VER

UseBagGoodsRequest::UseBagGoodsRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void UseBagGoodsRequest::InitAsDefaultInstance() {
}

UseBagGoodsRequest::UseBagGoodsRequest(const UseBagGoodsRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void UseBagGoodsRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  autoincrid_ = GOOGLE_ULONGLONG(0);
  count_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UseBagGoodsRequest::~UseBagGoodsRequest() {
  SharedDtor();
}

void UseBagGoodsRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void UseBagGoodsRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UseBagGoodsRequest& UseBagGoodsRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_use_5fbag_5fgoods_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_use_5fbag_5fgoods_2eproto();
#endif
  return *default_instance_;
}

UseBagGoodsRequest* UseBagGoodsRequest::default_instance_ = NULL;

UseBagGoodsRequest* UseBagGoodsRequest::New() const {
  return new UseBagGoodsRequest;
}

void UseBagGoodsRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    autoincrid_ = GOOGLE_ULONGLONG(0);
    count_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool UseBagGoodsRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_count;
        break;
      }

      // required uint32 count = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &count_)));
          set_has_count();
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

void UseBagGoodsRequest::SerializeWithCachedSizes(
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

  // required uint32 count = 3;
  if (has_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->count(), output);
  }

}

int UseBagGoodsRequest::ByteSize() const {
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

    // required uint32 count = 3;
    if (has_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->count());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UseBagGoodsRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UseBagGoodsRequest*>(&from));
}

void UseBagGoodsRequest::MergeFrom(const UseBagGoodsRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_autoincrid()) {
      set_autoincrid(from.autoincrid());
    }
    if (from.has_count()) {
      set_count(from.count());
    }
  }
}

void UseBagGoodsRequest::CopyFrom(const UseBagGoodsRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UseBagGoodsRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void UseBagGoodsRequest::Swap(UseBagGoodsRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(autoincrid_, other->autoincrid_);
    std::swap(count_, other->count_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string UseBagGoodsRequest::GetTypeName() const {
  return "sanguo.UseBagGoodsRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int UseBagGoodsResponse::kMsgIDFieldNumber;
const int UseBagGoodsResponse::kStatusFieldNumber;
const int UseBagGoodsResponse::kRoleBagGoodsFieldNumber;
const int UseBagGoodsResponse::kRoleCoolDownFieldNumber;
#endif  // !_MSC_VER

UseBagGoodsResponse::UseBagGoodsResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void UseBagGoodsResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  rolebaggoods_ = const_cast< ::sanguo::MsgRoleBagGoods*>(
      ::sanguo::MsgRoleBagGoods::internal_default_instance());
#else
  rolebaggoods_ = const_cast< ::sanguo::MsgRoleBagGoods*>(&::sanguo::MsgRoleBagGoods::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  rolecooldown_ = const_cast< ::sanguo::MsgRoleCooldown*>(
      ::sanguo::MsgRoleCooldown::internal_default_instance());
#else
  rolecooldown_ = const_cast< ::sanguo::MsgRoleCooldown*>(&::sanguo::MsgRoleCooldown::default_instance());
#endif
}

UseBagGoodsResponse::UseBagGoodsResponse(const UseBagGoodsResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void UseBagGoodsResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  rolebaggoods_ = NULL;
  rolecooldown_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UseBagGoodsResponse::~UseBagGoodsResponse() {
  SharedDtor();
}

void UseBagGoodsResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete rolebaggoods_;
    delete rolecooldown_;
  }
}

void UseBagGoodsResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UseBagGoodsResponse& UseBagGoodsResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_use_5fbag_5fgoods_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_use_5fbag_5fgoods_2eproto();
#endif
  return *default_instance_;
}

UseBagGoodsResponse* UseBagGoodsResponse::default_instance_ = NULL;

UseBagGoodsResponse* UseBagGoodsResponse::New() const {
  return new UseBagGoodsResponse;
}

void UseBagGoodsResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    if (has_rolebaggoods()) {
      if (rolebaggoods_ != NULL) rolebaggoods_->::sanguo::MsgRoleBagGoods::Clear();
    }
    if (has_rolecooldown()) {
      if (rolecooldown_ != NULL) rolecooldown_->::sanguo::MsgRoleCooldown::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool UseBagGoodsResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(26)) goto parse_roleBagGoods;
        break;
      }

      // optional .sanguo.MsgRoleBagGoods roleBagGoods = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_roleBagGoods:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rolebaggoods()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_roleCoolDown;
        break;
      }

      // optional .sanguo.MsgRoleCooldown roleCoolDown = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_roleCoolDown:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rolecooldown()));
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

void UseBagGoodsResponse::SerializeWithCachedSizes(
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

  // optional .sanguo.MsgRoleBagGoods roleBagGoods = 3;
  if (has_rolebaggoods()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->rolebaggoods(), output);
  }

  // optional .sanguo.MsgRoleCooldown roleCoolDown = 4;
  if (has_rolecooldown()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->rolecooldown(), output);
  }

}

int UseBagGoodsResponse::ByteSize() const {
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

    // optional .sanguo.MsgRoleBagGoods roleBagGoods = 3;
    if (has_rolebaggoods()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->rolebaggoods());
    }

    // optional .sanguo.MsgRoleCooldown roleCoolDown = 4;
    if (has_rolecooldown()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->rolecooldown());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UseBagGoodsResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UseBagGoodsResponse*>(&from));
}

void UseBagGoodsResponse::MergeFrom(const UseBagGoodsResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_rolebaggoods()) {
      mutable_rolebaggoods()->::sanguo::MsgRoleBagGoods::MergeFrom(from.rolebaggoods());
    }
    if (from.has_rolecooldown()) {
      mutable_rolecooldown()->::sanguo::MsgRoleCooldown::MergeFrom(from.rolecooldown());
    }
  }
}

void UseBagGoodsResponse::CopyFrom(const UseBagGoodsResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UseBagGoodsResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_rolebaggoods()) {
    if (!this->rolebaggoods().IsInitialized()) return false;
  }
  if (has_rolecooldown()) {
    if (!this->rolecooldown().IsInitialized()) return false;
  }
  return true;
}

void UseBagGoodsResponse::Swap(UseBagGoodsResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(rolebaggoods_, other->rolebaggoods_);
    std::swap(rolecooldown_, other->rolecooldown_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string UseBagGoodsResponse::GetTypeName() const {
  return "sanguo.UseBagGoodsResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
