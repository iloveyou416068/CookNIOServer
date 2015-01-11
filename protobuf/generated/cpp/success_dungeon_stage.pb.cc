// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: success_dungeon_stage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "success_dungeon_stage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_success_5fdungeon_5fstage_2eproto() {
  delete SuccessDungeonStageRequest::default_instance_;
  delete SuccessDungeonStageResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_success_5fdungeon_5fstage_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_success_5fdungeon_5fstage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_msg_5fid_2eproto();
  ::sanguo::protobuf_AddDesc_msg_5fstatus_5fcode_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fdungeon_5freward_2eproto();
  ::sanguo::protobuf_AddDesc_gamble_5fcard_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fgamble_5fcard_5freward_2eproto();
  ::sanguo::protobuf_AddDesc_role_5fbag_5fgoods_2eproto();
  SuccessDungeonStageRequest::default_instance_ = new SuccessDungeonStageRequest();
  SuccessDungeonStageResponse::default_instance_ = new SuccessDungeonStageResponse();
  SuccessDungeonStageRequest::default_instance_->InitAsDefaultInstance();
  SuccessDungeonStageResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_success_5fdungeon_5fstage_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_success_5fdungeon_5fstage_2eproto_once_);
void protobuf_AddDesc_success_5fdungeon_5fstage_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_success_5fdungeon_5fstage_2eproto_once_,
                 &protobuf_AddDesc_success_5fdungeon_5fstage_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_success_5fdungeon_5fstage_2eproto {
  StaticDescriptorInitializer_success_5fdungeon_5fstage_2eproto() {
    protobuf_AddDesc_success_5fdungeon_5fstage_2eproto();
  }
} static_descriptor_initializer_success_5fdungeon_5fstage_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int SuccessDungeonStageRequest::kMsgIDFieldNumber;
const int SuccessDungeonStageRequest::kStageIdFieldNumber;
const int SuccessDungeonStageRequest::kTypeFieldNumber;
const int SuccessDungeonStageRequest::kClearTimeFieldNumber;
const int SuccessDungeonStageRequest::kMaxBatterFieldNumber;
const int SuccessDungeonStageRequest::kLoseHPFieldNumber;
const int SuccessDungeonStageRequest::kReviveTimesFieldNumber;
const int SuccessDungeonStageRequest::kKillEnemyCountFieldNumber;
const int SuccessDungeonStageRequest::kPickCopperFieldNumber;
const int SuccessDungeonStageRequest::kPickHonourFieldNumber;
const int SuccessDungeonStageRequest::kPickGoldFieldNumber;
const int SuccessDungeonStageRequest::kRewardGoodsIdsFieldNumber;
#endif  // !_MSC_VER

SuccessDungeonStageRequest::SuccessDungeonStageRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SuccessDungeonStageRequest::InitAsDefaultInstance() {
}

SuccessDungeonStageRequest::SuccessDungeonStageRequest(const SuccessDungeonStageRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SuccessDungeonStageRequest::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  stageid_ = 0u;
  type_ = 0u;
  cleartime_ = 0u;
  maxbatter_ = 0u;
  losehp_ = 0;
  revivetimes_ = 0u;
  killenemycount_ = 0u;
  pickcopper_ = 0u;
  pickhonour_ = 0u;
  pickgold_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SuccessDungeonStageRequest::~SuccessDungeonStageRequest() {
  SharedDtor();
}

void SuccessDungeonStageRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SuccessDungeonStageRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SuccessDungeonStageRequest& SuccessDungeonStageRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_success_5fdungeon_5fstage_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_success_5fdungeon_5fstage_2eproto();
#endif
  return *default_instance_;
}

SuccessDungeonStageRequest* SuccessDungeonStageRequest::default_instance_ = NULL;

SuccessDungeonStageRequest* SuccessDungeonStageRequest::New() const {
  return new SuccessDungeonStageRequest;
}

void SuccessDungeonStageRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    stageid_ = 0u;
    type_ = 0u;
    cleartime_ = 0u;
    maxbatter_ = 0u;
    losehp_ = 0;
    revivetimes_ = 0u;
    killenemycount_ = 0u;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    pickcopper_ = 0u;
    pickhonour_ = 0u;
    pickgold_ = 0u;
  }
  rewardgoodsids_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SuccessDungeonStageRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_stageId;
        break;
      }

      // required uint32 stageId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_stageId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &stageid_)));
          set_has_stageid();
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
        if (input->ExpectTag(32)) goto parse_clearTime;
        break;
      }

      // required uint32 clearTime = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_clearTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cleartime_)));
          set_has_cleartime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_maxBatter;
        break;
      }

      // required uint32 maxBatter = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_maxBatter:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &maxbatter_)));
          set_has_maxbatter();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(53)) goto parse_loseHP;
        break;
      }

      // required float loseHP = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_loseHP:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &losehp_)));
          set_has_losehp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_reviveTimes;
        break;
      }

      // required uint32 reviveTimes = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_reviveTimes:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &revivetimes_)));
          set_has_revivetimes();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_killEnemyCount;
        break;
      }

      // required uint32 killEnemyCount = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_killEnemyCount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &killenemycount_)));
          set_has_killenemycount();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_pickCopper;
        break;
      }

      // required uint32 pickCopper = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_pickCopper:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &pickcopper_)));
          set_has_pickcopper();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_pickHonour;
        break;
      }

      // required uint32 pickHonour = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_pickHonour:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &pickhonour_)));
          set_has_pickhonour();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_pickGold;
        break;
      }

      // required uint32 pickGold = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_pickGold:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &pickgold_)));
          set_has_pickgold();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_rewardGoodsIds;
        break;
      }

      // repeated uint32 rewardGoodsIds = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rewardGoodsIds:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 96, input, this->mutable_rewardgoodsids())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_rewardgoodsids())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_rewardGoodsIds;
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

void SuccessDungeonStageRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .sanguo.MsgID msgID = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // required uint32 stageId = 2;
  if (has_stageid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->stageid(), output);
  }

  // required uint32 type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->type(), output);
  }

  // required uint32 clearTime = 4;
  if (has_cleartime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->cleartime(), output);
  }

  // required uint32 maxBatter = 5;
  if (has_maxbatter()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->maxbatter(), output);
  }

  // required float loseHP = 6;
  if (has_losehp()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->losehp(), output);
  }

  // required uint32 reviveTimes = 7;
  if (has_revivetimes()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->revivetimes(), output);
  }

  // required uint32 killEnemyCount = 8;
  if (has_killenemycount()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->killenemycount(), output);
  }

  // required uint32 pickCopper = 9;
  if (has_pickcopper()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->pickcopper(), output);
  }

  // required uint32 pickHonour = 10;
  if (has_pickhonour()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->pickhonour(), output);
  }

  // required uint32 pickGold = 11;
  if (has_pickgold()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->pickgold(), output);
  }

  // repeated uint32 rewardGoodsIds = 12;
  for (int i = 0; i < this->rewardgoodsids_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      12, this->rewardgoodsids(i), output);
  }

}

int SuccessDungeonStageRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sanguo.MsgID msgID = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // required uint32 stageId = 2;
    if (has_stageid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->stageid());
    }

    // required uint32 type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type());
    }

    // required uint32 clearTime = 4;
    if (has_cleartime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cleartime());
    }

    // required uint32 maxBatter = 5;
    if (has_maxbatter()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->maxbatter());
    }

    // required float loseHP = 6;
    if (has_losehp()) {
      total_size += 1 + 4;
    }

    // required uint32 reviveTimes = 7;
    if (has_revivetimes()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->revivetimes());
    }

    // required uint32 killEnemyCount = 8;
    if (has_killenemycount()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->killenemycount());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required uint32 pickCopper = 9;
    if (has_pickcopper()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->pickcopper());
    }

    // required uint32 pickHonour = 10;
    if (has_pickhonour()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->pickhonour());
    }

    // required uint32 pickGold = 11;
    if (has_pickgold()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->pickgold());
    }

  }
  // repeated uint32 rewardGoodsIds = 12;
  {
    int data_size = 0;
    for (int i = 0; i < this->rewardgoodsids_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->rewardgoodsids(i));
    }
    total_size += 1 * this->rewardgoodsids_size() + data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SuccessDungeonStageRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SuccessDungeonStageRequest*>(&from));
}

