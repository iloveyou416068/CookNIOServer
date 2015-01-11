// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: worldboss_reward_tip_broadcast.proto

package com.cwa.sanguo.messages.worldboss;

public final class WorldbossRewardTipBroadcastMessage {
  private WorldbossRewardTipBroadcastMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface WorldbossRewardTipBroadcastOrBuilder
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

    // optional uint64 allDamage = 3;
    /**
     * <code>optional uint64 allDamage = 3;</code>
     */
    boolean hasAllDamage();
    /**
     * <code>optional uint64 allDamage = 3;</code>
     */
    long getAllDamage();

    // optional uint32 rank = 4;
    /**
     * <code>optional uint32 rank = 4;</code>
     */
    boolean hasRank();
    /**
     * <code>optional uint32 rank = 4;</code>
     */
    int getRank();

    // optional uint32 finalAttack = 5;
    /**
     * <code>optional uint32 finalAttack = 5;</code>
     */
    boolean hasFinalAttack();
    /**
     * <code>optional uint32 finalAttack = 5;</code>
     */
    int getFinalAttack();

    // optional .sanguo.MsgGiftInfo rewardResponse = 6;
    /**
     * <code>optional .sanguo.MsgGiftInfo rewardResponse = 6;</code>
     */
    boolean hasRewardResponse();
    /**
     * <code>optional .sanguo.MsgGiftInfo rewardResponse = 6;</code>
     */
    com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo getRewardResponse();

