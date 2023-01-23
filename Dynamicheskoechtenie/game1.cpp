#include "game1.h"



//List of words for memory
//
//
//
//input number of words
//input number of tries


void display_set_of_words(std::vector<std::string> set_of_words)
{
		for(auto& s:set_of_words)
	{
		std::cout << "\t\t\t" << s << "\n";
	}

}

void game1(const std::vector<std::string> source_list_of_words,
		const int32_t number_of_words,
		const int32_t number_of_tries)
{
	int32_t i=0;
	std::cout << "\n";
	std::cout << "\t\t\t {Set of words} \n";
	std::cout << "\t\t-------------------------------\n";
	std::cout << "\n\n\n";
	while(i<number_of_tries)
	{
		++i;

		std::vector<std::string> set_of_words;
		create_set_of_words(source_list_of_words,number_of_words,set_of_words);

		display_set_of_words(set_of_words);

		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nn";

		std::getchar();

	}
}


void create_set_of_words(const std::vector<std::string> source_list_of_words,
		const int32_t number_of_words, std::vector<std::string>& set_of_words)
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	
	int i=0;
	while(i < number_of_words)
	{
		++i;

		int32_t size = source_list_of_words.size();
		//std::cout << "size =" << size  << "\n";
		int32_t iter = int(std::rand()) % size;
		//std::cout << "iterator =" << iter << "\n";  
		set_of_words.push_back(source_list_of_words[iter]);
	}

}

