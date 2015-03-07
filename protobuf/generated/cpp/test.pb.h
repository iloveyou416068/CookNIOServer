// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef PROTOBUF_test_2eproto__INCLUDED
#define PROTOBUF_test_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include "msg_id.pb.h"
// @@protoc_insertion_point(includes)

namespace cook {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_test_2eproto();
void protobuf_AssignDesc_test_2eproto();
void protobuf_ShutdownFile_test_2eproto();

class TestRequest;
class TestResponse;
class OuterTest;

// ===================================================================

class TestRequest : public ::google::protobuf::MessageLite {
 public:
  TestRequest();
  virtual ~TestRequest();

  TestRequest(const TestRequest& from);

  inline TestRequest& operator=(const TestRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const TestRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const TestRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(TestRequest* other);

  // implements Message ----------------------------------------------

  TestRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const TestRequest& from);
  void MergeFrom(const TestRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .cook.MsgID msgID = 1;
  inline bool has_msgid() const;
  inline void clear_msgid();
  static const int kMsgIDFieldNumber = 1;
  inline ::cook::MsgID msgid() const;
  inline void set_msgid(::cook::MsgID value);

  // optional int32 data1 = 2;
  inline bool has_data1() const;
  inline void clear_data1();
  static const int kData1FieldNumber = 2;
  inline ::google::protobuf::int32 data1() const;
  inline void set_data1(::google::protobuf::int32 value);

  // optional int32 data2 = 3;
  inline bool has_data2() const;
  inline void clear_data2();
  static const int kData2FieldNumber = 3;
  inline ::google::protobuf::int32 data2() const;
  inline void set_data2(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cook.TestRequest)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_data1();
  inline void clear_has_data1();
  inline void set_has_data2();
  inline void clear_has_data2();

  int msgid_;
  ::google::protobuf::int32 data1_;
  ::google::protobuf::int32 data2_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_test_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_test_2eproto();
  #endif
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static TestRequest* default_instance_;
};
// -------------------------------------------------------------------

class TestResponse : public ::google::protobuf::MessageLite {
 public:
  TestResponse();
  virtual ~TestResponse();

  TestResponse(const TestResponse& from);

  inline TestResponse& operator=(const TestResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const TestResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const TestResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(TestResponse* other);

  // implements Message ----------------------------------------------

  TestResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const TestResponse& from);
  void MergeFrom(const TestResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .cook.MsgID msgID = 1;
  inline bool has_msgid() const;
  inline void clear_msgid();
  static const int kMsgIDFieldNumber = 1;
  inline ::cook::MsgID msgid() const;
  inline void set_msgid(::cook::MsgID value);

  // optional int32 data1 = 2;
  inline bool has_data1() const;
  inline void clear_data1();
  static const int kData1FieldNumber = 2;
  inline ::google::protobuf::int32 data1() const;
  inline void set_data1(::google::protobuf::int32 value);

  // optional int32 data2 = 3;
  inline bool has_data2() const;
  inline void clear_data2();
  static const int kData2FieldNumber = 3;
  inline ::google::protobuf::int32 data2() const;
  inline void set_data2(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cook.TestResponse)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_data1();
  inline void clear_has_data1();
  inline void set_has_data2();
  inline void clear_has_data2();

  int msgid_;
  ::google::protobuf::int32 data1_;
  ::google::protobuf::int32 data2_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_test_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_test_2eproto();
  #endif
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static TestResponse* default_instance_;
};
// -------------------------------------------------------------------

class OuterTest : public ::google::protobuf::MessageLite {
 public:
  OuterTest();
  virtual ~OuterTest();

  OuterTest(const OuterTest& from);

  inline OuterTest& operator=(const OuterTest& from) {
    CopyFrom(from);
    return *this;
  }

  static const OuterTest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const OuterTest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(OuterTest* other);

  // implements Message ----------------------------------------------

