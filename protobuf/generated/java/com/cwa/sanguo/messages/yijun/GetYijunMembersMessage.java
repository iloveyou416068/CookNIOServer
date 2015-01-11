// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_yijun_members.proto

package com.cwa.sanguo.messages.yijun;

public final class GetYijunMembersMessage {
  private GetYijunMembersMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface GetYijunMembersRequestOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {

    // required .sanguo.MsgID msgID = 1;
    /**
     * <code>required .sanguo.MsgID msgID = 1;</code>
     */
    boolean hasMsgID();
    /**
     * <code>required .sanguo.MsgID msgID = 1;</code>
     */
    com.cwa.sanguo.messages.MsgId.MsgID getMsgID();
  }
  /**
   * Protobuf type {@code sanguo.GetYijunMembersRequest}
   *
   * <pre>
   * 获得义军成员信息
   * </pre>
   */
  public static final class GetYijunMembersRequest extends
      com.google.protobuf.GeneratedMessageLite
      implements GetYijunMembersRequestOrBuilder {
    // Use GetYijunMembersRequest.newBuilder() to construct.
    private GetYijunMembersRequest(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private GetYijunMembersRequest(boolean noInit) {}

    private static final GetYijunMembersRequest defaultInstance;
    public static GetYijunMembersRequest getDefaultInstance() {
      return defaultInstance;
    }

    public GetYijunMembersRequest getDefaultInstanceForType() {
      return defaultInstance;
    }

    private GetYijunMembersRequest(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      initFields();
      int mutable_bitField0_ = 0;
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownField(input,
                                     extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {
              int rawValue = input.readEnum();
              com.cwa.sanguo.messages.MsgId.MsgID value = com.cwa.sanguo.messages.MsgId.MsgID.valueOf(rawValue);
              if (value != null) {
                bitField0_ |= 0x00000001;
                msgID_ = value;
              }
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e.getMessage()).setUnfinishedMessage(this);
      } finally {
        makeExtensionsImmutable();
      }
    }
    public static com.google.protobuf.Parser<GetYijunMembersRequest> PARSER =
        new com.google.protobuf.AbstractParser<GetYijunMembersRequest>() {
      public GetYijunMembersRequest parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new GetYijunMembersRequest(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<GetYijunMembersRequest> getParserForType() {
      return PARSER;
    }

    private int bitField0_;
    // required .sanguo.MsgID msgID = 1;
    public static final int MSGID_FIELD_NUMBER = 1;
    private com.cwa.sanguo.messages.MsgId.MsgID msgID_;
    /**
     * <code>required .sanguo.MsgID msgID = 1;</code>
     */
    public boolean hasMsgID() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required .sanguo.MsgID msgID = 1;</code>
     */
    public com.cwa.sanguo.messages.MsgId.MsgID getMsgID() {
      return msgID_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasMsgID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeEnum(1, msgID_.getNumber());
      }
    }

    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(1, msgID_.getNumber());
      }
      memoizedSerializedSize = size;
      return size;
    }

    private static final long serialVersionUID = 0L;
    @java.lang.Override
    protected java.lang.Object writeReplace()
        throws java.io.ObjectStreamException {
      return super.writeReplace();
    }

    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.GetYijunMembersRequest}
     *
     * <pre>
     * 获得义军成员信息
     * </pre>
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest, Builder>
        implements com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequestOrBuilder {
      // Construct using com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private void maybeForceBuilderInitialization() {
      }
      private static Builder create() {
        return new Builder();
      }

