#include "input_output.h"

void output(const std::string& grid)
{
	std::cout << " " << grid[0] << " " << "|" << " " << grid[1] << " " << "|" 
		<< " " << grid[2] << " " << '\n';
	std::cout << "-" << "-" << "-" << "+" << "-" << "-" << "-" << "+" 
		<< "-" << "-" << "-" << '\n';
	std::cout << " " << grid[3] << " " << "|" << " " << grid[4] << " " << "|" 
		<< " " << grid[5]<< " " << '\n';
	std::cout << "-" << "-" <<  "-" << "+" << "-" << "-" << "-" << "+" 
		<< "-" << "-" << "-" << '\n';
	std::cout << " " << grid[6] << " " << "|" << " " << grid[7] << " " << "|" 
		<< " " << grid[8] << " " << '\n';

}

std::string input_line(int16_t i)
{
	std::string line;
	std::cout << "Input line" << i << " of Tic-tac-toe grid: ";
	getline(std::cin, line, '\n');

	return line;
}

