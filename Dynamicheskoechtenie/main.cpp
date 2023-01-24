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

//	display menu_task(); //Start task (1) // Go to next task (2) // Quit program(3)	
//	display_shift(); // Отступ слева
//	task1();
//	task2();
//	task3();
//	task4();
//	task5();
//	task6();
//	task7();
 int main()
{
/*	int number_task = 0;
	std::ifstream in("options.txt", std::ios_base::in);
	in >> number_task;
	
	in.close();

	std::cout << "number_task = " << number_task << "\n";

	number_task = 10;
	std::ofstream out("options.txt");
	out << number_task;

	std::cout << "number_task = " << number_task << "\n";
	out.close();

	std::cout << "Change the console encoding to UTF-8 \n"
		<< "	And be sure that text files are also in UTF-8 encoding.\n";
	std::cout <<  "Enter \'Enter\':\n";
	std::getchar();

	display_shift();
	std::cout << "Task1:\n";
	display menu_task();	
	switch(std::getchar())
	{
		case '1':
			task1();
			break;
		case '3':
			return 0;
				 
		default	:	
			break;

	}
*/
	std::string FILENAME = "english_words.txt";


	std::vector<std::string> english_words;
	get_all_lines_from_output_file(FILENAME,english_words);

	
	int32_t number_of_tries = 5;
	int32_t number_of_set = 5;
	game1(english_words,number_of_set, number_of_tries);

	 FILENAME = "russian_words.txt";
	std::vector<std::string> russian_words;
	get_all_lines_from_output_file(FILENAME,russian_words);

	
	number_of_tries = 5;
	number_of_set = 5;
	game1(russian_words,number_of_set, number_of_tries);
	std::getchar();
	game5(english_words,15);

	return 0;
}
	
