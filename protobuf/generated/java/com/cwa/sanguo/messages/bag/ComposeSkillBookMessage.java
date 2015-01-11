// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: compose_skillbook.proto

package com.cwa.sanguo.messages.bag;

public final class ComposeSkillBookMessage {
  private ComposeSkillBookMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface ComposeSkillBookRequestOrBuilder
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

    // required uint64 fragmentId = 2;
    /**
     * <code>required uint64 fragmentId = 2;</code>
     */
    boolean hasFragmentId();
    /**
     * <code>required uint64 fragmentId = 2;</code>
     */
    long getFragmentId();
  }
  /**
   * Protobuf type {@code sanguo.ComposeSkillBookRequest}
   */
  public static final class ComposeSkillBookRequest extends
      com.google.protobuf.GeneratedMessageLite
      implements ComposeSkillBookRequestOrBuilder {
    // Use ComposeSkillBookRequest.newBuilder() to construct.
    private ComposeSkillBookRequest(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private ComposeSkillBookRequest(boolean noInit) {}

    private static final ComposeSkillBookRequest defaultInstance;
    public static ComposeSkillBookRequest getDefaultInstance() {
      return defaultInstance;
    }

    public ComposeSkillBookRequest getDefaultInstanceForType() {
      return defaultInstance;
    }

    private ComposeSkillBookRequest(
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
              fragmentId_ = input.readUInt64();
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
    public static com.google.protobuf.Parser<ComposeSkillBookRequest> PARSER =
        new com.google.protobuf.AbstractParser<ComposeSkillBookRequest>() {
      public ComposeSkillBookRequest parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ComposeSkillBookRequest(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<ComposeSkillBookRequest> getParserForType() {
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

    // required uint64 fragmentId = 2;
    public static final int FRAGMENTID_FIELD_NUMBER = 2;
    private long fragmentId_;
    /**
     * <code>required uint64 fragmentId = 2;</code>
     */
    public boolean hasFragmentId() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required uint64 fragmentId = 2;</code>
     */
    public long getFragmentId() {
      return fragmentId_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      fragmentId_ = 0L;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasMsgID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasFragmentId()) {
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
        output.writeUInt64(2, fragmentId_);
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
          .computeUInt64Size(2, fragmentId_);
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

    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.ComposeSkillBookRequest}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest, Builder>
        implements com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequestOrBuilder {
      // Construct using com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest.newBuilder()
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
        fragmentId_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000002);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest build() {
        com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest buildPartial() {
        com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest result = new com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.msgID_ = msgID_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.fragmentId_ = fragmentId_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest other) {
        if (other == com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasFragmentId()) {
          setFragmentId(other.getFragmentId());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasMsgID()) {
          
          return false;
        }
        if (!hasFragmentId()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookRequest) e.getUnfinishedMessage();
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

      // required uint64 fragmentId = 2;
      private long fragmentId_ ;
      /**
       * <code>required uint64 fragmentId = 2;</code>
       */
      public boolean hasFragmentId() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required uint64 fragmentId = 2;</code>
       */
      public long getFragmentId() {
        return fragmentId_;
      }
      /**
       * <code>required uint64 fragmentId = 2;</code>
       */
      public Builder setFragmentId(long value) {
        bitField0_ |= 0x00000002;
        fragmentId_ = value;
        
        return this;
      }
      /**
       * <code>required uint64 fragmentId = 2;</code>
       */
      public Builder clearFragmentId() {
        bitField0_ = (bitField0_ & ~0x00000002);
        fragmentId_ = 0L;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.ComposeSkillBookRequest)
    }

    static {
      defaultInstance = new ComposeSkillBookRequest(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.ComposeSkillBookRequest)
  }

  public interface ComposeSkillBookResponseOrBuilder
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

    // optional .sanguo.MsgRoleBagGoods skillBook = 3;
    /**
     * <code>optional .sanguo.MsgRoleBagGoods skillBook = 3;</code>
     */
    boolean hasSkillBook();
    /**
     * <code>optional .sanguo.MsgRoleBagGoods skillBook = 3;</code>
     */
    com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods getSkillBook();
  }
  /**
   * Protobuf type {@code sanguo.ComposeSkillBookResponse}
   */
  public static final class ComposeSkillBookResponse extends
      com.google.protobuf.GeneratedMessageLite
      implements ComposeSkillBookResponseOrBuilder {
    // Use ComposeSkillBookResponse.newBuilder() to construct.
    private ComposeSkillBookResponse(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private ComposeSkillBookResponse(boolean noInit) {}

    private static final ComposeSkillBookResponse defaultInstance;
    public static ComposeSkillBookResponse getDefaultInstance() {
      return defaultInstance;
    }

    public ComposeSkillBookResponse getDefaultInstanceForType() {
      return defaultInstance;
    }

    private ComposeSkillBookResponse(
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
              com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods.Builder subBuilder = null;
              if (((bitField0_ & 0x00000004) == 0x00000004)) {
                subBuilder = skillBook_.toBuilder();
              }
              skillBook_ = input.readMessage(com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods.PARSER, extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(skillBook_);
                skillBook_ = subBuilder.buildPartial();
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
    public static com.google.protobuf.Parser<ComposeSkillBookResponse> PARSER =
        new com.google.protobuf.AbstractParser<ComposeSkillBookResponse>() {
      public ComposeSkillBookResponse parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ComposeSkillBookResponse(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<ComposeSkillBookResponse> getParserForType() {
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

    // optional .sanguo.MsgRoleBagGoods skillBook = 3;
    public static final int SKILLBOOK_FIELD_NUMBER = 3;
    private com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods skillBook_;
    /**
     * <code>optional .sanguo.MsgRoleBagGoods skillBook = 3;</code>
     */
    public boolean hasSkillBook() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>optional .sanguo.MsgRoleBagGoods skillBook = 3;</code>
     */
    public com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods getSkillBook() {
      return skillBook_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      status_ = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.OK;
      skillBook_ = com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods.getDefaultInstance();
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
      if (hasSkillBook()) {
        if (!getSkillBook().isInitialized()) {
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
        output.writeMessage(3, skillBook_);
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
          .computeMessageSize(3, skillBook_);
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

    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.ComposeSkillBookResponse}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse, Builder>
        implements com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponseOrBuilder {
      // Construct using com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse.newBuilder()
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
        skillBook_ = com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods.getDefaultInstance();
        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse build() {
        com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse buildPartial() {
        com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse result = new com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse(this);
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
        result.skillBook_ = skillBook_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse other) {
        if (other == com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasStatus()) {
          setStatus(other.getStatus());
        }
        if (other.hasSkillBook()) {
          mergeSkillBook(other.getSkillBook());
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
        if (hasSkillBook()) {
          if (!getSkillBook().isInitialized()) {
            
            return false;
          }
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.bag.ComposeSkillBookMessage.ComposeSkillBookResponse) e.getUnfinishedMessage();
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

      // optional .sanguo.MsgRoleBagGoods skillBook = 3;
      private com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods skillBook_ = com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods.getDefaultInstance();
      /**
       * <code>optional .sanguo.MsgRoleBagGoods skillBook = 3;</code>
       */
      public boolean hasSkillBook() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>optional .sanguo.MsgRoleBagGoods skillBook = 3;</code>
       */
      public com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods getSkillBook() {
        return skillBook_;
      }
      /**
       * <code>optional .sanguo.MsgRoleBagGoods skillBook = 3;</code>
       */
      public Builder setSkillBook(com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods value) {
        if (value == null) {
          throw new NullPointerException();
        }
        skillBook_ = value;

        bitField0_ |= 0x00000004;
        return this;
      }
      /**
       * <code>optional .sanguo.MsgRoleBagGoods skillBook = 3;</code>
       */
      public Builder setSkillBook(
          com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods.Builder builderForValue) {
        skillBook_ = builderForValue.build();

        bitField0_ |= 0x00000004;
        return this;
      }
      /**
       * <code>optional .sanguo.MsgRoleBagGoods skillBook = 3;</code>
       */
      public Builder mergeSkillBook(com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods value) {
        if (((bitField0_ & 0x00000004) == 0x00000004) &&
            skillBook_ != com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods.getDefaultInstance()) {
          skillBook_ =
            com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods.newBuilder(skillBook_).mergeFrom(value).buildPartial();
        } else {
          skillBook_ = value;
        }

        bitField0_ |= 0x00000004;
        return this;
      }
      /**
       * <code>optional .sanguo.MsgRoleBagGoods skillBook = 3;</code>
       */
      public Builder clearSkillBook() {
        skillBook_ = com.cwa.sanguo.messages.dto.RoleBagGoods.MsgRoleBagGoods.getDefaultInstance();

        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.ComposeSkillBookResponse)
    }

    static {
      defaultInstance = new ComposeSkillBookResponse(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.ComposeSkillBookResponse)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
