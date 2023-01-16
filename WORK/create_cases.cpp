#include<iostream>
#include<fstream>
#include<string>
//Create test cases for function EqualAssert in test_framework.h

const std::string FILE_NAME = "test_cases.txt";





int main()
{

	std::ofstream out(FILE_NAME); // std::ios::app);
	std::string test_function = "convert_to_binary";
	if(!out)
	{
		std::cout << "File can't be opened\n"; 
	}
	
	int16_t hint = 0;
	int8_t ch = 10;
	while(ch != 'e')
	{
		std::cout << "Input test cases u,t for " << test_function << "\n";
		std::string t,u;    
		std::cin >> t >> u;
		//out << " AssertEqual(convert_to_decimal(\"" << t << "\")," << u << ",\"" << hint << "\");\n";
		out << " AssertEqual(" << test_function << "(" << t << "),\"" << u << "\",\"" << hint << "\");\n";
		++hint;
		std::cout << "For exiting press 'e' ";
		std::cin >> ch;
	}


	out.close();	

	return 0;
}
