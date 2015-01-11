// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: spy_yijun.proto

package com.cwa.sanguo.messages.yijun;

public final class SpyYijunMessage {
  private SpyYijunMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface SpyYijunRequestOrBuilder
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

    // required uint64 yijunID = 2;
    /**
     * <code>required uint64 yijunID = 2;</code>
     */
    boolean hasYijunID();
    /**
     * <code>required uint64 yijunID = 2;</code>
     */
    long getYijunID();
  }
  /**
   * Protobuf type {@code sanguo.SpyYijunRequest}
   *
   * <pre>
   * 侦查
   * </pre>
   */
  public static final class SpyYijunRequest extends
      com.google.protobuf.GeneratedMessageLite
      implements SpyYijunRequestOrBuilder {
    // Use SpyYijunRequest.newBuilder() to construct.
    private SpyYijunRequest(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private SpyYijunRequest(boolean noInit) {}

    private static final SpyYijunRequest defaultInstance;
    public static SpyYijunRequest getDefaultInstance() {
      return defaultInstance;
    }

    public SpyYijunRequest getDefaultInstanceForType() {
      return defaultInstance;
    }

    private SpyYijunRequest(
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
              yijunID_ = input.readUInt64();
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
    public static com.google.protobuf.Parser<SpyYijunRequest> PARSER =
        new com.google.protobuf.AbstractParser<SpyYijunRequest>() {
      public SpyYijunRequest parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new SpyYijunRequest(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<SpyYijunRequest> getParserForType() {
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

    // required uint64 yijunID = 2;
    public static final int YIJUNID_FIELD_NUMBER = 2;
    private long yijunID_;
    /**
     * <code>required uint64 yijunID = 2;</code>
     */
    public boolean hasYijunID() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required uint64 yijunID = 2;</code>
     */
    public long getYijunID() {
      return yijunID_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      yijunID_ = 0L;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasMsgID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasYijunID()) {
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
        output.writeUInt64(2, yijunID_);
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
          .computeUInt64Size(2, yijunID_);
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

    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.SpyYijunRequest}
     *
     * <pre>
     * 侦查
     * </pre>
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest, Builder>
        implements com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequestOrBuilder {
      // Construct using com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest.newBuilder()
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
        yijunID_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000002);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest build() {
        com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest buildPartial() {
        com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest result = new com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.msgID_ = msgID_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.yijunID_ = yijunID_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest other) {
        if (other == com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasYijunID()) {
          setYijunID(other.getYijunID());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasMsgID()) {
          
          return false;
        }
        if (!hasYijunID()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunRequest) e.getUnfinishedMessage();
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

      // required uint64 yijunID = 2;
      private long yijunID_ ;
      /**
       * <code>required uint64 yijunID = 2;</code>
       */
      public boolean hasYijunID() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required uint64 yijunID = 2;</code>
       */
      public long getYijunID() {
        return yijunID_;
      }
      /**
       * <code>required uint64 yijunID = 2;</code>
       */
      public Builder setYijunID(long value) {
        bitField0_ |= 0x00000002;
        yijunID_ = value;
        
        return this;
      }
      /**
       * <code>required uint64 yijunID = 2;</code>
       */
      public Builder clearYijunID() {
        bitField0_ = (bitField0_ & ~0x00000002);
        yijunID_ = 0L;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.SpyYijunRequest)
    }

    static {
      defaultInstance = new SpyYijunRequest(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.SpyYijunRequest)
  }

  public interface SpyYijunResponseOrBuilder
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

    // optional uint64 weathPD = 3;
    /**
     * <code>optional uint64 weathPD = 3;</code>
     */
    boolean hasWeathPD();
    /**
     * <code>optional uint64 weathPD = 3;</code>
     */
    long getWeathPD();

    // optional uint32 consumeGold = 4;
    /**
     * <code>optional uint32 consumeGold = 4;</code>
     *
     * <pre>
     * 侦查消耗元宝
     * </pre>
     */
    boolean hasConsumeGold();
    /**
     * <code>optional uint32 consumeGold = 4;</code>
     *
     * <pre>
     * 侦查消耗元宝
     * </pre>
     */
    int getConsumeGold();

    // optional uint32 gold = 5;
    /**
     * <code>optional uint32 gold = 5;</code>
     */
    boolean hasGold();
    /**
     * <code>optional uint32 gold = 5;</code>
     */
    int getGold();

    // optional uint32 jade = 6;
    /**
     * <code>optional uint32 jade = 6;</code>
     */
    boolean hasJade();
    /**
     * <code>optional uint32 jade = 6;</code>
     */
    int getJade();
  }
  /**
   * Protobuf type {@code sanguo.SpyYijunResponse}
   */
  public static final class SpyYijunResponse extends
      com.google.protobuf.GeneratedMessageLite
      implements SpyYijunResponseOrBuilder {
    // Use SpyYijunResponse.newBuilder() to construct.
    private SpyYijunResponse(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private SpyYijunResponse(boolean noInit) {}

    private static final SpyYijunResponse defaultInstance;
    public static SpyYijunResponse getDefaultInstance() {
      return defaultInstance;
    }

    public SpyYijunResponse getDefaultInstanceForType() {
      return defaultInstance;
    }

    private SpyYijunResponse(
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
            case 24: {
              bitField0_ |= 0x00000004;
              weathPD_ = input.readUInt64();
              break;
            }
            case 32: {
              bitField0_ |= 0x00000008;
              consumeGold_ = input.readUInt32();
              break;
            }
            case 40: {
              bitField0_ |= 0x00000010;
              gold_ = input.readUInt32();
              break;
            }
            case 48: {
              bitField0_ |= 0x00000020;
              jade_ = input.readUInt32();
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
    public static com.google.protobuf.Parser<SpyYijunResponse> PARSER =
        new com.google.protobuf.AbstractParser<SpyYijunResponse>() {
      public SpyYijunResponse parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new SpyYijunResponse(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<SpyYijunResponse> getParserForType() {
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

    // optional uint64 weathPD = 3;
    public static final int WEATHPD_FIELD_NUMBER = 3;
    private long weathPD_;
    /**
     * <code>optional uint64 weathPD = 3;</code>
     */
    public boolean hasWeathPD() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>optional uint64 weathPD = 3;</code>
     */
    public long getWeathPD() {
      return weathPD_;
    }

    // optional uint32 consumeGold = 4;
    public static final int CONSUMEGOLD_FIELD_NUMBER = 4;
    private int consumeGold_;
    /**
     * <code>optional uint32 consumeGold = 4;</code>
     *
     * <pre>
     * 侦查消耗元宝
     * </pre>
     */
    public boolean hasConsumeGold() {
      return ((bitField0_ & 0x00000008) == 0x00000008);
    }
    /**
     * <code>optional uint32 consumeGold = 4;</code>
     *
     * <pre>
     * 侦查消耗元宝
     * </pre>
     */
    public int getConsumeGold() {
      return consumeGold_;
    }

    // optional uint32 gold = 5;
    public static final int GOLD_FIELD_NUMBER = 5;
    private int gold_;
    /**
     * <code>optional uint32 gold = 5;</code>
     */
    public boolean hasGold() {
      return ((bitField0_ & 0x00000010) == 0x00000010);
    }
    /**
     * <code>optional uint32 gold = 5;</code>
     */
    public int getGold() {
      return gold_;
    }

    // optional uint32 jade = 6;
    public static final int JADE_FIELD_NUMBER = 6;
    private int jade_;
    /**
     * <code>optional uint32 jade = 6;</code>
     */
    public boolean hasJade() {
      return ((bitField0_ & 0x00000020) == 0x00000020);
    }
    /**
     * <code>optional uint32 jade = 6;</code>
     */
    public int getJade() {
      return jade_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      status_ = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.OK;
      weathPD_ = 0L;
      consumeGold_ = 0;
      gold_ = 0;
      jade_ = 0;
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
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeUInt64(3, weathPD_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        output.writeUInt32(4, consumeGold_);
      }
      if (((bitField0_ & 0x00000010) == 0x00000010)) {
        output.writeUInt32(5, gold_);
      }
      if (((bitField0_ & 0x00000020) == 0x00000020)) {
        output.writeUInt32(6, jade_);
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
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(3, weathPD_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(4, consumeGold_);
      }
      if (((bitField0_ & 0x00000010) == 0x00000010)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(5, gold_);
      }
      if (((bitField0_ & 0x00000020) == 0x00000020)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(6, jade_);
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

    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.SpyYijunResponse}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse, Builder>
        implements com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponseOrBuilder {
      // Construct using com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse.newBuilder()
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
        weathPD_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000004);
        consumeGold_ = 0;
        bitField0_ = (bitField0_ & ~0x00000008);
        gold_ = 0;
        bitField0_ = (bitField0_ & ~0x00000010);
        jade_ = 0;
        bitField0_ = (bitField0_ & ~0x00000020);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse build() {
        com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse buildPartial() {
        com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse result = new com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse(this);
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
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.weathPD_ = weathPD_;
        if (((from_bitField0_ & 0x00000008) == 0x00000008)) {
          to_bitField0_ |= 0x00000008;
        }
        result.consumeGold_ = consumeGold_;
        if (((from_bitField0_ & 0x00000010) == 0x00000010)) {
          to_bitField0_ |= 0x00000010;
        }
        result.gold_ = gold_;
        if (((from_bitField0_ & 0x00000020) == 0x00000020)) {
          to_bitField0_ |= 0x00000020;
        }
        result.jade_ = jade_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse other) {
        if (other == com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasStatus()) {
          setStatus(other.getStatus());
        }
        if (other.hasWeathPD()) {
          setWeathPD(other.getWeathPD());
        }
        if (other.hasConsumeGold()) {
          setConsumeGold(other.getConsumeGold());
        }
        if (other.hasGold()) {
          setGold(other.getGold());
        }
        if (other.hasJade()) {
          setJade(other.getJade());
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
        com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.yijun.SpyYijunMessage.SpyYijunResponse) e.getUnfinishedMessage();
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

      // optional uint64 weathPD = 3;
      private long weathPD_ ;
      /**
       * <code>optional uint64 weathPD = 3;</code>
       */
      public boolean hasWeathPD() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>optional uint64 weathPD = 3;</code>
       */
      public long getWeathPD() {
        return weathPD_;
      }
      /**
       * <code>optional uint64 weathPD = 3;</code>
       */
      public Builder setWeathPD(long value) {
        bitField0_ |= 0x00000004;
        weathPD_ = value;
        
        return this;
      }
      /**
       * <code>optional uint64 weathPD = 3;</code>
       */
      public Builder clearWeathPD() {
        bitField0_ = (bitField0_ & ~0x00000004);
        weathPD_ = 0L;
        
        return this;
      }

      // optional uint32 consumeGold = 4;
      private int consumeGold_ ;
      /**
       * <code>optional uint32 consumeGold = 4;</code>
       *
       * <pre>
       * 侦查消耗元宝
       * </pre>
       */
      public boolean hasConsumeGold() {
        return ((bitField0_ & 0x00000008) == 0x00000008);
      }
      /**
       * <code>optional uint32 consumeGold = 4;</code>
       *
       * <pre>
       * 侦查消耗元宝
       * </pre>
       */
      public int getConsumeGold() {
        return consumeGold_;
      }
      /**
       * <code>optional uint32 consumeGold = 4;</code>
       *
       * <pre>
       * 侦查消耗元宝
       * </pre>
       */
      public Builder setConsumeGold(int value) {
        bitField0_ |= 0x00000008;
        consumeGold_ = value;
        
        return this;
      }
      /**
       * <code>optional uint32 consumeGold = 4;</code>
       *
       * <pre>
       * 侦查消耗元宝
       * </pre>
       */
      public Builder clearConsumeGold() {
        bitField0_ = (bitField0_ & ~0x00000008);
        consumeGold_ = 0;
        
        return this;
      }

      // optional uint32 gold = 5;
      private int gold_ ;
      /**
       * <code>optional uint32 gold = 5;</code>
       */
      public boolean hasGold() {
        return ((bitField0_ & 0x00000010) == 0x00000010);
      }
      /**
       * <code>optional uint32 gold = 5;</code>
       */
      public int getGold() {
        return gold_;
      }
      /**
       * <code>optional uint32 gold = 5;</code>
       */
      public Builder setGold(int value) {
        bitField0_ |= 0x00000010;
        gold_ = value;
        
        return this;
      }
      /**
       * <code>optional uint32 gold = 5;</code>
       */
      public Builder clearGold() {
        bitField0_ = (bitField0_ & ~0x00000010);
        gold_ = 0;
        
        return this;
      }

      // optional uint32 jade = 6;
      private int jade_ ;
      /**
       * <code>optional uint32 jade = 6;</code>
       */
      public boolean hasJade() {
        return ((bitField0_ & 0x00000020) == 0x00000020);
      }
      /**
       * <code>optional uint32 jade = 6;</code>
       */
      public int getJade() {
        return jade_;
      }
      /**
       * <code>optional uint32 jade = 6;</code>
       */
      public Builder setJade(int value) {
        bitField0_ |= 0x00000020;
        jade_ = value;
        
        return this;
      }
      /**
       * <code>optional uint32 jade = 6;</code>
       */
      public Builder clearJade() {
        bitField0_ = (bitField0_ & ~0x00000020);
        jade_ = 0;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.SpyYijunResponse)
    }

    static {
      defaultInstance = new SpyYijunResponse(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.SpyYijunResponse)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
