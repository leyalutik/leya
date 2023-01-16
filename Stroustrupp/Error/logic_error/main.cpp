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

template<class R, class A> 
R narrow_cast(const A& a)
{
	R r = R(a); // приведение к типу R
	if (A(r) != a)	//Обратное приведение к A
	{
		throw std::runtime_error(std::string("Hello! I'm bug of type : Narrow error."));
	}
	return r;
}


//set of temperatures
//find lowest highest average
 int main()
{
	std::cout << "Enter temperatures with space and press ctrl+D\n";
	std::vector<int32_t> set;
	for(int temp; std::cin >> temp;)
	{
		set.push_back(temp);
	}
	if (set.size() == 0)
	{
		throw std::runtime_error("No temperature values\n.");
	}
	int32_t low = 0;
	int32_t high = 0;
	int32_t sum = 0;
	
	bool flag_first_element = true;

	for(size_t i=0; i< set.size(); ++i)
	{
		int32_t var = set.at(i);
		if (var < 273)
		{
			throw std::runtime_error("Non existing value");
		}
		if(flag_first_element)
		{
			low = var;
			high = var;
			flag_first_element = false;
		}
		if(var < low)
		{
			low = var;
		}
		if(var > high)
		{
			high = var;
		}

		sum += var;

	}

	double average = narrow_cast<double>(static_cast<double>(sum)/ static_cast<double>(set.size()));
	std::cout << "Lowest temperature: " << low << "\n";
	std::cout << "Highest temperature: " << high << "\n";
	std::cout << "Average temperature: " << average << "\n";
	
	return 0;
}
