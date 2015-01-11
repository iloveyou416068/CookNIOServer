// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: achievement_info.proto

package com.cwa.sanguo.messages.dto;

public final class AchievementInfo {
  private AchievementInfo() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface MsgAchievementInfoDataOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {

    // required uint32 type = 1;
    /**
     * <code>required uint32 type = 1;</code>
     */
    boolean hasType();
    /**
     * <code>required uint32 type = 1;</code>
     */
    int getType();

    // required uint32 progress = 2;
    /**
     * <code>required uint32 progress = 2;</code>
     */
    boolean hasProgress();
    /**
     * <code>required uint32 progress = 2;</code>
     */
    int getProgress();

    // required uint32 count = 3;
    /**
     * <code>required uint32 count = 3;</code>
     */
    boolean hasCount();
    /**
     * <code>required uint32 count = 3;</code>
     */
    int getCount();
  }
  /**
   * Protobuf type {@code sanguo.MsgAchievementInfoData}
   */
  public static final class MsgAchievementInfoData extends
      com.google.protobuf.GeneratedMessageLite
      implements MsgAchievementInfoDataOrBuilder {
    // Use MsgAchievementInfoData.newBuilder() to construct.
    private MsgAchievementInfoData(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private MsgAchievementInfoData(boolean noInit) {}

    private static final MsgAchievementInfoData defaultInstance;
    public static MsgAchievementInfoData getDefaultInstance() {
      return defaultInstance;
    }

    public MsgAchievementInfoData getDefaultInstanceForType() {
      return defaultInstance;
    }

    private MsgAchievementInfoData(
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
              type_ = input.readUInt32();
              break;
            }
            case 16: {
              bitField0_ |= 0x00000002;
              progress_ = input.readUInt32();
              break;
            }
            case 24: {
              bitField0_ |= 0x00000004;
              count_ = input.readUInt32();
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
    public static com.google.protobuf.Parser<MsgAchievementInfoData> PARSER =
        new com.google.protobuf.AbstractParser<MsgAchievementInfoData>() {
      public MsgAchievementInfoData parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new MsgAchievementInfoData(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<MsgAchievementInfoData> getParserForType() {
      return PARSER;
    }

    private int bitField0_;
    // required uint32 type = 1;
    public static final int TYPE_FIELD_NUMBER = 1;
    private int type_;
    /**
     * <code>required uint32 type = 1;</code>
     */
    public boolean hasType() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required uint32 type = 1;</code>
     */
    public int getType() {
      return type_;
    }

    // required uint32 progress = 2;
    public static final int PROGRESS_FIELD_NUMBER = 2;
    private int progress_;
    /**
     * <code>required uint32 progress = 2;</code>
     */
    public boolean hasProgress() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required uint32 progress = 2;</code>
     */
    public int getProgress() {
      return progress_;
    }

    // required uint32 count = 3;
    public static final int COUNT_FIELD_NUMBER = 3;
    private int count_;
    /**
     * <code>required uint32 count = 3;</code>
     */
    public boolean hasCount() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>required uint32 count = 3;</code>
     */
    public int getCount() {
      return count_;
    }

    private void initFields() {
      type_ = 0;
      progress_ = 0;
      count_ = 0;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasType()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasProgress()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasCount()) {
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
        output.writeUInt32(1, type_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeUInt32(2, progress_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeUInt32(3, count_);
      }
    }

    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(1, type_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(2, progress_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(3, count_);
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

    public static com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.MsgAchievementInfoData}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData, Builder>
        implements com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoDataOrBuilder {
      // Construct using com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData.newBuilder()
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
        type_ = 0;
        bitField0_ = (bitField0_ & ~0x00000001);
        progress_ = 0;
        bitField0_ = (bitField0_ & ~0x00000002);
        count_ = 0;
        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData build() {
        com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData buildPartial() {
        com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData result = new com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.type_ = type_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.progress_ = progress_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.count_ = count_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData other) {
        if (other == com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData.getDefaultInstance()) return this;
        if (other.hasType()) {
          setType(other.getType());
        }
        if (other.hasProgress()) {
          setProgress(other.getProgress());
        }
        if (other.hasCount()) {
          setCount(other.getCount());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasType()) {
          
          return false;
        }
        if (!hasProgress()) {
          
          return false;
        }
        if (!hasCount()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.dto.AchievementInfo.MsgAchievementInfoData) e.getUnfinishedMessage();
          throw e;
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      // required uint32 type = 1;
      private int type_ ;
      /**
       * <code>required uint32 type = 1;</code>
       */
      public boolean hasType() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>required uint32 type = 1;</code>
       */
      public int getType() {
        return type_;
      }
      /**
       * <code>required uint32 type = 1;</code>
       */
      public Builder setType(int value) {
        bitField0_ |= 0x00000001;
        type_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 type = 1;</code>
       */
      public Builder clearType() {
        bitField0_ = (bitField0_ & ~0x00000001);
        type_ = 0;
        
        return this;
      }

      // required uint32 progress = 2;
      private int progress_ ;
      /**
       * <code>required uint32 progress = 2;</code>
       */
      public boolean hasProgress() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required uint32 progress = 2;</code>
       */
      public int getProgress() {
        return progress_;
      }
      /**
       * <code>required uint32 progress = 2;</code>
       */
      public Builder setProgress(int value) {
        bitField0_ |= 0x00000002;
        progress_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 progress = 2;</code>
       */
      public Builder clearProgress() {
        bitField0_ = (bitField0_ & ~0x00000002);
        progress_ = 0;
        
        return this;
      }

      // required uint32 count = 3;
      private int count_ ;
      /**
       * <code>required uint32 count = 3;</code>
       */
      public boolean hasCount() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>required uint32 count = 3;</code>
       */
      public int getCount() {
        return count_;
      }
      /**
       * <code>required uint32 count = 3;</code>
       */
      public Builder setCount(int value) {
        bitField0_ |= 0x00000004;
        count_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 count = 3;</code>
       */
      public Builder clearCount() {
        bitField0_ = (bitField0_ & ~0x00000004);
        count_ = 0;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.MsgAchievementInfoData)
    }

    static {
      defaultInstance = new MsgAchievementInfoData(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.MsgAchievementInfoData)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
