// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: yijunboss_end_broadcast.proto

package com.cwa.sanguo.messages.worldboss;

public final class YijunbossEndBroadcastMessage {
  private YijunbossEndBroadcastMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface YijunbossEndBroadcastOrBuilder
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

    // required uint64 bossId = 3;
    /**
     * <code>required uint64 bossId = 3;</code>
     */
    boolean hasBossId();
    /**
     * <code>required uint64 bossId = 3;</code>
     */
    long getBossId();

    // required uint32 bossConfigId = 4;
    /**
     * <code>required uint32 bossConfigId = 4;</code>
     */
    boolean hasBossConfigId();
    /**
     * <code>required uint32 bossConfigId = 4;</code>
     */
    int getBossConfigId();
  }
  /**
   * Protobuf type {@code sanguo.YijunbossEndBroadcast}
   */
  public static final class YijunbossEndBroadcast extends
      com.google.protobuf.GeneratedMessageLite
      implements YijunbossEndBroadcastOrBuilder {
    // Use YijunbossEndBroadcast.newBuilder() to construct.
    private YijunbossEndBroadcast(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private YijunbossEndBroadcast(boolean noInit) {}

    private static final YijunbossEndBroadcast defaultInstance;
    public static YijunbossEndBroadcast getDefaultInstance() {
      return defaultInstance;
    }

    public YijunbossEndBroadcast getDefaultInstanceForType() {
      return defaultInstance;
    }

    private YijunbossEndBroadcast(
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
              bossId_ = input.readUInt64();
              break;
            }
            case 32: {
              bitField0_ |= 0x00000008;
              bossConfigId_ = input.readUInt32();
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
    public static com.google.protobuf.Parser<YijunbossEndBroadcast> PARSER =
        new com.google.protobuf.AbstractParser<YijunbossEndBroadcast>() {
      public YijunbossEndBroadcast parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new YijunbossEndBroadcast(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<YijunbossEndBroadcast> getParserForType() {
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

    // required uint64 bossId = 3;
    public static final int BOSSID_FIELD_NUMBER = 3;
    private long bossId_;
    /**
     * <code>required uint64 bossId = 3;</code>
     */
    public boolean hasBossId() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>required uint64 bossId = 3;</code>
     */
    public long getBossId() {
      return bossId_;
    }

    // required uint32 bossConfigId = 4;
    public static final int BOSSCONFIGID_FIELD_NUMBER = 4;
    private int bossConfigId_;
    /**
     * <code>required uint32 bossConfigId = 4;</code>
     */
    public boolean hasBossConfigId() {
      return ((bitField0_ & 0x00000008) == 0x00000008);
    }
    /**
     * <code>required uint32 bossConfigId = 4;</code>
     */
    public int getBossConfigId() {
      return bossConfigId_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      status_ = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.OK;
      bossId_ = 0L;
      bossConfigId_ = 0;
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
      if (!hasBossId()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasBossConfigId()) {
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
        output.writeUInt64(3, bossId_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        output.writeUInt32(4, bossConfigId_);
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
          .computeUInt64Size(3, bossId_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(4, bossConfigId_);
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

    public static com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.YijunbossEndBroadcast}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast, Builder>
        implements com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcastOrBuilder {
      // Construct using com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast.newBuilder()
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
        bossId_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000004);
        bossConfigId_ = 0;
        bitField0_ = (bitField0_ & ~0x00000008);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast build() {
        com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast buildPartial() {
        com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast result = new com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast(this);
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
        result.bossId_ = bossId_;
        if (((from_bitField0_ & 0x00000008) == 0x00000008)) {
          to_bitField0_ |= 0x00000008;
        }
        result.bossConfigId_ = bossConfigId_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast other) {
        if (other == com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasStatus()) {
          setStatus(other.getStatus());
        }
        if (other.hasBossId()) {
          setBossId(other.getBossId());
        }
        if (other.hasBossConfigId()) {
          setBossConfigId(other.getBossConfigId());
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
        if (!hasBossId()) {
          
          return false;
        }
        if (!hasBossConfigId()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.worldboss.YijunbossEndBroadcastMessage.YijunbossEndBroadcast) e.getUnfinishedMessage();
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

      // required uint64 bossId = 3;
      private long bossId_ ;
      /**
       * <code>required uint64 bossId = 3;</code>
       */
      public boolean hasBossId() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>required uint64 bossId = 3;</code>
       */
      public long getBossId() {
        return bossId_;
      }
      /**
       * <code>required uint64 bossId = 3;</code>
       */
      public Builder setBossId(long value) {
        bitField0_ |= 0x00000004;
        bossId_ = value;
        
        return this;
      }
      /**
       * <code>required uint64 bossId = 3;</code>
       */
      public Builder clearBossId() {
        bitField0_ = (bitField0_ & ~0x00000004);
        bossId_ = 0L;
        
        return this;
      }

      // required uint32 bossConfigId = 4;
      private int bossConfigId_ ;
      /**
       * <code>required uint32 bossConfigId = 4;</code>
       */
      public boolean hasBossConfigId() {
        return ((bitField0_ & 0x00000008) == 0x00000008);
      }
      /**
       * <code>required uint32 bossConfigId = 4;</code>
       */
      public int getBossConfigId() {
        return bossConfigId_;
      }
      /**
       * <code>required uint32 bossConfigId = 4;</code>
       */
      public Builder setBossConfigId(int value) {
        bitField0_ |= 0x00000008;
        bossConfigId_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 bossConfigId = 4;</code>
       */
      public Builder clearBossConfigId() {
        bitField0_ = (bitField0_ & ~0x00000008);
        bossConfigId_ = 0;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.YijunbossEndBroadcast)
    }

    static {
      defaultInstance = new YijunbossEndBroadcast(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.YijunbossEndBroadcast)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
