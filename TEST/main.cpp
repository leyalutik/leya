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
	std::ofstream out(FILENAME_TESTS, std::ios::app);
	std::string line;

	std::string word2;
	std::string word1;
	in_file >> word2;
	out << word2 << '\n';
	while( in_file >> word1 && word1 != word2)
	{
		
		out << word1 << '\n';

		in_file >> word2;
		out << word2 << '\n';
	}

}
