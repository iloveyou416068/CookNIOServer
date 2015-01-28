package com.minaprotobuf.codec;

import org.apache.mina.core.session.IoSession;
import org.apache.mina.filter.codec.ProtocolCodecFactory;
import org.apache.mina.filter.codec.ProtocolDecoder;
import org.apache.mina.filter.codec.ProtocolEncoder;

import com.minaprotobuf.protobuf.SubscribeReqProto;
import com.minaprotobuf.protobuf.SubscribeReqProto.SubscribeReq;

public class ProtobufCodecFactory implements ProtocolCodecFactory {

	private final ProtocolDecoder decoder;
	private final ProtocolEncoder encoder;

	public ProtobufCodecFactory() {
		SubscribeReq builder = SubscribeReqProto.SubscribeReq.newBuilder()
		.build();
		decoder = new ProtobufDecoder(builder);
		encoder = new ProtobufEncoder();
	}

	@Override
	public ProtocolDecoder getDecoder(IoSession arg0) throws Exception {
		return decoder;
	}

	@Override
	public ProtocolEncoder getEncoder(IoSession arg0) throws Exception {
		return encoder;
	}

}
