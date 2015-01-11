// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: equip_kungfu_skill.proto

package com.cwa.sanguo.messages.kungfu;

public final class EquipKungfuSkillMessage {
  private EquipKungfuSkillMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface EquipKungfuSkillRequestOrBuilder
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
     *
     * <pre>
     * 套路ID
     * </pre>
     */
    boolean hasKungfuID();
    /**
     * <code>required uint32 KungfuID = 2;</code>
     *
     * <pre>
     * 套路ID
     * </pre>
     */
    int getKungfuID();

    // required uint32 KungfuSkillID = 3;
    /**
     * <code>required uint32 KungfuSkillID = 3;</code>
     *
     * <pre>
     * 武学attID
     * </pre>
     */
    boolean hasKungfuSkillID();
    /**
     * <code>required uint32 KungfuSkillID = 3;</code>
     *
     * <pre>
     * 武学attID
     * </pre>
     */
    int getKungfuSkillID();

    // required uint32 KungfuSlotID = 4;
    /**
     * <code>required uint32 KungfuSlotID = 4;</code>
     *
     * <pre>
     * 套路槽ID
     * </pre>
     */
    boolean hasKungfuSlotID();
    /**
     * <code>required uint32 KungfuSlotID = 4;</code>
     *
     * <pre>
     * 套路槽ID
     * </pre>
     */
    int getKungfuSlotID();
  }
  /**
   * Protobuf type {@code sanguo.EquipKungfuSkillRequest}
   */
  public static final class EquipKungfuSkillRequest extends
      com.google.protobuf.GeneratedMessageLite
      implements EquipKungfuSkillRequestOrBuilder {
    // Use EquipKungfuSkillRequest.newBuilder() to construct.
    private EquipKungfuSkillRequest(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private EquipKungfuSkillRequest(boolean noInit) {}

    private static final EquipKungfuSkillRequest defaultInstance;
    public static EquipKungfuSkillRequest getDefaultInstance() {
      return defaultInstance;
    }

    public EquipKungfuSkillRequest getDefaultInstanceForType() {
      return defaultInstance;
    }

    private EquipKungfuSkillRequest(
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
            case 24: {
              bitField0_ |= 0x00000004;
              kungfuSkillID_ = input.readUInt32();
              break;
            }
            case 32: {
              bitField0_ |= 0x00000008;
              kungfuSlotID_ = input.readUInt32();
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
    public static com.google.protobuf.Parser<EquipKungfuSkillRequest> PARSER =
        new com.google.protobuf.AbstractParser<EquipKungfuSkillRequest>() {
      public EquipKungfuSkillRequest parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new EquipKungfuSkillRequest(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<EquipKungfuSkillRequest> getParserForType() {
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
     *
     * <pre>
     * 套路ID
     * </pre>
     */
    public boolean hasKungfuID() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required uint32 KungfuID = 2;</code>
     *
     * <pre>
     * 套路ID
     * </pre>
     */
    public int getKungfuID() {
      return kungfuID_;
    }

    // required uint32 KungfuSkillID = 3;
    public static final int KUNGFUSKILLID_FIELD_NUMBER = 3;
    private int kungfuSkillID_;
    /**
     * <code>required uint32 KungfuSkillID = 3;</code>
     *
     * <pre>
     * 武学attID
     * </pre>
     */
    public boolean hasKungfuSkillID() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>required uint32 KungfuSkillID = 3;</code>
     *
     * <pre>
     * 武学attID
     * </pre>
     */
    public int getKungfuSkillID() {
      return kungfuSkillID_;
    }

    // required uint32 KungfuSlotID = 4;
    public static final int KUNGFUSLOTID_FIELD_NUMBER = 4;
    private int kungfuSlotID_;
    /**
     * <code>required uint32 KungfuSlotID = 4;</code>
     *
     * <pre>
     * 套路槽ID
     * </pre>
     */
    public boolean hasKungfuSlotID() {
      return ((bitField0_ & 0x00000008) == 0x00000008);
    }
    /**
     * <code>required uint32 KungfuSlotID = 4;</code>
     *
     * <pre>
     * 套路槽ID
     * </pre>
     */
    public int getKungfuSlotID() {
      return kungfuSlotID_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      kungfuID_ = 0;
      kungfuSkillID_ = 0;
      kungfuSlotID_ = 0;
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
      if (!hasKungfuSkillID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasKungfuSlotID()) {
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
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeUInt32(3, kungfuSkillID_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        output.writeUInt32(4, kungfuSlotID_);
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
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(3, kungfuSkillID_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(4, kungfuSlotID_);
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

    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.EquipKungfuSkillRequest}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest, Builder>
        implements com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequestOrBuilder {
      // Construct using com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest.newBuilder()
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
        kungfuSkillID_ = 0;
        bitField0_ = (bitField0_ & ~0x00000004);
        kungfuSlotID_ = 0;
        bitField0_ = (bitField0_ & ~0x00000008);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest build() {
        com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest buildPartial() {
        com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest result = new com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest(this);
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
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.kungfuSkillID_ = kungfuSkillID_;
        if (((from_bitField0_ & 0x00000008) == 0x00000008)) {
          to_bitField0_ |= 0x00000008;
        }
        result.kungfuSlotID_ = kungfuSlotID_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest other) {
        if (other == com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasKungfuID()) {
          setKungfuID(other.getKungfuID());
        }
        if (other.hasKungfuSkillID()) {
          setKungfuSkillID(other.getKungfuSkillID());
        }
        if (other.hasKungfuSlotID()) {
          setKungfuSlotID(other.getKungfuSlotID());
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
        if (!hasKungfuSkillID()) {
          
          return false;
        }
        if (!hasKungfuSlotID()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillRequest) e.getUnfinishedMessage();
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
       *
       * <pre>
       * 套路ID
       * </pre>
       */
      public boolean hasKungfuID() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required uint32 KungfuID = 2;</code>
       *
       * <pre>
       * 套路ID
       * </pre>
       */
      public int getKungfuID() {
        return kungfuID_;
      }
      /**
       * <code>required uint32 KungfuID = 2;</code>
       *
       * <pre>
       * 套路ID
       * </pre>
       */
      public Builder setKungfuID(int value) {
        bitField0_ |= 0x00000002;
        kungfuID_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 KungfuID = 2;</code>
       *
       * <pre>
       * 套路ID
       * </pre>
       */
      public Builder clearKungfuID() {
        bitField0_ = (bitField0_ & ~0x00000002);
        kungfuID_ = 0;
        
        return this;
      }

      // required uint32 KungfuSkillID = 3;
      private int kungfuSkillID_ ;
      /**
       * <code>required uint32 KungfuSkillID = 3;</code>
       *
       * <pre>
       * 武学attID
       * </pre>
       */
      public boolean hasKungfuSkillID() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>required uint32 KungfuSkillID = 3;</code>
       *
       * <pre>
       * 武学attID
       * </pre>
       */
      public int getKungfuSkillID() {
        return kungfuSkillID_;
      }
      /**
       * <code>required uint32 KungfuSkillID = 3;</code>
       *
       * <pre>
       * 武学attID
       * </pre>
       */
      public Builder setKungfuSkillID(int value) {
        bitField0_ |= 0x00000004;
        kungfuSkillID_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 KungfuSkillID = 3;</code>
       *
       * <pre>
       * 武学attID
       * </pre>
       */
      public Builder clearKungfuSkillID() {
        bitField0_ = (bitField0_ & ~0x00000004);
        kungfuSkillID_ = 0;
        
        return this;
      }

      // required uint32 KungfuSlotID = 4;
      private int kungfuSlotID_ ;
      /**
       * <code>required uint32 KungfuSlotID = 4;</code>
       *
       * <pre>
       * 套路槽ID
       * </pre>
       */
      public boolean hasKungfuSlotID() {
        return ((bitField0_ & 0x00000008) == 0x00000008);
      }
      /**
       * <code>required uint32 KungfuSlotID = 4;</code>
       *
       * <pre>
       * 套路槽ID
       * </pre>
       */
      public int getKungfuSlotID() {
        return kungfuSlotID_;
      }
      /**
       * <code>required uint32 KungfuSlotID = 4;</code>
       *
       * <pre>
       * 套路槽ID
       * </pre>
       */
      public Builder setKungfuSlotID(int value) {
        bitField0_ |= 0x00000008;
        kungfuSlotID_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 KungfuSlotID = 4;</code>
       *
       * <pre>
       * 套路槽ID
       * </pre>
       */
      public Builder clearKungfuSlotID() {
        bitField0_ = (bitField0_ & ~0x00000008);
        kungfuSlotID_ = 0;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.EquipKungfuSkillRequest)
    }

    static {
      defaultInstance = new EquipKungfuSkillRequest(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.EquipKungfuSkillRequest)
  }

  public interface EquipKungfuSkillResponseOrBuilder
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
   * Protobuf type {@code sanguo.EquipKungfuSkillResponse}
   */
  public static final class EquipKungfuSkillResponse extends
      com.google.protobuf.GeneratedMessageLite
      implements EquipKungfuSkillResponseOrBuilder {
    // Use EquipKungfuSkillResponse.newBuilder() to construct.
    private EquipKungfuSkillResponse(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private EquipKungfuSkillResponse(boolean noInit) {}

    private static final EquipKungfuSkillResponse defaultInstance;
    public static EquipKungfuSkillResponse getDefaultInstance() {
      return defaultInstance;
    }

    public EquipKungfuSkillResponse getDefaultInstanceForType() {
      return defaultInstance;
    }

    private EquipKungfuSkillResponse(
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
    public static com.google.protobuf.Parser<EquipKungfuSkillResponse> PARSER =
        new com.google.protobuf.AbstractParser<EquipKungfuSkillResponse>() {
      public EquipKungfuSkillResponse parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new EquipKungfuSkillResponse(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<EquipKungfuSkillResponse> getParserForType() {
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

    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.EquipKungfuSkillResponse}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse, Builder>
        implements com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponseOrBuilder {
      // Construct using com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse.newBuilder()
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

      public com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse build() {
        com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse buildPartial() {
        com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse result = new com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse(this);
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

      public Builder mergeFrom(com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse other) {
        if (other == com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse.getDefaultInstance()) return this;
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
        com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.kungfu.EquipKungfuSkillMessage.EquipKungfuSkillResponse) e.getUnfinishedMessage();
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

      // @@protoc_insertion_point(builder_scope:sanguo.EquipKungfuSkillResponse)
    }

    static {
      defaultInstance = new EquipKungfuSkillResponse(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.EquipKungfuSkillResponse)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
