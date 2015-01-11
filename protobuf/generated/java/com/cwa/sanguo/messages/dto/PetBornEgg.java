// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pet_born_egg.proto

package com.cwa.sanguo.messages.dto;

public final class PetBornEgg {
  private PetBornEgg() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface MsgPetBornEggOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {

    // required uint64 id = 1;
    /**
     * <code>required uint64 id = 1;</code>
     *
     * <pre>
     * 孵化中宠物蛋流水ID
     * </pre>
     */
    boolean hasId();
    /**
     * <code>required uint64 id = 1;</code>
     *
     * <pre>
     * 孵化中宠物蛋流水ID
     * </pre>
     */
    long getId();

    // required uint32 status = 2;
    /**
     * <code>required uint32 status = 2;</code>
     *
     * <pre>
     * 宠物蛋孵化状态(1表示孵化中，2表示孵化结束，3表示无效；定义在proto常量中)
     * </pre>
     */
    boolean hasStatus();
    /**
     * <code>required uint32 status = 2;</code>
     *
     * <pre>
     * 宠物蛋孵化状态(1表示孵化中，2表示孵化结束，3表示无效；定义在proto常量中)
     * </pre>
     */
    int getStatus();

    // required uint32 slot = 3;
    /**
     * <code>required uint32 slot = 3;</code>
     *
     * <pre>
     * 宠物蛋孵化槽位(槽位1，槽位2，槽位3....说明:对应CooldownType中COOLDOWN_PET_BORNING_SLOT_ONE= 10; // 宠物蛋孵化槽位1COOLDOWN_PET__SLOT_TWO = 11; // 宠物蛋孵化槽位2COOLDOWN_PET__SLOT_THREE)
     * </pre>
     */
    boolean hasSlot();
    /**
     * <code>required uint32 slot = 3;</code>
     *
     * <pre>
     * 宠物蛋孵化槽位(槽位1，槽位2，槽位3....说明:对应CooldownType中COOLDOWN_PET_BORNING_SLOT_ONE= 10; // 宠物蛋孵化槽位1COOLDOWN_PET__SLOT_TWO = 11; // 宠物蛋孵化槽位2COOLDOWN_PET__SLOT_THREE)
     * </pre>
     */
    int getSlot();

    // required uint32 attrID = 4;
    /**
     * <code>required uint32 attrID = 4;</code>
     *
     * <pre>
     * 对应goods表中宠物蛋的id
     * </pre>
     */
    boolean hasAttrID();
    /**
     * <code>required uint32 attrID = 4;</code>
     *
     * <pre>
     * 对应goods表中宠物蛋的id
     * </pre>
     */
    int getAttrID();
  }
  /**
   * Protobuf type {@code sanguo.MsgPetBornEgg}
   */
  public static final class MsgPetBornEgg extends
      com.google.protobuf.GeneratedMessageLite
      implements MsgPetBornEggOrBuilder {
    // Use MsgPetBornEgg.newBuilder() to construct.
    private MsgPetBornEgg(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private MsgPetBornEgg(boolean noInit) {}

    private static final MsgPetBornEgg defaultInstance;
    public static MsgPetBornEgg getDefaultInstance() {
      return defaultInstance;
    }

    public MsgPetBornEgg getDefaultInstanceForType() {
      return defaultInstance;
    }

    private MsgPetBornEgg(
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
              id_ = input.readUInt64();
              break;
            }
            case 16: {
              bitField0_ |= 0x00000002;
              status_ = input.readUInt32();
              break;
            }
            case 24: {
              bitField0_ |= 0x00000004;
              slot_ = input.readUInt32();
              break;
            }
            case 32: {
              bitField0_ |= 0x00000008;
              attrID_ = input.readUInt32();
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
    public static com.google.protobuf.Parser<MsgPetBornEgg> PARSER =
        new com.google.protobuf.AbstractParser<MsgPetBornEgg>() {
      public MsgPetBornEgg parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new MsgPetBornEgg(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<MsgPetBornEgg> getParserForType() {
      return PARSER;
    }

    private int bitField0_;
    // required uint64 id = 1;
    public static final int ID_FIELD_NUMBER = 1;
    private long id_;
    /**
     * <code>required uint64 id = 1;</code>
     *
     * <pre>
     * 孵化中宠物蛋流水ID
     * </pre>
     */
    public boolean hasId() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required uint64 id = 1;</code>
     *
     * <pre>
     * 孵化中宠物蛋流水ID
     * </pre>
     */
    public long getId() {
      return id_;
    }

    // required uint32 status = 2;
    public static final int STATUS_FIELD_NUMBER = 2;
    private int status_;
    /**
     * <code>required uint32 status = 2;</code>
     *
     * <pre>
     * 宠物蛋孵化状态(1表示孵化中，2表示孵化结束，3表示无效；定义在proto常量中)
     * </pre>
     */
    public boolean hasStatus() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required uint32 status = 2;</code>
     *
     * <pre>
     * 宠物蛋孵化状态(1表示孵化中，2表示孵化结束，3表示无效；定义在proto常量中)
     * </pre>
     */
    public int getStatus() {
      return status_;
    }

    // required uint32 slot = 3;
    public static final int SLOT_FIELD_NUMBER = 3;
    private int slot_;
    /**
     * <code>required uint32 slot = 3;</code>
     *
     * <pre>
     * 宠物蛋孵化槽位(槽位1，槽位2，槽位3....说明:对应CooldownType中COOLDOWN_PET_BORNING_SLOT_ONE= 10; // 宠物蛋孵化槽位1COOLDOWN_PET__SLOT_TWO = 11; // 宠物蛋孵化槽位2COOLDOWN_PET__SLOT_THREE)
     * </pre>
     */
    public boolean hasSlot() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>required uint32 slot = 3;</code>
     *
     * <pre>
     * 宠物蛋孵化槽位(槽位1，槽位2，槽位3....说明:对应CooldownType中COOLDOWN_PET_BORNING_SLOT_ONE= 10; // 宠物蛋孵化槽位1COOLDOWN_PET__SLOT_TWO = 11; // 宠物蛋孵化槽位2COOLDOWN_PET__SLOT_THREE)
     * </pre>
     */
    public int getSlot() {
      return slot_;
    }

    // required uint32 attrID = 4;
    public static final int ATTRID_FIELD_NUMBER = 4;
    private int attrID_;
    /**
     * <code>required uint32 attrID = 4;</code>
     *
     * <pre>
     * 对应goods表中宠物蛋的id
     * </pre>
     */
    public boolean hasAttrID() {
      return ((bitField0_ & 0x00000008) == 0x00000008);
    }
    /**
     * <code>required uint32 attrID = 4;</code>
     *
     * <pre>
     * 对应goods表中宠物蛋的id
     * </pre>
     */
    public int getAttrID() {
      return attrID_;
    }

    private void initFields() {
      id_ = 0L;
      status_ = 0;
      slot_ = 0;
      attrID_ = 0;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasId()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasStatus()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasSlot()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasAttrID()) {
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
        output.writeUInt64(1, id_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeUInt32(2, status_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeUInt32(3, slot_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        output.writeUInt32(4, attrID_);
      }
    }

    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(1, id_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(2, status_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(3, slot_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(4, attrID_);
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

    public static com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.MsgPetBornEgg}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg, Builder>
        implements com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEggOrBuilder {
      // Construct using com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg.newBuilder()
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
        id_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000001);
        status_ = 0;
        bitField0_ = (bitField0_ & ~0x00000002);
        slot_ = 0;
        bitField0_ = (bitField0_ & ~0x00000004);
        attrID_ = 0;
        bitField0_ = (bitField0_ & ~0x00000008);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg build() {
        com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg buildPartial() {
        com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg result = new com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.id_ = id_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.status_ = status_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.slot_ = slot_;
        if (((from_bitField0_ & 0x00000008) == 0x00000008)) {
          to_bitField0_ |= 0x00000008;
        }
        result.attrID_ = attrID_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg other) {
        if (other == com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg.getDefaultInstance()) return this;
        if (other.hasId()) {
          setId(other.getId());
        }
        if (other.hasStatus()) {
          setStatus(other.getStatus());
        }
        if (other.hasSlot()) {
          setSlot(other.getSlot());
        }
        if (other.hasAttrID()) {
          setAttrID(other.getAttrID());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasId()) {
          
          return false;
        }
        if (!hasStatus()) {
          
          return false;
        }
        if (!hasSlot()) {
          
          return false;
        }
        if (!hasAttrID()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.dto.PetBornEgg.MsgPetBornEgg) e.getUnfinishedMessage();
          throw e;
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      // required uint64 id = 1;
      private long id_ ;
      /**
       * <code>required uint64 id = 1;</code>
       *
       * <pre>
       * 孵化中宠物蛋流水ID
       * </pre>
       */
      public boolean hasId() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>required uint64 id = 1;</code>
       *
       * <pre>
       * 孵化中宠物蛋流水ID
       * </pre>
       */
      public long getId() {
        return id_;
      }
      /**
       * <code>required uint64 id = 1;</code>
       *
       * <pre>
       * 孵化中宠物蛋流水ID
       * </pre>
       */
      public Builder setId(long value) {
        bitField0_ |= 0x00000001;
        id_ = value;
        
        return this;
      }
      /**
       * <code>required uint64 id = 1;</code>
       *
       * <pre>
       * 孵化中宠物蛋流水ID
       * </pre>
       */
      public Builder clearId() {
        bitField0_ = (bitField0_ & ~0x00000001);
        id_ = 0L;
        
        return this;
      }

      // required uint32 status = 2;
      private int status_ ;
      /**
       * <code>required uint32 status = 2;</code>
       *
       * <pre>
       * 宠物蛋孵化状态(1表示孵化中，2表示孵化结束，3表示无效；定义在proto常量中)
       * </pre>
       */
      public boolean hasStatus() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required uint32 status = 2;</code>
       *
       * <pre>
       * 宠物蛋孵化状态(1表示孵化中，2表示孵化结束，3表示无效；定义在proto常量中)
       * </pre>
       */
      public int getStatus() {
        return status_;
      }
      /**
       * <code>required uint32 status = 2;</code>
       *
       * <pre>
       * 宠物蛋孵化状态(1表示孵化中，2表示孵化结束，3表示无效；定义在proto常量中)
       * </pre>
       */
      public Builder setStatus(int value) {
        bitField0_ |= 0x00000002;
        status_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 status = 2;</code>
       *
       * <pre>
       * 宠物蛋孵化状态(1表示孵化中，2表示孵化结束，3表示无效；定义在proto常量中)
       * </pre>
       */
      public Builder clearStatus() {
        bitField0_ = (bitField0_ & ~0x00000002);
        status_ = 0;
        
        return this;
      }

      // required uint32 slot = 3;
      private int slot_ ;
      /**
       * <code>required uint32 slot = 3;</code>
       *
       * <pre>
       * 宠物蛋孵化槽位(槽位1，槽位2，槽位3....说明:对应CooldownType中COOLDOWN_PET_BORNING_SLOT_ONE= 10; // 宠物蛋孵化槽位1COOLDOWN_PET__SLOT_TWO = 11; // 宠物蛋孵化槽位2COOLDOWN_PET__SLOT_THREE)
       * </pre>
       */
      public boolean hasSlot() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>required uint32 slot = 3;</code>
       *
       * <pre>
       * 宠物蛋孵化槽位(槽位1，槽位2，槽位3....说明:对应CooldownType中COOLDOWN_PET_BORNING_SLOT_ONE= 10; // 宠物蛋孵化槽位1COOLDOWN_PET__SLOT_TWO = 11; // 宠物蛋孵化槽位2COOLDOWN_PET__SLOT_THREE)
       * </pre>
       */
      public int getSlot() {
        return slot_;
      }
      /**
       * <code>required uint32 slot = 3;</code>
       *
       * <pre>
       * 宠物蛋孵化槽位(槽位1，槽位2，槽位3....说明:对应CooldownType中COOLDOWN_PET_BORNING_SLOT_ONE= 10; // 宠物蛋孵化槽位1COOLDOWN_PET__SLOT_TWO = 11; // 宠物蛋孵化槽位2COOLDOWN_PET__SLOT_THREE)
       * </pre>
       */
      public Builder setSlot(int value) {
        bitField0_ |= 0x00000004;
        slot_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 slot = 3;</code>
       *
       * <pre>
       * 宠物蛋孵化槽位(槽位1，槽位2，槽位3....说明:对应CooldownType中COOLDOWN_PET_BORNING_SLOT_ONE= 10; // 宠物蛋孵化槽位1COOLDOWN_PET__SLOT_TWO = 11; // 宠物蛋孵化槽位2COOLDOWN_PET__SLOT_THREE)
       * </pre>
       */
      public Builder clearSlot() {
        bitField0_ = (bitField0_ & ~0x00000004);
        slot_ = 0;
        
        return this;
      }

      // required uint32 attrID = 4;
      private int attrID_ ;
      /**
       * <code>required uint32 attrID = 4;</code>
       *
       * <pre>
       * 对应goods表中宠物蛋的id
       * </pre>
       */
      public boolean hasAttrID() {
        return ((bitField0_ & 0x00000008) == 0x00000008);
      }
      /**
       * <code>required uint32 attrID = 4;</code>
       *
       * <pre>
       * 对应goods表中宠物蛋的id
       * </pre>
       */
      public int getAttrID() {
        return attrID_;
      }
      /**
       * <code>required uint32 attrID = 4;</code>
       *
       * <pre>
       * 对应goods表中宠物蛋的id
       * </pre>
       */
      public Builder setAttrID(int value) {
        bitField0_ |= 0x00000008;
        attrID_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 attrID = 4;</code>
       *
       * <pre>
       * 对应goods表中宠物蛋的id
       * </pre>
       */
      public Builder clearAttrID() {
        bitField0_ = (bitField0_ & ~0x00000008);
        attrID_ = 0;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.MsgPetBornEgg)
    }

    static {
      defaultInstance = new MsgPetBornEgg(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.MsgPetBornEgg)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
