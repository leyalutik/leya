//cmake -G "MinGW Makefiles" -S .\.. -B .\..
#include "tests.h"
#include "main_functions.h"
#include "test_framework.h"
#include "tic_tac_toe.h"

int main()
{
	TestRunner tr;
	tr.RunTest(test_analyze_game,"test_analyze_game");
	
	std::string grid = input_grid_lines();
	//output(grid);
	std::cout << analyze_game(grid) << '\n';

	return 0;
}
