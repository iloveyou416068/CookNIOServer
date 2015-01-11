// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: role_bag_goods.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "role_bag_goods.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_role_5fbag_5fgoods_2eproto() {
  delete MsgRoleBagGoods::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_role_5fbag_5fgoods_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_role_5fbag_5fgoods_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  MsgRoleBagGoods::default_instance_ = new MsgRoleBagGoods();
  MsgRoleBagGoods::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_role_5fbag_5fgoods_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_role_5fbag_5fgoods_2eproto_once_);
void protobuf_AddDesc_role_5fbag_5fgoods_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_role_5fbag_5fgoods_2eproto_once_,
                 &protobuf_AddDesc_role_5fbag_5fgoods_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_role_5fbag_5fgoods_2eproto {
  StaticDescriptorInitializer_role_5fbag_5fgoods_2eproto() {
    protobuf_AddDesc_role_5fbag_5fgoods_2eproto();
  }
} static_descriptor_initializer_role_5fbag_5fgoods_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int MsgRoleBagGoods::kAutoIncrIDFieldNumber;
const int MsgRoleBagGoods::kAttrIDFieldNumber;
const int MsgRoleBagGoods::kCountFieldNumber;
const int MsgRoleBagGoods::kExpFieldNumber;
const int MsgRoleBagGoods::kLevelFieldNumber;
#endif  // !_MSC_VER

MsgRoleBagGoods::MsgRoleBagGoods()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void MsgRoleBagGoods::InitAsDefaultInstance() {
}

MsgRoleBagGoods::MsgRoleBagGoods(const MsgRoleBagGoods& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void MsgRoleBagGoods::SharedCtor() {
  _cached_size_ = 0;
  autoincrid_ = GOOGLE_ULONGLONG(0);
  attrid_ = 0u;
  count_ = 0u;
  exp_ = 0u;
  level_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgRoleBagGoods::~MsgRoleBagGoods() {
  SharedDtor();
}

void MsgRoleBagGoods::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MsgRoleBagGoods::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgRoleBagGoods& MsgRoleBagGoods::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_role_5fbag_5fgoods_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_role_5fbag_5fgoods_2eproto();
#endif
  return *default_instance_;
}

MsgRoleBagGoods* MsgRoleBagGoods::default_instance_ = NULL;

MsgRoleBagGoods* MsgRoleBagGoods::New() const {
  return new MsgRoleBagGoods;
}

void MsgRoleBagGoods::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    autoincrid_ = GOOGLE_ULONGLONG(0);
    attrid_ = 0u;
    count_ = 0u;
    exp_ = 0u;
    level_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool MsgRoleBagGoods::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 autoIncrID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &autoincrid_)));
          set_has_autoincrid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_attrID;
        break;
      }

      // required uint32 attrID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_attrID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &attrid_)));
          set_has_attrid();
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
        if (input->ExpectTag(32)) goto parse_exp;
        break;
      }

      // optional uint32 exp = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_exp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &exp_)));
          set_has_exp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_level;
        break;
      }

      // optional uint32 level = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
          set_has_level();
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

void MsgRoleBagGoods::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 autoIncrID = 1;
  if (has_autoincrid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->autoincrid(), output);
  }

  // required uint32 attrID = 2;
  if (has_attrid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->attrid(), output);
  }

  // required uint32 count = 3;
  if (has_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->count(), output);
  }

  // optional uint32 exp = 4;
  if (has_exp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->exp(), output);
  }

  // optional uint32 level = 5;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->level(), output);
  }

}

int MsgRoleBagGoods::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 autoIncrID = 1;
    if (has_autoincrid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->autoincrid());
    }

    // required uint32 attrID = 2;
    if (has_attrid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->attrid());
    }

    // required uint32 count = 3;
    if (has_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->count());
    }

    // optional uint32 exp = 4;
    if (has_exp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->exp());
    }

    // optional uint32 level = 5;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgRoleBagGoods::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgRoleBagGoods*>(&from));
}

void MsgRoleBagGoods::MergeFrom(const MsgRoleBagGoods& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_autoincrid()) {
      set_autoincrid(from.autoincrid());
    }
    if (from.has_attrid()) {
      set_attrid(from.attrid());
    }
    if (from.has_count()) {
      set_count(from.count());
    }
    if (from.has_exp()) {
      set_exp(from.exp());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
  }
}

void MsgRoleBagGoods::CopyFrom(const MsgRoleBagGoods& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgRoleBagGoods::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void MsgRoleBagGoods::Swap(MsgRoleBagGoods* other) {
  if (other != this) {
    std::swap(autoincrid_, other->autoincrid_);
    std::swap(attrid_, other->attrid_);
    std::swap(count_, other->count_);
    std::swap(exp_, other->exp_);
    std::swap(level_, other->level_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string MsgRoleBagGoods::GetTypeName() const {
  return "sanguo.MsgRoleBagGoods";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
