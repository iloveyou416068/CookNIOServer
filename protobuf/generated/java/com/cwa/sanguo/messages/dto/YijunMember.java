// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: yijun_member.proto

package com.cwa.sanguo.messages.dto;

public final class YijunMember {
  private YijunMember() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface MsgYijunMemberOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {

    // required uint64 roleID = 1;
    /**
     * <code>required uint64 roleID = 1;</code>
     *
     * <pre>
     * 角色ID
     * </pre>
     */
    boolean hasRoleID();
    /**
     * <code>required uint64 roleID = 1;</code>
     *
     * <pre>
     * 角色ID
     * </pre>
     */
    long getRoleID();

    // required string roleName = 2;
    /**
     * <code>required string roleName = 2;</code>
     *
     * <pre>
     * 角色名称
     * </pre>
     */
    boolean hasRoleName();
    /**
     * <code>required string roleName = 2;</code>
     *
     * <pre>
     * 角色名称
     * </pre>
     */
    java.lang.String getRoleName();
    /**
     * <code>required string roleName = 2;</code>
     *
     * <pre>
     * 角色名称
     * </pre>
     */
    com.google.protobuf.ByteString
        getRoleNameBytes();

    // required uint32 roleLevel = 3;
    /**
     * <code>required uint32 roleLevel = 3;</code>
     *
     * <pre>
     * 角色等级
     * </pre>
     */
    boolean hasRoleLevel();
    /**
     * <code>required uint32 roleLevel = 3;</code>
     *
     * <pre>
     * 角色等级
     * </pre>
     */
    int getRoleLevel();

    // required uint64 contribution = 4;
    /**
     * <code>required uint64 contribution = 4;</code>
     *
     * <pre>
     * 义军总贡献
     * </pre>
     */
    boolean hasContribution();
    /**
     * <code>required uint64 contribution = 4;</code>
     *
     * <pre>
     * 义军总贡献
     * </pre>
     */
    long getContribution();

    // required uint64 offlineTime = 5;
    /**
     * <code>required uint64 offlineTime = 5;</code>
     *
     * <pre>
     * 离线时长
     * </pre>
     */
    boolean hasOfflineTime();
    /**
     * <code>required uint64 offlineTime = 5;</code>
     *
     * <pre>
     * 离线时长
     * </pre>
     */
    long getOfflineTime();
  }
  /**
   * Protobuf type {@code sanguo.MsgYijunMember}
   *
   * <pre>
   * 义军成员
   * </pre>
   */
  public static final class MsgYijunMember extends
      com.google.protobuf.GeneratedMessageLite
      implements MsgYijunMemberOrBuilder {
    // Use MsgYijunMember.newBuilder() to construct.
    private MsgYijunMember(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private MsgYijunMember(boolean noInit) {}

    private static final MsgYijunMember defaultInstance;
    public static MsgYijunMember getDefaultInstance() {
      return defaultInstance;
    }

    public MsgYijunMember getDefaultInstanceForType() {
      return defaultInstance;
    }

    private MsgYijunMember(
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
              roleID_ = input.readUInt64();
              break;
            }
            case 18: {
              bitField0_ |= 0x00000002;
              roleName_ = input.readBytes();
              break;
            }
            case 24: {
              bitField0_ |= 0x00000004;
              roleLevel_ = input.readUInt32();
              break;
            }
            case 32: {
              bitField0_ |= 0x00000008;
              contribution_ = input.readUInt64();
              break;
            }
            case 40: {
              bitField0_ |= 0x00000010;
              offlineTime_ = input.readUInt64();
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
    public static com.google.protobuf.Parser<MsgYijunMember> PARSER =
        new com.google.protobuf.AbstractParser<MsgYijunMember>() {
      public MsgYijunMember parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new MsgYijunMember(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<MsgYijunMember> getParserForType() {
      return PARSER;
    }

    private int bitField0_;
    // required uint64 roleID = 1;
    public static final int ROLEID_FIELD_NUMBER = 1;
    private long roleID_;
    /**
     * <code>required uint64 roleID = 1;</code>
     *
     * <pre>
     * 角色ID
     * </pre>
     */
    public boolean hasRoleID() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required uint64 roleID = 1;</code>
     *
     * <pre>
     * 角色ID
     * </pre>
     */
    public long getRoleID() {
      return roleID_;
    }

    // required string roleName = 2;
    public static final int ROLENAME_FIELD_NUMBER = 2;
    private java.lang.Object roleName_;
    /**
     * <code>required string roleName = 2;</code>
     *
     * <pre>
     * 角色名称
     * </pre>
     */
    public boolean hasRoleName() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required string roleName = 2;</code>
     *
     * <pre>
     * 角色名称
     * </pre>
     */
    public java.lang.String getRoleName() {
      java.lang.Object ref = roleName_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        if (bs.isValidUtf8()) {
          roleName_ = s;
        }
        return s;
      }
    }
    /**
     * <code>required string roleName = 2;</code>
     *
     * <pre>
     * 角色名称
     * </pre>
     */
    public com.google.protobuf.ByteString
        getRoleNameBytes() {
      java.lang.Object ref = roleName_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        roleName_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    // required uint32 roleLevel = 3;
    public static final int ROLELEVEL_FIELD_NUMBER = 3;
    private int roleLevel_;
    /**
     * <code>required uint32 roleLevel = 3;</code>
     *
     * <pre>
     * 角色等级
     * </pre>
     */
    public boolean hasRoleLevel() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>required uint32 roleLevel = 3;</code>
     *
     * <pre>
     * 角色等级
     * </pre>
     */
    public int getRoleLevel() {
      return roleLevel_;
    }

    // required uint64 contribution = 4;
    public static final int CONTRIBUTION_FIELD_NUMBER = 4;
    private long contribution_;
    /**
     * <code>required uint64 contribution = 4;</code>
     *
     * <pre>
     * 义军总贡献
     * </pre>
     */
    public boolean hasContribution() {
      return ((bitField0_ & 0x00000008) == 0x00000008);
    }
    /**
     * <code>required uint64 contribution = 4;</code>
     *
     * <pre>
     * 义军总贡献
     * </pre>
     */
    public long getContribution() {
      return contribution_;
    }

    // required uint64 offlineTime = 5;
    public static final int OFFLINETIME_FIELD_NUMBER = 5;
    private long offlineTime_;
    /**
     * <code>required uint64 offlineTime = 5;</code>
     *
     * <pre>
     * 离线时长
     * </pre>
     */
    public boolean hasOfflineTime() {
      return ((bitField0_ & 0x00000010) == 0x00000010);
    }
    /**
     * <code>required uint64 offlineTime = 5;</code>
     *
     * <pre>
     * 离线时长
     * </pre>
     */
    public long getOfflineTime() {
      return offlineTime_;
    }

    private void initFields() {
      roleID_ = 0L;
      roleName_ = "";
      roleLevel_ = 0;
      contribution_ = 0L;
      offlineTime_ = 0L;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasRoleID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasRoleName()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasRoleLevel()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasContribution()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasOfflineTime()) {
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
        output.writeUInt64(1, roleID_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeBytes(2, getRoleNameBytes());
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeUInt32(3, roleLevel_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        output.writeUInt64(4, contribution_);
      }
      if (((bitField0_ & 0x00000010) == 0x00000010)) {
        output.writeUInt64(5, offlineTime_);
      }
    }

    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(1, roleID_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(2, getRoleNameBytes());
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(3, roleLevel_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(4, contribution_);
      }
      if (((bitField0_ & 0x00000010) == 0x00000010)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(5, offlineTime_);
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

    public static com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.MsgYijunMember}
     *
     * <pre>
     * 义军成员
     * </pre>
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember, Builder>
        implements com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMemberOrBuilder {
      // Construct using com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember.newBuilder()
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
        roleID_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000001);
        roleName_ = "";
        bitField0_ = (bitField0_ & ~0x00000002);
        roleLevel_ = 0;
        bitField0_ = (bitField0_ & ~0x00000004);
        contribution_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000008);
        offlineTime_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000010);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember build() {
        com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember buildPartial() {
        com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember result = new com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.roleID_ = roleID_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.roleName_ = roleName_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.roleLevel_ = roleLevel_;
        if (((from_bitField0_ & 0x00000008) == 0x00000008)) {
          to_bitField0_ |= 0x00000008;
        }
        result.contribution_ = contribution_;
        if (((from_bitField0_ & 0x00000010) == 0x00000010)) {
          to_bitField0_ |= 0x00000010;
        }
        result.offlineTime_ = offlineTime_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember other) {
        if (other == com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember.getDefaultInstance()) return this;
        if (other.hasRoleID()) {
          setRoleID(other.getRoleID());
        }
        if (other.hasRoleName()) {
          bitField0_ |= 0x00000002;
          roleName_ = other.roleName_;
          
        }
        if (other.hasRoleLevel()) {
          setRoleLevel(other.getRoleLevel());
        }
        if (other.hasContribution()) {
          setContribution(other.getContribution());
        }
        if (other.hasOfflineTime()) {
          setOfflineTime(other.getOfflineTime());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasRoleID()) {
          
          return false;
        }
        if (!hasRoleName()) {
          
          return false;
        }
        if (!hasRoleLevel()) {
          
          return false;
        }
        if (!hasContribution()) {
          
          return false;
        }
        if (!hasOfflineTime()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.dto.YijunMember.MsgYijunMember) e.getUnfinishedMessage();
          throw e;
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      // required uint64 roleID = 1;
      private long roleID_ ;
      /**
       * <code>required uint64 roleID = 1;</code>
       *
       * <pre>
       * 角色ID
       * </pre>
       */
      public boolean hasRoleID() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>required uint64 roleID = 1;</code>
       *
       * <pre>
       * 角色ID
       * </pre>
       */
      public long getRoleID() {
        return roleID_;
      }
      /**
       * <code>required uint64 roleID = 1;</code>
       *
       * <pre>
       * 角色ID
       * </pre>
       */
      public Builder setRoleID(long value) {
        bitField0_ |= 0x00000001;
        roleID_ = value;
        
        return this;
      }
      /**
       * <code>required uint64 roleID = 1;</code>
       *
       * <pre>
       * 角色ID
       * </pre>
       */
      public Builder clearRoleID() {
        bitField0_ = (bitField0_ & ~0x00000001);
        roleID_ = 0L;
        
        return this;
      }

      // required string roleName = 2;
      private java.lang.Object roleName_ = "";
      /**
       * <code>required string roleName = 2;</code>
       *
       * <pre>
       * 角色名称
       * </pre>
       */
      public boolean hasRoleName() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required string roleName = 2;</code>
       *
       * <pre>
       * 角色名称
       * </pre>
       */
      public java.lang.String getRoleName() {
        java.lang.Object ref = roleName_;
        if (!(ref instanceof java.lang.String)) {
          java.lang.String s = ((com.google.protobuf.ByteString) ref)
              .toStringUtf8();
          roleName_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>required string roleName = 2;</code>
       *
       * <pre>
       * 角色名称
       * </pre>
       */
      public com.google.protobuf.ByteString
          getRoleNameBytes() {
        java.lang.Object ref = roleName_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          roleName_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>required string roleName = 2;</code>
       *
       * <pre>
       * 角色名称
       * </pre>
       */
      public Builder setRoleName(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000002;
        roleName_ = value;
        
        return this;
      }
      /**
       * <code>required string roleName = 2;</code>
       *
       * <pre>
       * 角色名称
       * </pre>
       */
      public Builder clearRoleName() {
        bitField0_ = (bitField0_ & ~0x00000002);
        roleName_ = getDefaultInstance().getRoleName();
        
        return this;
      }
      /**
       * <code>required string roleName = 2;</code>
       *
       * <pre>
       * 角色名称
       * </pre>
       */
      public Builder setRoleNameBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000002;
        roleName_ = value;
        
        return this;
      }

      // required uint32 roleLevel = 3;
      private int roleLevel_ ;
      /**
       * <code>required uint32 roleLevel = 3;</code>
       *
       * <pre>
       * 角色等级
       * </pre>
       */
      public boolean hasRoleLevel() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>required uint32 roleLevel = 3;</code>
       *
       * <pre>
       * 角色等级
       * </pre>
       */
      public int getRoleLevel() {
        return roleLevel_;
      }
      /**
       * <code>required uint32 roleLevel = 3;</code>
       *
       * <pre>
       * 角色等级
       * </pre>
       */
      public Builder setRoleLevel(int value) {
        bitField0_ |= 0x00000004;
        roleLevel_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 roleLevel = 3;</code>
       *
       * <pre>
       * 角色等级
       * </pre>
       */
      public Builder clearRoleLevel() {
        bitField0_ = (bitField0_ & ~0x00000004);
        roleLevel_ = 0;
        
        return this;
      }

      // required uint64 contribution = 4;
      private long contribution_ ;
      /**
       * <code>required uint64 contribution = 4;</code>
       *
       * <pre>
       * 义军总贡献
       * </pre>
       */
      public boolean hasContribution() {
        return ((bitField0_ & 0x00000008) == 0x00000008);
      }
      /**
       * <code>required uint64 contribution = 4;</code>
       *
       * <pre>
       * 义军总贡献
       * </pre>
       */
      public long getContribution() {
        return contribution_;
      }
      /**
       * <code>required uint64 contribution = 4;</code>
       *
       * <pre>
       * 义军总贡献
       * </pre>
       */
      public Builder setContribution(long value) {
        bitField0_ |= 0x00000008;
        contribution_ = value;
        
        return this;
      }
      /**
       * <code>required uint64 contribution = 4;</code>
       *
       * <pre>
       * 义军总贡献
       * </pre>
       */
      public Builder clearContribution() {
        bitField0_ = (bitField0_ & ~0x00000008);
        contribution_ = 0L;
        
        return this;
      }

      // required uint64 offlineTime = 5;
      private long offlineTime_ ;
      /**
       * <code>required uint64 offlineTime = 5;</code>
       *
       * <pre>
       * 离线时长
       * </pre>
       */
      public boolean hasOfflineTime() {
        return ((bitField0_ & 0x00000010) == 0x00000010);
      }
      /**
       * <code>required uint64 offlineTime = 5;</code>
       *
       * <pre>
       * 离线时长
       * </pre>
       */
      public long getOfflineTime() {
        return offlineTime_;
      }
      /**
       * <code>required uint64 offlineTime = 5;</code>
       *
       * <pre>
       * 离线时长
       * </pre>
       */
      public Builder setOfflineTime(long value) {
        bitField0_ |= 0x00000010;
        offlineTime_ = value;
        
        return this;
      }
      /**
       * <code>required uint64 offlineTime = 5;</code>
       *
       * <pre>
       * 离线时长
       * </pre>
       */
      public Builder clearOfflineTime() {
        bitField0_ = (bitField0_ & ~0x00000010);
        offlineTime_ = 0L;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.MsgYijunMember)
    }

    static {
      defaultInstance = new MsgYijunMember(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.MsgYijunMember)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
