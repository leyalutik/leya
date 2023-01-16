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

bool check_istream(std::istream& ist); //check any input stream

void clear_istream(std::istream& ist); //set flags to good state and clear from garbage

std::string istream_buffer(std::istream& ist); //display buffer of input

int main()
{	
	std::cout << "streamsize: " << std::dec << std::numeric_limits<std::streamsize>::max() << "\n";

	int32_t number;
	std::cout << "Enter the number:\n";
	std::cout << "Buffer input : " << istream_buffer(std::cin) << "\n";
	std::cin >> number;
	std::cout << "Buffer input : " << istream_buffer(std::cin) << "\n";
	while(!check_istream(std::cin))
	{
		std::cout << "Buffer input : " << istream_buffer(std::cin) << "\n";
		clear_istream(std::cin);
		std::cout << "Number is not valid. Enter it again:\n";
		std::cout << "Buffer input : " << istream_buffer(std::cin) << "\n";
		std::cin >> number;
	}
	std::cout << "Buffer input : " << istream_buffer(std::cin) << "\n";
	std::cout << "Number = " << number << "\n";
	clear_istream(std::cin);
	std::cout << "Buffer input : " << istream_buffer(std::cin) << "\n";
//   Type of input string
	std::ofstream ost{"results.txt"};
	std::cout << "Hello!\n\n";
	std::string input;
	std::cout << "Enter some input to estimate stream state:\n";
	std::cin >> input;
	ost << "Input : " << input << "\n";
	ost << "Stream state :\n";

	if(std::cin.fail())
	{
		std::cout << "The input is fail.\n";
		ost << "The input is fail.\n";
	}
	if(std::cin.bad())
	{
		std::cout << "The input is bad.\n";
		ost << "The input is bad.\n";
	}
	if(std::cin.good())
	{
		std::cout << "The input is good.\n";
		ost << "The input is good.\n";
	}
	if(std::cin.eof())
	{
		std::cout << "The program's reached the end of input.\n";
		ost << "The program's reached the end of input.\n";

	}

	return 0;
}




bool check_istream(std::istream& ist)//check any input stream
{					
	if(std::cin.fail()) //  if (std::ios_base::iostate == std::iosbase::failbit)
	{
		return false;
	}
	if(std::cin.bad()) //   if(std::ios_base::iostate == std::iosbase::bad)
	{
		throw std::runtime_error("In function check_istream stream was corrupted");
	}
	
	return true;
}

void clear_istream(std::istream& ist) //set flags to good state and clear from garbage
{
	ist.clear();
	ist.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}

std::string istream_buffer(std::istream& ist)
{
	std::string buffer_staff;
	std::istringstream local;
   	auto cin_buff = std::cin.rdbuf(); // save pointer to std::cout buffer
 
    	std::cin.rdbuf(local.rdbuf()); // substitute internal std::cout buffer with
       	// buffer of 'local' object
	buffer_staff = local.str(); 
    	// now std::cin work with 'local' buffer
    	// you don't see this message

 
   	 // go back to old buffer
   	 std::cin.rdbuf(cin_buff);

	return buffer_staff;
}

