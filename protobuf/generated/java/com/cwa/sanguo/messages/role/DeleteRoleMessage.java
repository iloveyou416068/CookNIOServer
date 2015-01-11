// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: delete_role.proto

package com.cwa.sanguo.messages.role;

public final class DeleteRoleMessage {
  private DeleteRoleMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface DeleteRoleRequestOrBuilder
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

    // required uint64 userID = 2;
    /**
     * <code>required uint64 userID = 2;</code>
     */
    boolean hasUserID();
    /**
     * <code>required uint64 userID = 2;</code>
     */
    long getUserID();

    // required uint64 roleID = 3;
    /**
     * <code>required uint64 roleID = 3;</code>
     */
    boolean hasRoleID();
    /**
     * <code>required uint64 roleID = 3;</code>
     */
    long getRoleID();

    // required uint32 serverID = 4;
    /**
     * <code>required uint32 serverID = 4;</code>
     */
    boolean hasServerID();
    /**
     * <code>required uint32 serverID = 4;</code>
     */
    int getServerID();
  }
  /**
   * Protobuf type {@code sanguo.DeleteRoleRequest}
   */
  public static final class DeleteRoleRequest extends
      com.google.protobuf.GeneratedMessageLite
      implements DeleteRoleRequestOrBuilder {
    // Use DeleteRoleRequest.newBuilder() to construct.
    private DeleteRoleRequest(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private DeleteRoleRequest(boolean noInit) {}

    private static final DeleteRoleRequest defaultInstance;
    public static DeleteRoleRequest getDefaultInstance() {
      return defaultInstance;
    }

    public DeleteRoleRequest getDefaultInstanceForType() {
      return defaultInstance;
    }

    private DeleteRoleRequest(
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
              userID_ = input.readUInt64();
              break;
            }
            case 24: {
              bitField0_ |= 0x00000004;
              roleID_ = input.readUInt64();
              break;
            }
            case 32: {
              bitField0_ |= 0x00000008;
              serverID_ = input.readUInt32();
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
    public static com.google.protobuf.Parser<DeleteRoleRequest> PARSER =
        new com.google.protobuf.AbstractParser<DeleteRoleRequest>() {
      public DeleteRoleRequest parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new DeleteRoleRequest(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<DeleteRoleRequest> getParserForType() {
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

    // required uint64 userID = 2;
    public static final int USERID_FIELD_NUMBER = 2;
    private long userID_;
    /**
     * <code>required uint64 userID = 2;</code>
     */
    public boolean hasUserID() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required uint64 userID = 2;</code>
     */
    public long getUserID() {
      return userID_;
    }

    // required uint64 roleID = 3;
    public static final int ROLEID_FIELD_NUMBER = 3;
    private long roleID_;
    /**
     * <code>required uint64 roleID = 3;</code>
     */
    public boolean hasRoleID() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>required uint64 roleID = 3;</code>
     */
    public long getRoleID() {
      return roleID_;
    }

    // required uint32 serverID = 4;
    public static final int SERVERID_FIELD_NUMBER = 4;
    private int serverID_;
    /**
     * <code>required uint32 serverID = 4;</code>
     */
    public boolean hasServerID() {
      return ((bitField0_ & 0x00000008) == 0x00000008);
    }
    /**
     * <code>required uint32 serverID = 4;</code>
     */
    public int getServerID() {
      return serverID_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      userID_ = 0L;
      roleID_ = 0L;
      serverID_ = 0;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasMsgID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasUserID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasRoleID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasServerID()) {
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
        output.writeUInt64(2, userID_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeUInt64(3, roleID_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        output.writeUInt32(4, serverID_);
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
          .computeUInt64Size(2, userID_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(3, roleID_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(4, serverID_);
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

    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.DeleteRoleRequest}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest, Builder>
        implements com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequestOrBuilder {
      // Construct using com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest.newBuilder()
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
        userID_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000002);
        roleID_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000004);
        serverID_ = 0;
        bitField0_ = (bitField0_ & ~0x00000008);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest build() {
        com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest buildPartial() {
        com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest result = new com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.msgID_ = msgID_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.userID_ = userID_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.roleID_ = roleID_;
        if (((from_bitField0_ & 0x00000008) == 0x00000008)) {
          to_bitField0_ |= 0x00000008;
        }
        result.serverID_ = serverID_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest other) {
        if (other == com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasUserID()) {
          setUserID(other.getUserID());
        }
        if (other.hasRoleID()) {
          setRoleID(other.getRoleID());
        }
        if (other.hasServerID()) {
          setServerID(other.getServerID());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasMsgID()) {
          
          return false;
        }
        if (!hasUserID()) {
          
          return false;
        }
        if (!hasRoleID()) {
          
          return false;
        }
        if (!hasServerID()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleRequest) e.getUnfinishedMessage();
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

      // required uint64 userID = 2;
      private long userID_ ;
      /**
       * <code>required uint64 userID = 2;</code>
       */
      public boolean hasUserID() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required uint64 userID = 2;</code>
       */
      public long getUserID() {
        return userID_;
      }
      /**
       * <code>required uint64 userID = 2;</code>
       */
      public Builder setUserID(long value) {
        bitField0_ |= 0x00000002;
        userID_ = value;
        
        return this;
      }
      /**
       * <code>required uint64 userID = 2;</code>
       */
      public Builder clearUserID() {
        bitField0_ = (bitField0_ & ~0x00000002);
        userID_ = 0L;
        
        return this;
      }

      // required uint64 roleID = 3;
      private long roleID_ ;
      /**
       * <code>required uint64 roleID = 3;</code>
       */
      public boolean hasRoleID() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>required uint64 roleID = 3;</code>
       */
      public long getRoleID() {
        return roleID_;
      }
      /**
       * <code>required uint64 roleID = 3;</code>
       */
      public Builder setRoleID(long value) {
        bitField0_ |= 0x00000004;
        roleID_ = value;
        
        return this;
      }
      /**
       * <code>required uint64 roleID = 3;</code>
       */
      public Builder clearRoleID() {
        bitField0_ = (bitField0_ & ~0x00000004);
        roleID_ = 0L;
        
        return this;
      }

      // required uint32 serverID = 4;
      private int serverID_ ;
      /**
       * <code>required uint32 serverID = 4;</code>
       */
      public boolean hasServerID() {
        return ((bitField0_ & 0x00000008) == 0x00000008);
      }
      /**
       * <code>required uint32 serverID = 4;</code>
       */
      public int getServerID() {
        return serverID_;
      }
      /**
       * <code>required uint32 serverID = 4;</code>
       */
      public Builder setServerID(int value) {
        bitField0_ |= 0x00000008;
        serverID_ = value;
        
        return this;
      }
      /**
       * <code>required uint32 serverID = 4;</code>
       */
      public Builder clearServerID() {
        bitField0_ = (bitField0_ & ~0x00000008);
        serverID_ = 0;
        
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.DeleteRoleRequest)
    }

    static {
      defaultInstance = new DeleteRoleRequest(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.DeleteRoleRequest)
  }

  public interface DeleteRoleResponseOrBuilder
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
   * Protobuf type {@code sanguo.DeleteRoleResponse}
   */
  public static final class DeleteRoleResponse extends
      com.google.protobuf.GeneratedMessageLite
      implements DeleteRoleResponseOrBuilder {
    // Use DeleteRoleResponse.newBuilder() to construct.
    private DeleteRoleResponse(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private DeleteRoleResponse(boolean noInit) {}

    private static final DeleteRoleResponse defaultInstance;
    public static DeleteRoleResponse getDefaultInstance() {
      return defaultInstance;
    }

    public DeleteRoleResponse getDefaultInstanceForType() {
      return defaultInstance;
    }

    private DeleteRoleResponse(
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
    public static com.google.protobuf.Parser<DeleteRoleResponse> PARSER =
        new com.google.protobuf.AbstractParser<DeleteRoleResponse>() {
      public DeleteRoleResponse parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new DeleteRoleResponse(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<DeleteRoleResponse> getParserForType() {
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

    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.DeleteRoleResponse}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse, Builder>
        implements com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponseOrBuilder {
      // Construct using com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse.newBuilder()
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

      public com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse build() {
        com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse buildPartial() {
        com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse result = new com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse(this);
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

      public Builder mergeFrom(com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse other) {
        if (other == com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse.getDefaultInstance()) return this;
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
        com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.role.DeleteRoleMessage.DeleteRoleResponse) e.getUnfinishedMessage();
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

      // @@protoc_insertion_point(builder_scope:sanguo.DeleteRoleResponse)
    }

    static {
      defaultInstance = new DeleteRoleResponse(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.DeleteRoleResponse)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
