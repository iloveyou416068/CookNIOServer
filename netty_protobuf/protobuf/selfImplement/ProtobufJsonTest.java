package protobuf.selfImplement;

import java.io.IOException;

import org.junit.Test;

import com.google.protobuf.Parser;

import protobuf.RoleRank.MsgRankItem;

public class ProtobufJsonTest {

	@Test
	public void test_pb2json() throws IOException {
		MsgRankItem request = MsgRankItem.newBuilder()
				.setId(123)
				.setName("123")
				.setRankValue(100)
				.build();

		Parser<MsgRankItem> parser = request.getParserForType();

		String str = ProtobufJson.pb2jsonFromByteArray(request.toByteArray());
		System.out.println(str);
	}
}
