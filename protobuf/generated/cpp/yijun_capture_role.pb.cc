// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: yijun_capture_role.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "yijun_capture_role.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sanguo {

void protobuf_ShutdownFile_yijun_5fcapture_5frole_2eproto() {
  delete MsgYijunCaptureRole::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_yijun_5fcapture_5frole_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_yijun_5fcapture_5frole_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sanguo::protobuf_AddDesc_constants_2eproto();
  MsgYijunCaptureRole::default_instance_ = new MsgYijunCaptureRole();
  MsgYijunCaptureRole::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_yijun_5fcapture_5frole_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_yijun_5fcapture_5frole_2eproto_once_);
void protobuf_AddDesc_yijun_5fcapture_5frole_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_yijun_5fcapture_5frole_2eproto_once_,
                 &protobuf_AddDesc_yijun_5fcapture_5frole_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_yijun_5fcapture_5frole_2eproto {
  StaticDescriptorInitializer_yijun_5fcapture_5frole_2eproto() {
    protobuf_AddDesc_yijun_5fcapture_5frole_2eproto();
  }
} static_descriptor_initializer_yijun_5fcapture_5frole_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int MsgYijunCaptureRole::kRoleIDFieldNumber;
const int MsgYijunCaptureRole::kCaptureProtectedTimeFieldNumber;
const int MsgYijunCaptureRole::kCaptureNameFieldNumber;
const int MsgYijunCaptureRole::kYijunCaptureLastTimeFieldNumber;
const int MsgYijunCaptureRole::kProfessionFieldNumber;
const int MsgYijunCaptureRole::kLevelFieldNumber;
#endif  // !_MSC_VER

MsgYijunCaptureRole::MsgYijunCaptureRole()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void MsgYijunCaptureRole::InitAsDefaultInstance() {
}

MsgYijunCaptureRole::MsgYijunCaptureRole(const MsgYijunCaptureRole& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void MsgYijunCaptureRole::SharedCtor() {
  _cached_size_ = 0;
  roleid_ = GOOGLE_ULONGLONG(0);
  captureprotectedtime_ = 0u;
  capturename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  yijuncapturelasttime_ = GOOGLE_ULONGLONG(0);
  profession_ = 0u;
  level_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgYijunCaptureRole::~MsgYijunCaptureRole() {
  SharedDtor();
}

void MsgYijunCaptureRole::SharedDtor() {
  if (capturename_ != &::google::protobuf::internal::kEmptyString) {
    delete capturename_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MsgYijunCaptureRole::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgYijunCaptureRole& MsgYijunCaptureRole::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_yijun_5fcapture_5frole_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_yijun_5fcapture_5frole_2eproto();
#endif
  return *default_instance_;
}

MsgYijunCaptureRole* MsgYijunCaptureRole::default_instance_ = NULL;

MsgYijunCaptureRole* MsgYijunCaptureRole::New() const {
  return new MsgYijunCaptureRole;
}

void MsgYijunCaptureRole::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    roleid_ = GOOGLE_ULONGLONG(0);
    captureprotectedtime_ = 0u;
    if (has_capturename()) {
      if (capturename_ != &::google::protobuf::internal::kEmptyString) {
        capturename_->clear();
      }
    }
    yijuncapturelasttime_ = GOOGLE_ULONGLONG(0);
    profession_ = 0u;
    level_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool MsgYijunCaptureRole::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_captureProtectedTime;
        break;
      }

      // required uint32 captureProtectedTime = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_captureProtectedTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &captureprotectedtime_)));
          set_has_captureprotectedtime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_captureName;
        break;
      }

      // required string captureName = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_captureName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_capturename()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_yijunCaptureLastTime;
        break;
      }

      // required uint64 yijunCaptureLastTime = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_yijunCaptureLastTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &yijuncapturelasttime_)));
          set_has_yijuncapturelasttime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_profession;
        break;
      }

      // required uint32 profession = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_profession:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &profession_)));
          set_has_profession();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_level;
        break;
      }

      // required uint32 level = 6;
      case 6: {
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

void MsgYijunCaptureRole::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 roleID = 1;
  if (has_roleid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->roleid(), output);
  }

  // required uint32 captureProtectedTime = 2;
  if (has_captureprotectedtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->captureprotectedtime(), output);
  }

  // required string captureName = 3;
  if (has_capturename()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->capturename(), output);
  }

  // required uint64 yijunCaptureLastTime = 4;
  if (has_yijuncapturelasttime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->yijuncapturelasttime(), output);
  }

  // required uint32 profession = 5;
  if (has_profession()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->profession(), output);
  }

  // required uint32 level = 6;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->level(), output);
  }

}

int MsgYijunCaptureRole::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 roleID = 1;
    if (has_roleid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->roleid());
    }

    // required uint32 captureProtectedTime = 2;
    if (has_captureprotectedtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->captureprotectedtime());
    }

    // required string captureName = 3;
    if (has_capturename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->capturename());
    }

    // required uint64 yijunCaptureLastTime = 4;
    if (has_yijuncapturelasttime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->yijuncapturelasttime());
    }

    // required uint32 profession = 5;
    if (has_profession()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->profession());
    }

    // required uint32 level = 6;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgYijunCaptureRole::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgYijunCaptureRole*>(&from));
}

void MsgYijunCaptureRole::MergeFrom(const MsgYijunCaptureRole& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roleid()) {
      set_roleid(from.roleid());
    }
    if (from.has_captureprotectedtime()) {
      set_captureprotectedtime(from.captureprotectedtime());
    }
    if (from.has_capturename()) {
      set_capturename(from.capturename());
    }
    if (from.has_yijuncapturelasttime()) {
      set_yijuncapturelasttime(from.yijuncapturelasttime());
    }
    if (from.has_profession()) {
      set_profession(from.profession());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
  }
}

void MsgYijunCaptureRole::CopyFrom(const MsgYijunCaptureRole& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgYijunCaptureRole::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  return true;
}

void MsgYijunCaptureRole::Swap(MsgYijunCaptureRole* other) {
  if (other != this) {
    std::swap(roleid_, other->roleid_);
    std::swap(captureprotectedtime_, other->captureprotectedtime_);
    std::swap(capturename_, other->capturename_);
    std::swap(yijuncapturelasttime_, other->yijuncapturelasttime_);
    std::swap(profession_, other->profession_);
    std::swap(level_, other->level_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string MsgYijunCaptureRole::GetTypeName() const {
  return "sanguo.MsgYijunCaptureRole";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sanguo

// @@protoc_insertion_point(global_scope)
