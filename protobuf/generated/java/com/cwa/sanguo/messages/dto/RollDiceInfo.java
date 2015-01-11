// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: roll_dice_info.proto

package com.cwa.sanguo.messages.dto;

public final class RollDiceInfo {
  private RollDiceInfo() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface MsgRollDiceInfoOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {

    // required string rewardJson = 1;
    /**
     * <code>required string rewardJson = 1;</code>
     *
     * <pre>
     * 奖励JSON格式
     * </pre>
     */
    boolean hasRewardJson();
    /**
     * <code>required string rewardJson = 1;</code>
     *
     * <pre>
     * 奖励JSON格式
     * </pre>
     */
    java.lang.String getRewardJson();
    /**
     * <code>required string rewardJson = 1;</code>
     *
     * <pre>
     * 奖励JSON格式
     * </pre>
     */
    com.google.protobuf.ByteString
        getRewardJsonBytes();

    // required string desc = 2;
    /**
     * <code>required string desc = 2;</code>
     *
     * <pre>
     * 描述
     * </pre>
     */
    boolean hasDesc();
    /**
     * <code>required string desc = 2;</code>
     *
     * <pre>
     * 描述
     * </pre>
     */
    java.lang.String getDesc();
    /**
     * <code>required string desc = 2;</code>
     *
     * <pre>
     * 描述
     * </pre>
     */
    com.google.protobuf.ByteString
        getDescBytes();

    // required uint32 dicePoint = 3;
    /**
     * <code>required uint32 dicePoint = 3;</code>
     *
     * <pre>
     * 骰子点数
     * </pre>
     */
    boolean hasDicePoint();
    /**
     * <code>required uint32 dicePoint = 3;</code>
     *
     * <pre>
     * 骰子点数
     * </pre>
     */
    int getDicePoint();
  }
  /**
   * Protobuf type {@code sanguo.MsgRollDiceInfo}
   *
   * <pre>
   * 摇骰子信息
   * </pre>
   */
  public static final class MsgRollDiceInfo extends
      com.google.protobuf.GeneratedMessageLite
      implements MsgRollDiceInfoOrBuilder {
    // Use MsgRollDiceInfo.newBuilder() to construct.
    private MsgRollDiceInfo(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private MsgRollDiceInfo(boolean noInit) {}

    private static final MsgRollDiceInfo defaultInstance;
    public static MsgRollDiceInfo getDefaultInstance() {
      return defaultInstance;
    }

    public MsgRollDiceInfo getDefaultInstanceForType() {
      return defaultInstance;
    }

    private MsgRollDiceInfo(
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
            case 10: {
              bitField0_ |= 0x00000001;
              rewardJson_ = input.readBytes();
              break;
            }
            case 18: {
              bitField0_ |= 0x00000002;
              desc_ = input.readBytes();
              break;
            }
            case 24: {
              bitField0_ |= 0x00000004;
              dicePoint_ = input.readUInt32();
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
    public static com.google.protobuf.Parser<MsgRollDiceInfo> PARSER =
        new com.google.protobuf.AbstractParser<MsgRollDiceInfo>() {
      public MsgRollDiceInfo parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new MsgRollDiceInfo(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<MsgRollDiceInfo> getParserForType() {
      return PARSER;
    }

    private int bitField0_;
    // required string rewardJson = 1;
    public static final int REWARDJSON_FIELD_NUMBER = 1;
    private java.lang.Object rewardJson_;
    /**
     * <code>required string rewardJson = 1;</code>
     *
     * <pre>
     * 奖励JSON格式
     * </pre>
     */
    public boolean hasRewardJson() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required string rewardJson = 1;</code>
     *
     * <pre>
     * 奖励JSON格式
     * </pre>
     */
    public java.lang.String getRewardJson() {
      java.lang.Object ref = rewardJson_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        if (bs.isValidUtf8()) {
          rewardJson_ = s;
        }
        return s;
      }
    }
    /**
     * <code>required string rewardJson = 1;</code>
     *
     * <pre>
     * 奖励JSON格式
     * </pre>
     */
    public com.google.protobuf.ByteString
        getRewardJsonBytes() {
      java.lang.Object ref = rewardJson_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        rewardJson_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    // required string desc = 2;
    public static final int DESC_FIELD_NUMBER = 2;
    private java.lang.Object desc_;
    /**
     * <code>required string desc = 2;</code>
     *
     * <pre>
     * 描述
     * </pre>
     */
    public boolean hasDesc() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required string desc = 2;</code>
     *
     * <pre>
     * 描述
     * </pre>
     */
    public java.lang.String getDesc() {
      java.lang.Object ref = desc_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        if (bs.isValidUtf8()) {
          desc_ = s;
        }
        return s;
      }
    }
    /**
     * <code>required string desc = 2;</code>
     *
     * <pre>
     * 描述
     * </pre>
     */
    public com.google.protobuf.ByteString
        getDescBytes() {
      java.lang.Object ref = desc_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        desc_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    // required uint32 dicePoint = 3;
    public static final int DICEPOINT_FIELD_NUMBER = 3;
    private int dicePoint_;
    /**
     * <code>required uint32 dicePoint = 3;</code>
     *
     * <pre>
     * 骰子点数
     * </pre>
     */
    public boolean hasDicePoint() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>required uint32 dicePoint = 3;</code>
     *
     * <pre>
     * 骰子点数
     * </pre>
     */
    public int getDicePoint() {
      return dicePoint_;
    }

    private void initFields() {
      rewardJson_ = "";
      desc_ = "";
      dicePoint_ = 0;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasRewardJson()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasDesc()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasDicePoint()) {
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
        output.writeBytes(1, getRewardJsonBytes());
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeBytes(2, getDescBytes());
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeUInt32(3, dicePoint_);
      }
    }

    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(1, getRewardJsonBytes());
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(2, getDescBytes());
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(3, dicePoint_);
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

    public static com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.MsgRollDiceInfo}
     *
     * <pre>
     * 摇骰子信息
     * </pre>
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo, Builder>
        implements com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfoOrBuilder {
      // Construct using com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo.newBuilder()
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
        rewardJson_ = "";
        bitField0_ = (bitField0_ & ~0x00000001);
        desc_ = "";
        bitField0_ = (bitField0_ & ~0x00000002);
        dicePoint_ = 0;
        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo build() {
        com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo buildPartial() {
        com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo result = new com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.rewardJson_ = rewardJson_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.desc_ = desc_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.dicePoint_ = dicePoint_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo other) {
        if (other == com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo.getDefaultInstance()) return this;
        if (other.hasRewardJson()) {
          bitField0_ |= 0x00000001;
          rewardJson_ = other.rewardJson_;
          
        }
        if (other.hasDesc()) {
          bitField0_ |= 0x00000002;
          desc_ = other.desc_;
          
        }
        if (other.hasDicePoint()) {
          setDicePoint(other.getDicePoint());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasRewardJson()) {
          
          return false;
        }
        if (!hasDesc()) {
          
          return false;
        }
        if (!hasDicePoint()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.dto.RollDiceInfo.MsgRollDiceInfo) e.getUnfinishedMessage();
          throw e;
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      // required string rewardJson = 1;
      private java.lang.Object rewardJson_ = "";
      /**
       * <code>required string rewardJson = 1;</code>
       *
       * <pre>
       * 奖励JSON格式
       * </pre>
       */
      public boolean hasRewardJson() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>required string rewardJson = 1;</code>
       *
       * <pre>
       * 奖励JSON格式
       * </pre>
       */
      public java.lang.String getRewardJson() {
        java.lang.Object ref = rewardJson_;
        if (!(ref instanceof java.lang.String)) {
          java.lang.String s = ((com.google.protobuf.ByteString) ref)
              .toStringUtf8();
          rewardJson_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>required string rewardJson = 1;</code>
       *
       * <pre>
       * 奖励JSON格式
       * </pre>
       */
      public com.google.protobuf.ByteString
          getRewardJsonBytes() {
        java.lang.Object ref = rewardJson_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          rewardJson_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>required string rewardJson = 1;</code>
       *
       * <pre>
       * 奖励JSON格式
       * </pre>
       */
      public Builder setRewardJson(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000001;
        rewardJson_ = value;
        
        return this;
      }
      /**
       * <code>required string rewardJson = 1;</code>
       *
       * <pre>
       * 奖励JSON格式
       * </pre>
       */
      public Builder clearRewardJson() {
        bitField0_ = (bitField0_ & ~0x00000001);
        rewardJson_ = getDefaultInstance().getRewardJson();
        
        return this;
      }
      /**
       * <code>required string rewardJson = 1;</code>
       *
       * <pre>
       * 奖励JSON格式
       * </pre>
       */
      public Builder setRewardJsonBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000001;
        rewardJson_ = value;
        
        return this;
      }

      // required string desc = 2;
      private java.lang.Object desc_ = "";
      /**
       * <code>required string desc = 2;</code>
       *
       * <pre>
       * 描述
       * </pre>
       */
      public boolean hasDesc() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required string desc = 2;</code>
       *
       * <pre>
       * 描述
       * </pre>
       */
      public java.lang.String getDesc() {
        java.lang.Object ref = desc_;
        if (!(ref instanceof java.lang.String)) {
          java.lang.String s = ((com.google.protobuf.ByteString) ref)
              .toStringUtf8();
          desc_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>required string desc = 2;</code>
       *
       * <pre>
       * 描述
       * </pre>
       */
      public com.google.protobuf.ByteString
          getDescBytes() {
        java.lang.Object ref = desc_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          desc_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>required string desc = 2;</code>
       *
       * <pre>
       * 描述
       * </pre>
       */
      public Builder setDesc(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000002;
        desc_ = value;
        
        return this;
      }
      /**
       * <code>required string desc = 2;</code>
       *
       * <pre>
       * 描述
       * </pre>
       */
      public Builder clearDesc() {
        bitField0_ = (bitField0_ & ~0x00000002);
        desc_ = getDefaultInstance().getDesc();
        
        return this;
      }
      /**
       * <code>required string desc = 2;</code>
       *
       * <pre>
       * 描述
       * </pre>
       */
      public Builder setDescBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000002;
        desc_ = value;
        
        return this;
      }

      // required uint32 dicePoint = 3;
      private int dicePoint_ ;
      /**
       * <code>required uint32 dicePoint = 3;</code>
       *
       * <pre>
       * 骰子点数
       * </pre>
       */
      public boolean hasDicePoint() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>required uint32 dicePoint = 3;</code>
       *
       * <pre>
       * 骰子点数
       * </pre>
       */
      public int getDicePoint() {
        return dicePoint_;
      }
      /**
       * <code>required uint32 dicePoint = 3;</code>
       *
       * <pre>
       * 骰子点数
       * </pre>
       */
      public Builder setDicePoint(int value) {
        bitField0_ |= 0x00000004;
        dicePoint_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 dicePoint = 3;</code>
       *
       * <pre>
       * 骰子点数
       * </pre>
       */
      public Builder clearDicePoint() {
        bitField0_ = (bitField0_ & ~0x00000004);
        dicePoint_ = 0;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.MsgRollDiceInfo)
    }

    static {
      defaultInstance = new MsgRollDiceInfo(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.MsgRollDiceInfo)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
