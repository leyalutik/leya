#include <vector>
#include <map>
#include <set>
#include<exception>
#include <cassert>
#include<cstdlib>
#include<iostream>
#include<string>
#include <sstream>
#include <fstream>
#include <chrono>

#include "parse_file.h"
#include "game1.h"

int main()
{
std::string FILENAME = "english_words.txt";
	std::vector<std::string> english_words;
	get_all_lines_from_output_file(FILENAME,english_words);
	
	FILENAME = "russian_words.txt";
	std::vector<std::string> russian_words;
	get_all_lines_from_output_file(FILENAME,russian_words);


	
	int32_t number_of_tries = 5;
	int32_t number_of_set = 5;
	game1(english_words,number_of_set, number_of_tries);

		
	number_of_tries = 5;
	number_of_set = 5;
	game1(russian_words,number_of_set, number_of_tries);
	std::getchar();
	game5(english_words,15);
return 0;
}
