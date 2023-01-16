#pragma once

#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>


class Menu
{
private:

std::string text_menu;
std::string source_file;//source_file_menu_main.txt
std::string current_date;

public:
	Menu(const std::string& source_file_name);
	void display_menu();
	void launch();;
	void read_option(int32_t& choice);
	void launch_option(const int32_t choice);
};
