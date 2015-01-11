// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pet.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "pet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_pet_2eproto() {
  delete MsgPet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_pet_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_pet_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_constants_2eproto();
  MsgPet::default_instance_ = new MsgPet();
  MsgPet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_pet_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_pet_2eproto_once_);
void protobuf_AddDesc_pet_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_pet_2eproto_once_,
                 &protobuf_AddDesc_pet_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_pet_2eproto {
  StaticDescriptorInitializer_pet_2eproto() {
    protobuf_AddDesc_pet_2eproto();
  }
} static_descriptor_initializer_pet_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int MsgPet::kPetIDFieldNumber;
const int MsgPet::kStarFieldNumber;
const int MsgPet::kLevelFieldNumber;
const int MsgPet::kExpFieldNumber;
const int MsgPet::kAttrIDFieldNumber;
const int MsgPet::kStatusFieldNumber;
const int MsgPet::kRoleIDFieldNumber;
#endif  // !_MSC_VER

MsgPet::MsgPet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void MsgPet::InitAsDefaultInstance() {
}

MsgPet::MsgPet(const MsgPet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void MsgPet::SharedCtor() {
  _cached_size_ = 0;
  petid_ = GOOGLE_ULONGLONG(0);
  star_ = 0u;
  level_ = 0u;
  exp_ = 0u;
  attrid_ = 0u;
  status_ = 0u;
  roleid_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgPet::~MsgPet() {
  SharedDtor();
}

void MsgPet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MsgPet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgPet& MsgPet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_pet_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_pet_2eproto();
#endif
  return *default_instance_;
}

MsgPet* MsgPet::default_instance_ = NULL;

MsgPet* MsgPet::New() const {
  return new MsgPet;
}

void MsgPet::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    petid_ = GOOGLE_ULONGLONG(0);
    star_ = 0u;
    level_ = 0u;
    exp_ = 0u;
    attrid_ = 0u;
    status_ = 0u;
    roleid_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool MsgPet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 petID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &petid_)));
          set_has_petid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_star;
        break;
      }

      // required uint32 star = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_star:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &star_)));
          set_has_star();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_level;
        break;
      }

      // required uint32 level = 3;
      case 3: {
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
        if (input->ExpectTag(32)) goto parse_exp;
        break;
      }

      // required uint32 exp = 4;
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
        if (input->ExpectTag(40)) goto parse_attrID;
        break;
      }

      // required uint32 attrID = 5;
      case 5: {
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
        if (input->ExpectTag(48)) goto parse_status;
        break;
      }

      // required uint32 status = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_status:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &status_)));
          set_has_status();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_roleID;
        break;
      }

      // required uint64 roleID = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_roleID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &roleid_)));
          set_has_roleid();
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

void MsgPet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 petID = 1;
  if (has_petid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->petid(), output);
  }

  // required uint32 star = 2;
  if (has_star()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->star(), output);
  }

  // required uint32 level = 3;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->level(), output);
  }

  // required uint32 exp = 4;
  if (has_exp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->exp(), output);
  }

  // required uint32 attrID = 5;
  if (has_attrid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->attrid(), output);
  }

  // required uint32 status = 6;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->status(), output);
  }

  // required uint64 roleID = 7;
  if (has_roleid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(7, this->roleid(), output);
  }

}

int MsgPet::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 petID = 1;
    if (has_petid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->petid());
    }

    // required uint32 star = 2;
    if (has_star()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->star());
    }

    // required uint32 level = 3;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

    // required uint32 exp = 4;
    if (has_exp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->exp());
    }

    // required uint32 attrID = 5;
    if (has_attrid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->attrid());
    }

    // required uint32 status = 6;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->status());
    }

    // required uint64 roleID = 7;
    if (has_roleid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->roleid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgPet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgPet*>(&from));
}

void MsgPet::MergeFrom(const MsgPet& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_petid()) {
      set_petid(from.petid());
    }
    if (from.has_star()) {
      set_star(from.star());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_exp()) {
      set_exp(from.exp());
    }
    if (from.has_attrid()) {
      set_attrid(from.attrid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_roleid()) {
      set_roleid(from.roleid());
    }
  }
}

void MsgPet::CopyFrom(const MsgPet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgPet::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;

  return true;
}

void MsgPet::Swap(MsgPet* other) {
  if (other != this) {
    std::swap(petid_, other->petid_);
    std::swap(star_, other->star_);
    std::swap(level_, other->level_);
    std::swap(exp_, other->exp_);
    std::swap(attrid_, other->attrid_);
    std::swap(status_, other->status_);
    std::swap(roleid_, other->roleid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string MsgPet::GetTypeName() const {
  return "sanguo.MsgPet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
