#pragma once
#include<vector>
#include<iostream>
#include<string>
#include<conio.h>
#include<iomanip>
#include<utility>
#include<ctime>

//Input words with fixed grid_row
void parse_line(const std::string given_line, 
		std::vector<std::string>& grid_rows,
		const int32_t GRID_ROW_SIZE);
	//Input time and date in table
void input_data(const std::string prompt_text, std::string& words);
std::string current_time();
std::string current_date();


