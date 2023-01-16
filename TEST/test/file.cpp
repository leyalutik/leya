#include "file.h"
	
		
		int32_t File::count_words(const std::string& word){} //Подсчет слов, в которых находится слово
		void File::find_line_by_word_number(const std::string& word
				, const int32_t word_number ){} 
		void extract_file(){}// extract file in  buffer_file
		void clear_file(){} //clear file with current name and clear buffer variables;
		void extract_last_line(){}//extract to buffer_line
		void extract_line(const int32_t number_line){} //number=[0,N] extract to buffer_line
		void replace_line(const std::string& line, const int32_t number){} //number [0:N]		
				
		//void input_line_to_the_end(const std::string& line){}
void File::write_line()
{

	std::string function_name = "void File::write_file()";
	std::ofstream file_stream_out(File::name, std::ios::app);

	std::cout << "In the file \"" << File::name << "\" add the line :\n";
	std::string user_line;
	std::getline(std::cin, user_line, '\n');
	file_stream_out << "\n" << user_line;
	file_stream_out.close();
	std::cout << "Line has written.\n";
}
		

File::File(const std::string& name_new)
{
	File::name = name_new;	
	
	std::fstream stream(File::name, std::ios::in);
	
	if(! stream.is_open())
	{
		std::string function_name = "File::File(const std::string& name_new)";
	
		throw error{message("In \"" + function_name
					+ "\" opening file \"" + name_new + "\" is failed" )
					,file_name((__FILE__))
					,error_line(std::to_string(__LINE__))
					};


	}
	stream.close();
	std::cout << "File name : \"" << name_new << "\" is valid.\n";
}

std::string File::get_buffer_word()
{
	return File::buffer_word;
}

std::string File::get_buffer_line()
{
	return  File::buffer_line;
}

std::string File::get_buffer_file()
{
	return File::buffer_file;
}
std::string File::get_name()
{
	return File::name;
}

void File::display_line(const int32_t number)
{
	std::cout << File::buffer_line << "\n";	
}
void File::display_file()
{
	std::cout << File::buffer_file << "\n";
}
void File::display_word()
{
	std::cout << File::buffer_word << "\n";
}

bool File::find_word(const std::string& word) // 1 - найдена 0 - нет
{

	std::fstream stream(File::name, std::ios::in);
	if(word == "")
	{
		std::string function_name = "function (bool File::find_word(const std::string& word))";
		throw error{
			message("In function: \"" + function_name + "\"Input word \"\" is not valid")
			,file_name((__FILE__))
			,error_line(std::to_string(__LINE__))
			};

	}
	
	std::string current_line;
	while(!stream.eof()) 
	{
	getline(stream,current_line, '\n');
		if(current_line.find(word) != std::string::npos)
		{
			return true;
		}

	}
	return false;
}

int32_t File::count_lines(const std::string& word)
{
	std::fstream stream(File::name, std::ios::in);
	
	if(word == "")
	{
		std::string function_name = "function (int32_t File::count_lines(const std::string& word))";
		throw error{
			message("In function: \"" + function_name + "\"Input word \"\" is not valid")
			,file_name((__FILE__))
			,error_line(std::to_string(__LINE__))
			};
	}

	std::string current_line;
	int32_t result = 0;
	while(!stream.eof()) 
	{
	getline(stream,current_line, '\n');
		if(current_line.find(word) != std::string::npos)
		{
			++result;
		}

	}
	return result;
}


void File::find_line_by_word(const std::string& word)
{
	std::fstream stream(File::name, std::ios::in);


	if(word == "")
	{

		std::string function_name = "function (void File::find_line_by_word(const std::string& word, std::string& line))";
		throw error{
			message("In function: \"" + function_name + "\"Input word \"\" is not valid")
				,file_name((__FILE__))
				,error_line(std::to_string(__LINE__))
		};
	}

	std::string current_line;
	while(!stream.eof()) 
	{
		getline(stream,current_line, '\n');
		if(current_line.find(word) != std::string::npos)
		{
			File::buffer_line = current_line;
			return;
		}

	}

}
