#pragma once

#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include "main_functions.h"


size_t find_index_space_cell (std::string& grid, int random_number);//miss_celL - random number

bool check_victory(const std::string& grid, char symb);


size_t find_index_space_cell (std::string& grid, int miss_cell);

void play_Tic_tac_toe(); // computer versus computer

