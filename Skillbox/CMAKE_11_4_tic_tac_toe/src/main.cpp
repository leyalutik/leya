//cmake -G "MinGW Makefiles" -S .\.. -B .\..
#ifdef TESTS
    #include "tests.h"
#endif

#ifdef TEST_FRAMEWORK
    #include "test_framework.h"
#endif

#include "main_functions.h"
#include "tic_tac_toe.h"
#include "input_output.h"
const int16_t DIMENSION_GRID = 3;

int main()
{
	TestRunner tr;
	tr.RunTest(test_analyze_game,"test_analyze_game");
	std::string grid;
	for(int16_t i=0; i<DIMENSION_GRID; i++)
	{
		std::string line = input_line(i);
		if(check_string(line, DIMENSION_GRID, ".OX"))
		{
		grid += line;
		}
		else
		{
			std::cout << "Incorrect";
			return 0;
		}
	}
	//output(grid);
	std::cout << analyze_game(grid) << '\n';

	return 0;
}
