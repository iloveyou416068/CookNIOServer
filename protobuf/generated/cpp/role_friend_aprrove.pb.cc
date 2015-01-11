// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: role_friend_aprrove.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "role_friend_aprrove.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_role_5ffriend_5faprrove_2eproto() {
  delete MsgRoleFriendAprrove::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_role_5ffriend_5faprrove_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_role_5ffriend_5faprrove_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_constants_2eproto();
  MsgRoleFriendAprrove::default_instance_ = new MsgRoleFriendAprrove();
  MsgRoleFriendAprrove::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_role_5ffriend_5faprrove_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_role_5ffriend_5faprrove_2eproto_once_);
void protobuf_AddDesc_role_5ffriend_5faprrove_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_role_5ffriend_5faprrove_2eproto_once_,
                 &protobuf_AddDesc_role_5ffriend_5faprrove_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_role_5ffriend_5faprrove_2eproto {
  StaticDescriptorInitializer_role_5ffriend_5faprrove_2eproto() {
    protobuf_AddDesc_role_5ffriend_5faprrove_2eproto();
  }
} static_descriptor_initializer_role_5ffriend_5faprrove_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int MsgRoleFriendAprrove::kRoleIDFieldNumber;
const int MsgRoleFriendAprrove::kRoleNameFieldNumber;
const int MsgRoleFriendAprrove::kLevelFieldNumber;
const int MsgRoleFriendAprrove::kProffesionFieldNumber;
#endif  // !_MSC_VER

MsgRoleFriendAprrove::MsgRoleFriendAprrove()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void MsgRoleFriendAprrove::InitAsDefaultInstance() {
}

MsgRoleFriendAprrove::MsgRoleFriendAprrove(const MsgRoleFriendAprrove& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void MsgRoleFriendAprrove::SharedCtor() {
  _cached_size_ = 0;
  roleid_ = GOOGLE_ULONGLONG(0);
  rolename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  level_ = 0u;
  proffesion_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgRoleFriendAprrove::~MsgRoleFriendAprrove() {
  SharedDtor();
}

void MsgRoleFriendAprrove::SharedDtor() {
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

void MsgRoleFriendAprrove::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgRoleFriendAprrove& MsgRoleFriendAprrove::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_role_5ffriend_5faprrove_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_role_5ffriend_5faprrove_2eproto();
#endif
  return *default_instance_;
}

MsgRoleFriendAprrove* MsgRoleFriendAprrove::default_instance_ = NULL;

MsgRoleFriendAprrove* MsgRoleFriendAprrove::New() const {
  return new MsgRoleFriendAprrove;
}

void MsgRoleFriendAprrove::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    roleid_ = GOOGLE_ULONGLONG(0);
    if (has_rolename()) {
      if (rolename_ != &::google::protobuf::internal::kEmptyString) {
        rolename_->clear();
      }
    }
    level_ = 0u;
    proffesion_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool MsgRoleFriendAprrove::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_level;
        break;
      }

      // required uint32 level = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_proffesion;
        break;
      }

      // required uint32 proffesion = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_proffesion:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &proffesion_)));
          set_has_proffesion();
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

void MsgRoleFriendAprrove::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 roleID = 1;
  if (has_roleid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->roleid(), output);
  }

  // required string roleName = 2;
  if (has_rolename()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->rolename(), output);
  }

  // required uint32 level = 3;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->level(), output);
  }

  // required uint32 proffesion = 4;
  if (has_proffesion()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->proffesion(), output);
  }

}

int MsgRoleFriendAprrove::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 roleID = 1;
    if (has_roleid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->roleid());
    }

    // required string roleName = 2;
    if (has_rolename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->rolename());
    }

    // required uint32 level = 3;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

    // required uint32 proffesion = 4;
    if (has_proffesion()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->proffesion());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgRoleFriendAprrove::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgRoleFriendAprrove*>(&from));
}

void MsgRoleFriendAprrove::MergeFrom(const MsgRoleFriendAprrove& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roleid()) {
      set_roleid(from.roleid());
    }
    if (from.has_rolename()) {
      set_rolename(from.rolename());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_proffesion()) {
      set_proffesion(from.proffesion());
    }
  }
}

void MsgRoleFriendAprrove::CopyFrom(const MsgRoleFriendAprrove& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgRoleFriendAprrove::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void MsgRoleFriendAprrove::Swap(MsgRoleFriendAprrove* other) {
  if (other != this) {
    std::swap(roleid_, other->roleid_);
    std::swap(rolename_, other->rolename_);
    std::swap(level_, other->level_);
    std::swap(proffesion_, other->proffesion_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string MsgRoleFriendAprrove::GetTypeName() const {
  return "sanguo.MsgRoleFriendAprrove";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
