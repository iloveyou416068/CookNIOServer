// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: yijunboss_rank_broadcast.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "yijunboss_rank_broadcast.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_yijunboss_5frank_5fbroadcast_2eproto() {
  delete YijunbossRankBroadcast::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_yijunboss_5frank_5fbroadcast_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_yijunboss_5frank_5fbroadcast_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fbuff_5finfos_2eproto();
  ::sanguo::protobuf_AddDesc_worldboss_5frank_5finfo_2eproto();
  YijunbossRankBroadcast::default_instance_ = new YijunbossRankBroadcast();
  YijunbossRankBroadcast::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_yijunboss_5frank_5fbroadcast_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_yijunboss_5frank_5fbroadcast_2eproto_once_);
void protobuf_AddDesc_yijunboss_5frank_5fbroadcast_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_yijunboss_5frank_5fbroadcast_2eproto_once_,
                 &protobuf_AddDesc_yijunboss_5frank_5fbroadcast_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_yijunboss_5frank_5fbroadcast_2eproto {
  StaticDescriptorInitializer_yijunboss_5frank_5fbroadcast_2eproto() {
    protobuf_AddDesc_yijunboss_5frank_5fbroadcast_2eproto();
  }
} static_descriptor_initializer_yijunboss_5frank_5fbroadcast_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int YijunbossRankBroadcast::kMsgIDFieldNumber;
const int YijunbossRankBroadcast::kStatusFieldNumber;
const int YijunbossRankBroadcast::kRankinfoFieldNumber;
#endif  // !_MSC_VER

YijunbossRankBroadcast::YijunbossRankBroadcast()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void YijunbossRankBroadcast::InitAsDefaultInstance() {
}

YijunbossRankBroadcast::YijunbossRankBroadcast(const YijunbossRankBroadcast& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void YijunbossRankBroadcast::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

YijunbossRankBroadcast::~YijunbossRankBroadcast() {
  SharedDtor();
}

void YijunbossRankBroadcast::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void YijunbossRankBroadcast::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const YijunbossRankBroadcast& YijunbossRankBroadcast::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_yijunboss_5frank_5fbroadcast_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_yijunboss_5frank_5fbroadcast_2eproto();
#endif
  return *default_instance_;
}

YijunbossRankBroadcast* YijunbossRankBroadcast::default_instance_ = NULL;

YijunbossRankBroadcast* YijunbossRankBroadcast::New() const {
  return new YijunbossRankBroadcast;
}

void YijunbossRankBroadcast::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
  }
  rankinfo_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool YijunbossRankBroadcast::MergePartialFromCodedStream(
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
        if (input->ExpectTag(26)) goto parse_rankinfo;
        break;
      }

      // repeated .sanguo.MsgWorldbossRankInfo rankinfo = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_rankinfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_rankinfo()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_rankinfo;
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

void YijunbossRankBroadcast::SerializeWithCachedSizes(
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

  // repeated .sanguo.MsgWorldbossRankInfo rankinfo = 3;
  for (int i = 0; i < this->rankinfo_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->rankinfo(i), output);
  }

}

int YijunbossRankBroadcast::ByteSize() const {
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

  }
  // repeated .sanguo.MsgWorldbossRankInfo rankinfo = 3;
  total_size += 1 * this->rankinfo_size();
  for (int i = 0; i < this->rankinfo_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->rankinfo(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void YijunbossRankBroadcast::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const YijunbossRankBroadcast*>(&from));
}

void YijunbossRankBroadcast::MergeFrom(const YijunbossRankBroadcast& from) {
  GOOGLE_CHECK_NE(&from, this);
  rankinfo_.MergeFrom(from.rankinfo_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
  }
}

void YijunbossRankBroadcast::CopyFrom(const YijunbossRankBroadcast& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool YijunbossRankBroadcast::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  for (int i = 0; i < rankinfo_size(); i++) {
    if (!this->rankinfo(i).IsInitialized()) return false;
  }
  return true;
}

void YijunbossRankBroadcast::Swap(YijunbossRankBroadcast* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    rankinfo_.Swap(&other->rankinfo_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string YijunbossRankBroadcast::GetTypeName() const {
  return "sanguo.YijunbossRankBroadcast";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
