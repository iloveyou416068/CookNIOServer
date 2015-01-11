// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: statues_in_main_city.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "statues_in_main_city.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_statues_5fin_5fmain_5fcity_2eproto() {
  delete MsgStatuesInMainCity::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_statues_5fin_5fmain_5fcity_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_statues_5fin_5fmain_5fcity_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_constants_2eproto();
  MsgStatuesInMainCity::default_instance_ = new MsgStatuesInMainCity();
  MsgStatuesInMainCity::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_statues_5fin_5fmain_5fcity_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_statues_5fin_5fmain_5fcity_2eproto_once_);
void protobuf_AddDesc_statues_5fin_5fmain_5fcity_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_statues_5fin_5fmain_5fcity_2eproto_once_,
                 &protobuf_AddDesc_statues_5fin_5fmain_5fcity_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_statues_5fin_5fmain_5fcity_2eproto {
  StaticDescriptorInitializer_statues_5fin_5fmain_5fcity_2eproto() {
    protobuf_AddDesc_statues_5fin_5fmain_5fcity_2eproto();
  }
} static_descriptor_initializer_statues_5fin_5fmain_5fcity_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int MsgStatuesInMainCity::kRoleIDFieldNumber;
const int MsgStatuesInMainCity::kStatuesTypeFieldNumber;
#endif  // !_MSC_VER

MsgStatuesInMainCity::MsgStatuesInMainCity()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void MsgStatuesInMainCity::InitAsDefaultInstance() {
}

MsgStatuesInMainCity::MsgStatuesInMainCity(const MsgStatuesInMainCity& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void MsgStatuesInMainCity::SharedCtor() {
  _cached_size_ = 0;
  roleid_ = GOOGLE_ULONGLONG(0);
  statuestype_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgStatuesInMainCity::~MsgStatuesInMainCity() {
  SharedDtor();
}

void MsgStatuesInMainCity::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MsgStatuesInMainCity::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgStatuesInMainCity& MsgStatuesInMainCity::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_statues_5fin_5fmain_5fcity_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_statues_5fin_5fmain_5fcity_2eproto();
#endif
  return *default_instance_;
}

MsgStatuesInMainCity* MsgStatuesInMainCity::default_instance_ = NULL;

MsgStatuesInMainCity* MsgStatuesInMainCity::New() const {
  return new MsgStatuesInMainCity;
}

void MsgStatuesInMainCity::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    roleid_ = GOOGLE_ULONGLONG(0);
    statuestype_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool MsgStatuesInMainCity::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 roleID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &roleid_)));
          set_has_roleid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_statuesType;
        break;
      }

      // required uint32 statuesType = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_statuesType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &statuestype_)));
          set_has_statuestype();
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

void MsgStatuesInMainCity::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 roleID = 1;
  if (has_roleid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->roleid(), output);
  }

  // required uint32 statuesType = 2;
  if (has_statuestype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->statuestype(), output);
  }

}

int MsgStatuesInMainCity::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 roleID = 1;
    if (has_roleid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->roleid());
    }

    // required uint32 statuesType = 2;
    if (has_statuestype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->statuestype());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgStatuesInMainCity::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgStatuesInMainCity*>(&from));
}

void MsgStatuesInMainCity::MergeFrom(const MsgStatuesInMainCity& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roleid()) {
      set_roleid(from.roleid());
    }
    if (from.has_statuestype()) {
      set_statuestype(from.statuestype());
    }
  }
}

void MsgStatuesInMainCity::CopyFrom(const MsgStatuesInMainCity& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgStatuesInMainCity::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void MsgStatuesInMainCity::Swap(MsgStatuesInMainCity* other) {
  if (other != this) {
    std::swap(roleid_, other->roleid_);
    std::swap(statuestype_, other->statuestype_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string MsgStatuesInMainCity::GetTypeName() const {
  return "sanguo.MsgStatuesInMainCity";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
