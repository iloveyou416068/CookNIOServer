// Generated by machine.  DO NOT EDIT!

#ifndef Sanguo_proto_helper_h
#define Sanguo_proto_helper_h

#include <google/protobuf/message_lite.h>
#include "cocos2d.h"
#include "proto_messages.h"

using namespace std;
using namespace cocos2d;
using namespace google::protobuf;
using namespace sanguo;

typedef int32 sint32;
typedef int64 sint64;

MessageLite* createMsg(int msgId);
MessageLite* jsonToMsg(int msgId, CCDictionary *json);
CCDictionary* msgToJson(int msgId, MessageLite *msg);

// Request
MessagerRequest* jsonToMsg_MessagerRequest(CCDictionary *json);
// Response
CCDictionary* msgToJson_MessagerResponse(const MessagerResponse *msg);
// DTO

#endif
