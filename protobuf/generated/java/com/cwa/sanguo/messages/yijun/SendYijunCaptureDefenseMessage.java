// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: send_yijun_capture_defense.proto

package com.cwa.sanguo.messages.yijun;

public final class SendYijunCaptureDefenseMessage {
  private SendYijunCaptureDefenseMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface SendYijunCaptureDefenseRequestOrBuilder
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

    // required uint64 roleID = 2;
    /**
     * <code>required uint64 roleID = 2;</code>
     *
     * <pre>
     * 掠夺者角色ID
     * </pre>
     */
    boolean hasRoleID();
    /**
     * <code>required uint64 roleID = 2;</code>
     *
     * <pre>
     * 掠夺者角色ID
     * </pre>
     */
    long getRoleID();

    // required uint32 result = 3;
    /**
     * <code>required uint32 result = 3;</code>
     *
     * <pre>
     * 守卫结果
     * </pre>
     */
    boolean hasResult();
    /**
     * <code>required uint32 result = 3;</code>
     *
     * <pre>
     * 守卫结果
     * </pre>
     */
    int getResult();
  }
  /**
   * Protobuf type {@code sanguo.SendYijunCaptureDefenseRequest}
   *
   * <pre>
   * 发起掠夺守卫结果
   * </pre>
   */
  public static final class SendYijunCaptureDefenseRequest extends
      com.google.protobuf.GeneratedMessageLite
      implements SendYijunCaptureDefenseRequestOrBuilder {
    // Use SendYijunCaptureDefenseRequest.newBuilder() to construct.
    private SendYijunCaptureDefenseRequest(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private SendYijunCaptureDefenseRequest(boolean noInit) {}

    private static final SendYijunCaptureDefenseRequest defaultInstance;
    public static SendYijunCaptureDefenseRequest getDefaultInstance() {
      return defaultInstance;
    }

    public SendYijunCaptureDefenseRequest getDefaultInstanceForType() {
      return defaultInstance;
    }

    private SendYijunCaptureDefenseRequest(
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
              bitField0_ |= 0x00000002;
              roleID_ = input.readUInt64();
              break;
            }
            case 24: {
              bitField0_ |= 0x00000004;
              result_ = input.readUInt32();
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
    public static com.google.protobuf.Parser<SendYijunCaptureDefenseRequest> PARSER =
        new com.google.protobuf.AbstractParser<SendYijunCaptureDefenseRequest>() {
      public SendYijunCaptureDefenseRequest parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new SendYijunCaptureDefenseRequest(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<SendYijunCaptureDefenseRequest> getParserForType() {
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

    // required uint64 roleID = 2;
    public static final int ROLEID_FIELD_NUMBER = 2;
    private long roleID_;
    /**
     * <code>required uint64 roleID = 2;</code>
     *
     * <pre>
     * 掠夺者角色ID
     * </pre>
     */
    public boolean hasRoleID() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required uint64 roleID = 2;</code>
     *
     * <pre>
     * 掠夺者角色ID
     * </pre>
     */
    public long getRoleID() {
      return roleID_;
    }

    // required uint32 result = 3;
    public static final int RESULT_FIELD_NUMBER = 3;
    private int result_;
    /**
     * <code>required uint32 result = 3;</code>
     *
     * <pre>
     * 守卫结果
     * </pre>
     */
    public boolean hasResult() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>required uint32 result = 3;</code>
     *
     * <pre>
     * 守卫结果
     * </pre>
     */
    public int getResult() {
      return result_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      roleID_ = 0L;
      result_ = 0;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasMsgID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasRoleID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasResult()) {
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
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeUInt64(2, roleID_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeUInt32(3, result_);
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
          .computeUInt64Size(2, roleID_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(3, result_);
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

    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.SendYijunCaptureDefenseRequest}
     *
     * <pre>
     * 发起掠夺守卫结果
     * </pre>
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest, Builder>
        implements com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequestOrBuilder {
      // Construct using com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest.newBuilder()
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
        roleID_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000002);
        result_ = 0;
        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest build() {
        com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest buildPartial() {
        com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest result = new com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.msgID_ = msgID_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.roleID_ = roleID_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.result_ = result_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest other) {
        if (other == com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasRoleID()) {
          setRoleID(other.getRoleID());
        }
        if (other.hasResult()) {
          setResult(other.getResult());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasMsgID()) {
          
          return false;
        }
        if (!hasRoleID()) {
          
          return false;
        }
        if (!hasResult()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseRequest) e.getUnfinishedMessage();
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

      // required uint64 roleID = 2;
      private long roleID_ ;
      /**
       * <code>required uint64 roleID = 2;</code>
       *
       * <pre>
       * 掠夺者角色ID
       * </pre>
       */
      public boolean hasRoleID() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required uint64 roleID = 2;</code>
       *
       * <pre>
       * 掠夺者角色ID
       * </pre>
       */
      public long getRoleID() {
        return roleID_;
      }
      /**
       * <code>required uint64 roleID = 2;</code>
       *
       * <pre>
       * 掠夺者角色ID
       * </pre>
       */
      public Builder setRoleID(long value) {
        bitField0_ |= 0x00000002;
        roleID_ = value;
        
        return this;
      }
      /**
       * <code>required uint64 roleID = 2;</code>
       *
       * <pre>
       * 掠夺者角色ID
       * </pre>
       */
      public Builder clearRoleID() {
        bitField0_ = (bitField0_ & ~0x00000002);
        roleID_ = 0L;
        
        return this;
      }

      // required uint32 result = 3;
      private int result_ ;
      /**
       * <code>required uint32 result = 3;</code>
       *
       * <pre>
       * 守卫结果
       * </pre>
       */
      public boolean hasResult() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>required uint32 result = 3;</code>
       *
       * <pre>
       * 守卫结果
       * </pre>
       */
      public int getResult() {
        return result_;
      }
      /**
       * <code>required uint32 result = 3;</code>
       *
       * <pre>
       * 守卫结果
       * </pre>
       */
      public Builder setResult(int value) {
        bitField0_ |= 0x00000004;
        result_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 result = 3;</code>
       *
       * <pre>
       * 守卫结果
       * </pre>
       */
      public Builder clearResult() {
        bitField0_ = (bitField0_ & ~0x00000004);
        result_ = 0;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.SendYijunCaptureDefenseRequest)
    }

    static {
      defaultInstance = new SendYijunCaptureDefenseRequest(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.SendYijunCaptureDefenseRequest)
  }

  public interface SendYijunCaptureDefenseResponseOrBuilder
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
  }
  /**
   * Protobuf type {@code sanguo.SendYijunCaptureDefenseResponse}
   */
  public static final class SendYijunCaptureDefenseResponse extends
      com.google.protobuf.GeneratedMessageLite
      implements SendYijunCaptureDefenseResponseOrBuilder {
    // Use SendYijunCaptureDefenseResponse.newBuilder() to construct.
    private SendYijunCaptureDefenseResponse(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private SendYijunCaptureDefenseResponse(boolean noInit) {}

    private static final SendYijunCaptureDefenseResponse defaultInstance;
    public static SendYijunCaptureDefenseResponse getDefaultInstance() {
      return defaultInstance;
    }

    public SendYijunCaptureDefenseResponse getDefaultInstanceForType() {
      return defaultInstance;
    }

    private SendYijunCaptureDefenseResponse(
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
    public static com.google.protobuf.Parser<SendYijunCaptureDefenseResponse> PARSER =
        new com.google.protobuf.AbstractParser<SendYijunCaptureDefenseResponse>() {
      public SendYijunCaptureDefenseResponse parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new SendYijunCaptureDefenseResponse(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<SendYijunCaptureDefenseResponse> getParserForType() {
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

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      status_ = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.OK;
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
      memoizedSerializedSize = size;
      return size;
    }

    private static final long serialVersionUID = 0L;
    @java.lang.Override
    protected java.lang.Object writeReplace()
        throws java.io.ObjectStreamException {
      return super.writeReplace();
    }

    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.SendYijunCaptureDefenseResponse}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse, Builder>
        implements com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponseOrBuilder {
      // Construct using com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse.newBuilder()
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
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse build() {
        com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse buildPartial() {
        com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse result = new com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse(this);
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
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse other) {
        if (other == com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasStatus()) {
          setStatus(other.getStatus());
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
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.yijun.SendYijunCaptureDefenseMessage.SendYijunCaptureDefenseResponse) e.getUnfinishedMessage();
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

      // @@protoc_insertion_point(builder_scope:sanguo.SendYijunCaptureDefenseResponse)
    }

    static {
      defaultInstance = new SendYijunCaptureDefenseResponse(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.SendYijunCaptureDefenseResponse)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
