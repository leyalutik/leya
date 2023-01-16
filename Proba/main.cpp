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

using namespace std::chrono;
 int main()
{
	int32_t index;
char option = '0';
		std::cout << "Choose the protocol:\n";
		std::cin >> option;
		index = static_cast<int32_t> (option) - static_cast<int32_t>('0');

	std::cout << index << "\n";

	return 0;
}
