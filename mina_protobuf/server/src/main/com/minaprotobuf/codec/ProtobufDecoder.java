package com.minaprotobuf.codec;

import org.apache.mina.core.buffer.IoBuffer;
import org.apache.mina.core.session.IoSession;
import org.apache.mina.filter.codec.CumulativeProtocolDecoder;
import org.apache.mina.filter.codec.ProtocolDecoderOutput;

import com.google.protobuf.ExtensionRegistry;
import com.google.protobuf.InvalidProtocolBufferException;
import com.google.protobuf.MessageLite;

public class ProtobufDecoder extends CumulativeProtocolDecoder {

	/**
	 * Creates a new instance.
	 */
	public ProtobufDecoder(MessageLite prototype) {
        this(prototype, null);
    }

	public ProtobufDecoder(MessageLite prototype,
			ExtensionRegistry extensionRegistry) {
		if (prototype == null) {
			throw new NullPointerException("prototype");
		}
		this.prototype = prototype.getDefaultInstanceForType();
		this.extensionRegistry = extensionRegistry;
	}

	private static final boolean HAS_PARSER;

	static {
		boolean hasParser = false;
		try {
			// MessageLite.getParsetForType() is not available until protobuf
			// 2.5.0.
			MessageLite.class.getDeclaredMethod("getParserForType");
			hasParser = true;
		} catch (Throwable t) {
			// Ignore
		}

		HAS_PARSER = hasParser;
	}

	private MessageLite prototype;
	private ExtensionRegistry extensionRegistry;

	@Override
	protected boolean doDecode(IoSession arg0, IoBuffer msg,
			ProtocolDecoderOutput out) {

		final byte[] array;
		final int offset;
		final int length = msg.limit();
		if (msg.hasArray()) {
			array = msg.array();
			offset = msg.arrayOffset() + msg.position();
		} else {
			array = new byte[length];
			msg.get(array);
			offset = 0;
		}

		try {
			if (extensionRegistry == null) {
				if (HAS_PARSER) {
					out.write(prototype.getParserForType().parseFrom(array,
							offset, length));

				} else {
					out.write(prototype.newBuilderForType()
							.mergeFrom(array, offset, length).build());
				}
			} else {
				if (HAS_PARSER) {
					out.write(prototype.getParserForType().parseFrom(array,
							offset, length, extensionRegistry));
				} else {
					out.write(prototype
							.newBuilderForType()
							.mergeFrom(array, offset, length, extensionRegistry)
							.build());
				}
			}
		} catch (InvalidProtocolBufferException e) {
			e.printStackTrace();
			return false;
		}

		return true;
	}
}
