#include<iostream>
#include<fstream>
#include<sstream>


const std::string FILENAME_VALUES = "values.txt";
const std::string FILENAME_TESTS = "tests.txt";

int main()
{



	std::ifstream in_file(FILENAME_VALUES, std::ios::in);
	if(!in_file.is_open())
	{
		std::cout << "File is unable to open.\n";
	}
	std::string word;

	std::ofstream out_file(FILENAME_TESTS, std::ios::app);

	while(in_file >> word)
	{
		out_file << word << "\n";
	}

//Copy lines wothout changes
/*
	while(getline(in_file,word))
	{
		out_file << word << "\n";
		
	}
*/

}