void SuccessDungeonStageRequest::MergeFrom(const SuccessDungeonStageRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  rewardgoodsids_.MergeFrom(from.rewardgoodsids_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_stageid()) {
      set_stageid(from.stageid());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_cleartime()) {
      set_cleartime(from.cleartime());
    }
    if (from.has_maxbatter()) {
      set_maxbatter(from.maxbatter());
    }
    if (from.has_losehp()) {
      set_losehp(from.losehp());
    }
    if (from.has_revivetimes()) {
      set_revivetimes(from.revivetimes());
    }
    if (from.has_killenemycount()) {
      set_killenemycount(from.killenemycount());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_pickcopper()) {
      set_pickcopper(from.pickcopper());
    }
    if (from.has_pickhonour()) {
      set_pickhonour(from.pickhonour());
    }
    if (from.has_pickgold()) {
      set_pickgold(from.pickgold());
    }
  }
}

void SuccessDungeonStageRequest::CopyFrom(const SuccessDungeonStageRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SuccessDungeonStageRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x000007ff) != 0x000007ff) return false;

  return true;
}

void SuccessDungeonStageRequest::Swap(SuccessDungeonStageRequest* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(stageid_, other->stageid_);
    std::swap(type_, other->type_);
    std::swap(cleartime_, other->cleartime_);
    std::swap(maxbatter_, other->maxbatter_);
    std::swap(losehp_, other->losehp_);
    std::swap(revivetimes_, other->revivetimes_);
    std::swap(killenemycount_, other->killenemycount_);
    std::swap(pickcopper_, other->pickcopper_);
    std::swap(pickhonour_, other->pickhonour_);
    std::swap(pickgold_, other->pickgold_);
    rewardgoodsids_.Swap(&other->rewardgoodsids_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SuccessDungeonStageRequest::GetTypeName() const {
  return "sanguo.SuccessDungeonStageRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int SuccessDungeonStageResponse::kMsgIDFieldNumber;
const int SuccessDungeonStageResponse::kStatusFieldNumber;
const int SuccessDungeonStageResponse::kRoleRemainPowerFieldNumber;
const int SuccessDungeonStageResponse::kDungeonRewardFieldNumber;
const int SuccessDungeonStageResponse::kGambleRewardFieldNumber;
const int SuccessDungeonStageResponse::kGambleCardsFieldNumber;
const int SuccessDungeonStageResponse::kRandomDropRewardsFieldNumber;
#endif  // !_MSC_VER

SuccessDungeonStageResponse::SuccessDungeonStageResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SuccessDungeonStageResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  dungeonreward_ = const_cast< ::sanguo::MsgDungeonReward*>(
      ::sanguo::MsgDungeonReward::internal_default_instance());
#else
  dungeonreward_ = const_cast< ::sanguo::MsgDungeonReward*>(&::sanguo::MsgDungeonReward::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  gamblereward_ = const_cast< ::sanguo::MsgGambleCardReward*>(
      ::sanguo::MsgGambleCardReward::internal_default_instance());
#else
  gamblereward_ = const_cast< ::sanguo::MsgGambleCardReward*>(&::sanguo::MsgGambleCardReward::default_instance());
#endif
}

SuccessDungeonStageResponse::SuccessDungeonStageResponse(const SuccessDungeonStageResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SuccessDungeonStageResponse::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 1;
  status_ = 0;
  roleremainpower_ = 0u;
  dungeonreward_ = NULL;
  gamblereward_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SuccessDungeonStageResponse::~SuccessDungeonStageResponse() {
  SharedDtor();
}

void SuccessDungeonStageResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete dungeonreward_;
    delete gamblereward_;
  }
}

void SuccessDungeonStageResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SuccessDungeonStageResponse& SuccessDungeonStageResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_success_5fdungeon_5fstage_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_success_5fdungeon_5fstage_2eproto();
#endif
  return *default_instance_;
}

SuccessDungeonStageResponse* SuccessDungeonStageResponse::default_instance_ = NULL;

SuccessDungeonStageResponse* SuccessDungeonStageResponse::New() const {
  return new SuccessDungeonStageResponse;
}

void SuccessDungeonStageResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgid_ = 1;
    status_ = 0;
    roleremainpower_ = 0u;
    if (has_dungeonreward()) {
      if (dungeonreward_ != NULL) dungeonreward_->::sanguo::MsgDungeonReward::Clear();
    }
    if (has_gamblereward()) {
      if (gamblereward_ != NULL) gamblereward_->::sanguo::MsgGambleCardReward::Clear();
    }
  }
  gamblecards_.Clear();
  randomdroprewards_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SuccessDungeonStageResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_roleRemainPower;
        break;
      }

      // optional uint32 roleRemainPower = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_roleRemainPower:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &roleremainpower_)));
          set_has_roleremainpower();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_dungeonReward;
        break;
      }

      // optional .sanguo.MsgDungeonReward dungeonReward = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_dungeonReward:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_dungeonreward()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_gambleReward;
        break;
      }

      // optional .sanguo.MsgGambleCardReward gambleReward = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_gambleReward:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_gamblereward()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_gambleCards;
        break;
      }

      // repeated .sanguo.MsgGambleCardItem gambleCards = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_gambleCards:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_gamblecards()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_gambleCards;
        if (input->ExpectTag(58)) goto parse_randomDropRewards;
        break;
      }

      // repeated .sanguo.MsgRoleBagGoods randomDropRewards = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_randomDropRewards:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_randomdroprewards()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_randomDropRewards;
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

