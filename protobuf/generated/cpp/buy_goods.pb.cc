// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: buy_goods.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "buy_goods.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_buy_5fgoods_2eproto() {
  delete BuyGoodsRequest::default_instance_;
  delete BuyGoodsResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_buy_5fgoods_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_buy_5fgoods_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fgem_5fbag_5fgoods_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fguaxiang_5fgoods_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fbag_5fgoods_2eproto();
  BuyGoodsRequest::default_instance_ = new BuyGoodsRequest();
  BuyGoodsResponse::default_instance_ = new BuyGoodsResponse();
  BuyGoodsRequest::default_instance_->InitAsDefaultInstance();
  BuyGoodsResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_buy_5fgoods_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_buy_5fgoods_2eproto_once_);
void protobuf_AddDesc_buy_5fgoods_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_buy_5fgoods_2eproto_once_,
                 &protobuf_AddDesc_buy_5fgoods_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_buy_5fgoods_2eproto {
  StaticDescriptorInitializer_buy_5fgoods_2eproto() {
    protobuf_AddDesc_buy_5fgoods_2eproto();
  }
} static_descriptor_initializer_buy_5fgoods_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int BuyGoodsRequest::kMsgIDFieldNumber;
const int BuyGoodsRequest::kIdFieldNumber;
const int BuyGoodsRequest::kTypeFieldNumber;
const int BuyGoodsRequest::kIndexFieldNumber;
const int BuyGoodsRequest::kPriceFieldNumber;
const int BuyGoodsRequest::kCountFieldNumber;
#endif  // !_MSC_VER

BuyGoodsRequest::BuyGoodsRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void BuyGoodsRequest::InitAsDefaultInstance() {
}

BuyGoodsRequest::BuyGoodsRequest(const BuyGoodsRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void BuyGoodsRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  id_ = GOOGLE_ULONGLONG(0);
  type_ = 0u;
  index_ = 0u;
  price_ = 0u;
  count_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BuyGoodsRequest::~BuyGoodsRequest() {
  SharedDtor();
}

void BuyGoodsRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void BuyGoodsRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BuyGoodsRequest& BuyGoodsRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_buy_5fgoods_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_buy_5fgoods_2eproto();
#endif
  return *default_instance_;
}

BuyGoodsRequest* BuyGoodsRequest::default_instance_ = NULL;

BuyGoodsRequest* BuyGoodsRequest::New() const {
  return new BuyGoodsRequest;
}

void BuyGoodsRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    id_ = GOOGLE_ULONGLONG(0);
    type_ = 0u;
    index_ = 0u;
    price_ = 0u;
    count_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool BuyGoodsRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_id;
        break;
      }

      // required uint64 id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &id_)));
          set_has_id();
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
        if (input->ExpectTag(32)) goto parse_index;
        break;
      }

      // required uint32 index = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &index_)));
          set_has_index();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_price;
        break;
      }

      // required uint32 price = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_price:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &price_)));
          set_has_price();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_count;
        break;
      }

      // required uint32 count = 6;
      case 6: {
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

void BuyGoodsRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint64 id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->id(), output);
  }

  // required uint32 type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->type(), output);
  }

  // required uint32 index = 4;
  if (has_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->index(), output);
  }

  // required uint32 price = 5;
  if (has_price()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->price(), output);
  }

  // required uint32 count = 6;
  if (has_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->count(), output);
  }

}

int BuyGoodsRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint64 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->id());
    }

    // required uint32 type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

    // required uint32 index = 4;
    if (has_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->index());
    }

    // required uint32 price = 5;
    if (has_price()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->price());
    }

    // required uint32 count = 6;
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

void BuyGoodsRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BuyGoodsRequest*>(&from));
}

void BuyGoodsRequest::MergeFrom(const BuyGoodsRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_index()) {
      set_index(from.index());
    }
    if (from.has_price()) {
      set_price(from.price());
    }
    if (from.has_count()) {
      set_count(from.count());
    }
  }
}

void BuyGoodsRequest::CopyFrom(const BuyGoodsRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BuyGoodsRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  return true;
}

