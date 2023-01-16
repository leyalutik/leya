#include "exception.h"


message::message(const std::string new_value)
{
	value = new_value;
}
message::message()
{
}

file_name::file_name(const std::string new_value)
{
	value = new_value;
}
file_name::file_name()
{
}

error_line::error_line(const std::string new_value)
{
	value = new_value;
}
error_line::error_line()
{
}


error::error(const message& new_message, const file_name&  new_file, const error_line& new_line)
{
	error::mes.value = new_message.value;
	error::file.value = new_file.value;
	error::line.value = new_line.value;
}

std::string error::report()
{
	return ("\n{\n " + error::mes.value 
		+ std::string("\n File: \"") + error::file.value 
		+ std::string("\" , Line: ") + error::line.value
		+"\n}");  
	
}

//==========================
//=========================

Type::Type(const std::string new_value) 
{
	value = new_value;
}
Type::Type()
{
}

Message::Message(const std::string new_value)
{
	value = new_value;
}
Message::Message()
{
}

ErrorAttributes::ErrorAttributes()
{
}

FILE_NAME::FILE_NAME()
{
}
FILE_NAME::FILE_NAME(const std::string new_value)
{
	FILE_NAME::value = new_value;
}

FILE_LINE::FILE_LINE()
{
}
FILE_LINE::FILE_LINE(const std::string new_value)
{
	FILE_LINE::value = new_value;
}

ErrorAttributes::ErrorAttributes(const Message message_new, const Type type_new,
				const FILE_NAME file_new, const FILE_LINE line_new)
{
	ErrorAttributes::message.value = message_new.value;
	ErrorAttributes::type.value = type_new.value;
	ErrorAttributes::file_name.value = file_new.value;
	ErrorAttributes::file_line.value = line_new.value;

}




Exception::Exception()
{
}
Exception::Exception(const ErrorAttributes attribute_new)
{
	Exception::attribute.message.value = attribute_new.message.value;
	Exception::attribute.type.value = attribute_new.type.value;
	Exception::attribute.file_name.value = attribute_new.file_name.value;
	Exception::attribute.file_line.value = attribute_new.file_line.value;
}
std::string Exception::error_message()
{
	return ("\n{\n " + Exception::attribute.message.value 
			+ std::string("\n Type error : ") + Exception::attribute.type.value 
			+ std::string("\n File: \"") + 	Exception::attribute.file_name.value 
			+ std::string("\" , Line: ") + Exception::attribute.file_line.value
			+"\n}");  
}
