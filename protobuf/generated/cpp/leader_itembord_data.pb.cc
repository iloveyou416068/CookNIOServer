// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: leader_itembord_data.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "leader_itembord_data.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_leader_5fitembord_5fdata_2eproto() {
  delete MsgLeaderItembordData::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_leader_5fitembord_5fdata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_leader_5fitembord_5fdata_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_constants_2eproto();
  MsgLeaderItembordData::default_instance_ = new MsgLeaderItembordData();
  MsgLeaderItembordData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_leader_5fitembord_5fdata_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_leader_5fitembord_5fdata_2eproto_once_);
void protobuf_AddDesc_leader_5fitembord_5fdata_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_leader_5fitembord_5fdata_2eproto_once_,
                 &protobuf_AddDesc_leader_5fitembord_5fdata_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_leader_5fitembord_5fdata_2eproto {
  StaticDescriptorInitializer_leader_5fitembord_5fdata_2eproto() {
    protobuf_AddDesc_leader_5fitembord_5fdata_2eproto();
  }
} static_descriptor_initializer_leader_5fitembord_5fdata_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int MsgLeaderItembordData::kRankFieldNumber;
const int MsgLeaderItembordData::kRoleNameFieldNumber;
const int MsgLeaderItembordData::kRankValueFieldNumber;
#endif  // !_MSC_VER

MsgLeaderItembordData::MsgLeaderItembordData()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void MsgLeaderItembordData::InitAsDefaultInstance() {
}

MsgLeaderItembordData::MsgLeaderItembordData(const MsgLeaderItembordData& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void MsgLeaderItembordData::SharedCtor() {
  _cached_size_ = 0;
  rank_ = 0u;
  rolename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  rankvalue_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgLeaderItembordData::~MsgLeaderItembordData() {
  SharedDtor();
}

void MsgLeaderItembordData::SharedDtor() {
  if (rolename_ != &::google::protobuf::internal::kEmptyString) {
    delete rolename_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MsgLeaderItembordData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgLeaderItembordData& MsgLeaderItembordData::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_leader_5fitembord_5fdata_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_leader_5fitembord_5fdata_2eproto();
#endif
  return *default_instance_;
}

MsgLeaderItembordData* MsgLeaderItembordData::default_instance_ = NULL;

MsgLeaderItembordData* MsgLeaderItembordData::New() const {
  return new MsgLeaderItembordData;
}

void MsgLeaderItembordData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    rank_ = 0u;
    if (has_rolename()) {
      if (rolename_ != &::google::protobuf::internal::kEmptyString) {
        rolename_->clear();
      }
    }
    rankvalue_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool MsgLeaderItembordData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 rank = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rank_)));
          set_has_rank();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_roleName;
        break;
      }

      // required string roleName = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_roleName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_rolename()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_rankValue;
        break;
      }

      // required uint64 rankValue = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rankValue:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &rankvalue_)));
          set_has_rankvalue();
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

void MsgLeaderItembordData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 rank = 1;
  if (has_rank()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->rank(), output);
  }

  // required string roleName = 2;
  if (has_rolename()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->rolename(), output);
  }

  // required uint64 rankValue = 3;
  if (has_rankvalue()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->rankvalue(), output);
  }

}

int MsgLeaderItembordData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 rank = 1;
    if (has_rank()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->rank());
    }

    // required string roleName = 2;
    if (has_rolename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->rolename());
    }

    // required uint64 rankValue = 3;
    if (has_rankvalue()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->rankvalue());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgLeaderItembordData::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgLeaderItembordData*>(&from));
}

void MsgLeaderItembordData::MergeFrom(const MsgLeaderItembordData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_rank()) {
      set_rank(from.rank());
    }
    if (from.has_rolename()) {
      set_rolename(from.rolename());
    }
    if (from.has_rankvalue()) {
      set_rankvalue(from.rankvalue());
    }
  }
}

void MsgLeaderItembordData::CopyFrom(const MsgLeaderItembordData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgLeaderItembordData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void MsgLeaderItembordData::Swap(MsgLeaderItembordData* other) {
  if (other != this) {
    std::swap(rank_, other->rank_);
    std::swap(rolename_, other->rolename_);
    std::swap(rankvalue_, other->rankvalue_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string MsgLeaderItembordData::GetTypeName() const {
  return "sanguo.MsgLeaderItembordData";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