void SuccessDungeonStageResponse::SerializeWithCachedSizes(
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

  // optional uint32 roleRemainPower = 3;
  if (has_roleremainpower()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->roleremainpower(), output);
  }

  // optional .sanguo.MsgDungeonReward dungeonReward = 4;
  if (has_dungeonreward()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->dungeonreward(), output);
  }

  // optional .sanguo.MsgGambleCardReward gambleReward = 5;
  if (has_gamblereward()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      5, this->gamblereward(), output);
  }

  // repeated .sanguo.MsgGambleCardItem gambleCards = 6;
  for (int i = 0; i < this->gamblecards_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      6, this->gamblecards(i), output);
  }

  // repeated .sanguo.MsgRoleBagGoods randomDropRewards = 7;
  for (int i = 0; i < this->randomdroprewards_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      7, this->randomdroprewards(i), output);
  }

}

int SuccessDungeonStageResponse::ByteSize() const {
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

    // optional uint32 roleRemainPower = 3;
    if (has_roleremainpower()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->roleremainpower());
    }

    // optional .sanguo.MsgDungeonReward dungeonReward = 4;
    if (has_dungeonreward()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->dungeonreward());
    }

    // optional .sanguo.MsgGambleCardReward gambleReward = 5;
    if (has_gamblereward()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->gamblereward());
    }

  }
  // repeated .sanguo.MsgGambleCardItem gambleCards = 6;
  total_size += 1 * this->gamblecards_size();
  for (int i = 0; i < this->gamblecards_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->gamblecards(i));
  }

  // repeated .sanguo.MsgRoleBagGoods randomDropRewards = 7;
  total_size += 1 * this->randomdroprewards_size();
  for (int i = 0; i < this->randomdroprewards_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->randomdroprewards(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SuccessDungeonStageResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SuccessDungeonStageResponse*>(&from));
}

void SuccessDungeonStageResponse::MergeFrom(const SuccessDungeonStageResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  gamblecards_.MergeFrom(from.gamblecards_);
  randomdroprewards_.MergeFrom(from.randomdroprewards_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_roleremainpower()) {
      set_roleremainpower(from.roleremainpower());
    }
    if (from.has_dungeonreward()) {
      mutable_dungeonreward()->::sanguo::MsgDungeonReward::MergeFrom(from.dungeonreward());
    }
    if (from.has_gamblereward()) {
      mutable_gamblereward()->::sanguo::MsgGambleCardReward::MergeFrom(from.gamblereward());
    }
  }
}

void SuccessDungeonStageResponse::CopyFrom(const SuccessDungeonStageResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SuccessDungeonStageResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_gamblereward()) {
    if (!this->gamblereward().IsInitialized()) return false;
  }
  for (int i = 0; i < gamblecards_size(); i++) {
    if (!this->gamblecards(i).IsInitialized()) return false;
  }
  for (int i = 0; i < randomdroprewards_size(); i++) {
    if (!this->randomdroprewards(i).IsInitialized()) return false;
  }
  return true;
}

void SuccessDungeonStageResponse::Swap(SuccessDungeonStageResponse* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(status_, other->status_);
    std::swap(roleremainpower_, other->roleremainpower_);
    std::swap(dungeonreward_, other->dungeonreward_);
    std::swap(gamblereward_, other->gamblereward_);
    gamblecards_.Swap(&other->gamblecards_);
    randomdroprewards_.Swap(&other->randomdroprewards_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SuccessDungeonStageResponse::GetTypeName() const {
  return "sanguo.SuccessDungeonStageResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
