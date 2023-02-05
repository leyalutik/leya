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


Working_Space::Working_Space(const std::string& OS_new, const std::string& browser_command_new)
{

	Working_Space::OS = OS_new;
	Working_Space::browser_command = browser_command_new;
}

void Working_Space::initialize()
{
	Working_Space::browser_command = "chrome.exe";
	Working_Space::OS = "Windows";

	int32_t answer = 1;
	display_text_in_page("Is your operating system Windows ?\n\t\t\t\tYes(1)/No(2)",4,8,1);
	input(answer);
	std::getchar();

	if(answer == 1)
	{
		Working_Space::OS = "Windows";
	}
	else
	{
		Working_Space::OS = "Linux";
	}

	display_text_in_page(("Is your current browser " +  Working_Space::browser_command 
				+ " ?\n"
				+ "\t\t\t\t" + "Yes(1)/No(2)"),4,8,1);
	input(answer);
	std::getchar();

	if(answer == 2)
	{
		int32_t answer_browser = 2;
		while(answer_browser == 2)
		{
			display_text_in_page("Input the browser command:",4,8,0);
			getline(std::cin,Working_Space::browser_command);
			std::getchar();

			display_text_in_page(("You wrote command : \'" 
						+ Working_Space::browser_command 
						+ "\'\n" 
						+ "\t\t\t\tis it correct? Yes(1)/No(2)"),4,8,1);
			input(answer_browser);
			std::getchar();
		}		

	}
}


void Working_Space::run_site(const std::string& URL)
{

	std::string start_command = ( Working_Space::OS == "Windows" ? "start \"\" " : " ");
	std::string command = start_command + Working_Space::browser_command
		+ URL;				
	const char* system_command = command.c_str();		\
				     std::system(system_command);
}

void Working_Space::display_variables()
{
	display_text_in_page (("OS = " + Working_Space::OS 
				+ "\nbrowser command = " + Working_Space::browser_command)
			,4,8,1);


}
