// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: role_cooldown.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "role_cooldown.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_role_5fcooldown_2eproto() {
  delete MsgRoleCooldown::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_role_5fcooldown_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_role_5fcooldown_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  MsgRoleCooldown::default_instance_ = new MsgRoleCooldown();
  MsgRoleCooldown::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_role_5fcooldown_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_role_5fcooldown_2eproto_once_);
void protobuf_AddDesc_role_5fcooldown_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_role_5fcooldown_2eproto_once_,
                 &protobuf_AddDesc_role_5fcooldown_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_role_5fcooldown_2eproto {
  StaticDescriptorInitializer_role_5fcooldown_2eproto() {
    protobuf_AddDesc_role_5fcooldown_2eproto();
  }
} static_descriptor_initializer_role_5fcooldown_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int MsgRoleCooldown::kTypeFieldNumber;
const int MsgRoleCooldown::kStartTimeFieldNumber;
const int MsgRoleCooldown::kEndTimeFieldNumber;
const int MsgRoleCooldown::kStatusFieldNumber;
#endif  // !_MSC_VER

MsgRoleCooldown::MsgRoleCooldown()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void MsgRoleCooldown::InitAsDefaultInstance() {
}

MsgRoleCooldown::MsgRoleCooldown(const MsgRoleCooldown& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void MsgRoleCooldown::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0u;
  starttime_ = GOOGLE_ULONGLONG(0);
  endtime_ = GOOGLE_ULONGLONG(0);
  status_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgRoleCooldown::~MsgRoleCooldown() {
  SharedDtor();
}

void MsgRoleCooldown::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MsgRoleCooldown::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgRoleCooldown& MsgRoleCooldown::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_role_5fcooldown_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_role_5fcooldown_2eproto();
#endif
  return *default_instance_;
}

MsgRoleCooldown* MsgRoleCooldown::default_instance_ = NULL;

MsgRoleCooldown* MsgRoleCooldown::New() const {
  return new MsgRoleCooldown;
}

void MsgRoleCooldown::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0u;
    starttime_ = GOOGLE_ULONGLONG(0);
    endtime_ = GOOGLE_ULONGLONG(0);
    status_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool MsgRoleCooldown::MergePartialFromCodedStream(
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

void MsgRoleCooldown::SerializeWithCachedSizes(
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

}

int MsgRoleCooldown::ByteSize() const {
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

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgRoleCooldown::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgRoleCooldown*>(&from));
}

void MsgRoleCooldown::MergeFrom(const MsgRoleCooldown& from) {
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
  }
}

void MsgRoleCooldown::CopyFrom(const MsgRoleCooldown& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgRoleCooldown::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void MsgRoleCooldown::Swap(MsgRoleCooldown* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(starttime_, other->starttime_);
    std::swap(endtime_, other->endtime_);
    std::swap(status_, other->status_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string MsgRoleCooldown::GetTypeName() const {
  return "sanguo.MsgRoleCooldown";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