void BuyGoodsRequest::Swap(BuyGoodsRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(id_, other->id_);
    std::swap(type_, other->type_);
    std::swap(index_, other->index_);
    std::swap(price_, other->price_);
    std::swap(count_, other->count_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string BuyGoodsRequest::GetTypeName() const {
  return "sanguo.BuyGoodsRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int BuyGoodsResponse::kMsgIDFieldNumber;
const int BuyGoodsResponse::kStatusFieldNumber;
const int BuyGoodsResponse::kGoldFieldNumber;
const int BuyGoodsResponse::kJadeFieldNumber;
const int BuyGoodsResponse::kCopperFieldNumber;
const int BuyGoodsResponse::kFriendShipFieldNumber;
const int BuyGoodsResponse::kSubtypeFieldNumber;
const int BuyGoodsResponse::kGoldTicketFieldNumber;
const int BuyGoodsResponse::kSilverTicketFieldNumber;
const int BuyGoodsResponse::kCopperTicketFieldNumber;
const int BuyGoodsResponse::kHonourFieldNumber;
const int BuyGoodsResponse::kRoleGemBagGoodsFieldNumber;
const int BuyGoodsResponse::kGuaxiangGoodsFieldNumber;
const int BuyGoodsResponse::kRoleBagGoodsFieldNumber;
#endif  // !_MSC_VER

BuyGoodsResponse::BuyGoodsResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void BuyGoodsResponse::InitAsDefaultInstance() {
}

BuyGoodsResponse::BuyGoodsResponse(const BuyGoodsResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void BuyGoodsResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  gold_ = 0u;
  jade_ = 0u;
  copper_ = GOOGLE_ULONGLONG(0);
  friendship_ = 0u;
  subtype_ = 0u;
  goldticket_ = 0u;
  silverticket_ = 0u;
  copperticket_ = 0u;
  honour_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BuyGoodsResponse::~BuyGoodsResponse() {
  SharedDtor();
}

void BuyGoodsResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void BuyGoodsResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BuyGoodsResponse& BuyGoodsResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_buy_5fgoods_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_buy_5fgoods_2eproto();
#endif
  return *default_instance_;
}

BuyGoodsResponse* BuyGoodsResponse::default_instance_ = NULL;

BuyGoodsResponse* BuyGoodsResponse::New() const {
  return new BuyGoodsResponse;
}

void BuyGoodsResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    gold_ = 0u;
    jade_ = 0u;
    copper_ = GOOGLE_ULONGLONG(0);
    friendship_ = 0u;
    subtype_ = 0u;
    goldticket_ = 0u;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    silverticket_ = 0u;
    copperticket_ = 0u;
    honour_ = GOOGLE_ULONGLONG(0);
  }
  rolegembaggoods_.Clear();
  guaxianggoods_.Clear();
  rolebaggoods_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool BuyGoodsResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_gold;
        break;
      }

      // required uint32 gold = 3;
      case 3: {
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
        if (input->ExpectTag(32)) goto parse_jade;
        break;
      }

      // required uint32 jade = 4;
      case 4: {
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
        if (input->ExpectTag(40)) goto parse_copper;
        break;
      }

      // required uint64 copper = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_copper:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &copper_)));
          set_has_copper();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_friendShip;
        break;
      }

      // required uint32 friendShip = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_friendShip:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &friendship_)));
          set_has_friendship();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_subtype;
        break;
      }

      // required uint32 subtype = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_subtype:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &subtype_)));
          set_has_subtype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_goldTicket;
        break;
      }

      // optional uint32 goldTicket = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_goldTicket:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &goldticket_)));
          set_has_goldticket();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_silverTicket;
        break;
      }

      // optional uint32 silverTicket = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_silverTicket:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &silverticket_)));
          set_has_silverticket();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_copperTicket;
        break;
      }

      // optional uint32 copperTicket = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_copperTicket:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &copperticket_)));
          set_has_copperticket();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_honour;
        break;
      }

      // optional uint64 honour = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_honour:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &honour_)));
          set_has_honour();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(98)) goto parse_roleGemBagGoods;
        break;
      }

      // repeated .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_roleGemBagGoods:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_rolegembaggoods()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(98)) goto parse_roleGemBagGoods;
        if (input->ExpectTag(106)) goto parse_guaxiangGoods;
        break;
      }

      // repeated .sanguo.MsgGuaxiangGoods guaxiangGoods = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_guaxiangGoods:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_guaxianggoods()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(106)) goto parse_guaxiangGoods;
        if (input->ExpectTag(114)) goto parse_roleBagGoods;
        break;
      }

      // repeated .sanguo.MsgRoleBagGoods roleBagGoods = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_roleBagGoods:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_rolebaggoods()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(114)) goto parse_roleBagGoods;
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