  OuterTest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const OuterTest& from);
  void MergeFrom(const OuterTest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .cook.TestRequest request = 1;
  inline bool has_request() const;
  inline void clear_request();
  static const int kRequestFieldNumber = 1;
  inline const ::cook::TestRequest& request() const;
  inline ::cook::TestRequest* mutable_request();
  inline ::cook::TestRequest* release_request();
  inline void set_allocated_request(::cook::TestRequest* request);

  // @@protoc_insertion_point(class_scope:cook.OuterTest)
 private:
  inline void set_has_request();
  inline void clear_has_request();

  ::cook::TestRequest* request_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_test_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_test_2eproto();
  #endif
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static OuterTest* default_instance_;
};
// ===================================================================


// ===================================================================

// TestRequest

// required .cook.MsgID msgID = 1;
inline bool TestRequest::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestRequest::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestRequest::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestRequest::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::cook::MsgID TestRequest::msgid() const {
  return static_cast< ::cook::MsgID >(msgid_);
}
inline void TestRequest::set_msgid(::cook::MsgID value) {
  assert(::cook::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// optional int32 data1 = 2;
inline bool TestRequest::has_data1() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TestRequest::set_has_data1() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TestRequest::clear_has_data1() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TestRequest::clear_data1() {
  data1_ = 0;
  clear_has_data1();
}
inline ::google::protobuf::int32 TestRequest::data1() const {
  return data1_;
}
inline void TestRequest::set_data1(::google::protobuf::int32 value) {
  set_has_data1();
  data1_ = value;
}

// optional int32 data2 = 3;
inline bool TestRequest::has_data2() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TestRequest::set_has_data2() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TestRequest::clear_has_data2() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TestRequest::clear_data2() {
  data2_ = 0;
  clear_has_data2();
}
inline ::google::protobuf::int32 TestRequest::data2() const {
  return data2_;
}
inline void TestRequest::set_data2(::google::protobuf::int32 value) {
  set_has_data2();
  data2_ = value;
}

// -------------------------------------------------------------------

// TestResponse

// required .cook.MsgID msgID = 1;
inline bool TestResponse::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestResponse::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestResponse::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestResponse::clear_msgid() {
  msgid_ = 1;
  clear_has_msgid();
}
inline ::cook::MsgID TestResponse::msgid() const {
  return static_cast< ::cook::MsgID >(msgid_);
}
inline void TestResponse::set_msgid(::cook::MsgID value) {
  assert(::cook::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
}

// optional int32 data1 = 2;
inline bool TestResponse::has_data1() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TestResponse::set_has_data1() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TestResponse::clear_has_data1() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TestResponse::clear_data1() {
  data1_ = 0;
  clear_has_data1();
}
inline ::google::protobuf::int32 TestResponse::data1() const {
  return data1_;
}
inline void TestResponse::set_data1(::google::protobuf::int32 value) {
  set_has_data1();
  data1_ = value;
}

// optional int32 data2 = 3;
inline bool TestResponse::has_data2() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TestResponse::set_has_data2() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TestResponse::clear_has_data2() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TestResponse::clear_data2() {
  data2_ = 0;
  clear_has_data2();
}
inline ::google::protobuf::int32 TestResponse::data2() const {
  return data2_;
}
inline void TestResponse::set_data2(::google::protobuf::int32 value) {
  set_has_data2();
  data2_ = value;
}

// -------------------------------------------------------------------

// OuterTest

// optional .cook.TestRequest request = 1;
inline bool OuterTest::has_request() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OuterTest::set_has_request() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OuterTest::clear_has_request() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OuterTest::clear_request() {
  if (request_ != NULL) request_->::cook::TestRequest::Clear();
  clear_has_request();
}
inline const ::cook::TestRequest& OuterTest::request() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return request_ != NULL ? *request_ : *default_instance().request_;
#else
  return request_ != NULL ? *request_ : *default_instance_->request_;
#endif
}
inline ::cook::TestRequest* OuterTest::mutable_request() {
  set_has_request();
  if (request_ == NULL) request_ = new ::cook::TestRequest;
  return request_;
}
inline ::cook::TestRequest* OuterTest::release_request() {
  clear_has_request();
  ::cook::TestRequest* temp = request_;
  request_ = NULL;
  return temp;
}
inline void OuterTest::set_allocated_request(::cook::TestRequest* request) {
  delete request_;
  request_ = request;
  if (request) {
    set_has_request();
  } else {
    clear_has_request();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace cook

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_test_2eproto__INCLUDED
