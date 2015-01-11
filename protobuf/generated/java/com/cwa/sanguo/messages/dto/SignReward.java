// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sign_reward.proto

package com.cwa.sanguo.messages.dto;

public final class SignReward {
  private SignReward() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface MsgSignRewardOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {

    // required uint64 giftID = 1;
    /**
     * <code>required uint64 giftID = 1;</code>
     *
     * <pre>
     * 奖励ID：
     * </pre>
     */
    boolean hasGiftID();
    /**
     * <code>required uint64 giftID = 1;</code>
     *
     * <pre>
     * 奖励ID：
     * </pre>
     */
    long getGiftID();

    // required string rewardInfo = 2;
    /**
     * <code>required string rewardInfo = 2;</code>
     *
     * <pre>
     * 奖励详细信息
     * </pre>
     */
    boolean hasRewardInfo();
    /**
     * <code>required string rewardInfo = 2;</code>
     *
     * <pre>
     * 奖励详细信息
     * </pre>
     */
    java.lang.String getRewardInfo();
    /**
     * <code>required string rewardInfo = 2;</code>
     *
     * <pre>
     * 奖励详细信息
     * </pre>
     */
    com.google.protobuf.ByteString
        getRewardInfoBytes();

    // required uint32 days = 3;
    /**
     * <code>required uint32 days = 3;</code>
     *
     * <pre>
     * 礼包对应天数：5,10,15,20,25
     * </pre>
     */
    boolean hasDays();
    /**
     * <code>required uint32 days = 3;</code>
     *
     * <pre>
     * 礼包对应天数：5,10,15,20,25
     * </pre>
     */
    int getDays();
  }
  /**
   * Protobuf type {@code sanguo.MsgSignReward}
   *
   * <pre>
   * 签到奖励信息
   * </pre>
   */
  public static final class MsgSignReward extends
      com.google.protobuf.GeneratedMessageLite
      implements MsgSignRewardOrBuilder {
    // Use MsgSignReward.newBuilder() to construct.
    private MsgSignReward(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private MsgSignReward(boolean noInit) {}

    private static final MsgSignReward defaultInstance;
    public static MsgSignReward getDefaultInstance() {
      return defaultInstance;
    }

    public MsgSignReward getDefaultInstanceForType() {
      return defaultInstance;
    }

    private MsgSignReward(
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
              bitField0_ |= 0x00000001;
              giftID_ = input.readUInt64();
              break;
            }
            case 18: {
              bitField0_ |= 0x00000002;
              rewardInfo_ = input.readBytes();
              break;
            }
            case 24: {
              bitField0_ |= 0x00000004;
              days_ = input.readUInt32();
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
    public static com.google.protobuf.Parser<MsgSignReward> PARSER =
        new com.google.protobuf.AbstractParser<MsgSignReward>() {
      public MsgSignReward parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new MsgSignReward(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<MsgSignReward> getParserForType() {
      return PARSER;
    }

    private int bitField0_;
    // required uint64 giftID = 1;
    public static final int GIFTID_FIELD_NUMBER = 1;
    private long giftID_;
    /**
     * <code>required uint64 giftID = 1;</code>
     *
     * <pre>
     * 奖励ID：
     * </pre>
     */
    public boolean hasGiftID() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required uint64 giftID = 1;</code>
     *
     * <pre>
     * 奖励ID：
     * </pre>
     */
    public long getGiftID() {
      return giftID_;
    }

    // required string rewardInfo = 2;
    public static final int REWARDINFO_FIELD_NUMBER = 2;
    private java.lang.Object rewardInfo_;
    /**
     * <code>required string rewardInfo = 2;</code>
     *
     * <pre>
     * 奖励详细信息
     * </pre>
     */
    public boolean hasRewardInfo() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required string rewardInfo = 2;</code>
     *
     * <pre>
     * 奖励详细信息
     * </pre>
     */
    public java.lang.String getRewardInfo() {
      java.lang.Object ref = rewardInfo_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        if (bs.isValidUtf8()) {
          rewardInfo_ = s;
        }
        return s;
      }
    }
    /**
     * <code>required string rewardInfo = 2;</code>
     *
     * <pre>
     * 奖励详细信息
     * </pre>
     */
    public com.google.protobuf.ByteString
        getRewardInfoBytes() {
      java.lang.Object ref = rewardInfo_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        rewardInfo_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    // required uint32 days = 3;
    public static final int DAYS_FIELD_NUMBER = 3;
    private int days_;
    /**
     * <code>required uint32 days = 3;</code>
     *
     * <pre>
     * 礼包对应天数：5,10,15,20,25
     * </pre>
     */
    public boolean hasDays() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>required uint32 days = 3;</code>
     *
     * <pre>
     * 礼包对应天数：5,10,15,20,25
     * </pre>
     */
    public int getDays() {
      return days_;
    }

    private void initFields() {
      giftID_ = 0L;
      rewardInfo_ = "";
      days_ = 0;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasGiftID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasRewardInfo()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasDays()) {
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
        output.writeUInt64(1, giftID_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeBytes(2, getRewardInfoBytes());
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeUInt32(3, days_);
      }
    }

    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(1, giftID_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(2, getRewardInfoBytes());
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(3, days_);
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

    public static com.cwa.sanguo.messages.dto.SignReward.MsgSignReward parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.dto.SignReward.MsgSignReward parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.SignReward.MsgSignReward parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.dto.SignReward.MsgSignReward parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.SignReward.MsgSignReward parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.SignReward.MsgSignReward parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.SignReward.MsgSignReward parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.SignReward.MsgSignReward parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.SignReward.MsgSignReward parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.SignReward.MsgSignReward parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.dto.SignReward.MsgSignReward prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.MsgSignReward}
     *
     * <pre>
     * 签到奖励信息
     * </pre>
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.dto.SignReward.MsgSignReward, Builder>
        implements com.cwa.sanguo.messages.dto.SignReward.MsgSignRewardOrBuilder {
      // Construct using com.cwa.sanguo.messages.dto.SignReward.MsgSignReward.newBuilder()
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
        giftID_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000001);
        rewardInfo_ = "";
        bitField0_ = (bitField0_ & ~0x00000002);
        days_ = 0;
        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.dto.SignReward.MsgSignReward getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.dto.SignReward.MsgSignReward.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.dto.SignReward.MsgSignReward build() {
        com.cwa.sanguo.messages.dto.SignReward.MsgSignReward result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.dto.SignReward.MsgSignReward buildPartial() {
        com.cwa.sanguo.messages.dto.SignReward.MsgSignReward result = new com.cwa.sanguo.messages.dto.SignReward.MsgSignReward(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.giftID_ = giftID_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.rewardInfo_ = rewardInfo_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.days_ = days_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.dto.SignReward.MsgSignReward other) {
        if (other == com.cwa.sanguo.messages.dto.SignReward.MsgSignReward.getDefaultInstance()) return this;
        if (other.hasGiftID()) {
          setGiftID(other.getGiftID());
        }
        if (other.hasRewardInfo()) {
          bitField0_ |= 0x00000002;
          rewardInfo_ = other.rewardInfo_;
          
        }
        if (other.hasDays()) {
          setDays(other.getDays());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasGiftID()) {
          
          return false;
        }
        if (!hasRewardInfo()) {
          
          return false;
        }
        if (!hasDays()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.dto.SignReward.MsgSignReward parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.dto.SignReward.MsgSignReward) e.getUnfinishedMessage();
          throw e;
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      // required uint64 giftID = 1;
      private long giftID_ ;
      /**
       * <code>required uint64 giftID = 1;</code>
       *
       * <pre>
       * 奖励ID：
       * </pre>
       */
      public boolean hasGiftID() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>required uint64 giftID = 1;</code>
       *
       * <pre>
       * 奖励ID：
       * </pre>
       */
      public long getGiftID() {
        return giftID_;
      }
      /**
       * <code>required uint64 giftID = 1;</code>
       *
       * <pre>
       * 奖励ID：
       * </pre>
       */
      public Builder setGiftID(long value) {
        bitField0_ |= 0x00000001;
        giftID_ = value;
        
        return this;
      }
      /**
       * <code>required uint64 giftID = 1;</code>
       *
       * <pre>
       * 奖励ID：
       * </pre>
       */
      public Builder clearGiftID() {
        bitField0_ = (bitField0_ & ~0x00000001);
        giftID_ = 0L;
        
        return this;
      }

      // required string rewardInfo = 2;
      private java.lang.Object rewardInfo_ = "";
      /**
       * <code>required string rewardInfo = 2;</code>
       *
       * <pre>
       * 奖励详细信息
       * </pre>
       */
      public boolean hasRewardInfo() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required string rewardInfo = 2;</code>
       *
       * <pre>
       * 奖励详细信息
       * </pre>
       */
      public java.lang.String getRewardInfo() {
        java.lang.Object ref = rewardInfo_;
        if (!(ref instanceof java.lang.String)) {
          java.lang.String s = ((com.google.protobuf.ByteString) ref)
              .toStringUtf8();
          rewardInfo_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>required string rewardInfo = 2;</code>
       *
       * <pre>
       * 奖励详细信息
       * </pre>
       */
      public com.google.protobuf.ByteString
          getRewardInfoBytes() {
        java.lang.Object ref = rewardInfo_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          rewardInfo_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>required string rewardInfo = 2;</code>
       *
       * <pre>
       * 奖励详细信息
       * </pre>
       */
      public Builder setRewardInfo(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000002;
        rewardInfo_ = value;
        
        return this;
      }
      /**
       * <code>required string rewardInfo = 2;</code>
       *
       * <pre>
       * 奖励详细信息
       * </pre>
       */
      public Builder clearRewardInfo() {
        bitField0_ = (bitField0_ & ~0x00000002);
        rewardInfo_ = getDefaultInstance().getRewardInfo();
        
        return this;
      }
      /**
       * <code>required string rewardInfo = 2;</code>
       *
       * <pre>
       * 奖励详细信息
       * </pre>
       */
      public Builder setRewardInfoBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000002;
        rewardInfo_ = value;
        
        return this;
      }

      // required uint32 days = 3;
      private int days_ ;
      /**
       * <code>required uint32 days = 3;</code>
       *
       * <pre>
       * 礼包对应天数：5,10,15,20,25
       * </pre>
       */
      public boolean hasDays() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>required uint32 days = 3;</code>
       *
       * <pre>
       * 礼包对应天数：5,10,15,20,25
       * </pre>
       */
      public int getDays() {
        return days_;
      }
      /**
       * <code>required uint32 days = 3;</code>
       *
       * <pre>
       * 礼包对应天数：5,10,15,20,25
       * </pre>
       */
      public Builder setDays(int value) {
        bitField0_ |= 0x00000004;
        days_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 days = 3;</code>
       *
       * <pre>
       * 礼包对应天数：5,10,15,20,25
       * </pre>
       */
      public Builder clearDays() {
        bitField0_ = (bitField0_ & ~0x00000004);
        days_ = 0;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.MsgSignReward)
    }

    static {
      defaultInstance = new MsgSignReward(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.MsgSignReward)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
