
#include "main_functions.h"





std::string analyze_game(const std::string& grid)
{
	if(!check_string(grid,9,".XO"))
	{
		return "Incorrect";
	}
	std::vector<int> X_indexes, O_indexes;
	
	get_index_char_set(grid,'X', X_indexes);
	get_index_char_set(grid,'O', O_indexes);

	//Simulate game
	//for 1 step (play X and O at once)
	std::string new_grid(9,'.');
	int16_t step = 0;
	while(step++ < 9)
	{
		//Turn X:
		if (X_indexes.size() == 0)
		{
			if(O_indexes.size() == 0)
			{
				return "Nobody";
			}
			else
			{
				return "Incorrect";
			}
		}
		//Add X to the grid
		new_step(new_grid,'X', X_indexes[X_indexes.size()-1]);
		X_indexes.pop_back();	
		//check victory
		bool is_victory = check_victory(new_grid,'X');
		if(is_victory)
		{					
			if(O_indexes.size() == 0)
			{
				return "Petya_won."; //(X)
			}
			else
			{
				return "Incorrect";
			}
		}		

		//	Turn O:  
		if(O_indexes.size() == 0)
		{
			if(X_indexes.size()  == 0)
			{
				return "Nobody";
			}
			else
			{
				return "Incorrect";
			}
		}
		//add to grid
		new_step(new_grid,'O', O_indexes[O_indexes.size()-1]);
		//check victory
		O_indexes.pop_back();	
		is_victory = check_victory(new_grid,'O');
		if(is_victory)
		{					
			if(X_indexes.size() == 0)
			{
				return "Vanya_won.";// (O)
			}
			else
			{
				return "Incorrect";
			}
		}
		//Delete last element of O_indexes
	}
	return "Function \"analyze_game()\" is incorrect.";
}

bool check_string(const std::string& str, const size_t correct_size,
		const std::string& correct_char_set)
{
	if(str.size() != correct_size)
	{
		return false;
	}
	for(const char& ch : str)
	{
		bool match = false;
		for(const char& correct_char : correct_char_set)
		{
			if(ch == correct_char)
			{
				match = true;
			}
		}
		if(!match)
		{
			return false;
		}
	}
	return true;
}

void get_index_char_set(std::string str, const char special_char, std::vector<int>& index_char_set)
{
	for(size_t i = 0; i< str.size(); ++i)
	{
		if(str[i] == special_char)
		{
			index_char_set.push_back(i);
		}
	}
}

void new_step (std::string& grid, char symb_step, size_t index_space_cell)
{
	if(!check_string(grid,9,".XO"))
	{
		std::cout << "Incorrect grid for Tic-tac-toe\n";
		return;
	}
	grid[index_space_cell] = symb_step;
}

bool check_victory(const std::string& grid, char symb)
{
	if(!check_string(grid,9,".XO"))
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
	if(!check_string(grid,9,".XO"))
	{
		//std::cout << "Incorrect grid for Tic-tac-toe\n";
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

std::string input_grid_lines()
{
	std::string grid;
	for(int line_number = 0; line_number < 3; ++ line_number)
	{
		std::cout << "Input line" << line_number+1 << " of Tic-tac-toe grid: ";
		std::string line;
		getline(std::cin, line, '\n');
		grid += line;
	}
return grid;
}
