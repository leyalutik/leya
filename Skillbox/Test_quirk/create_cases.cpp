#include<iostream>
#include<fstream>
#include<string>
#include<vector>
//Create test cases for function EqualAssert in test_framework.h

const std::string FILE_NAME = "test_cases.txt";





int main()
{
	std::ifstream in(FILE_NAME, std::ios_base::in);
	std::string buffer;
	int16_t number_line = 0;
	while(getline(in,buffer))
	{
		++number_line;
	}
	in.close();
	std::ofstream out(FILE_NAME, std::ios::app);
	if(!out)
	{
		std::cout << "File can't be opened\n"; 
	}

	int16_t hint = number_line + 1;
	int8_t ch = 10;
	std::string test_function = "convert_to_binary";
	std::cout << "Input test_function without parenthesis:\n";
	std::cin >> test_function;

	int16_t number_values;
	std::cout << "Input the number of function values:\n";
	std::cin >> number_values;

	std::vector<char> options(number_values);
	std::vector<std::string> values(number_values);
	std::string true_answer;
	char option_true_answer;
//options of decoration
	for(int i=0; i<number_values; ++i)
	{
		char answer;
		std::cout << "Enter the symbol \" if function value " << i << " is needed.\n";
		std::cin >> answer;
		if( answer == '"')
		{
			options[i] = '"';
		}
		else
		{
			options[i] = ' ';
		}
	}

	std::cout << "Enter the symbol \" if true asnwer of function with these values  is needed.\n";
	char answer;
	std::cin >> answer;
	if( answer == '"')
	{
		option_true_answer = '"';
	}
	else
	{
		option_true_answer = ' ';
	}

//input values
	while(ch != 'n')
	{
		std::cout << "Input values for " << test_function << ":\n";
		for(int i=0; i<number_values; ++i)
		{
			std::cout << "value" << i << ":";
			std::cin >> values[i];

		}
		std::cout << "True function output:";
		std::cin >> true_answer;

		out << " AssertEqual(" << test_function << "(";
		bool first_step = false;
		for(int i=0; i< number_values; ++i)
		{
			if(first_step)
			{
				out << ",";
			}
			out << options[i] << values[i] << options[i];
			first_step = true;
		}
		out << ")," << option_true_answer << true_answer << option_true_answer << ",";
		out << "\"" << hint << "\");\n";
		++hint;
		std::cout << "Continue? Y/n ";
		getchar();
		ch = getchar();
	}


		out.close();	

		return 0;
	}
