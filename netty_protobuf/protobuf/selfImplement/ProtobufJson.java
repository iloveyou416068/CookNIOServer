package protobuf.selfImplement;

import java.io.IOException;
import java.io.InputStream;
import java.util.Map;

import com.google.protobuf.InvalidProtocolBufferException;
import com.google.protobuf.MessageLite;
import com.google.protobuf.Parser;
import com.google.protobuf.UnknownFieldSet;
import com.google.protobuf.Descriptors.FieldDescriptor;
import com.google.protobuf.UnknownFieldSet.Field;
import com.google.protobuf.DescriptorProtos;
import com.google.protobuf.Descriptors;
import com.google.protobuf.DynamicMessage;
import com.google.protobuf.DescriptorProtos.DescriptorProto;
import com.google.protobuf.DescriptorProtos.FieldDescriptorProto;

/**
 * json和protobuf对象之间的转换
 *
 * {@link DescriptorProtos.DescriptorProto} 对整体Message的描述
 *
 * {@link DescriptorProtos.EnumDescriptorProto} 对枚举消息的描述
 * {@link DescriptorProtos.EnumOptions}
 * {@link DescriptorProtos.EnumValueOptions}
 *
 * {@link DescriptorProtos.FieldDescriptorProto} 描述message里的字段属性
 * {@link DescriptorProtos.FieldOptions}
 *
 * {@link DescriptorProtos.FileDescriptorProto}
 * {@link DescriptorProtos.FileDescriptorSet}
 * {@link DescriptorProtos.FileOptions}
 *
 * {@link DescriptorProtos.MessageOptions}
 *
 * {@link DescriptorProtos.MethodDescriptorProto}
 * {@link DescriptorProtos.MethodOptions}
 *
 * {@link DescriptorProtos.ServiceDescriptorProto}
 * {@link DescriptorProtos.ServiceOptions}
 * {@link DescriptorProtos.SourceCodeInfo}
 *
 * {@link DescriptorProtos.UninterpretedOption}
 *
 * {@link Descriptors}
 *
 * {@link DynamicMessage}
 *
 * Descriptors Descriptors.Descriptor
 * Descriptors.DescriptorValidationException
 * Descriptors.EnumDescriptor
 * Descriptors.EnumValueDescriptor
 * Descriptors.FieldDescriptor
 * Descriptors.FieldDescriptor.JavaType
 * Descriptors.FieldDescriptor.Type
 * Descriptors.FileDescriptor
 * Descriptors.FileDescriptor.InternalDescriptorAssigner
 * Descriptors.MethodDescriptor
 * Descriptors.ServiceDescriptor
 *
 * @author Administrator
 *
 */
public class ProtobufJson {

	public static void json2pb(InputStream in) throws IOException {
	}

	public static String pb2jsonFromByteArray(byte[] in) throws IOException {
		return pb2json(DescriptorProto.parseFrom(in));
	}

	public static void parse(MessageLite messageType, InputStream in) {
		try {
			MessageLite message = messageType.getParserForType().parseFrom(in);
		} catch (InvalidProtocolBufferException e) {
			e.printStackTrace();
		}
	}

	public static String pb2jsonFromStream(InputStream in) throws IOException {
		return pb2json(DescriptorProto.parseFrom(in));
	}

	public static String pb2json(DescriptorProto fdp) throws IOException {
		// UnknownFieldSet
		UnknownFieldSet set = fdp.getUnknownFields();
		StringBuilder json = new StringBuilder("{");

		Map<Integer, Field> map = set.asMap();
		for (int index : map.keySet()) {
			Field field = map.get(index);
			System.out.println(index + ":" + field.getVarintList().size());
		}

		// FieldList
		for (int fi = 0; fi < fdp.getFieldCount(); fi++) {
			FieldDescriptorProto cf = fdp.getField(fi);
			switch (cf.getType()) {
			case TYPE_BOOL:
			case TYPE_DOUBLE:
			case TYPE_ENUM:
			case TYPE_BYTES:
			case TYPE_FIXED32:
			case TYPE_FIXED64:
			case TYPE_FLOAT:
			case TYPE_GROUP:
			case TYPE_INT32:
			case TYPE_INT64:
			case TYPE_MESSAGE:
			case TYPE_SFIXED32:
			case TYPE_SFIXED64:
			case TYPE_SINT32:
			case TYPE_SINT64:
			case TYPE_STRING:
			case TYPE_UINT32:
			case TYPE_UINT64:
			default:
				break;
			}

			Map<FieldDescriptor, Object> allf = cf.getAllFields();
			for (FieldDescriptor key : allf.keySet()) {
				if (key.isRepeated()) {
					for (int i = 0; i < key.getNumber(); i++) {
						json.append(key.getName()).append(":")
								.append(allf.get(key));
					}
				} else {
					json.append(key.getName()).append(":")
							.append(allf.get(key));
				}
			}
		}

		return json.toString();
	}
}
