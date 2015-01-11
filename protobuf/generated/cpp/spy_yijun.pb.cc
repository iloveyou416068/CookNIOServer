// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: spy_yijun.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "spy_yijun.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_spy_5fyijun_2eproto() {
  delete SpyYijunRequest::default_instance_;
  delete SpyYijunResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_spy_5fyijun_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_spy_5fyijun_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  SpyYijunRequest::default_instance_ = new SpyYijunRequest();
  SpyYijunResponse::default_instance_ = new SpyYijunResponse();
  SpyYijunRequest::default_instance_->InitAsDefaultInstance();
  SpyYijunResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_spy_5fyijun_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_spy_5fyijun_2eproto_once_);
void protobuf_AddDesc_spy_5fyijun_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_spy_5fyijun_2eproto_once_,
                 &protobuf_AddDesc_spy_5fyijun_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_spy_5fyijun_2eproto {
  StaticDescriptorInitializer_spy_5fyijun_2eproto() {
    protobuf_AddDesc_spy_5fyijun_2eproto();
  }
} static_descriptor_initializer_spy_5fyijun_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int SpyYijunRequest::kMsgIDFieldNumber;
const int SpyYijunRequest::kYijunIDFieldNumber;
#endif  // !_MSC_VER

SpyYijunRequest::SpyYijunRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SpyYijunRequest::InitAsDefaultInstance() {
}

SpyYijunRequest::SpyYijunRequest(const SpyYijunRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SpyYijunRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  yijunid_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SpyYijunRequest::~SpyYijunRequest() {
  SharedDtor();
}

void SpyYijunRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SpyYijunRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SpyYijunRequest& SpyYijunRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_spy_5fyijun_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_spy_5fyijun_2eproto();
#endif
  return *default_instance_;
}

SpyYijunRequest* SpyYijunRequest::default_instance_ = NULL;

SpyYijunRequest* SpyYijunRequest::New() const {
  return new SpyYijunRequest;
}

void SpyYijunRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    yijunid_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SpyYijunRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_yijunID;
        break;
      }

      // required uint64 yijunID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_yijunID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &yijunid_)));
          set_has_yijunid();
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

void SpyYijunRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint64 yijunID = 2;
  if (has_yijunid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->yijunid(), output);
  }

}

int SpyYijunRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint64 yijunID = 2;
    if (has_yijunid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->yijunid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SpyYijunRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SpyYijunRequest*>(&from));
}

void SpyYijunRequest::MergeFrom(const SpyYijunRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_yijunid()) {
      set_yijunid(from.yijunid());
    }
  }
}

void SpyYijunRequest::CopyFrom(const SpyYijunRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpyYijunRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void SpyYijunRequest::Swap(SpyYijunRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(yijunid_, other->yijunid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SpyYijunRequest::GetTypeName() const {
  return "sanguo.SpyYijunRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int SpyYijunResponse::kMsgIDFieldNumber;
const int SpyYijunResponse::kStatusFieldNumber;
const int SpyYijunResponse::kWeathPDFieldNumber;
const int SpyYijunResponse::kConsumeGoldFieldNumber;
const int SpyYijunResponse::kGoldFieldNumber;
const int SpyYijunResponse::kJadeFieldNumber;
#endif  // !_MSC_VER

SpyYijunResponse::SpyYijunResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SpyYijunResponse::InitAsDefaultInstance() {
}

SpyYijunResponse::SpyYijunResponse(const SpyYijunResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SpyYijunResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  weathpd_ = GOOGLE_ULONGLONG(0);
  consumegold_ = 0u;
  gold_ = 0u;
  jade_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SpyYijunResponse::~SpyYijunResponse() {
  SharedDtor();
}

void SpyYijunResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SpyYijunResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SpyYijunResponse& SpyYijunResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_spy_5fyijun_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_spy_5fyijun_2eproto();
#endif
  return *default_instance_;
}

SpyYijunResponse* SpyYijunResponse::default_instance_ = NULL;

SpyYijunResponse* SpyYijunResponse::New() const {
  return new SpyYijunResponse;
}

void SpyYijunResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    weathpd_ = GOOGLE_ULONGLONG(0);
    consumegold_ = 0u;
    gold_ = 0u;
    jade_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SpyYijunResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_weathPD;
        break;
      }

      // optional uint64 weathPD = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_weathPD:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &weathpd_)));
          set_has_weathpd();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_consumeGold;
        break;
      }

      // optional uint32 consumeGold = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_consumeGold:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &consumegold_)));
          set_has_consumegold();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_gold;
        break;
      }

      // optional uint32 gold = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gold:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gold_)));
          set_has_gold();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_jade;
        break;
      }

      // optional uint32 jade = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_jade:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &jade_)));
          set_has_jade();
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

void SpyYijunResponse::SerializeWithCachedSizes(
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

  // optional uint64 weathPD = 3;
  if (has_weathpd()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->weathpd(), output);
  }

  // optional uint32 consumeGold = 4;
  if (has_consumegold()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->consumegold(), output);
  }

  // optional uint32 gold = 5;
  if (has_gold()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->gold(), output);
  }

  // optional uint32 jade = 6;
  if (has_jade()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->jade(), output);
  }

}

int SpyYijunResponse::ByteSize() const {
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

    // optional uint64 weathPD = 3;
    if (has_weathpd()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->weathpd());
    }

    // optional uint32 consumeGold = 4;
    if (has_consumegold()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->consumegold());
    }

    // optional uint32 gold = 5;
    if (has_gold()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->gold());
    }

    // optional uint32 jade = 6;
    if (has_jade()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->jade());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SpyYijunResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SpyYijunResponse*>(&from));
}

void SpyYijunResponse::MergeFrom(const SpyYijunResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_weathpd()) {
      set_weathpd(from.weathpd());
    }
    if (from.has_consumegold()) {
      set_consumegold(from.consumegold());
    }
    if (from.has_gold()) {
      set_gold(from.gold());
    }
    if (from.has_jade()) {
      set_jade(from.jade());
    }
  }
}

void SpyYijunResponse::CopyFrom(const SpyYijunResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpyYijunResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void SpyYijunResponse::Swap(SpyYijunResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(weathpd_, other->weathpd_);
    std::swap(consumegold_, other->consumegold_);
    std::swap(gold_, other->gold_);
    std::swap(jade_, other->jade_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SpyYijunResponse::GetTypeName() const {
  return "sanguo.SpyYijunResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
