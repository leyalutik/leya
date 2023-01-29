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
	int32_t* index = new int32_t{1};
	std::string clause = "\t";
	for(int i=0; i<6;++i)
	{
		clause += "\t";
	}
	std::cout << clause << index << "\n";

	return 0;
}
