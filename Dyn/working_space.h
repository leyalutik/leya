#pragma once


struct Working_Space 
{
	Working_Space(const std::string& OS_new, const std::string& browser_command_new);
	Working_Space();
	void initialize();
	void add_URL(const std::string& URL_new);
	void run_site();

	std::string OS;
	std::string browser_command;
	std::string URL;
};


