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

void is_file_opened_reading(const std::string& iname); //for reading
void is_file_opened_writing(const std::string& oname);


int main()
{
	try
	{
		std::cout << "Please, enter file name:\n";
		std::string name;
		std::cin >> name;

		is_file_opened_reading(name);
		std::cout << "Press any symbol.\n";
		std::getchar();
		is_file_opened_writing(name);


	}
	catch(std::runtime_error& e)
	{
		std::cout << e.what() << "\n";
		return 1;
	}
	return 0;
}


void is_file_opened_writing(const std::string& oname)
{
	std::ofstream ost{oname};
	if(!ost)
	{
		throw std::runtime_error("Can't open output file");
	}
	std::cout << "File " << oname << " is able for writing.\n";

}

void is_file_opened_reading(const std::string& iname)
{
	std::ifstream ist{iname};
	if(!ist)
	{
		throw std::runtime_error("Can't open input file " + iname);
	}
	std::cout << "File " << iname << " is able for reading.\n";

}