    // required .sanguo.WorldbossType bossType = 7;
    /**
     * <code>required .sanguo.WorldbossType bossType = 7;</code>
     */
    boolean hasBossType();
    /**
     * <code>required .sanguo.WorldbossType bossType = 7;</code>
     */
    com.cwa.sanguo.messages.Constants.WorldbossType getBossType();
  }
  /**
   * Protobuf type {@code sanguo.WorldbossRewardTipBroadcast}
   */
  public static final class WorldbossRewardTipBroadcast extends
      com.google.protobuf.GeneratedMessageLite
      implements WorldbossRewardTipBroadcastOrBuilder {
    // Use WorldbossRewardTipBroadcast.newBuilder() to construct.
    private WorldbossRewardTipBroadcast(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private WorldbossRewardTipBroadcast(boolean noInit) {}

    private static final WorldbossRewardTipBroadcast defaultInstance;
    public static WorldbossRewardTipBroadcast getDefaultInstance() {
      return defaultInstance;
    }

    public WorldbossRewardTipBroadcast getDefaultInstanceForType() {
      return defaultInstance;
    }

    private WorldbossRewardTipBroadcast(
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
              allDamage_ = input.readUInt64();
              break;
            }
            case 32: {
              bitField0_ |= 0x00000008;
              rank_ = input.readUInt32();
              break;
            }
            case 40: {
              bitField0_ |= 0x00000010;
              finalAttack_ = input.readUInt32();
              break;
            }
            case 50: {
              com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo.Builder subBuilder = null;
              if (((bitField0_ & 0x00000020) == 0x00000020)) {
                subBuilder = rewardResponse_.toBuilder();
              }
              rewardResponse_ = input.readMessage(com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo.PARSER, extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(rewardResponse_);
                rewardResponse_ = subBuilder.buildPartial();
              }
              bitField0_ |= 0x00000020;
              break;
            }
            case 56: {
              int rawValue = input.readEnum();
              com.cwa.sanguo.messages.Constants.WorldbossType value = com.cwa.sanguo.messages.Constants.WorldbossType.valueOf(rawValue);
              if (value != null) {
                bitField0_ |= 0x00000040;
                bossType_ = value;
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
    public static com.google.protobuf.Parser<WorldbossRewardTipBroadcast> PARSER =
        new com.google.protobuf.AbstractParser<WorldbossRewardTipBroadcast>() {
      public WorldbossRewardTipBroadcast parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new WorldbossRewardTipBroadcast(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<WorldbossRewardTipBroadcast> getParserForType() {
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

    // optional uint64 allDamage = 3;
    public static final int ALLDAMAGE_FIELD_NUMBER = 3;
    private long allDamage_;
    /**
     * <code>optional uint64 allDamage = 3;</code>
     */
    public boolean hasAllDamage() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>optional uint64 allDamage = 3;</code>
     */
    public long getAllDamage() {
      return allDamage_;
    }

    // optional uint32 rank = 4;
    public static final int RANK_FIELD_NUMBER = 4;
    private int rank_;
    /**
     * <code>optional uint32 rank = 4;</code>
     */
    public boolean hasRank() {
      return ((bitField0_ & 0x00000008) == 0x00000008);
    }
    /**
     * <code>optional uint32 rank = 4;</code>
     */
    public int getRank() {
      return rank_;
    }

    // optional uint32 finalAttack = 5;
    public static final int FINALATTACK_FIELD_NUMBER = 5;
    private int finalAttack_;
    /**
     * <code>optional uint32 finalAttack = 5;</code>
     */
    public boolean hasFinalAttack() {
      return ((bitField0_ & 0x00000010) == 0x00000010);
    }
    /**
     * <code>optional uint32 finalAttack = 5;</code>
     */
    public int getFinalAttack() {
      return finalAttack_;
    }

    // optional .sanguo.MsgGiftInfo rewardResponse = 6;
    public static final int REWARDRESPONSE_FIELD_NUMBER = 6;
    private com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo rewardResponse_;
    /**
     * <code>optional .sanguo.MsgGiftInfo rewardResponse = 6;</code>
     */
    public boolean hasRewardResponse() {
      return ((bitField0_ & 0x00000020) == 0x00000020);
    }
    /**
     * <code>optional .sanguo.MsgGiftInfo rewardResponse = 6;</code>
     */
    public com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo getRewardResponse() {
      return rewardResponse_;
    }

    // required .sanguo.WorldbossType bossType = 7;
    public static final int BOSSTYPE_FIELD_NUMBER = 7;
    private com.cwa.sanguo.messages.Constants.WorldbossType bossType_;
    /**
     * <code>required .sanguo.WorldbossType bossType = 7;</code>
     */
    public boolean hasBossType() {
      return ((bitField0_ & 0x00000040) == 0x00000040);
    }
    /**
     * <code>required .sanguo.WorldbossType bossType = 7;</code>
     */
    public com.cwa.sanguo.messages.Constants.WorldbossType getBossType() {
      return bossType_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      status_ = com.cwa.sanguo.messages.MsgStatusCode.StatusCode.OK;
      allDamage_ = 0L;
      rank_ = 0;
      finalAttack_ = 0;
      rewardResponse_ = com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo.getDefaultInstance();
      bossType_ = com.cwa.sanguo.messages.Constants.WorldbossType.WORLD_BOSS;
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
      if (!hasBossType()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (hasRewardResponse()) {
        if (!getRewardResponse().isInitialized()) {
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
        output.writeUInt64(3, allDamage_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        output.writeUInt32(4, rank_);
      }
      if (((bitField0_ & 0x00000010) == 0x00000010)) {
        output.writeUInt32(5, finalAttack_);
      }
      if (((bitField0_ & 0x00000020) == 0x00000020)) {
        output.writeMessage(6, rewardResponse_);
      }
      if (((bitField0_ & 0x00000040) == 0x00000040)) {
        output.writeEnum(7, bossType_.getNumber());
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
          .computeUInt64Size(3, allDamage_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(4, rank_);
      }
      if (((bitField0_ & 0x00000010) == 0x00000010)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(5, finalAttack_);
      }
      if (((bitField0_ & 0x00000020) == 0x00000020)) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(6, rewardResponse_);
      }
      if (((bitField0_ & 0x00000040) == 0x00000040)) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(7, bossType_.getNumber());
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

    public static com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.WorldbossRewardTipBroadcast}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast, Builder>
        implements com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcastOrBuilder {
      // Construct using com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast.newBuilder()
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
        allDamage_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000004);
        rank_ = 0;
        bitField0_ = (bitField0_ & ~0x00000008);
        finalAttack_ = 0;
        bitField0_ = (bitField0_ & ~0x00000010);
        rewardResponse_ = com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo.getDefaultInstance();
        bitField0_ = (bitField0_ & ~0x00000020);
        bossType_ = com.cwa.sanguo.messages.Constants.WorldbossType.WORLD_BOSS;
        bitField0_ = (bitField0_ & ~0x00000040);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast build() {
        com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast buildPartial() {
        com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast result = new com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast(this);
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
        result.allDamage_ = allDamage_;
        if (((from_bitField0_ & 0x00000008) == 0x00000008)) {
          to_bitField0_ |= 0x00000008;
        }
        result.rank_ = rank_;
        if (((from_bitField0_ & 0x00000010) == 0x00000010)) {
          to_bitField0_ |= 0x00000010;
        }
        result.finalAttack_ = finalAttack_;
        if (((from_bitField0_ & 0x00000020) == 0x00000020)) {
          to_bitField0_ |= 0x00000020;
        }
        result.rewardResponse_ = rewardResponse_;
        if (((from_bitField0_ & 0x00000040) == 0x00000040)) {
          to_bitField0_ |= 0x00000040;
        }
        result.bossType_ = bossType_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast other) {
        if (other == com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasStatus()) {
          setStatus(other.getStatus());
        }
        if (other.hasAllDamage()) {
          setAllDamage(other.getAllDamage());
        }
        if (other.hasRank()) {
          setRank(other.getRank());
        }
        if (other.hasFinalAttack()) {
          setFinalAttack(other.getFinalAttack());
        }
        if (other.hasRewardResponse()) {
          mergeRewardResponse(other.getRewardResponse());
        }
        if (other.hasBossType()) {
          setBossType(other.getBossType());
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
        if (!hasBossType()) {
          
          return false;
        }
        if (hasRewardResponse()) {
          if (!getRewardResponse().isInitialized()) {
            
            return false;
          }
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.worldboss.WorldbossRewardTipBroadcastMessage.WorldbossRewardTipBroadcast) e.getUnfinishedMessage();
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

      // optional uint64 allDamage = 3;
      private long allDamage_ ;
      /**
       * <code>optional uint64 allDamage = 3;</code>
       */
      public boolean hasAllDamage() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>optional uint64 allDamage = 3;</code>
       */
      public long getAllDamage() {
        return allDamage_;
      }
      /**
       * <code>optional uint64 allDamage = 3;</code>
       */
      public Builder setAllDamage(long value) {
        bitField0_ |= 0x00000004;
        allDamage_ = value;
        
        return this;
      }
      /**
       * <code>optional uint64 allDamage = 3;</code>
       */
      public Builder clearAllDamage() {
        bitField0_ = (bitField0_ & ~0x00000004);
        allDamage_ = 0L;
        
        return this;
      }

      // optional uint32 rank = 4;
      private int rank_ ;
      /**
       * <code>optional uint32 rank = 4;</code>
       */
      public boolean hasRank() {
        return ((bitField0_ & 0x00000008) == 0x00000008);
      }
      /**
       * <code>optional uint32 rank = 4;</code>
       */
      public int getRank() {
        return rank_;
      }
      /**
       * <code>optional uint32 rank = 4;</code>
       */
      public Builder setRank(int value) {
        bitField0_ |= 0x00000008;
        rank_ = value;
        
        return this;
      }
      /**
       * <code>optional uint32 rank = 4;</code>
       */
      public Builder clearRank() {
        bitField0_ = (bitField0_ & ~0x00000008);
        rank_ = 0;
        
        return this;
      }

      // optional uint32 finalAttack = 5;
      private int finalAttack_ ;
      /**
       * <code>optional uint32 finalAttack = 5;</code>
       */
      public boolean hasFinalAttack() {
        return ((bitField0_ & 0x00000010) == 0x00000010);
      }
      /**
       * <code>optional uint32 finalAttack = 5;</code>
       */
      public int getFinalAttack() {
        return finalAttack_;
      }
      /**
       * <code>optional uint32 finalAttack = 5;</code>
       */
      public Builder setFinalAttack(int value) {
        bitField0_ |= 0x00000010;
        finalAttack_ = value;
        
        return this;
      }
      /**
       * <code>optional uint32 finalAttack = 5;</code>
       */
      public Builder clearFinalAttack() {
        bitField0_ = (bitField0_ & ~0x00000010);
        finalAttack_ = 0;
        
        return this;
      }

      // optional .sanguo.MsgGiftInfo rewardResponse = 6;
      private com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo rewardResponse_ = com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo.getDefaultInstance();
      /**
       * <code>optional .sanguo.MsgGiftInfo rewardResponse = 6;</code>
       */
      public boolean hasRewardResponse() {
        return ((bitField0_ & 0x00000020) == 0x00000020);
      }
      /**
       * <code>optional .sanguo.MsgGiftInfo rewardResponse = 6;</code>
       */
      public com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo getRewardResponse() {
        return rewardResponse_;
      }
      /**
       * <code>optional .sanguo.MsgGiftInfo rewardResponse = 6;</code>
       */
      public Builder setRewardResponse(com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo value) {
        if (value == null) {
          throw new NullPointerException();
        }
        rewardResponse_ = value;

        bitField0_ |= 0x00000020;
        return this;
      }
      /**
       * <code>optional .sanguo.MsgGiftInfo rewardResponse = 6;</code>
       */
      public Builder setRewardResponse(
          com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo.Builder builderForValue) {
        rewardResponse_ = builderForValue.build();

        bitField0_ |= 0x00000020;
        return this;
      }
      /**
       * <code>optional .sanguo.MsgGiftInfo rewardResponse = 6;</code>
       */
      public Builder mergeRewardResponse(com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo value) {
        if (((bitField0_ & 0x00000020) == 0x00000020) &&
            rewardResponse_ != com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo.getDefaultInstance()) {
          rewardResponse_ =
            com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo.newBuilder(rewardResponse_).mergeFrom(value).buildPartial();
        } else {
          rewardResponse_ = value;
        }

        bitField0_ |= 0x00000020;
        return this;
      }
      /**
       * <code>optional .sanguo.MsgGiftInfo rewardResponse = 6;</code>
       */
      public Builder clearRewardResponse() {
        rewardResponse_ = com.cwa.sanguo.messages.dto.GiftInfo.MsgGiftInfo.getDefaultInstance();

        bitField0_ = (bitField0_ & ~0x00000020);
        return this;
      }

      // required .sanguo.WorldbossType bossType = 7;
      private com.cwa.sanguo.messages.Constants.WorldbossType bossType_ = com.cwa.sanguo.messages.Constants.WorldbossType.WORLD_BOSS;
      /**
       * <code>required .sanguo.WorldbossType bossType = 7;</code>
       */
      public boolean hasBossType() {
        return ((bitField0_ & 0x00000040) == 0x00000040);
      }
      /**
       * <code>required .sanguo.WorldbossType bossType = 7;</code>
       */
      public com.cwa.sanguo.messages.Constants.WorldbossType getBossType() {
        return bossType_;
      }
      /**
       * <code>required .sanguo.WorldbossType bossType = 7;</code>
       */
      public Builder setBossType(com.cwa.sanguo.messages.Constants.WorldbossType value) {
        if (value == null) {
          throw new NullPointerException();
        }
        bitField0_ |= 0x00000040;
        bossType_ = value;
        
        return this;
      }
      /**
       * <code>required .sanguo.WorldbossType bossType = 7;</code>
       */
      public Builder clearBossType() {
        bitField0_ = (bitField0_ & ~0x00000040);
        bossType_ = com.cwa.sanguo.messages.Constants.WorldbossType.WORLD_BOSS;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.WorldbossRewardTipBroadcast)
    }

    static {
      defaultInstance = new WorldbossRewardTipBroadcast(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.WorldbossRewardTipBroadcast)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
