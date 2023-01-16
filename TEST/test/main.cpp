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

#include "file.h"
#include "exception.h"





template<class T, class U>
void AssertEqual(const T& t, const U& u,
    const std::string& hint)
{
  if (t != u) {
	  std::ostringstream os;
    os << "Assertion failed: " << t << " != " << u
       << " hint: " << hint;
    throw std::runtime_error(os.str());
  }
}

class TestRunner {
public:
  template <class TestFunc>
  void RunTest(TestFunc func, const std::string& test_name) {
    try {
	  func();
	  std::cerr << test_name << " OK" << std::endl;
	} catch (std::runtime_error& e) {
	  ++fail_count;
	  std::cerr << test_name << " fail: " << e.what() << std::endl;
	}
  }

  ~TestRunner() {
    if (fail_count > 0) {
	    std::cerr << fail_count << " unit tests failed. Terminate" << std::endl;
      exit(1);
    }
  }
private:
  int fail_count = 0;
};

void display_prompt();
//description of using program

void input_file_name(std::string& output_file);
// input file name

 int main()
{
	std::string function_file, output_file;
	std::cout << "Hello!\n";
	std::cout << "If you need more explanation about program. Press \"1\" :\n";
	char ch;
	std::cin >> ch;
	std::getchar();
	if(ch == '1')
	{
		display_prompt();
	}
	std::cout << "Enter function file name and output file name with backspace.\n";
	std::cin >> function_file >> output_file;
	std::cout << function_file<< " " << output_file << "\n";
	try
	{
		File function_file_stream(function_file);
		File output_file_stream(output_file);
	}
	catch(error& er)
	{
		std::cout << er.report() << "\n";
	}
	return 0;
}


void input_file_name(std::string& file)
{
	std::cin >> file;

}
void display_prompt()
{
	std::cout << "Hello!\n";
	std::cout << "It's testing program.\n";
	std::cout << "Enter the file name with the desired (only) function definion:\n";
	std::cout << "Enter the file name with input data in such format.\n";
	std::cout << "Firstly there is a number of target answers (number_ta),\n";
	std::cout << "and then input number of checked argument(N_argument),where \n";
	std::cout << "0 - check function return, 1 - check 1-st function argument and so on.\n";
	std::cout << "And we get on the fist line of file:\n";
	std::cout << "number_ta N_arg1 N_arg2 ... N_argM\n";
	std::cout << "Rest of lines:\n";
	std::cout << "arg1 arg2 ... argN : answer1 answer2 ... answerN\n";
	std::cout << "                  Example               \n";
	std::cout << "Checked function: void f(int x, int y, int& z) target - z\n";
	std::cout << "In file with input data should be:\n";
	std::cout << "1 3 \n1 2 : 1\n";
	std::cout << "1 - number of target answers, 3 - z - 3-rd argument,\n";
	std::cout << "1,2 - values of x,y, 1 - true evaluation of z\n";


}
