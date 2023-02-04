#include <vector>
#include <map>
#include <set>
#include<exception>
#include <cassert>
#include<cstdlib>
#include<iostream>
#include<string>
#include <sstream>
#include <fstream>
#include <chrono>


#include "working_space.h"
#include "edit.h"
#include "bricks.h"

Working_Space::Working_Space(){}


Working_Space(const std::string& OS_new, const std::string& browser_command_new)
{

	Working_Space::OS = OS_new;
	Working_Space::browser_command = browser_command_new;
	Working_Space::URL = "";
}

void Working_Space::initialize()
{
	Working_Space::browser_command = "chrome.exe";
	Working_Space::OS = "Windows";
	Working_Space::URL = "";

	int32_t answer = 1;
	scroll_down(8);
	right_shift(4);
	std::cout << "Is your operating system Windows ?\n";
	right_shift(4);
	std::cout << "Yes(1)/No(2)\n"; 
	scroll_down(25-8-2-1);
	input_number(answer);
	std::getchar();
	if(answer == 1)
	{
		this.OS = "Windows";
	}
	else
	{
		this.OS = "Linux";
	}

	display_text_in_page(("Is your current browser " +  Working_Space::browser_command 
				+ " ?\n"
				+ right_shift(4) + "Yes(1)/No(2)"),1);
	input_number(answer);
	std::getchar();

	if(answer == 2)
	{
		int32_t answer2 = 1;
		while(answer2 == 1)
		{
			display_text_in_page("Input the browser command:");
			getline(std::cin,Working_Space::browser_command);
			std::getchar();

			display_text_in_page(("You wrote command : \'" 
						+ Working_Space::browser_command 
						+ "\'\n" 
						+ "is it correct? Yes(1)/No(2)"),1);
			input_number(answer2);
			std::getchar();
		}		

	}
}

void Working_Space::add_URL(const std::string& URL_new)
{
	Working_Space::URL = URL_new;
}

void Working_Space::run_site()
{

	std::string start_command = ( Working_Space::OS == "Windows" ? "start \"\" " : " ");
	std::string command = start_command + Working::browser_command
		+ Working_Space::URL;				
	const char* system_command = command.c_str();		\
				     std::system(system_command);
}


