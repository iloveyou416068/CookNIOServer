// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_shoplist.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "get_shoplist.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_get_5fshoplist_2eproto() {
  delete GetShoplistRequest::default_instance_;
  delete GetShoplistResponse::default_instance_;
  delete MsgRefreshData::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_get_5fshoplist_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_get_5fshoplist_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_shop_5fgoods_5finfo_2eproto();
  GetShoplistRequest::default_instance_ = new GetShoplistRequest();
  GetShoplistResponse::default_instance_ = new GetShoplistResponse();
  MsgRefreshData::default_instance_ = new MsgRefreshData();
  GetShoplistRequest::default_instance_->InitAsDefaultInstance();
  GetShoplistResponse::default_instance_->InitAsDefaultInstance();
  MsgRefreshData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_get_5fshoplist_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_get_5fshoplist_2eproto_once_);
void protobuf_AddDesc_get_5fshoplist_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_get_5fshoplist_2eproto_once_,
                 &protobuf_AddDesc_get_5fshoplist_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_get_5fshoplist_2eproto {
  StaticDescriptorInitializer_get_5fshoplist_2eproto() {
    protobuf_AddDesc_get_5fshoplist_2eproto();
  }
} static_descriptor_initializer_get_5fshoplist_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int GetShoplistRequest::kMsgIDFieldNumber;
const int GetShoplistRequest::kTypeFieldNumber;
#endif  // !_MSC_VER

GetShoplistRequest::GetShoplistRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GetShoplistRequest::InitAsDefaultInstance() {
}

GetShoplistRequest::GetShoplistRequest(const GetShoplistRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GetShoplistRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  type_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetShoplistRequest::~GetShoplistRequest() {
  SharedDtor();
}

void GetShoplistRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GetShoplistRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GetShoplistRequest& GetShoplistRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_get_5fshoplist_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_get_5fshoplist_2eproto();
#endif
  return *default_instance_;
}

GetShoplistRequest* GetShoplistRequest::default_instance_ = NULL;

GetShoplistRequest* GetShoplistRequest::New() const {
  return new GetShoplistRequest;
}

void GetShoplistRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    type_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GetShoplistRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // required uint32 type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_)));
          set_has_type();
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

void GetShoplistRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint32 type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->type(), output);
  }

}

int GetShoplistRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint32 type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetShoplistRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GetShoplistRequest*>(&from));
}

void GetShoplistRequest::MergeFrom(const GetShoplistRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
}

void GetShoplistRequest::CopyFrom(const GetShoplistRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetShoplistRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void GetShoplistRequest::Swap(GetShoplistRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GetShoplistRequest::GetTypeName() const {
  return "sanguo.GetShoplistRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int GetShoplistResponse::kMsgIDFieldNumber;
const int GetShoplistResponse::kStatusFieldNumber;
const int GetShoplistResponse::kTypeFieldNumber;
const int GetShoplistResponse::kGoodsinfoDataFieldNumber;
const int GetShoplistResponse::kRefreshDataFieldNumber;
#endif  // !_MSC_VER

GetShoplistResponse::GetShoplistResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GetShoplistResponse::InitAsDefaultInstance() {
}

GetShoplistResponse::GetShoplistResponse(const GetShoplistResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GetShoplistResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  type_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetShoplistResponse::~GetShoplistResponse() {
  SharedDtor();
}

void GetShoplistResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GetShoplistResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GetShoplistResponse& GetShoplistResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_get_5fshoplist_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_get_5fshoplist_2eproto();
#endif
  return *default_instance_;
}

GetShoplistResponse* GetShoplistResponse::default_instance_ = NULL;

GetShoplistResponse* GetShoplistResponse::New() const {
  return new GetShoplistResponse;
}

void GetShoplistResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    type_ = 0u;
  }
  goodsinfodata_.Clear();
  refreshdata_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GetShoplistResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }

      // required uint32 type = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_goodsinfoData;
        break;
      }

      // repeated .sanguo.MsgShopGoodsInfoData goodsinfoData = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_goodsinfoData:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_goodsinfodata()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_goodsinfoData;
        if (input->ExpectTag(42)) goto parse_refreshData;
        break;
      }

      // repeated .sanguo.MsgRefreshData refreshData = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_refreshData:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_refreshdata()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_refreshData;
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

