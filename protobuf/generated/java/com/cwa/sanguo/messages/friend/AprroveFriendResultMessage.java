// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: aprrove_friend_result.proto

package com.cwa.sanguo.messages.friend;

public final class AprroveFriendResultMessage {
  private AprroveFriendResultMessage() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface AprroveFriendResultOrBuilder
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

    // required .sanguo.MsgRoleFriendAprrove approveFriend = 2;
    /**
     * <code>required .sanguo.MsgRoleFriendAprrove approveFriend = 2;</code>
     */
    boolean hasApproveFriend();
    /**
     * <code>required .sanguo.MsgRoleFriendAprrove approveFriend = 2;</code>
     */
    com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove getApproveFriend();
  }
  /**
   * Protobuf type {@code sanguo.AprroveFriendResult}
   */
  public static final class AprroveFriendResult extends
      com.google.protobuf.GeneratedMessageLite
      implements AprroveFriendResultOrBuilder {
    // Use AprroveFriendResult.newBuilder() to construct.
    private AprroveFriendResult(com.google.protobuf.GeneratedMessageLite.Builder builder) {
      super(builder);

    }
    private AprroveFriendResult(boolean noInit) {}

    private static final AprroveFriendResult defaultInstance;
    public static AprroveFriendResult getDefaultInstance() {
      return defaultInstance;
    }

    public AprroveFriendResult getDefaultInstanceForType() {
      return defaultInstance;
    }

    private AprroveFriendResult(
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
            case 18: {
              com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove.Builder subBuilder = null;
              if (((bitField0_ & 0x00000002) == 0x00000002)) {
                subBuilder = approveFriend_.toBuilder();
              }
              approveFriend_ = input.readMessage(com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove.PARSER, extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(approveFriend_);
                approveFriend_ = subBuilder.buildPartial();
              }
              bitField0_ |= 0x00000002;
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
    public static com.google.protobuf.Parser<AprroveFriendResult> PARSER =
        new com.google.protobuf.AbstractParser<AprroveFriendResult>() {
      public AprroveFriendResult parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new AprroveFriendResult(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<AprroveFriendResult> getParserForType() {
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

    // required .sanguo.MsgRoleFriendAprrove approveFriend = 2;
    public static final int APPROVEFRIEND_FIELD_NUMBER = 2;
    private com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove approveFriend_;
    /**
     * <code>required .sanguo.MsgRoleFriendAprrove approveFriend = 2;</code>
     */
    public boolean hasApproveFriend() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required .sanguo.MsgRoleFriendAprrove approveFriend = 2;</code>
     */
    public com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove getApproveFriend() {
      return approveFriend_;
    }

    private void initFields() {
      msgID_ = com.cwa.sanguo.messages.MsgId.MsgID.MSG_LOGIN;
      approveFriend_ = com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove.getDefaultInstance();
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasMsgID()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasApproveFriend()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!getApproveFriend().isInitialized()) {
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
        output.writeMessage(2, approveFriend_);
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
          .computeMessageSize(2, approveFriend_);
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

    public static com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    /**
     * Protobuf type {@code sanguo.AprroveFriendResult}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult, Builder>
        implements com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResultOrBuilder {
      // Construct using com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult.newBuilder()
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
        approveFriend_ = com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove.getDefaultInstance();
        bitField0_ = (bitField0_ & ~0x00000002);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult getDefaultInstanceForType() {
        return com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult.getDefaultInstance();
      }

      public com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult build() {
        com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult buildPartial() {
        com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult result = new com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.msgID_ = msgID_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.approveFriend_ = approveFriend_;
        result.bitField0_ = to_bitField0_;
        return result;
      }

      public Builder mergeFrom(com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult other) {
        if (other == com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult.getDefaultInstance()) return this;
        if (other.hasMsgID()) {
          setMsgID(other.getMsgID());
        }
        if (other.hasApproveFriend()) {
          mergeApproveFriend(other.getApproveFriend());
        }
        return this;
      }

      public final boolean isInitialized() {
        if (!hasMsgID()) {
          
          return false;
        }
        if (!hasApproveFriend()) {
          
          return false;
        }
        if (!getApproveFriend().isInitialized()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.cwa.sanguo.messages.friend.AprroveFriendResultMessage.AprroveFriendResult) e.getUnfinishedMessage();
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

      // required .sanguo.MsgRoleFriendAprrove approveFriend = 2;
      private com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove approveFriend_ = com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove.getDefaultInstance();
      /**
       * <code>required .sanguo.MsgRoleFriendAprrove approveFriend = 2;</code>
       */
      public boolean hasApproveFriend() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required .sanguo.MsgRoleFriendAprrove approveFriend = 2;</code>
       */
      public com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove getApproveFriend() {
        return approveFriend_;
      }
      /**
       * <code>required .sanguo.MsgRoleFriendAprrove approveFriend = 2;</code>
       */
      public Builder setApproveFriend(com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove value) {
        if (value == null) {
          throw new NullPointerException();
        }
        approveFriend_ = value;

        bitField0_ |= 0x00000002;
        return this;
      }
      /**
       * <code>required .sanguo.MsgRoleFriendAprrove approveFriend = 2;</code>
       */
      public Builder setApproveFriend(
          com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove.Builder builderForValue) {
        approveFriend_ = builderForValue.build();

        bitField0_ |= 0x00000002;
        return this;
      }
      /**
       * <code>required .sanguo.MsgRoleFriendAprrove approveFriend = 2;</code>
       */
      public Builder mergeApproveFriend(com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove value) {
        if (((bitField0_ & 0x00000002) == 0x00000002) &&
            approveFriend_ != com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove.getDefaultInstance()) {
          approveFriend_ =
            com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove.newBuilder(approveFriend_).mergeFrom(value).buildPartial();
        } else {
          approveFriend_ = value;
        }

        bitField0_ |= 0x00000002;
        return this;
      }
      /**
       * <code>required .sanguo.MsgRoleFriendAprrove approveFriend = 2;</code>
       */
      public Builder clearApproveFriend() {
        approveFriend_ = com.cwa.sanguo.messages.dto.RoleFriendAprrove.MsgRoleFriendAprrove.getDefaultInstance();

        bitField0_ = (bitField0_ & ~0x00000002);
        return this;
      }

      // @@protoc_insertion_point(builder_scope:sanguo.AprroveFriendResult)
    }

    static {
      defaultInstance = new AprroveFriendResult(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:sanguo.AprroveFriendResult)
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
