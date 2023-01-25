
#include<iostream>
#include<string>
#include<vector>
#include<fstream>


#include "parse_file.h"


struct List
{
	std::string value;
	List* next;

	List(const std::string& new_value)
	{
		this->value = new_value;
	}

};


const int32_t LIMIT=3000000;


void get_all_lines_from_output_file(const std::string& FILENAME,
		std::vector<std::string>& buffer)
{

	std::ifstream in(FILENAME, std::ios_base::in);
	std::string str;
	int32_t number_line = 0;
	while(std::getline(in,str) 
			&& number_line < LIMIT)
	{
		buffer.push_back(str);
		++number_line;

	}
	in.close();

}

void display_lines(const std::vector<std::string>& buffer)
{
	for(auto& b:buffer)
	{
		std::cout << b << "\n";
	}


}