      public Builder clear() {
        super.clear();
        msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
        bitField0_ = (bitField0_ & ~0x00000001);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest build() {
        com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest buildPartial() {
        com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest result = new com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.msgID_ = msgID_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest other) {
        if (other == com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasMsgID()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersRequest) e.getUnfinishedMessage();
          throw e;
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      // required .sanguo.MsgID msgID = 1;
      private com.cwa.sanguo.messages.MsgId.MsgID msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      /**
       * <code>required .sanguo.MsgID msgID = 1;</code>
       */
      public boolean hasMsgID() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>required .sanguo.MsgID msgID = 1;</code>
       */
      public com.cwa.sanguo.messages.MsgId.MsgID getMsgID() {
        return msgID_;
      }
      /**
       * <code>required .sanguo.MsgID msgID = 1;</code>
       */
      public Builder setMsgID(com.cwa.sanguo.messages.MsgId.MsgID value) {
        if (value == null) {
          throw new NullPointerException();
        }
        bitField0_ |= 0x00000001;
        msgID_ = value;
        
        return this;
      }
      /**
       * <code>required .sanguo.MsgID msgID = 1;</code>
       */
      public Builder clearMsgID() {
        bitField0_ = (bitField0_ & ~0x00000001);
        msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.GetYijunMembersRequest)
    }

    static {
      defaultInstance = new GetYijunMembersRequest(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.GetYijunMembersRequest)
  }

  public interface GetYijunMembersResponseOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {

    // required .sanguo.MsgID msgID = 1;
    /**
     * <code>required .sanguo.MsgID msgID = 1;</code>
     */
    boolean hasMsgID();
    /**
     * <code>required .sanguo.MsgID msgID = 1;</code>
     */
    com.cwa.sanguo.messages.MsgId.MsgID getMsgID();

    // required .sanguo.StatusCode status = 2;
    /**
     * <code>required .sanguo.StatusCode status = 2;</code>
     */
    boolean hasStatus();
    /**
     * <code>required .sanguo.StatusCode status = 2;</code>
     */
    com.cwa.sanguo.messages.MsgStatusCode.StatusCode getStatus();

    // repeated .sanguo.MsgYijunMember member = 3;
    /**
     * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
     */
    java.util.List<com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember> 
        getMemberList();
    /**
     * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
     */
    com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember getMember(int index);
    /**
     * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
     */
    int getMemberCount();
  }
  /**
   * Protobuf type {@code sanguo.GetYijunMembersResponse}
   */
  public static final class GetYijunMembersResponse extends
      com.google.protobuf.GeneratedMessageLite
      implements GetYijunMembersResponseOrBuilder {
    // Use GetYijunMembersResponse.newBuilder() to construct.
    private GetYijunMembersResponse(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private GetYijunMembersResponse(boolean noInit) {}

    private static final GetYijunMembersResponse defaultInstance;
    public static GetYijunMembersResponse getDefaultInstance() {
      return defaultInstance;
    }

    public GetYijunMembersResponse getDefaultInstanceForType() {
      return defaultInstance;
    }

    private GetYijunMembersResponse(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      initFields();
      int mutable_bitField0_ = 0;
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownField(input,
                                     extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {
              int rawValue = input.readEnum();
              com.cwa.sanguo.messages.MsgId.MsgID value = com.cwa.sanguo.messages.MsgId.MsgID.valueOf(rawValue);
              if (value != null) {
                bitField0_ |= 0x00000001;
                msgID_ = value;
              }
              break;
            }
            case 16: {
              int rawValue = input.readEnum();
              com.cwa.sanguo.messages.MsgStatusCode.StatusCode value = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.valueOf(rawValue);
              if (value != null) {
                bitField0_ |= 0x00000002;
                status_ = value;
              }
              break;
            }
            case 26: {
              if (!((mutable_bitField0_ & 0x00000004) == 0x00000004)) {
                member_ = new java.util.ArrayList<com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember>();
                mutable_bitField0_ |= 0x00000004;
              }
              member_.add(input.readMessage(com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember.PARSER, extensionRegistry));
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e.getMessage()).setUnfinishedMessage(this);
      } finally {
        if (((mutable_bitField0_ & 0x00000004) == 0x00000004)) {
          member_ = java.util.Collections.unmodifiableList(member_);
        }
        makeExtensionsImmutable();
      }
    }
    public static com.google.protobuf.Parser<GetYijunMembersResponse> PARSER =
        new com.google.protobuf.AbstractParser<GetYijunMembersResponse>() {
      public GetYijunMembersResponse parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new GetYijunMembersResponse(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<GetYijunMembersResponse> getParserForType() {
      return PARSER;
    }

    private int bitField0_;
    // required .sanguo.MsgID msgID = 1;
    public static final int MSGID_FIELD_NUMBER = 1;
    private com.cwa.sanguo.messages.MsgId.MsgID msgID_;
    /**
     * <code>required .sanguo.MsgID msgID = 1;</code>
     */
    public boolean hasMsgID() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required .sanguo.MsgID msgID = 1;</code>
     */
    public com.cwa.sanguo.messages.MsgId.MsgID getMsgID() {
      return msgID_;
    }

    // required .sanguo.StatusCode status = 2;
    public static final int STATUS_FIELD_NUMBER = 2;
    private com.cwa.sanguo.messages.MsgStatusCode.StatusCode status_;
    /**
     * <code>required .sanguo.StatusCode status = 2;</code>
     */
    public boolean hasStatus() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required .sanguo.StatusCode status = 2;</code>
     */
    public com.cwa.sanguo.messages.MsgStatusCode.StatusCode getStatus() {
      return status_;
    }

    // repeated .sanguo.MsgYijunMember member = 3;
    public static final int MEMBER_FIELD_NUMBER = 3;
    private java.util.List<com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember> member_;
    /**
     * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
     */
    public java.util.List<com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember> getMemberList() {
      return member_;
    }
    /**
     * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
     */
    public java.util.List<? extends com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMemberOrBuilder> 
        getMemberOrBuilderList() {
      return member_;
    }
    /**
     * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
     */
    public int getMemberCount() {
      return member_.size();
    }
    /**
     * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
     */
    public com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember getMember(int index) {
      return member_.get(index);
    }
    /**
     * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
     */
    public com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMemberOrBuilder getMemberOrBuilder(
        int index) {
      return member_.get(index);
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      status_ = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.OK;
      member_ = java.util.Collections.emptyList();
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasMsgID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasStatus()) {
        memoizedIsInitialized = 0;
        return false;
      }
      for (int i = 0; i < getMemberCount(); i++) {
        if (!getMember(i).isInitialized()) {
          memoizedIsInitialized = 0;
          return false;
        }
      }
      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeEnum(1, msgID_.getNumber());
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeEnum(2, status_.getNumber());
      }
      for (int i = 0; i < member_.size(); i++) {
        output.writeMessage(3, member_.get(i));
      }
    }

    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(1, msgID_.getNumber());
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(2, status_.getNumber());
      }
      for (int i = 0; i < member_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(3, member_.get(i));
      }
      memoizedSerializedSize = size;
      return size;
    }

    private static final long serialVersionUID = 0L;
    @java.lang.Override
    protected java.lang.Object writeReplace()
        throws java.io.ObjectStreamException {
      return super.writeReplace();
    }

    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.GetYijunMembersResponse}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse, Builder>
        implements com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponseOrBuilder {
      // Construct using com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private void maybeForceBuilderInitialization() {
      }
      private static Builder create() {
        return new Builder();
      }

      public Builder clear() {
        super.clear();
        msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
        bitField0_ = (bitField0_ & ~0x00000001);
        status_ = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.OK;
        bitField0_ = (bitField0_ & ~0x00000002);
        member_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse build() {
        com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse buildPartial() {
        com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse result = new com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.msgID_ = msgID_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.status_ = status_;
        if (((bitField0_ & 0x00000004) == 0x00000004)) {
          member_ = java.util.Collections.unmodifiableList(member_);
          bitField0_ = (bitField0_ & ~0x00000004);
        }
        result.member_ = member_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse other) {
        if (other == com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasStatus()) {
          setStatus(other.getStatus());
        }
        if (!other.member_.isEmpty()) {
          if (member_.isEmpty()) {
            member_ = other.member_;
            bitField0_ = (bitField0_ & ~0x00000004);
          } else {
            ensureMemberIsMutable();
            member_.addAll(other.member_);
          }
          
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasMsgID()) {
          
          return false;
        }
        if (!hasStatus()) {
          
          return false;
        }
        for (int i = 0; i < getMemberCount(); i++) {
          if (!getMember(i).isInitialized()) {
            
            return false;
          }
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.yijun.GetYijunMembersMessage.GetYijunMembersResponse) e.getUnfinishedMessage();
          throw e;
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      // required .sanguo.MsgID msgID = 1;
      private com.cwa.sanguo.messages.MsgId.MsgID msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      /**
       * <code>required .sanguo.MsgID msgID = 1;</code>
       */
      public boolean hasMsgID() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>required .sanguo.MsgID msgID = 1;</code>
       */
      public com.cwa.sanguo.messages.MsgId.MsgID getMsgID() {
        return msgID_;
      }
      /**
       * <code>required .sanguo.MsgID msgID = 1;</code>
       */
      public Builder setMsgID(com.cwa.sanguo.messages.MsgId.MsgID value) {
        if (value == null) {
          throw new NullPointerException();
        }
        bitField0_ |= 0x00000001;
        msgID_ = value;
        
        return this;
      }
      /**
       * <code>required .sanguo.MsgID msgID = 1;</code>
       */
      public Builder clearMsgID() {
        bitField0_ = (bitField0_ & ~0x00000001);
        msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
        
        return this;
      }

      // required .sanguo.StatusCode status = 2;
      private com.cwa.sanguo.messages.MsgStatusCode.StatusCode status_ = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.OK;
      /**
       * <code>required .sanguo.StatusCode status = 2;</code>
       */
      public boolean hasStatus() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required .sanguo.StatusCode status = 2;</code>
       */
      public com.cwa.sanguo.messages.MsgStatusCode.StatusCode getStatus() {
        return status_;
      }
      /**
       * <code>required .sanguo.StatusCode status = 2;</code>
       */
      public Builder setStatus(com.cwa.sanguo.messages.MsgStatusCode.StatusCode value) {
        if (value == null) {
          throw new NullPointerException();
        }
        bitField0_ |= 0x00000002;
        status_ = value;
        
        return this;
      }
      /**
       * <code>required .sanguo.StatusCode status = 2;</code>
       */
      public Builder clearStatus() {
        bitField0_ = (bitField0_ & ~0x00000002);
        status_ = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.OK;
        
        return this;
      }

      // repeated .sanguo.MsgYijunMember member = 3;
      private java.util.List<com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember> member_ =
        java.util.Collections.emptyList();
      private void ensureMemberIsMutable() {
        if (!((bitField0_ & 0x00000004) == 0x00000004)) {
          member_ = new java.util.ArrayList<com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember>(member_);
          bitField0_ |= 0x00000004;
         }
      }

      /**
       * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
       */
      public java.util.List<com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember> getMemberList() {
        return java.util.Collections.unmodifiableList(member_);
      }
      /**
       * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
       */
      public int getMemberCount() {
        return member_.size();
      }
      /**
       * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
       */
      public com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember getMember(int index) {
        return member_.get(index);
      }
      /**
       * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
       */
      public Builder setMember(
          int index, com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureMemberIsMutable();
        member_.set(index, value);

        return this;
      }
      /**
       * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
       */
      public Builder setMember(
          int index, com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember.Builder builderForValue) {
        ensureMemberIsMutable();
        member_.set(index, builderForValue.build());

        return this;
      }
      /**
       * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
       */
      public Builder addMember(com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureMemberIsMutable();
        member_.add(value);

        return this;
      }
      /**
       * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
       */
      public Builder addMember(
          int index, com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureMemberIsMutable();
        member_.add(index, value);

        return this;
      }
      /**
       * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
       */
      public Builder addMember(
          com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember.Builder builderForValue) {
        ensureMemberIsMutable();
        member_.add(builderForValue.build());

        return this;
      }
      /**
       * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
       */
      public Builder addMember(
          int index, com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember.Builder builderForValue) {
        ensureMemberIsMutable();
        member_.add(index, builderForValue.build());

        return this;
      }
      /**
       * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
       */
      public Builder addAllMember(
          java.lang.Iterable<? extends com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember> values) {
        ensureMemberIsMutable();
        super.addAll(values, member_);

        return this;
      }
      /**
       * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
       */
      public Builder clearMember() {
        member_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000004);

        return this;
      }
      /**
       * <code>repeated .sanguo.MsgYijunMember member = 3;</code>
       */
      public Builder removeMember(int index) {
        ensureMemberIsMutable();
        member_.remove(index);

        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.GetYijunMembersResponse)
    }

    static {
      defaultInstance = new GetYijunMembersResponse(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.GetYijunMembersResponse)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
