package protobuf.Protostuff;

import java.io.OutputStream;

import org.junit.Test;

import protobuf.RoleRank.MsgRankItem;

/**
 * https://code.google.com/p/protostuff/
 * @author Administrator
 *
 */
public class Demos {

	MsgRankItem request = MsgRankItem.newBuilder()
			.setId(123)
			.setName("123")
			.setRankValue(100)
			.build();

	@Test
	public void test_Serialization() {
		boolean numeric;
		OutputStream out;
	}

	@Test
	public void test_Deserialization() {

	}
}
