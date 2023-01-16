#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <chrono>

class CurrentDate
{
	private:
		int current_year;
		int current_month;
		int current_day;
		std::string current_date;

	public:
		CurrentDate();

		bool is_equel(const std::string& line); // Если в строчке сможем найти current_date return true;

		std::string get_date();
};



