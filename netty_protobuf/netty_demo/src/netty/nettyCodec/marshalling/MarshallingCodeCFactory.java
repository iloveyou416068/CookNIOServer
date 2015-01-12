package netty.nettyCodec.marshalling;



import io.netty.handler.codec.marshalling.DefaultMarshallerProvider;
import io.netty.handler.codec.marshalling.DefaultUnmarshallerProvider;
import io.netty.handler.codec.marshalling.MarshallerProvider;
import io.netty.handler.codec.marshalling.MarshallingDecoder;
import io.netty.handler.codec.marshalling.MarshallingEncoder;
import io.netty.handler.codec.marshalling.UnmarshallerProvider;

import org.jboss.marshalling.MarshallerFactory;
import org.jboss.marshalling.Marshalling;
import org.jboss.marshalling.MarshallingConfiguration;

/**
 * @author Lilinfeng
 * @version 1.0
 */
public final class MarshallingCodeCFactory {

    /**
     * 鍒涘缓Jboss Marshalling瑙ｇ爜鍣∕arshallingDecoder
     *
     * @return
     */
    public static MarshallingDecoder buildMarshallingDecoder() {
	final MarshallerFactory marshallerFactory = Marshalling
		.getProvidedMarshallerFactory("serial");
	final MarshallingConfiguration configuration = new MarshallingConfiguration();
	configuration.setVersion(5);
	UnmarshallerProvider provider = new DefaultUnmarshallerProvider(
		marshallerFactory, configuration);
	MarshallingDecoder decoder = new MarshallingDecoder(provider, 1024);
	return decoder;
    }

    /**
     * 鍒涘缓Jboss Marshalling缂栫爜鍣∕arshallingEncoder
     *
     * @return
     */
    public static MarshallingEncoder buildMarshallingEncoder() {
	final MarshallerFactory marshallerFactory = Marshalling
		.getProvidedMarshallerFactory("serial");
	final MarshallingConfiguration configuration = new MarshallingConfiguration();
	configuration.setVersion(5);
	MarshallerProvider provider = new DefaultMarshallerProvider(
		marshallerFactory, configuration);
	MarshallingEncoder encoder = new MarshallingEncoder(provider);
	return encoder;
    }
}
