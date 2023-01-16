#pragma once

void new_step (std::string& grid, char symb_step, size_t index_space_cell); //insert symbol on definite index

void output(const std::string& grid); // output game grid

size_t find_index_space_cell (std::string& grid, int random_number);//miss_celL - random number

bool check_victory(const std::string& grid, char symb);

bool correct_grid(const std::string& grid); //check only have '.' 'O' 'X' and size = 9

void play_Tic_tac_toe(); // computer versus computer

