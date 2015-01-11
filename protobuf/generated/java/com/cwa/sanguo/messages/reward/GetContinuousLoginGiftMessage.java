// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_continuous_login_gift.proto

package com.cwa.sanguo.messages.reward;

public final class GetContinuousLoginGiftMessage {
  private GetContinuousLoginGiftMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface GetContinuousLoginGiftRequestOrBuilder
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
   * Protobuf type {@code sanguo.GetContinuousLoginGiftRequest}
   */
  public static final class GetContinuousLoginGiftRequest extends
      com.google.protobuf.GeneratedMessageLite
      implements GetContinuousLoginGiftRequestOrBuilder {
    // Use GetContinuousLoginGiftRequest.newBuilder() to construct.
    private GetContinuousLoginGiftRequest(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private GetContinuousLoginGiftRequest(boolean noInit) {}

    private static final GetContinuousLoginGiftRequest defaultInstance;
    public static GetContinuousLoginGiftRequest getDefaultInstance() {
      return defaultInstance;
    }

    public GetContinuousLoginGiftRequest getDefaultInstanceForType() {
      return defaultInstance;
    }

    private GetContinuousLoginGiftRequest(
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
    public static com.google.protobuf.Parser<GetContinuousLoginGiftRequest> PARSER =
        new com.google.protobuf.AbstractParser<GetContinuousLoginGiftRequest>() {
      public GetContinuousLoginGiftRequest parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new GetContinuousLoginGiftRequest(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<GetContinuousLoginGiftRequest> getParserForType() {
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

    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.GetContinuousLoginGiftRequest}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest, Builder>
        implements com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequestOrBuilder {
      // Construct using com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest.newBuilder()
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

      public com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest build() {
        com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest buildPartial() {
        com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest result = new com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.msgID_ = msgID_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest other) {
        if (other == com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest.getDefaultInstance()) return this;
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
        com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftRequest) e.getUnfinishedMessage();
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

      // @@protoc_insertion_point(builder_scope:sanguo.GetContinuousLoginGiftRequest)
    }

    static {
      defaultInstance = new GetContinuousLoginGiftRequest(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.GetContinuousLoginGiftRequest)
  }

  public interface GetContinuousLoginGiftResponseOrBuilder
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

    // repeated string gifts = 3;
    /**
     * <code>repeated string gifts = 3;</code>
     */
    java.util.List<java.lang.String>
    getGiftsList();
    /**
     * <code>repeated string gifts = 3;</code>
     */
    int getGiftsCount();
    /**
     * <code>repeated string gifts = 3;</code>
     */
    java.lang.String getGifts(int index);
    /**
     * <code>repeated string gifts = 3;</code>
     */
    com.google.protobuf.ByteString
        getGiftsBytes(int index);
  }
  /**
   * Protobuf type {@code sanguo.GetContinuousLoginGiftResponse}
   */
  public static final class GetContinuousLoginGiftResponse extends
      com.google.protobuf.GeneratedMessageLite
      implements GetContinuousLoginGiftResponseOrBuilder {
    // Use GetContinuousLoginGiftResponse.newBuilder() to construct.
    private GetContinuousLoginGiftResponse(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private GetContinuousLoginGiftResponse(boolean noInit) {}

    private static final GetContinuousLoginGiftResponse defaultInstance;
    public static GetContinuousLoginGiftResponse getDefaultInstance() {
      return defaultInstance;
    }

    public GetContinuousLoginGiftResponse getDefaultInstanceForType() {
      return defaultInstance;
    }

    private GetContinuousLoginGiftResponse(
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
                gifts_ = new com.google.protobuf.LazyStringArrayList();
                mutable_bitField0_ |= 0x00000004;
              }
              gifts_.add(input.readBytes());
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
          gifts_ = new com.google.protobuf.UnmodifiableLazyStringList(gifts_);
        }
        makeExtensionsImmutable();
      }
    }
    public static com.google.protobuf.Parser<GetContinuousLoginGiftResponse> PARSER =
        new com.google.protobuf.AbstractParser<GetContinuousLoginGiftResponse>() {
      public GetContinuousLoginGiftResponse parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new GetContinuousLoginGiftResponse(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<GetContinuousLoginGiftResponse> getParserForType() {
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

    // repeated string gifts = 3;
    public static final int GIFTS_FIELD_NUMBER = 3;
    private com.google.protobuf.LazyStringList gifts_;
    /**
     * <code>repeated string gifts = 3;</code>
     */
    public java.util.List<java.lang.String>
        getGiftsList() {
      return gifts_;
    }
    /**
     * <code>repeated string gifts = 3;</code>
     */
    public int getGiftsCount() {
      return gifts_.size();
    }
    /**
     * <code>repeated string gifts = 3;</code>
     */
    public java.lang.String getGifts(int index) {
      return gifts_.get(index);
    }
    /**
     * <code>repeated string gifts = 3;</code>
     */
    public com.google.protobuf.ByteString
        getGiftsBytes(int index) {
      return gifts_.getByteString(index);
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      status_ = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.OK;
      gifts_ = com.google.protobuf.LazyStringArrayList.EMPTY;
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
      for (int i = 0; i < gifts_.size(); i++) {
        output.writeBytes(3, gifts_.getByteString(i));
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
      {
        int dataSize = 0;
        for (int i = 0; i < gifts_.size(); i++) {
          dataSize += com.google.protobuf.CodedOutputStream
            .computeBytesSizeNoTag(gifts_.getByteString(i));
        }
        size += dataSize;
        size += 1 * getGiftsList().size();
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

    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.GetContinuousLoginGiftResponse}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse, Builder>
        implements com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponseOrBuilder {
      // Construct using com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse.newBuilder()
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
        gifts_ = com.google.protobuf.LazyStringArrayList.EMPTY;
        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse build() {
        com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse buildPartial() {
        com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse result = new com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse(this);
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
          gifts_ = new com.google.protobuf.UnmodifiableLazyStringList(
              gifts_);
          bitField0_ = (bitField0_ & ~0x00000004);
        }
        result.gifts_ = gifts_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse other) {
        if (other == com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasStatus()) {
          setStatus(other.getStatus());
        }
        if (!other.gifts_.isEmpty()) {
          if (gifts_.isEmpty()) {
            gifts_ = other.gifts_;
            bitField0_ = (bitField0_ & ~0x00000004);
          } else {
            ensureGiftsIsMutable();
            gifts_.addAll(other.gifts_);
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
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.reward.GetContinuousLoginGiftMessage.GetContinuousLoginGiftResponse) e.getUnfinishedMessage();
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

      // repeated string gifts = 3;
      private com.google.protobuf.LazyStringList gifts_ = com.google.protobuf.LazyStringArrayList.EMPTY;
      private void ensureGiftsIsMutable() {
        if (!((bitField0_ & 0x00000004) == 0x00000004)) {
          gifts_ = new com.google.protobuf.LazyStringArrayList(gifts_);
          bitField0_ |= 0x00000004;
         }
      }
      /**
       * <code>repeated string gifts = 3;</code>
       */
      public java.util.List<java.lang.String>
          getGiftsList() {
        return java.util.Collections.unmodifiableList(gifts_);
      }
      /**
       * <code>repeated string gifts = 3;</code>
       */
      public int getGiftsCount() {
        return gifts_.size();
      }
      /**
       * <code>repeated string gifts = 3;</code>
       */
      public java.lang.String getGifts(int index) {
        return gifts_.get(index);
      }
      /**
       * <code>repeated string gifts = 3;</code>
       */
      public com.google.protobuf.ByteString
          getGiftsBytes(int index) {
        return gifts_.getByteString(index);
      }
      /**
       * <code>repeated string gifts = 3;</code>
       */
      public Builder setGifts(
          int index, java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  ensureGiftsIsMutable();
        gifts_.set(index, value);
        
        return this;
      }
      /**
       * <code>repeated string gifts = 3;</code>
       */
      public Builder addGifts(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  ensureGiftsIsMutable();
        gifts_.add(value);
        
        return this;
      }
      /**
       * <code>repeated string gifts = 3;</code>
       */
      public Builder addAllGifts(
          java.lang.Iterable<java.lang.String> values) {
        ensureGiftsIsMutable();
        super.addAll(values, gifts_);
        
        return this;
      }
      /**
       * <code>repeated string gifts = 3;</code>
       */
      public Builder clearGifts() {
        gifts_ = com.google.protobuf.LazyStringArrayList.EMPTY;
        bitField0_ = (bitField0_ & ~0x00000004);
        
        return this;
      }
      /**
       * <code>repeated string gifts = 3;</code>
       */
      public Builder addGiftsBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  ensureGiftsIsMutable();
        gifts_.add(value);
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.GetContinuousLoginGiftResponse)
    }

    static {
      defaultInstance = new GetContinuousLoginGiftResponse(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.GetContinuousLoginGiftResponse)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