void GetShoplistResponse::SerializeWithCachedSizes(
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

  // required uint32 type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->type(), output);
  }

  // repeated .sanguo.MsgShopGoodsInfoData goodsinfoData = 4;
  for (int i = 0; i < this->goodsinfodata_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->goodsinfodata(i), output);
  }

  // repeated .sanguo.MsgRefreshData refreshData = 5;
  for (int i = 0; i < this->refreshdata_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      5, this->refreshdata(i), output);
  }

}

int GetShoplistResponse::ByteSize() const {
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

    // required uint32 type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

  }
  // repeated .sanguo.MsgShopGoodsInfoData goodsinfoData = 4;
  total_size += 1 * this->goodsinfodata_size();
  for (int i = 0; i < this->goodsinfodata_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->goodsinfodata(i));
  }

  // repeated .sanguo.MsgRefreshData refreshData = 5;
  total_size += 1 * this->refreshdata_size();
  for (int i = 0; i < this->refreshdata_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->refreshdata(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetShoplistResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GetShoplistResponse*>(&from));
}

void GetShoplistResponse::MergeFrom(const GetShoplistResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  goodsinfodata_.MergeFrom(from.goodsinfodata_);
  refreshdata_.MergeFrom(from.refreshdata_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
}

void GetShoplistResponse::CopyFrom(const GetShoplistResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetShoplistResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  for (int i = 0; i < goodsinfodata_size(); i++) {
    if (!this->goodsinfodata(i).IsInitialized()) return false;
  }
  for (int i = 0; i < refreshdata_size(); i++) {
    if (!this->refreshdata(i).IsInitialized()) return false;
  }
  return true;
}

void GetShoplistResponse::Swap(GetShoplistResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(type_, other->type_);
    goodsinfodata_.Swap(&other->goodsinfodata_);
    refreshdata_.Swap(&other->refreshdata_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GetShoplistResponse::GetTypeName() const {
  return "sanguo.GetShoplistResponse";
}


// ===================================================================

#ifndef _MSC_VER
const int MsgRefreshData::kCountFieldNumber;
#endif  // !_MSC_VER

MsgRefreshData::MsgRefreshData()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void MsgRefreshData::InitAsDefaultInstance() {
}

MsgRefreshData::MsgRefreshData(const MsgRefreshData& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void MsgRefreshData::SharedCtor() {
  _cached_size_ = 0;
  count_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgRefreshData::~MsgRefreshData() {
  SharedDtor();
}

void MsgRefreshData::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MsgRefreshData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgRefreshData& MsgRefreshData::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_get_5fshoplist_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_get_5fshoplist_2eproto();
#endif
  return *default_instance_;
}

MsgRefreshData* MsgRefreshData::default_instance_ = NULL;

MsgRefreshData* MsgRefreshData::New() const {
  return new MsgRefreshData;
}

void MsgRefreshData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    count_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool MsgRefreshData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 count = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &count_)));
          set_has_count();
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

void MsgRefreshData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 count = 1;
  if (has_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->count(), output);
  }

}

int MsgRefreshData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 count = 1;
    if (has_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->count());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgRefreshData::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgRefreshData*>(&from));
}

void MsgRefreshData::MergeFrom(const MsgRefreshData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_count()) {
      set_count(from.count());
    }
  }
}

void MsgRefreshData::CopyFrom(const MsgRefreshData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgRefreshData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MsgRefreshData::Swap(MsgRefreshData* other) {
  if (other != this) {
    std::swap(count_, other->count_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string MsgRefreshData::GetTypeName() const {
  return "sanguo.MsgRefreshData";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
