#pragma once

#include <iostream>
#include <string>
#include <vector>

std::string analyze_game(const std::string& grid);

bool check_string(const std::string& str, const size_t correct_size,
			const std::string& correct_char_set);

void get_index_char_set(std::string str, const char special_char, std::vector<int>& index_char_set);

void new_step (std::string& grid, char symb_step, size_t index_space_cell);

bool check_victory(const std::string& grid, char symb);

std::string input_line(int16_t line);

void output(const std::string& grid);
