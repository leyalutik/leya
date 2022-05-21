#include<iostream>
#include<fstream>
#include<string>
#include<vector>
//Create test cases for function EqualAssert in test_framework.h

const std::string FILE_NAME = "test_cases.txt";
const std::string FILENAME_VALUES = "values.txt";
const std::string FILENAME_TESTS = "tests.txt";





int main()
{
	std::ifstream in(FILENAME_TESTS, std::ios_base::in);
	std::string buffer;
	int16_t number_line = 0;
	while(getline(in,buffer))
	{
		++number_line;
	}
	in.close();
	std::ofstream out(FILENAME_TESTS, std::ios::app);
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
		std::cout << "Enter the symbol \" or \' if function value " << i << " is needed.\n";
		std::cin >> answer;
		if( answer == '"' || answer == 39)
		{
			options[i] = answer;
		}
		else
		{
			options[i] = ' ';
		}
	}

	std::cout << "Enter the symbol \" or \' if true asnwer of function with these values  is needed.\n";
	char answer;
	std::cin >> answer;
	if( answer == '"' || answer == 39)
	{
		option_true_answer = answer;
	}
	else
	{
		option_true_answer = ' ';
	}

	//input values
	getchar();

	std::cout << "Will you take data from text file? Y/n\n";
	char answer_input_data = getchar();
	if(answer_input_data != 'n' && answer_input_data != 'N')
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
		while( in_file >> word1 && word1 != word2)
		{
			
			// Input values for test_function
			values[0] = word1;
			for(int i=1; i<number_values; ++i)
			{
				//value i
				in_file >> word1;
				values[i] = word1;

			}
			//True function output

			in_file >> word2;
			true_answer = word2;

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

		}


	}
	else
	{
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

	}
	out.close();	

		return 0;
	}
