#pragma once

#include<iostream>
#include<string>
#include<exception>
#include <cassert>

struct message
{
	std::string value;
	message();
	explicit message(const std::string new_value);	
};
struct file_name
{
	std::string value;
	file_name();
	explicit file_name(const std::string new_value);
};

struct error_line
{
	std::string value;
	error_line();
	explicit error_line(const std::string new_value);
};

class error
{
private:
	message mes;
	file_name file;
	error_line line;
public:
	error();
	explicit error(const message& new_message, const file_name&  new_file, const error_line& new_line);
	std::string report();
};
//------------------------------------------------------------------
//------------------------------------------------------------------
struct Type
{
	std::string value;
	Type();
	explicit Type(const std::string new_value);

};

struct Message
{
	std::string value;
	Message();
	explicit Message(const std::string new_value);

};

struct FILE_NAME
{
	std::string value;
	FILE_NAME();
	explicit FILE_NAME(const std::string new_value);
};

struct FILE_LINE
{
	std::string value;
	FILE_LINE();
	explicit FILE_LINE(const std::string new_value);
};

struct ErrorAttributes
{
	Message message;
	Type type;
	FILE_NAME file_name;
	FILE_LINE file_line;
	ErrorAttributes();
	explicit ErrorAttributes(const Message message_new, const Type type_new,
				const FILE_NAME file_new, const FILE_LINE line_new );
};

class Exception
{
	private:
		ErrorAttributes attribute;

	public:
		Exception();
		explicit Exception(const ErrorAttributes attribute_new);
		std::string error_message();

};

