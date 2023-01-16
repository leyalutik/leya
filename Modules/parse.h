#pragma once

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

#include "file.h"
#include "exception.h"


class parse
{
	private:
	std::vector<std::string> buffer;

	public:
	parse();
	parse_information();
	//from first line in output file
	parse_values(std::vector<std::string> arguments, std::vector<std::string> answers);
	//parse from rest lines in output file



}
