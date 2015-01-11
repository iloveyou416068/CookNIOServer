// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: unlock_kungfu_button.proto

package com.cwa.sanguo.messages.kungfu;

public final class UnlockKungfuButtonMessage {
  private UnlockKungfuButtonMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface UnlockKungfuButtonRequestOrBuilder
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

    // required uint32 KungfuID = 2;
    /**
     * <code>required uint32 KungfuID = 2;</code>
     */
    boolean hasKungfuID();
    /**
     * <code>required uint32 KungfuID = 2;</code>
     */
    int getKungfuID();
  }
  /**
   * Protobuf type {@code sanguo.UnlockKungfuButtonRequest}
   */
  public static final class UnlockKungfuButtonRequest extends
      com.google.protobuf.GeneratedMessageLite
      implements UnlockKungfuButtonRequestOrBuilder {
    // Use UnlockKungfuButtonRequest.newBuilder() to construct.
    private UnlockKungfuButtonRequest(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private UnlockKungfuButtonRequest(boolean noInit) {}

    private static final UnlockKungfuButtonRequest defaultInstance;
    public static UnlockKungfuButtonRequest getDefaultInstance() {
      return defaultInstance;
    }

    public UnlockKungfuButtonRequest getDefaultInstanceForType() {
      return defaultInstance;
    }

    private UnlockKungfuButtonRequest(
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
              kungfuID_ = input.readUInt32();
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
    public static com.google.protobuf.Parser<UnlockKungfuButtonRequest> PARSER =
        new com.google.protobuf.AbstractParser<UnlockKungfuButtonRequest>() {
      public UnlockKungfuButtonRequest parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new UnlockKungfuButtonRequest(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<UnlockKungfuButtonRequest> getParserForType() {
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

    // required uint32 KungfuID = 2;
    public static final int KUNGFUID_FIELD_NUMBER = 2;
    private int kungfuID_;
    /**
     * <code>required uint32 KungfuID = 2;</code>
     */
    public boolean hasKungfuID() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required uint32 KungfuID = 2;</code>
     */
    public int getKungfuID() {
      return kungfuID_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      kungfuID_ = 0;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasMsgID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasKungfuID()) {
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
        output.writeUInt32(2, kungfuID_);
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
          .computeUInt32Size(2, kungfuID_);
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

    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.UnlockKungfuButtonRequest}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest, Builder>
        implements com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequestOrBuilder {
      // Construct using com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest.newBuilder()
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
        kungfuID_ = 0;
        bitField0_ = (bitField0_ & ~0x00000002);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest build() {
        com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest buildPartial() {
        com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest result = new com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.msgID_ = msgID_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.kungfuID_ = kungfuID_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest other) {
        if (other == com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasKungfuID()) {
          setKungfuID(other.getKungfuID());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasMsgID()) {
          
          return false;
        }
        if (!hasKungfuID()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonRequest) e.getUnfinishedMessage();
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

      // required uint32 KungfuID = 2;
      private int kungfuID_ ;
      /**
       * <code>required uint32 KungfuID = 2;</code>
       */
      public boolean hasKungfuID() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required uint32 KungfuID = 2;</code>
       */
      public int getKungfuID() {
        return kungfuID_;
      }
      /**
       * <code>required uint32 KungfuID = 2;</code>
       */
      public Builder setKungfuID(int value) {
        bitField0_ |= 0x00000002;
        kungfuID_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 KungfuID = 2;</code>
       */
      public Builder clearKungfuID() {
        bitField0_ = (bitField0_ & ~0x00000002);
        kungfuID_ = 0;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.UnlockKungfuButtonRequest)
    }

    static {
      defaultInstance = new UnlockKungfuButtonRequest(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.UnlockKungfuButtonRequest)
  }

  public interface UnlockKungfuButtonResponseOrBuilder
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

    // optional uint32 KungfuID = 3;
    /**
     * <code>optional uint32 KungfuID = 3;</code>
     */
    boolean hasKungfuID();
    /**
     * <code>optional uint32 KungfuID = 3;</code>
     */
    int getKungfuID();

    // optional uint32 kungfuSlotNum = 4;
    /**
     * <code>optional uint32 kungfuSlotNum = 4;</code>
     *
     * <pre>
     * 大于等于0表示对应按钮开启多少个槽数 
     * </pre>
     */
    boolean hasKungfuSlotNum();
    /**
     * <code>optional uint32 kungfuSlotNum = 4;</code>
     *
     * <pre>
     * 大于等于0表示对应按钮开启多少个槽数 
     * </pre>
     */
    int getKungfuSlotNum();
  }
  /**
   * Protobuf type {@code sanguo.UnlockKungfuButtonResponse}
   */
  public static final class UnlockKungfuButtonResponse extends
      com.google.protobuf.GeneratedMessageLite
      implements UnlockKungfuButtonResponseOrBuilder {
    // Use UnlockKungfuButtonResponse.newBuilder() to construct.
    private UnlockKungfuButtonResponse(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private UnlockKungfuButtonResponse(boolean noInit) {}

    private static final UnlockKungfuButtonResponse defaultInstance;
    public static UnlockKungfuButtonResponse getDefaultInstance() {
      return defaultInstance;
    }

    public UnlockKungfuButtonResponse getDefaultInstanceForType() {
      return defaultInstance;
    }

    private UnlockKungfuButtonResponse(
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
              kungfuID_ = input.readUInt32();
              break;
            }
            case 32: {
              bitField0_ |= 0x00000008;
              kungfuSlotNum_ = input.readUInt32();
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
    public static com.google.protobuf.Parser<UnlockKungfuButtonResponse> PARSER =
        new com.google.protobuf.AbstractParser<UnlockKungfuButtonResponse>() {
      public UnlockKungfuButtonResponse parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new UnlockKungfuButtonResponse(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<UnlockKungfuButtonResponse> getParserForType() {
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

    // optional uint32 KungfuID = 3;
    public static final int KUNGFUID_FIELD_NUMBER = 3;
    private int kungfuID_;
    /**
     * <code>optional uint32 KungfuID = 3;</code>
     */
    public boolean hasKungfuID() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>optional uint32 KungfuID = 3;</code>
     */
    public int getKungfuID() {
      return kungfuID_;
    }

    // optional uint32 kungfuSlotNum = 4;
    public static final int KUNGFUSLOTNUM_FIELD_NUMBER = 4;
    private int kungfuSlotNum_;
    /**
     * <code>optional uint32 kungfuSlotNum = 4;</code>
     *
     * <pre>
     * 大于等于0表示对应按钮开启多少个槽数 
     * </pre>
     */
    public boolean hasKungfuSlotNum() {
      return ((bitField0_ & 0x00000008) == 0x00000008);
    }
    /**
     * <code>optional uint32 kungfuSlotNum = 4;</code>
     *
     * <pre>
     * 大于等于0表示对应按钮开启多少个槽数 
     * </pre>
     */
    public int getKungfuSlotNum() {
      return kungfuSlotNum_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      status_ = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.OK;
      kungfuID_ = 0;
      kungfuSlotNum_ = 0;
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
        output.writeUInt32(3, kungfuID_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        output.writeUInt32(4, kungfuSlotNum_);
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
          .computeUInt32Size(3, kungfuID_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(4, kungfuSlotNum_);
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

    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.UnlockKungfuButtonResponse}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse, Builder>
        implements com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponseOrBuilder {
      // Construct using com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse.newBuilder()
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
        kungfuID_ = 0;
        bitField0_ = (bitField0_ & ~0x00000004);
        kungfuSlotNum_ = 0;
        bitField0_ = (bitField0_ & ~0x00000008);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse build() {
        com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse buildPartial() {
        com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse result = new com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse(this);
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
        result.kungfuID_ = kungfuID_;
        if (((from_bitField0_ & 0x00000008) == 0x00000008)) {
          to_bitField0_ |= 0x00000008;
        }
        result.kungfuSlotNum_ = kungfuSlotNum_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse other) {
        if (other == com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasStatus()) {
          setStatus(other.getStatus());
        }
        if (other.hasKungfuID()) {
          setKungfuID(other.getKungfuID());
        }
        if (other.hasKungfuSlotNum()) {
          setKungfuSlotNum(other.getKungfuSlotNum());
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
        com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.kungfu.UnlockKungfuButtonMessage.UnlockKungfuButtonResponse) e.getUnfinishedMessage();
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

      // optional uint32 KungfuID = 3;
      private int kungfuID_ ;
      /**
       * <code>optional uint32 KungfuID = 3;</code>
       */
      public boolean hasKungfuID() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>optional uint32 KungfuID = 3;</code>
       */
      public int getKungfuID() {
        return kungfuID_;
      }
      /**
       * <code>optional uint32 KungfuID = 3;</code>
       */
      public Builder setKungfuID(int value) {
        bitField0_ |= 0x00000004;
        kungfuID_ = value;
        
        return this;
      }
      /**
       * <code>optional uint32 KungfuID = 3;</code>
       */
      public Builder clearKungfuID() {
        bitField0_ = (bitField0_ & ~0x00000004);
        kungfuID_ = 0;
        
        return this;
      }

      // optional uint32 kungfuSlotNum = 4;
      private int kungfuSlotNum_ ;
      /**
       * <code>optional uint32 kungfuSlotNum = 4;</code>
       *
       * <pre>
       * 大于等于0表示对应按钮开启多少个槽数 
       * </pre>
       */
      public boolean hasKungfuSlotNum() {
        return ((bitField0_ & 0x00000008) == 0x00000008);
      }
      /**
       * <code>optional uint32 kungfuSlotNum = 4;</code>
       *
       * <pre>
       * 大于等于0表示对应按钮开启多少个槽数 
       * </pre>
       */
      public int getKungfuSlotNum() {
        return kungfuSlotNum_;
      }
      /**
       * <code>optional uint32 kungfuSlotNum = 4;</code>
       *
       * <pre>
       * 大于等于0表示对应按钮开启多少个槽数 
       * </pre>
       */
      public Builder setKungfuSlotNum(int value) {
        bitField0_ |= 0x00000008;
        kungfuSlotNum_ = value;
        
        return this;
      }
      /**
       * <code>optional uint32 kungfuSlotNum = 4;</code>
       *
       * <pre>
       * 大于等于0表示对应按钮开启多少个槽数 
       * </pre>
       */
      public Builder clearKungfuSlotNum() {
        bitField0_ = (bitField0_ & ~0x00000008);
        kungfuSlotNum_ = 0;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.UnlockKungfuButtonResponse)
    }

    static {
      defaultInstance = new UnlockKungfuButtonResponse(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.UnlockKungfuButtonResponse)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
