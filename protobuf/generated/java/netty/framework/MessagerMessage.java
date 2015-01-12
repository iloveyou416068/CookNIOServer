// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

package netty.framework;

public final class MessagerMessage {
  private MessagerMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface MessagerRequestOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {

    // required .cook.MsgID msgID = 1;
    /**
     * <code>required .cook.MsgID msgID = 1;</code>
     */
    boolean hasMsgID();
    /**
     * <code>required .cook.MsgID msgID = 1;</code>
     */
    netty.framework.MsgId.MsgID getMsgID();

    // repeated int32 content = 2;
    /**
     * <code>repeated int32 content = 2;</code>
     */
    java.util.List<java.lang.Integer> getContentList();
    /**
     * <code>repeated int32 content = 2;</code>
     */
    int getContentCount();
    /**
     * <code>repeated int32 content = 2;</code>
     */
    int getContent(int index);
  }
  /**
   * Protobuf type {@code cook.MessagerRequest}
   */
  public static final class MessagerRequest extends
      com.google.protobuf.GeneratedMessageLite
      implements MessagerRequestOrBuilder {
    // Use MessagerRequest.newBuilder() to construct.
    private MessagerRequest(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private MessagerRequest(boolean noInit) {}

    private static final MessagerRequest defaultInstance;
    public static MessagerRequest getDefaultInstance() {
      return defaultInstance;
    }

    public MessagerRequest getDefaultInstanceForType() {
      return defaultInstance;
    }

    private MessagerRequest(
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
              netty.framework.MsgId.MsgID value = netty.framework.MsgId.MsgID.valueOf(rawValue);
              if (value != null) {
                bitField0_ |= 0x00000001;
                msgID_ = value;
              }
              break;
            }
            case 16: {
              if (!((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
                content_ = new java.util.ArrayList<java.lang.Integer>();
                mutable_bitField0_ |= 0x00000002;
              }
              content_.add(input.readInt32());
              break;
            }
            case 18: {
              int length = input.readRawVarint32();
              int limit = input.pushLimit(length);
              if (!((mutable_bitField0_ & 0x00000002) == 0x00000002) && input.getBytesUntilLimit() > 0) {
                content_ = new java.util.ArrayList<java.lang.Integer>();
                mutable_bitField0_ |= 0x00000002;
              }
              while (input.getBytesUntilLimit() > 0) {
                content_.add(input.readInt32());
              }
              input.popLimit(limit);
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
        if (((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
          content_ = java.util.Collections.unmodifiableList(content_);
        }
        makeExtensionsImmutable();
      }
    }
    public static com.google.protobuf.Parser<MessagerRequest> PARSER =
        new com.google.protobuf.AbstractParser<MessagerRequest>() {
      public MessagerRequest parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new MessagerRequest(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<MessagerRequest> getParserForType() {
      return PARSER;
    }

    private int bitField0_;
    // required .cook.MsgID msgID = 1;
    public static final int MSGID_FIELD_NUMBER = 1;
    private netty.framework.MsgId.MsgID msgID_;
    /**
     * <code>required .cook.MsgID msgID = 1;</code>
     */
    public boolean hasMsgID() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required .cook.MsgID msgID = 1;</code>
     */
    public netty.framework.MsgId.MsgID getMsgID() {
      return msgID_;
    }

    // repeated int32 content = 2;
    public static final int CONTENT_FIELD_NUMBER = 2;
    private java.util.List<java.lang.Integer> content_;
    /**
     * <code>repeated int32 content = 2;</code>
     */
    public java.util.List<java.lang.Integer>
        getContentList() {
      return content_;
    }
    /**
     * <code>repeated int32 content = 2;</code>
     */
    public int getContentCount() {
      return content_.size();
    }
    /**
     * <code>repeated int32 content = 2;</code>
     */
    public int getContent(int index) {
      return content_.get(index);
    }

    private void initFields() {
      msgID_ = netty.framework.MsgId.MsgID.MSG_MESSAGER;
      content_ = java.util.Collections.emptyList();
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
      for (int i = 0; i < content_.size(); i++) {
        output.writeInt32(2, content_.get(i));
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
      {
        int dataSize = 0;
        for (int i = 0; i < content_.size(); i++) {
          dataSize += com.google.protobuf.CodedOutputStream
            .computeInt32SizeNoTag(content_.get(i));
        }
        size += dataSize;
        size += 1 * getContentList().size();
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

    public static netty.framework.MessagerMessage.MessagerRequest parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static netty.framework.MessagerMessage.MessagerRequest parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static netty.framework.MessagerMessage.MessagerRequest parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static netty.framework.MessagerMessage.MessagerRequest parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static netty.framework.MessagerMessage.MessagerRequest parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static netty.framework.MessagerMessage.MessagerRequest parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static netty.framework.MessagerMessage.MessagerRequest parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static netty.framework.MessagerMessage.MessagerRequest parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static netty.framework.MessagerMessage.MessagerRequest parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static netty.framework.MessagerMessage.MessagerRequest parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(netty.framework.MessagerMessage.MessagerRequest prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code cook.MessagerRequest}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          netty.framework.MessagerMessage.MessagerRequest, Builder>
        implements netty.framework.MessagerMessage.MessagerRequestOrBuilder {
      // Construct using netty.framework.MessagerMessage.MessagerRequest.newBuilder()
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
        msgID_ = netty.framework.MsgId.MsgID.MSG_MESSAGER;
        bitField0_ = (bitField0_ & ~0x00000001);
        content_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000002);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public netty.framework.MessagerMessage.MessagerRequest getDefaultInstanceForType() {
        return netty.framework.MessagerMessage.MessagerRequest.getDefaultInstance();
      }

      public netty.framework.MessagerMessage.MessagerRequest build() {
        netty.framework.MessagerMessage.MessagerRequest result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public netty.framework.MessagerMessage.MessagerRequest buildPartial() {
        netty.framework.MessagerMessage.MessagerRequest result = new netty.framework.MessagerMessage.MessagerRequest(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.msgID_ = msgID_;
        if (((bitField0_ & 0x00000002) == 0x00000002)) {
          content_ = java.util.Collections.unmodifiableList(content_);
          bitField0_ = (bitField0_ & ~0x00000002);
        }
        result.content_ = content_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(netty.framework.MessagerMessage.MessagerRequest other) {
        if (other == netty.framework.MessagerMessage.MessagerRequest.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (!other.content_.isEmpty()) {
          if (content_.isEmpty()) {
            content_ = other.content_;
            bitField0_ = (bitField0_ & ~0x00000002);
          } else {
            ensureContentIsMutable();
            content_.addAll(other.content_);
          }
          
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
        netty.framework.MessagerMessage.MessagerRequest parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (netty.framework.MessagerMessage.MessagerRequest) e.getUnfinishedMessage();
          throw e;
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      // required .cook.MsgID msgID = 1;
      private netty.framework.MsgId.MsgID msgID_ = netty.framework.MsgId.MsgID.MSG_MESSAGER;
      /**
       * <code>required .cook.MsgID msgID = 1;</code>
       */
      public boolean hasMsgID() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>required .cook.MsgID msgID = 1;</code>
       */
      public netty.framework.MsgId.MsgID getMsgID() {
        return msgID_;
      }
      /**
       * <code>required .cook.MsgID msgID = 1;</code>
       */
      public Builder setMsgID(netty.framework.MsgId.MsgID value) {
        if (value == null) {
          throw new NullPointerException();
        }
        bitField0_ |= 0x00000001;
        msgID_ = value;
        
        return this;
      }
      /**
       * <code>required .cook.MsgID msgID = 1;</code>
       */
      public Builder clearMsgID() {
        bitField0_ = (bitField0_ & ~0x00000001);
        msgID_ = netty.framework.MsgId.MsgID.MSG_MESSAGER;
        
        return this;
      }

      // repeated int32 content = 2;
      private java.util.List<java.lang.Integer> content_ = java.util.Collections.emptyList();
      private void ensureContentIsMutable() {
        if (!((bitField0_ & 0x00000002) == 0x00000002)) {
          content_ = new java.util.ArrayList<java.lang.Integer>(content_);
          bitField0_ |= 0x00000002;
         }
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public java.util.List<java.lang.Integer>
          getContentList() {
        return java.util.Collections.unmodifiableList(content_);
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public int getContentCount() {
        return content_.size();
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public int getContent(int index) {
        return content_.get(index);
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public Builder setContent(
          int index, int value) {
        ensureContentIsMutable();
        content_.set(index, value);
        
        return this;
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public Builder addContent(int value) {
        ensureContentIsMutable();
        content_.add(value);
        
        return this;
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public Builder addAllContent(
          java.lang.Iterable<? extends java.lang.Integer> values) {
        ensureContentIsMutable();
        super.addAll(values, content_);
        
        return this;
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public Builder clearContent() {
        content_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000002);
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:cook.MessagerRequest)
    }

    static {
      defaultInstance = new MessagerRequest(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:cook.MessagerRequest)
  }

  public interface MessagerResponseOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {

    // required .cook.MsgID msgID = 1;
    /**
     * <code>required .cook.MsgID msgID = 1;</code>
     */
    boolean hasMsgID();
    /**
     * <code>required .cook.MsgID msgID = 1;</code>
     */
    netty.framework.MsgId.MsgID getMsgID();

    // repeated int32 content = 2;
    /**
     * <code>repeated int32 content = 2;</code>
     */
    java.util.List<java.lang.Integer> getContentList();
    /**
     * <code>repeated int32 content = 2;</code>
     */
    int getContentCount();
    /**
     * <code>repeated int32 content = 2;</code>
     */
    int getContent(int index);
  }
  /**
   * Protobuf type {@code cook.MessagerResponse}
   */
  public static final class MessagerResponse extends
      com.google.protobuf.GeneratedMessageLite
      implements MessagerResponseOrBuilder {
    // Use MessagerResponse.newBuilder() to construct.
    private MessagerResponse(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private MessagerResponse(boolean noInit) {}

    private static final MessagerResponse defaultInstance;
    public static MessagerResponse getDefaultInstance() {
      return defaultInstance;
    }

    public MessagerResponse getDefaultInstanceForType() {
      return defaultInstance;
    }

    private MessagerResponse(
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
              netty.framework.MsgId.MsgID value = netty.framework.MsgId.MsgID.valueOf(rawValue);
              if (value != null) {
                bitField0_ |= 0x00000001;
                msgID_ = value;
              }
              break;
            }
            case 16: {
              if (!((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
                content_ = new java.util.ArrayList<java.lang.Integer>();
                mutable_bitField0_ |= 0x00000002;
              }
              content_.add(input.readInt32());
              break;
            }
            case 18: {
              int length = input.readRawVarint32();
              int limit = input.pushLimit(length);
              if (!((mutable_bitField0_ & 0x00000002) == 0x00000002) && input.getBytesUntilLimit() > 0) {
                content_ = new java.util.ArrayList<java.lang.Integer>();
                mutable_bitField0_ |= 0x00000002;
              }
              while (input.getBytesUntilLimit() > 0) {
                content_.add(input.readInt32());
              }
              input.popLimit(limit);
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
        if (((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
          content_ = java.util.Collections.unmodifiableList(content_);
        }
        makeExtensionsImmutable();
      }
    }
    public static com.google.protobuf.Parser<MessagerResponse> PARSER =
        new com.google.protobuf.AbstractParser<MessagerResponse>() {
      public MessagerResponse parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new MessagerResponse(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<MessagerResponse> getParserForType() {
      return PARSER;
    }

    private int bitField0_;
    // required .cook.MsgID msgID = 1;
    public static final int MSGID_FIELD_NUMBER = 1;
    private netty.framework.MsgId.MsgID msgID_;
    /**
     * <code>required .cook.MsgID msgID = 1;</code>
     */
    public boolean hasMsgID() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required .cook.MsgID msgID = 1;</code>
     */
    public netty.framework.MsgId.MsgID getMsgID() {
      return msgID_;
    }

    // repeated int32 content = 2;
    public static final int CONTENT_FIELD_NUMBER = 2;
    private java.util.List<java.lang.Integer> content_;
    /**
     * <code>repeated int32 content = 2;</code>
     */
    public java.util.List<java.lang.Integer>
        getContentList() {
      return content_;
    }
    /**
     * <code>repeated int32 content = 2;</code>
     */
    public int getContentCount() {
      return content_.size();
    }
    /**
     * <code>repeated int32 content = 2;</code>
     */
    public int getContent(int index) {
      return content_.get(index);
    }

    private void initFields() {
      msgID_ = netty.framework.MsgId.MsgID.MSG_MESSAGER;
      content_ = java.util.Collections.emptyList();
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
      for (int i = 0; i < content_.size(); i++) {
        output.writeInt32(2, content_.get(i));
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
      {
        int dataSize = 0;
        for (int i = 0; i < content_.size(); i++) {
          dataSize += com.google.protobuf.CodedOutputStream
            .computeInt32SizeNoTag(content_.get(i));
        }
        size += dataSize;
        size += 1 * getContentList().size();
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

    public static netty.framework.MessagerMessage.MessagerResponse parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static netty.framework.MessagerMessage.MessagerResponse parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static netty.framework.MessagerMessage.MessagerResponse parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static netty.framework.MessagerMessage.MessagerResponse parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static netty.framework.MessagerMessage.MessagerResponse parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static netty.framework.MessagerMessage.MessagerResponse parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static netty.framework.MessagerMessage.MessagerResponse parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static netty.framework.MessagerMessage.MessagerResponse parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static netty.framework.MessagerMessage.MessagerResponse parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static netty.framework.MessagerMessage.MessagerResponse parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(netty.framework.MessagerMessage.MessagerResponse prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code cook.MessagerResponse}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          netty.framework.MessagerMessage.MessagerResponse, Builder>
        implements netty.framework.MessagerMessage.MessagerResponseOrBuilder {
      // Construct using netty.framework.MessagerMessage.MessagerResponse.newBuilder()
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
        msgID_ = netty.framework.MsgId.MsgID.MSG_MESSAGER;
        bitField0_ = (bitField0_ & ~0x00000001);
        content_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000002);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public netty.framework.MessagerMessage.MessagerResponse getDefaultInstanceForType() {
        return netty.framework.MessagerMessage.MessagerResponse.getDefaultInstance();
      }

      public netty.framework.MessagerMessage.MessagerResponse build() {
        netty.framework.MessagerMessage.MessagerResponse result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public netty.framework.MessagerMessage.MessagerResponse buildPartial() {
        netty.framework.MessagerMessage.MessagerResponse result = new netty.framework.MessagerMessage.MessagerResponse(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.msgID_ = msgID_;
        if (((bitField0_ & 0x00000002) == 0x00000002)) {
          content_ = java.util.Collections.unmodifiableList(content_);
          bitField0_ = (bitField0_ & ~0x00000002);
        }
        result.content_ = content_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(netty.framework.MessagerMessage.MessagerResponse other) {
        if (other == netty.framework.MessagerMessage.MessagerResponse.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (!other.content_.isEmpty()) {
          if (content_.isEmpty()) {
            content_ = other.content_;
            bitField0_ = (bitField0_ & ~0x00000002);
          } else {
            ensureContentIsMutable();
            content_.addAll(other.content_);
          }
          
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
        netty.framework.MessagerMessage.MessagerResponse parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (netty.framework.MessagerMessage.MessagerResponse) e.getUnfinishedMessage();
          throw e;
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      // required .cook.MsgID msgID = 1;
      private netty.framework.MsgId.MsgID msgID_ = netty.framework.MsgId.MsgID.MSG_MESSAGER;
      /**
       * <code>required .cook.MsgID msgID = 1;</code>
       */
      public boolean hasMsgID() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>required .cook.MsgID msgID = 1;</code>
       */
      public netty.framework.MsgId.MsgID getMsgID() {
        return msgID_;
      }
      /**
       * <code>required .cook.MsgID msgID = 1;</code>
       */
      public Builder setMsgID(netty.framework.MsgId.MsgID value) {
        if (value == null) {
          throw new NullPointerException();
        }
        bitField0_ |= 0x00000001;
        msgID_ = value;
        
        return this;
      }
      /**
       * <code>required .cook.MsgID msgID = 1;</code>
       */
      public Builder clearMsgID() {
        bitField0_ = (bitField0_ & ~0x00000001);
        msgID_ = netty.framework.MsgId.MsgID.MSG_MESSAGER;
        
        return this;
      }

      // repeated int32 content = 2;
      private java.util.List<java.lang.Integer> content_ = java.util.Collections.emptyList();
      private void ensureContentIsMutable() {
        if (!((bitField0_ & 0x00000002) == 0x00000002)) {
          content_ = new java.util.ArrayList<java.lang.Integer>(content_);
          bitField0_ |= 0x00000002;
         }
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public java.util.List<java.lang.Integer>
          getContentList() {
        return java.util.Collections.unmodifiableList(content_);
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public int getContentCount() {
        return content_.size();
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public int getContent(int index) {
        return content_.get(index);
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public Builder setContent(
          int index, int value) {
        ensureContentIsMutable();
        content_.set(index, value);
        
        return this;
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public Builder addContent(int value) {
        ensureContentIsMutable();
        content_.add(value);
        
        return this;
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public Builder addAllContent(
          java.lang.Iterable<? extends java.lang.Integer> values) {
        ensureContentIsMutable();
        super.addAll(values, content_);
        
        return this;
      }
      /**
       * <code>repeated int32 content = 2;</code>
       */
      public Builder clearContent() {
        content_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000002);
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:cook.MessagerResponse)
    }

    static {
      defaultInstance = new MessagerResponse(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:cook.MessagerResponse)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
