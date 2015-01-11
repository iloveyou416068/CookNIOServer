// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: level_up_pet.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "level_up_pet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_level_5fup_5fpet_2eproto() {
  delete LevelUpPetRequest::default_instance_;
  delete LevelUpPetResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_level_5fup_5fpet_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_level_5fup_5fpet_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_pet_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fbag_5fgoods_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fcooldown_2eproto();
  LevelUpPetRequest::default_instance_ = new LevelUpPetRequest();
  LevelUpPetResponse::default_instance_ = new LevelUpPetResponse();
  LevelUpPetRequest::default_instance_->InitAsDefaultInstance();
  LevelUpPetResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_level_5fup_5fpet_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_level_5fup_5fpet_2eproto_once_);
void protobuf_AddDesc_level_5fup_5fpet_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_level_5fup_5fpet_2eproto_once_,
                 &protobuf_AddDesc_level_5fup_5fpet_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_level_5fup_5fpet_2eproto {
  StaticDescriptorInitializer_level_5fup_5fpet_2eproto() {
    protobuf_AddDesc_level_5fup_5fpet_2eproto();
  }
} static_descriptor_initializer_level_5fup_5fpet_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int LevelUpPetRequest::kMsgIDFieldNumber;
const int LevelUpPetRequest::kPetIDFieldNumber;
const int LevelUpPetRequest::kFeedIDFieldNumber;
#endif  // !_MSC_VER

LevelUpPetRequest::LevelUpPetRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void LevelUpPetRequest::InitAsDefaultInstance() {
}

LevelUpPetRequest::LevelUpPetRequest(const LevelUpPetRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void LevelUpPetRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  petid_ = GOOGLE_ULONGLONG(0);
  feedid_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LevelUpPetRequest::~LevelUpPetRequest() {
  SharedDtor();
}

void LevelUpPetRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void LevelUpPetRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LevelUpPetRequest& LevelUpPetRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_level_5fup_5fpet_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_level_5fup_5fpet_2eproto();
#endif
  return *default_instance_;
}

LevelUpPetRequest* LevelUpPetRequest::default_instance_ = NULL;

LevelUpPetRequest* LevelUpPetRequest::New() const {
  return new LevelUpPetRequest;
}

void LevelUpPetRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    petid_ = GOOGLE_ULONGLONG(0);
    feedid_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool LevelUpPetRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_petID;
        break;
      }

      // required uint64 petID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_petID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &petid_)));
          set_has_petid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_feedID;
        break;
      }

      // required uint64 feedID = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_feedID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &feedid_)));
          set_has_feedid();
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

void LevelUpPetRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint64 petID = 2;
  if (has_petid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->petid(), output);
  }

  // required uint64 feedID = 3;
  if (has_feedid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->feedid(), output);
  }

}

int LevelUpPetRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint64 petID = 2;
    if (has_petid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->petid());
    }

    // required uint64 feedID = 3;
    if (has_feedid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->feedid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LevelUpPetRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LevelUpPetRequest*>(&from));
}

void LevelUpPetRequest::MergeFrom(const LevelUpPetRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_petid()) {
      set_petid(from.petid());
    }
    if (from.has_feedid()) {
      set_feedid(from.feedid());
    }
  }
}

void LevelUpPetRequest::CopyFrom(const LevelUpPetRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LevelUpPetRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void LevelUpPetRequest::Swap(LevelUpPetRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(petid_, other->petid_);
    std::swap(feedid_, other->feedid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string LevelUpPetRequest::GetTypeName() const {
  return "sanguo.LevelUpPetRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int LevelUpPetResponse::kMsgIDFieldNumber;
const int LevelUpPetResponse::kStatusFieldNumber;
const int LevelUpPetResponse::kRoleBagGoodsFieldNumber;
const int LevelUpPetResponse::kPetFieldNumber;
#endif  // !_MSC_VER

LevelUpPetResponse::LevelUpPetResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void LevelUpPetResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  rolebaggoods_ = const_cast< ::sanguo::MsgRoleBagGoods*>(
      ::sanguo::MsgRoleBagGoods::internal_default_instance());
#else
  rolebaggoods_ = const_cast< ::sanguo::MsgRoleBagGoods*>(&::sanguo::MsgRoleBagGoods::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  pet_ = const_cast< ::sanguo::MsgPet*>(
      ::sanguo::MsgPet::internal_default_instance());
#else
  pet_ = const_cast< ::sanguo::MsgPet*>(&::sanguo::MsgPet::default_instance());
#endif
}

LevelUpPetResponse::LevelUpPetResponse(const LevelUpPetResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void LevelUpPetResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  rolebaggoods_ = NULL;
  pet_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LevelUpPetResponse::~LevelUpPetResponse() {
  SharedDtor();
}

void LevelUpPetResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete rolebaggoods_;
    delete pet_;
  }
}

void LevelUpPetResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LevelUpPetResponse& LevelUpPetResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_level_5fup_5fpet_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_level_5fup_5fpet_2eproto();
#endif
  return *default_instance_;
}

LevelUpPetResponse* LevelUpPetResponse::default_instance_ = NULL;

LevelUpPetResponse* LevelUpPetResponse::New() const {
  return new LevelUpPetResponse;
}

void LevelUpPetResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    if (has_rolebaggoods()) {
      if (rolebaggoods_ != NULL) rolebaggoods_->::sanguo::MsgRoleBagGoods::Clear();
    }
    if (has_pet()) {
      if (pet_ != NULL) pet_->::sanguo::MsgPet::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool LevelUpPetResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(34)) goto parse_pet;
        break;
      }

      // optional .sanguo.MsgPet pet = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_pet:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pet()));
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

void LevelUpPetResponse::SerializeWithCachedSizes(
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

  // optional .sanguo.MsgPet pet = 4;
  if (has_pet()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->pet(), output);
  }

}

int LevelUpPetResponse::ByteSize() const {
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

    // optional .sanguo.MsgPet pet = 4;
    if (has_pet()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->pet());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LevelUpPetResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LevelUpPetResponse*>(&from));
}

void LevelUpPetResponse::MergeFrom(const LevelUpPetResponse& from) {
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
    if (from.has_pet()) {
      mutable_pet()->::sanguo::MsgPet::MergeFrom(from.pet());
    }
  }
}

void LevelUpPetResponse::CopyFrom(const LevelUpPetResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LevelUpPetResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_rolebaggoods()) {
    if (!this->rolebaggoods().IsInitialized()) return false;
  }
  if (has_pet()) {
    if (!this->pet().IsInitialized()) return false;
  }
  return true;
}

void LevelUpPetResponse::Swap(LevelUpPetResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(rolebaggoods_, other->rolebaggoods_);
    std::swap(pet_, other->pet_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string LevelUpPetResponse::GetTypeName() const {
  return "sanguo.LevelUpPetResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
