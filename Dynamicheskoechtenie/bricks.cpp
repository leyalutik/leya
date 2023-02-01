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

#include "bricks.h"
#include "parse_file.h"

void time_stop(const int32_t milliseconds)
{
	auto start = std::chrono::steady_clock::now();
	auto finish = std::chrono::steady_clock::now();
	while(std::chrono::duration_cast<std::chrono::milliseconds>(finish-start).count()
        <= miliseconds)
{
	finish = std::chrono::steady_clock::now();
}
  
}
