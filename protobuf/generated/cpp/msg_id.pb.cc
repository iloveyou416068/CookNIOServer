// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_id.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg_id.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace cook {

void protobuf_ShutdownFile_msg_5fid_2eproto() {
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_msg_5fid_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_msg_5fid_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msg_5fid_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_msg_5fid_2eproto_once_);
void protobuf_AddDesc_msg_5fid_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_msg_5fid_2eproto_once_,
                 &protobuf_AddDesc_msg_5fid_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msg_5fid_2eproto {
  StaticDescriptorInitializer_msg_5fid_2eproto() {
    protobuf_AddDesc_msg_5fid_2eproto();
  }
} static_descriptor_initializer_msg_5fid_2eproto_;
#endif
bool MsgID_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace cook

// @@protoc_insertion_point(global_scope)
