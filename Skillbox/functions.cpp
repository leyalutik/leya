#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include "functions.h"

bool correct_grid(const std::string& grid)
{
	if(grid.size() != 9)
	{
		return false;
	}
	for(size_t i=0; i<grid.size(); ++i)
	{
		if(grid[i] != '.' && grid[i] != 'X' && grid[i] != 'O')
		{
			return false;
		}
	}
	return true;
}

size_t find_index_space_cell (std::string& grid, int miss_cell) 
{
	if(!correct_grid(grid))
	{
		std::cout << "Incorrect grid for Tic-tac-toe\n";
		return grid.size();
	}

	int16_t miss = -1;
	for(size_t i=0; i<grid.size(); ++i)
	{
		if(grid[i] == '.')
		{
			++miss;
			if(miss == miss_cell)
			{
				return i;
			}
		}

	}
	std::cout << "Don't find space cell in function find_index_space_cell().\n";
	return grid.size();
}

void new_step (std::string& grid, char symb_step, size_t index_space_cell)
{
	if(!correct_grid(grid))
	{
		std::cout << "Incorrect grid for Tic-tac-toe\n";
		return;
	}
	grid[index_space_cell] = symb_step;
}

bool check_victory(const std::string& grid, char symb)
{
	if(!correct_grid(grid))
	{
		std::cout << "Incorrect grid for Tic-tac-toe\n";
		return grid.size();
	}
	std::vector<std::vector<int>> victory_chains = {
		{0,1,2},{3,4,5},{6,7,8},//horizontal
		{0,3,6},{1,4,7},{2,5,8},//vertical
		{0,4,8},{2,4,6}		//diagonal
	};
	for(size_t i=0; i<victory_chains.size(); ++i)
	{
		if(grid[victory_chains[i][0]] == symb 
			&& grid[victory_chains[i][1]] == symb
			&& grid[victory_chains[i][2]] == symb)
		{
			return true;
		}
	}
	return false;
}

void output(const std::string& grid)
{
	if(!correct_grid(grid))
	{
		std::cout << "Incorrect grid for Tic-tac-toe\n";
		return;
	}
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

void play_Tic_tac_toe()
{
	std::string grid = ".........";
	//X step
	//create random number
	bool victory = false;
	std::vector<char> step_symb = {'X','O'};
	int index_symb = 0;
	int16_t step = 0;

	std::cout << "----    Game Tic-tac-toe    -----\n\n"; 

	while(!victory && step < 9)
	{
		++step;

		std::srand(static_cast<unsigned int>(std::time(nullptr)));
		int miss_cells = (step != 9 ? int(std::rand()) % (8-step+1) : 0);	

		std::cout << "Step " << step << ": Turn for " << step_symb[index_symb] 
			<< " (miss_cells=" << miss_cells << ")\n";
		new_step(grid,step_symb[index_symb],find_index_space_cell(grid,miss_cells));
		output(grid);

		if(check_victory(grid,step_symb[index_symb]))
		{
			std::cout << step_symb[index_symb] << " is victory\n";
			victory = true;
		}
		++ index_symb;
		index_symb %= 2;

		std::cout << "Press the buttom.\n";
		getchar();	


	}
}

