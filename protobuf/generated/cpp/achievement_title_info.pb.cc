// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: achievement_title_info.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "achievement_title_info.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_achievement_5ftitle_5finfo_2eproto() {
  delete MsgAchievementTitleInfoData::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_achievement_5ftitle_5finfo_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_achievement_5ftitle_5finfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_constants_2eproto();
  MsgAchievementTitleInfoData::default_instance_ = new MsgAchievementTitleInfoData();
  MsgAchievementTitleInfoData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_achievement_5ftitle_5finfo_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_achievement_5ftitle_5finfo_2eproto_once_);
void protobuf_AddDesc_achievement_5ftitle_5finfo_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_achievement_5ftitle_5finfo_2eproto_once_,
                 &protobuf_AddDesc_achievement_5ftitle_5finfo_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_achievement_5ftitle_5finfo_2eproto {
  StaticDescriptorInitializer_achievement_5ftitle_5finfo_2eproto() {
    protobuf_AddDesc_achievement_5ftitle_5finfo_2eproto();
  }
} static_descriptor_initializer_achievement_5ftitle_5finfo_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int MsgAchievementTitleInfoData::kIdFieldNumber;
#endif  // !_MSC_VER

MsgAchievementTitleInfoData::MsgAchievementTitleInfoData()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void MsgAchievementTitleInfoData::InitAsDefaultInstance() {
}

MsgAchievementTitleInfoData::MsgAchievementTitleInfoData(const MsgAchievementTitleInfoData& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void MsgAchievementTitleInfoData::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgAchievementTitleInfoData::~MsgAchievementTitleInfoData() {
  SharedDtor();
}

void MsgAchievementTitleInfoData::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MsgAchievementTitleInfoData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgAchievementTitleInfoData& MsgAchievementTitleInfoData::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_achievement_5ftitle_5finfo_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_achievement_5ftitle_5finfo_2eproto();
#endif
  return *default_instance_;
}

MsgAchievementTitleInfoData* MsgAchievementTitleInfoData::default_instance_ = NULL;

MsgAchievementTitleInfoData* MsgAchievementTitleInfoData::New() const {
  return new MsgAchievementTitleInfoData;
}

void MsgAchievementTitleInfoData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool MsgAchievementTitleInfoData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
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

void MsgAchievementTitleInfoData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

}

int MsgAchievementTitleInfoData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgAchievementTitleInfoData::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgAchievementTitleInfoData*>(&from));
}

void MsgAchievementTitleInfoData::MergeFrom(const MsgAchievementTitleInfoData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
  }
}

void MsgAchievementTitleInfoData::CopyFrom(const MsgAchievementTitleInfoData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgAchievementTitleInfoData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MsgAchievementTitleInfoData::Swap(MsgAchievementTitleInfoData* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string MsgAchievementTitleInfoData::GetTypeName() const {
  return "sanguo.MsgAchievementTitleInfoData";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
