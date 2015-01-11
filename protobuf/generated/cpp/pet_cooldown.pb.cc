// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pet_cooldown.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "pet_cooldown.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_pet_5fcooldown_2eproto() {
  delete MsgPetCooldown::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_pet_5fcooldown_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_pet_5fcooldown_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  MsgPetCooldown::default_instance_ = new MsgPetCooldown();
  MsgPetCooldown::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_pet_5fcooldown_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_pet_5fcooldown_2eproto_once_);
void protobuf_AddDesc_pet_5fcooldown_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_pet_5fcooldown_2eproto_once_,
                 &protobuf_AddDesc_pet_5fcooldown_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_pet_5fcooldown_2eproto {
  StaticDescriptorInitializer_pet_5fcooldown_2eproto() {
    protobuf_AddDesc_pet_5fcooldown_2eproto();
  }
} static_descriptor_initializer_pet_5fcooldown_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int MsgPetCooldown::kTypeFieldNumber;
const int MsgPetCooldown::kStartTimeFieldNumber;
const int MsgPetCooldown::kEndTimeFieldNumber;
const int MsgPetCooldown::kStatusFieldNumber;
const int MsgPetCooldown::kPetIDFieldNumber;
#endif  // !_MSC_VER

MsgPetCooldown::MsgPetCooldown()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void MsgPetCooldown::InitAsDefaultInstance() {
}

MsgPetCooldown::MsgPetCooldown(const MsgPetCooldown& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void MsgPetCooldown::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0u;
  starttime_ = GOOGLE_ULONGLONG(0);
  endtime_ = GOOGLE_ULONGLONG(0);
  status_ = 0u;
  petid_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgPetCooldown::~MsgPetCooldown() {
  SharedDtor();
}

void MsgPetCooldown::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MsgPetCooldown::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgPetCooldown& MsgPetCooldown::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_pet_5fcooldown_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_pet_5fcooldown_2eproto();
#endif
  return *default_instance_;
}

MsgPetCooldown* MsgPetCooldown::default_instance_ = NULL;

MsgPetCooldown* MsgPetCooldown::New() const {
  return new MsgPetCooldown;
}

void MsgPetCooldown::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0u;
    starttime_ = GOOGLE_ULONGLONG(0);
    endtime_ = GOOGLE_ULONGLONG(0);
    status_ = 0u;
    petid_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool MsgPetCooldown::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_startTime;
        break;
      }

      // required uint64 startTime = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_startTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &starttime_)));
          set_has_starttime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_endTime;
        break;
      }

      // required uint64 endTime = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_endTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &endtime_)));
          set_has_endtime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_status;
        break;
      }

      // required uint32 status = 4;
      case 4: {
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
        if (input->ExpectTag(40)) goto parse_petID;
        break;
      }

      // required uint64 petID = 5;
      case 5: {
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

void MsgPetCooldown::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->type(), output);
  }

  // required uint64 startTime = 2;
  if (has_starttime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->starttime(), output);
  }

  // required uint64 endTime = 3;
  if (has_endtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->endtime(), output);
  }

  // required uint32 status = 4;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->status(), output);
  }

  // required uint64 petID = 5;
  if (has_petid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->petid(), output);
  }

}

int MsgPetCooldown::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

    // required uint64 startTime = 2;
    if (has_starttime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->starttime());
    }

    // required uint64 endTime = 3;
    if (has_endtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->endtime());
    }

    // required uint32 status = 4;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->status());
    }

    // required uint64 petID = 5;
    if (has_petid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->petid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgPetCooldown::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgPetCooldown*>(&from));
}

void MsgPetCooldown::MergeFrom(const MsgPetCooldown& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_starttime()) {
      set_starttime(from.starttime());
    }
    if (from.has_endtime()) {
      set_endtime(from.endtime());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_petid()) {
      set_petid(from.petid());
    }
  }
}

void MsgPetCooldown::CopyFrom(const MsgPetCooldown& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgPetCooldown::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

  return true;
}

void MsgPetCooldown::Swap(MsgPetCooldown* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(starttime_, other->starttime_);
    std::swap(endtime_, other->endtime_);
    std::swap(status_, other->status_);
    std::swap(petid_, other->petid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string MsgPetCooldown::GetTypeName() const {
  return "sanguo.MsgPetCooldown";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
