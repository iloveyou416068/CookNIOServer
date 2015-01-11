package protobuf.protobuf_java_format;

import org.junit.Test;

import protobuf.RoleRank.MsgRankItem;

import com.google.protobuf.InvalidProtocolBufferException;
import com.google.protobuf.UnknownFieldSet;
import com.google.protobuf.DescriptorProtos;
import com.google.protobuf.DescriptorProtos.DescriptorProto.Builder;
import com.googlecode.protobuf.format.HtmlFormat;
import com.googlecode.protobuf.format.JsonFormat;
import com.googlecode.protobuf.format.JsonFormat.ParseException;
import com.googlecode.protobuf.format.XmlFormat;

public class Demos {

	MsgRankItem request = MsgRankItem.newBuilder()
			.setId(123)
			.setName("123")
			.setRankValue(100)
			.build();

	@Test	// Protobuf -> XMl
	public void test_xml_out() throws InvalidProtocolBufferException {
		UnknownFieldSet set = UnknownFieldSet.parseFrom(request.toByteArray());
		String xmlFormat = XmlFormat.printToString(set);
		System.out.println(xmlFormat);
	}

	@Test	// XML -> Protobuf
	public void test_xml_in() throws com.googlecode.protobuf.format.XmlFormat.ParseException {
		Builder builder = DescriptorProtos.DescriptorProto.newBuilder();
		String xmlFormat = "<message><unknown-field index=\"1\">1001</unknown-field><unknown-field index=\"2\">2001</unknown-field></message>";
		XmlFormat.merge(xmlFormat, builder);
		System.out.println(builder.getFieldCount());
	}

	@Test	// Protobuf -> JSON
	public void test_json_out() throws InvalidProtocolBufferException {
		UnknownFieldSet set = UnknownFieldSet.parseFrom(request.toByteArray());
		String jsonFormat = JsonFormat.printToString(set);
		System.out.println(jsonFormat);
	}

	@Test	// JSON -> Protobuf
	public void test_json_in() throws ParseException {
		Builder builder = DescriptorProtos.DescriptorProto.newBuilder();
		String jsonFormat = "{\"msgID\": [1001], \"mailId\": [2001]}";
		JsonFormat.merge(jsonFormat, builder);
		System.out.println(builder);
	}

	@Test	// Protobuf -> HTML
	public void test_html_out() throws InvalidProtocolBufferException {
		UnknownFieldSet set = UnknownFieldSet.parseFrom(request.toByteArray());
		String htmlFormat = HtmlFormat.printToString(set);
		System.out.println(htmlFormat);
	}


}
