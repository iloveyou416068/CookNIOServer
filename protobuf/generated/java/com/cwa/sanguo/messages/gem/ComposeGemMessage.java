// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: compose_gem.proto

package com.cwa.sanguo.messages.gem;

public final class ComposeGemMessage {
  private ComposeGemMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface ComposeGemRequestOrBuilder
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

    // required uint64 autoIncrID = 2;
    /**
     * <code>required uint64 autoIncrID = 2;</code>
     */
    boolean hasAutoIncrID();
    /**
     * <code>required uint64 autoIncrID = 2;</code>
     */
    long getAutoIncrID();
  }
  /**
   * Protobuf type {@code sanguo.ComposeGemRequest}
   */
  public static final class ComposeGemRequest extends
      com.google.protobuf.GeneratedMessageLite
      implements ComposeGemRequestOrBuilder {
    // Use ComposeGemRequest.newBuilder() to construct.
    private ComposeGemRequest(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private ComposeGemRequest(boolean noInit) {}

    private static final ComposeGemRequest defaultInstance;
    public static ComposeGemRequest getDefaultInstance() {
      return defaultInstance;
    }

    public ComposeGemRequest getDefaultInstanceForType() {
      return defaultInstance;
    }

    private ComposeGemRequest(
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
              autoIncrID_ = input.readUInt64();
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
    public static com.google.protobuf.Parser<ComposeGemRequest> PARSER =
        new com.google.protobuf.AbstractParser<ComposeGemRequest>() {
      public ComposeGemRequest parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ComposeGemRequest(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<ComposeGemRequest> getParserForType() {
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

    // required uint64 autoIncrID = 2;
    public static final int AUTOINCRID_FIELD_NUMBER = 2;
    private long autoIncrID_;
    /**
     * <code>required uint64 autoIncrID = 2;</code>
     */
    public boolean hasAutoIncrID() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required uint64 autoIncrID = 2;</code>
     */
    public long getAutoIncrID() {
      return autoIncrID_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      autoIncrID_ = 0L;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasMsgID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasAutoIncrID()) {
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
        output.writeUInt64(2, autoIncrID_);
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
          .computeUInt64Size(2, autoIncrID_);
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

    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.ComposeGemRequest}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest, Builder>
        implements com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequestOrBuilder {
      // Construct using com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest.newBuilder()
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
        autoIncrID_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000002);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest build() {
        com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest buildPartial() {
        com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest result = new com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.msgID_ = msgID_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.autoIncrID_ = autoIncrID_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest other) {
        if (other == com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasAutoIncrID()) {
          setAutoIncrID(other.getAutoIncrID());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasMsgID()) {
          
          return false;
        }
        if (!hasAutoIncrID()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemRequest) e.getUnfinishedMessage();
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

      // required uint64 autoIncrID = 2;
      private long autoIncrID_ ;
      /**
       * <code>required uint64 autoIncrID = 2;</code>
       */
      public boolean hasAutoIncrID() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required uint64 autoIncrID = 2;</code>
       */
      public long getAutoIncrID() {
        return autoIncrID_;
      }
      /**
       * <code>required uint64 autoIncrID = 2;</code>
       */
      public Builder setAutoIncrID(long value) {
        bitField0_ |= 0x00000002;
        autoIncrID_ = value;
        
        return this;
      }
      /**
       * <code>required uint64 autoIncrID = 2;</code>
       */
      public Builder clearAutoIncrID() {
        bitField0_ = (bitField0_ & ~0x00000002);
        autoIncrID_ = 0L;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.ComposeGemRequest)
    }

    static {
      defaultInstance = new ComposeGemRequest(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.ComposeGemRequest)
  }

  public interface ComposeGemResponseOrBuilder
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

    // optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;
    /**
     * <code>optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;</code>
     */
    boolean hasRoleGemBagGoods();
    /**
     * <code>optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;</code>
     */
    com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods getRoleGemBagGoods();
  }
  /**
   * Protobuf type {@code sanguo.ComposeGemResponse}
   */
  public static final class ComposeGemResponse extends
      com.google.protobuf.GeneratedMessageLite
      implements ComposeGemResponseOrBuilder {
    // Use ComposeGemResponse.newBuilder() to construct.
    private ComposeGemResponse(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private ComposeGemResponse(boolean noInit) {}

    private static final ComposeGemResponse defaultInstance;
    public static ComposeGemResponse getDefaultInstance() {
      return defaultInstance;
    }

    public ComposeGemResponse getDefaultInstanceForType() {
      return defaultInstance;
    }

    private ComposeGemResponse(
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
              com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods.Builder subBuilder = null;
              if (((bitField0_ & 0x00000004) == 0x00000004)) {
                subBuilder = roleGemBagGoods_.toBuilder();
              }
              roleGemBagGoods_ = input.readMessage(com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods.PARSER, extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(roleGemBagGoods_);
                roleGemBagGoods_ = subBuilder.buildPartial();
              }
              bitField0_ |= 0x00000004;
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
    public static com.google.protobuf.Parser<ComposeGemResponse> PARSER =
        new com.google.protobuf.AbstractParser<ComposeGemResponse>() {
      public ComposeGemResponse parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ComposeGemResponse(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<ComposeGemResponse> getParserForType() {
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

    // optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;
    public static final int ROLEGEMBAGGOODS_FIELD_NUMBER = 3;
    private com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods roleGemBagGoods_;
    /**
     * <code>optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;</code>
     */
    public boolean hasRoleGemBagGoods() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;</code>
     */
    public com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods getRoleGemBagGoods() {
      return roleGemBagGoods_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      status_ = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.OK;
      roleGemBagGoods_ = com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods.getDefaultInstance();
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
      if (hasRoleGemBagGoods()) {
        if (!getRoleGemBagGoods().isInitialized()) {
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
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeMessage(3, roleGemBagGoods_);
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
          .computeMessageSize(3, roleGemBagGoods_);
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

    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.ComposeGemResponse}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse, Builder>
        implements com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponseOrBuilder {
      // Construct using com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse.newBuilder()
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
        roleGemBagGoods_ = com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods.getDefaultInstance();
        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse build() {
        com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse buildPartial() {
        com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse result = new com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse(this);
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
        result.roleGemBagGoods_ = roleGemBagGoods_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse other) {
        if (other == com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasStatus()) {
          setStatus(other.getStatus());
        }
        if (other.hasRoleGemBagGoods()) {
          mergeRoleGemBagGoods(other.getRoleGemBagGoods());
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
        if (hasRoleGemBagGoods()) {
          if (!getRoleGemBagGoods().isInitialized()) {
            
            return false;
          }
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.gem.ComposeGemMessage.ComposeGemResponse) e.getUnfinishedMessage();
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

      // optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;
      private com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods roleGemBagGoods_ = com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods.getDefaultInstance();
      /**
       * <code>optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;</code>
       */
      public boolean hasRoleGemBagGoods() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;</code>
       */
      public com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods getRoleGemBagGoods() {
        return roleGemBagGoods_;
      }
      /**
       * <code>optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;</code>
       */
      public Builder setRoleGemBagGoods(com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods value) {
        if (value == null) {
          throw new NullPointerException();
        }
        roleGemBagGoods_ = value;

        bitField0_ |= 0x00000004;
        return this;
      }
      /**
       * <code>optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;</code>
       */
      public Builder setRoleGemBagGoods(
          com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods.Builder builderForValue) {
        roleGemBagGoods_ = builderForValue.build();

        bitField0_ |= 0x00000004;
        return this;
      }
      /**
       * <code>optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;</code>
       */
      public Builder mergeRoleGemBagGoods(com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods value) {
        if (((bitField0_ & 0x00000004) == 0x00000004) &&
            roleGemBagGoods_ != com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods.getDefaultInstance()) {
          roleGemBagGoods_ =
            com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods.newBuilder(roleGemBagGoods_).mergeFrom(value).buildPartial();
        } else {
          roleGemBagGoods_ = value;
        }

        bitField0_ |= 0x00000004;
        return this;
      }
      /**
       * <code>optional .sanguo.MsgRoleGemBagGoods roleGemBagGoods = 3;</code>
       */
      public Builder clearRoleGemBagGoods() {
        roleGemBagGoods_ = com.cwa.sanguo.messages.dto.RoleGemBagGoods.MsgRoleGemBagGoods.getDefaultInstance();

        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.ComposeGemResponse)
    }

    static {
      defaultInstance = new ComposeGemResponse(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.ComposeGemResponse)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