void BuyGoodsResponse::SerializeWithCachedSizes(
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

  // required uint32 gold = 3;
  if (has_gold()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->gold(), output);
  }

  // required uint32 jade = 4;
  if (has_jade()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->jade(), output);
  }

  // required uint64 copper = 5;
  if (has_copper()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->copper(), output);
  }

  // required uint32 friendShip = 6;
  if (has_friendship()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->friendship(), output);
  }

  // required uint32 subtype = 7;
  if (has_subtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->subtype(), output);
  }

  // optional uint32 goldTicket = 8;
  if (has_goldticket()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->goldticket(), output);
  }

  // optional uint32 silverTicket = 9;
  if (has_silverticket()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->silverticket(), output);
  }

  // optional uint32 copperTicket = 10;
  if (has_copperticket()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->copperticket(), output);
  }

  // optional uint64 honour = 11;
  if (has_honour()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(11, this->honour(), output);
  }

  // repeated .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 12;
  for (int i = 0; i < this->rolegembaggoods_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      12, this->rolegembaggoods(i), output);
  }

  // repeated .sanguo.MsgGuaxiangGoods guaxiangGoods = 13;
  for (int i = 0; i < this->guaxianggoods_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      13, this->guaxianggoods(i), output);
  }

  // repeated .sanguo.MsgRoleBagGoods roleBagGoods = 14;
  for (int i = 0; i < this->rolebaggoods_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      14, this->rolebaggoods(i), output);
  }

}

int BuyGoodsResponse::ByteSize() const {
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

    // required uint32 gold = 3;
    if (has_gold()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->gold());
    }

    // required uint32 jade = 4;
    if (has_jade()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->jade());
    }

    // required uint64 copper = 5;
    if (has_copper()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->copper());
    }

    // required uint32 friendShip = 6;
    if (has_friendship()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->friendship());
    }

    // required uint32 subtype = 7;
    if (has_subtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->subtype());
    }

    // optional uint32 goldTicket = 8;
    if (has_goldticket()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->goldticket());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional uint32 silverTicket = 9;
    if (has_silverticket()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->silverticket());
    }

    // optional uint32 copperTicket = 10;
    if (has_copperticket()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->copperticket());
    }

    // optional uint64 honour = 11;
    if (has_honour()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->honour());
    }

  }
  // repeated .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 12;
  total_size += 1 * this->rolegembaggoods_size();
  for (int i = 0; i < this->rolegembaggoods_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->rolegembaggoods(i));
  }

  // repeated .sanguo.MsgGuaxiangGoods guaxiangGoods = 13;
  total_size += 1 * this->guaxianggoods_size();
  for (int i = 0; i < this->guaxianggoods_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->guaxianggoods(i));
  }

  // repeated .sanguo.MsgRoleBagGoods roleBagGoods = 14;
  total_size += 1 * this->rolebaggoods_size();
  for (int i = 0; i < this->rolebaggoods_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->rolebaggoods(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BuyGoodsResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BuyGoodsResponse*>(&from));
}

void BuyGoodsResponse::MergeFrom(const BuyGoodsResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  rolegembaggoods_.MergeFrom(from.rolegembaggoods_);
  guaxianggoods_.MergeFrom(from.guaxianggoods_);
  rolebaggoods_.MergeFrom(from.rolebaggoods_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_gold()) {
      set_gold(from.gold());
    }
    if (from.has_jade()) {
      set_jade(from.jade());
    }
    if (from.has_copper()) {
      set_copper(from.copper());
    }
    if (from.has_friendship()) {
      set_friendship(from.friendship());
    }
    if (from.has_subtype()) {
      set_subtype(from.subtype());
    }
    if (from.has_goldticket()) {
      set_goldticket(from.goldticket());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_silverticket()) {
      set_silverticket(from.silverticket());
    }
    if (from.has_copperticket()) {
      set_copperticket(from.copperticket());
    }
    if (from.has_honour()) {
      set_honour(from.honour());
    }
  }
}

void BuyGoodsResponse::CopyFrom(const BuyGoodsResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BuyGoodsResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;

  for (int i = 0; i < rolegembaggoods_size(); i++) {
    if (!this->rolegembaggoods(i).IsInitialized()) return false;
  }
  for (int i = 0; i < guaxianggoods_size(); i++) {
    if (!this->guaxianggoods(i).IsInitialized()) return false;
  }
  for (int i = 0; i < rolebaggoods_size(); i++) {
    if (!this->rolebaggoods(i).IsInitialized()) return false;
  }
  return true;
}

void BuyGoodsResponse::Swap(BuyGoodsResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(gold_, other->gold_);
    std::swap(jade_, other->jade_);
    std::swap(copper_, other->copper_);
    std::swap(friendship_, other->friendship_);
    std::swap(subtype_, other->subtype_);
    std::swap(goldticket_, other->goldticket_);
    std::swap(silverticket_, other->silverticket_);
    std::swap(copperticket_, other->copperticket_);
    std::swap(honour_, other->honour_);
    rolegembaggoods_.Swap(&other->rolegembaggoods_);
    guaxianggoods_.Swap(&other->guaxianggoods_);
    rolebaggoods_.Swap(&other->rolebaggoods_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string BuyGoodsResponse::GetTypeName() const {
  return "sanguo.BuyGoodsResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
