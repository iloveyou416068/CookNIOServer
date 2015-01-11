// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: init_sign_data.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "init_sign_data.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_init_5fsign_5fdata_2eproto() {
  delete InitSignDataRequest::default_instance_;
  delete InitSignDataResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_init_5fsign_5fdata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_init_5fsign_5fdata_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_sign_5freward_2eproto();
  InitSignDataRequest::default_instance_ = new InitSignDataRequest();
  InitSignDataResponse::default_instance_ = new InitSignDataResponse();
  InitSignDataRequest::default_instance_->InitAsDefaultInstance();
  InitSignDataResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_init_5fsign_5fdata_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_init_5fsign_5fdata_2eproto_once_);
void protobuf_AddDesc_init_5fsign_5fdata_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_init_5fsign_5fdata_2eproto_once_,
                 &protobuf_AddDesc_init_5fsign_5fdata_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_init_5fsign_5fdata_2eproto {
  StaticDescriptorInitializer_init_5fsign_5fdata_2eproto() {
    protobuf_AddDesc_init_5fsign_5fdata_2eproto();
  }
} static_descriptor_initializer_init_5fsign_5fdata_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int InitSignDataRequest::kMsgIDFieldNumber;
const int InitSignDataRequest::kMonthFieldNumber;
#endif  // !_MSC_VER

InitSignDataRequest::InitSignDataRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void InitSignDataRequest::InitAsDefaultInstance() {
}

InitSignDataRequest::InitSignDataRequest(const InitSignDataRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void InitSignDataRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  month_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InitSignDataRequest::~InitSignDataRequest() {
  SharedDtor();
}

void InitSignDataRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void InitSignDataRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const InitSignDataRequest& InitSignDataRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_init_5fsign_5fdata_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_init_5fsign_5fdata_2eproto();
#endif
  return *default_instance_;
}

InitSignDataRequest* InitSignDataRequest::default_instance_ = NULL;

InitSignDataRequest* InitSignDataRequest::New() const {
  return new InitSignDataRequest;
}

void InitSignDataRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    month_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool InitSignDataRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_month;
        break;
      }

      // required uint32 month = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_month:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &month_)));
          set_has_month();
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

void InitSignDataRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint32 month = 2;
  if (has_month()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->month(), output);
  }

}

int InitSignDataRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint32 month = 2;
    if (has_month()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->month());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InitSignDataRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const InitSignDataRequest*>(&from));
}

void InitSignDataRequest::MergeFrom(const InitSignDataRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_month()) {
      set_month(from.month());
    }
  }
}

void InitSignDataRequest::CopyFrom(const InitSignDataRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InitSignDataRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void InitSignDataRequest::Swap(InitSignDataRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(month_, other->month_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string InitSignDataRequest::GetTypeName() const {
  return "sanguo.InitSignDataRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int InitSignDataResponse::kMsgIDFieldNumber;
const int InitSignDataResponse::kStatusFieldNumber;
const int InitSignDataResponse::kSignRewardFieldNumber;
const int InitSignDataResponse::kCountFieldNumber;
const int InitSignDataResponse::kSignRecordFieldNumber;
const int InitSignDataResponse::kOpenRewardRecordFieldNumber;
#endif  // !_MSC_VER

InitSignDataResponse::InitSignDataResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void InitSignDataResponse::InitAsDefaultInstance() {
}

InitSignDataResponse::InitSignDataResponse(const InitSignDataResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void InitSignDataResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  count_ = 0u;
  signrecord_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  openrewardrecord_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InitSignDataResponse::~InitSignDataResponse() {
  SharedDtor();
}

void InitSignDataResponse::SharedDtor() {
  if (signrecord_ != &::google::protobuf::internal::kEmptyString) {
    delete signrecord_;
  }
  if (openrewardrecord_ != &::google::protobuf::internal::kEmptyString) {
    delete openrewardrecord_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void InitSignDataResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const InitSignDataResponse& InitSignDataResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_init_5fsign_5fdata_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_init_5fsign_5fdata_2eproto();
#endif
  return *default_instance_;
}

InitSignDataResponse* InitSignDataResponse::default_instance_ = NULL;

InitSignDataResponse* InitSignDataResponse::New() const {
  return new InitSignDataResponse;
}

void InitSignDataResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    count_ = 0u;
    if (has_signrecord()) {
      if (signrecord_ != &::google::protobuf::internal::kEmptyString) {
        signrecord_->clear();
      }
    }
    if (has_openrewardrecord()) {
      if (openrewardrecord_ != &::google::protobuf::internal::kEmptyString) {
        openrewardrecord_->clear();
      }
    }
  }
  signreward_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool InitSignDataResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(26)) goto parse_signReward;
        break;
      }

      // repeated .sanguo.MsgSignReward signReward = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_signReward:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_signreward()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_signReward;
        if (input->ExpectTag(32)) goto parse_count;
        break;
      }

      // optional uint32 count = 4;
      case 4: {
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
        if (input->ExpectTag(42)) goto parse_signRecord;
        break;
      }

      // optional string signRecord = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_signRecord:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_signrecord()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_openRewardRecord;
        break;
      }

      // optional string openRewardRecord = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_openRewardRecord:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_openrewardrecord()));
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

void InitSignDataResponse::SerializeWithCachedSizes(
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

  // repeated .sanguo.MsgSignReward signReward = 3;
  for (int i = 0; i < this->signreward_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->signreward(i), output);
  }

  // optional uint32 count = 4;
  if (has_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->count(), output);
  }

  // optional string signRecord = 5;
  if (has_signrecord()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->signrecord(), output);
  }

  // optional string openRewardRecord = 6;
  if (has_openrewardrecord()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->openrewardrecord(), output);
  }

}

int InitSignDataResponse::ByteSize() const {
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

    // optional uint32 count = 4;
    if (has_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->count());
    }

    // optional string signRecord = 5;
    if (has_signrecord()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->signrecord());
    }

    // optional string openRewardRecord = 6;
    if (has_openrewardrecord()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->openrewardrecord());
    }

  }
  // repeated .sanguo.MsgSignReward signReward = 3;
  total_size += 1 * this->signreward_size();
  for (int i = 0; i < this->signreward_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->signreward(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InitSignDataResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const InitSignDataResponse*>(&from));
}

void InitSignDataResponse::MergeFrom(const InitSignDataResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  signreward_.MergeFrom(from.signreward_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_count()) {
      set_count(from.count());
    }
    if (from.has_signrecord()) {
      set_signrecord(from.signrecord());
    }
    if (from.has_openrewardrecord()) {
      set_openrewardrecord(from.openrewardrecord());
    }
  }
}

void InitSignDataResponse::CopyFrom(const InitSignDataResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InitSignDataResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  for (int i = 0; i < signreward_size(); i++) {
    if (!this->signreward(i).IsInitialized()) return false;
  }
  return true;
}

void InitSignDataResponse::Swap(InitSignDataResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    signreward_.Swap(&other->signreward_);
    std::swap(count_, other->count_);
    std::swap(signrecord_, other->signrecord_);
    std::swap(openrewardrecord_, other->openrewardrecord_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string InitSignDataResponse::GetTypeName() const {
  return "sanguo.InitSignDataResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
