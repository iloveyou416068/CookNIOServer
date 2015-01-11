// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server_info.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "server_info.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_server_5finfo_2eproto() {
  delete MsgServerInfoData::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_server_5finfo_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_server_5finfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_constants_2eproto();
  MsgServerInfoData::default_instance_ = new MsgServerInfoData();
  MsgServerInfoData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_server_5finfo_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_server_5finfo_2eproto_once_);
void protobuf_AddDesc_server_5finfo_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_server_5finfo_2eproto_once_,
                 &protobuf_AddDesc_server_5finfo_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_server_5finfo_2eproto {
  StaticDescriptorInitializer_server_5finfo_2eproto() {
    protobuf_AddDesc_server_5finfo_2eproto();
  }
} static_descriptor_initializer_server_5finfo_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int MsgServerInfoData::kServerIDFieldNumber;
const int MsgServerInfoData::kServerIPFieldNumber;
const int MsgServerInfoData::kServerPortFieldNumber;
const int MsgServerInfoData::kServerNameFieldNumber;
const int MsgServerInfoData::kRoleCountFieldNumber;
const int MsgServerInfoData::kStatusFieldNumber;
#endif  // !_MSC_VER

MsgServerInfoData::MsgServerInfoData()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void MsgServerInfoData::InitAsDefaultInstance() {
}

MsgServerInfoData::MsgServerInfoData(const MsgServerInfoData& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void MsgServerInfoData::SharedCtor() {
  _cached_size_ = 0;
  serverid_ = 0u;
  serverip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  serverport_ = 0u;
  servername_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  rolecount_ = 0u;
  status_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgServerInfoData::~MsgServerInfoData() {
  SharedDtor();
}

void MsgServerInfoData::SharedDtor() {
  if (serverip_ != &::google::protobuf::internal::kEmptyString) {
    delete serverip_;
  }
  if (servername_ != &::google::protobuf::internal::kEmptyString) {
    delete servername_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MsgServerInfoData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgServerInfoData& MsgServerInfoData::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_server_5finfo_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_server_5finfo_2eproto();
#endif
  return *default_instance_;
}

MsgServerInfoData* MsgServerInfoData::default_instance_ = NULL;

MsgServerInfoData* MsgServerInfoData::New() const {
  return new MsgServerInfoData;
}

void MsgServerInfoData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    serverid_ = 0u;
    if (has_serverip()) {
      if (serverip_ != &::google::protobuf::internal::kEmptyString) {
        serverip_->clear();
      }
    }
    serverport_ = 0u;
    if (has_servername()) {
      if (servername_ != &::google::protobuf::internal::kEmptyString) {
        servername_->clear();
      }
    }
    rolecount_ = 0u;
    status_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool MsgServerInfoData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 serverID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &serverid_)));
          set_has_serverid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_serverIP;
        break;
      }

      // required string serverIP = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_serverIP:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_serverip()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_serverPort;
        break;
      }

      // required uint32 serverPort = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_serverPort:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &serverport_)));
          set_has_serverport();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_serverName;
        break;
      }

      // required string serverName = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_serverName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_servername()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_roleCount;
        break;
      }

      // required uint32 roleCount = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_roleCount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rolecount_)));
          set_has_rolecount();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_status;
        break;
      }

      // required uint32 status = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_status:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &status_)));
          set_has_status();
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

void MsgServerInfoData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 serverID = 1;
  if (has_serverid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->serverid(), output);
  }

  // required string serverIP = 2;
  if (has_serverip()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->serverip(), output);
  }

  // required uint32 serverPort = 3;
  if (has_serverport()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->serverport(), output);
  }

  // required string serverName = 4;
  if (has_servername()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->servername(), output);
  }

  // required uint32 roleCount = 5;
  if (has_rolecount()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->rolecount(), output);
  }

  // required uint32 status = 6;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->status(), output);
  }

}

int MsgServerInfoData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 serverID = 1;
    if (has_serverid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->serverid());
    }

    // required string serverIP = 2;
    if (has_serverip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->serverip());
    }

    // required uint32 serverPort = 3;
    if (has_serverport()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->serverport());
    }

    // required string serverName = 4;
    if (has_servername()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->servername());
    }

    // required uint32 roleCount = 5;
    if (has_rolecount()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->rolecount());
    }

    // required uint32 status = 6;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->status());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgServerInfoData::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgServerInfoData*>(&from));
}

void MsgServerInfoData::MergeFrom(const MsgServerInfoData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_serverid()) {
      set_serverid(from.serverid());
    }
    if (from.has_serverip()) {
      set_serverip(from.serverip());
    }
    if (from.has_serverport()) {
      set_serverport(from.serverport());
    }
    if (from.has_servername()) {
      set_servername(from.servername());
    }
    if (from.has_rolecount()) {
      set_rolecount(from.rolecount());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
  }
}

void MsgServerInfoData::CopyFrom(const MsgServerInfoData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgServerInfoData::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  return true;
}

void MsgServerInfoData::Swap(MsgServerInfoData* other) {
  if (other != this) {
    std::swap(serverid_, other->serverid_);
    std::swap(serverip_, other->serverip_);
    std::swap(serverport_, other->serverport_);
    std::swap(servername_, other->servername_);
    std::swap(rolecount_, other->rolecount_);
    std::swap(status_, other->status_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string MsgServerInfoData::GetTypeName() const {
  return "sanguo.MsgServerInfoData";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
