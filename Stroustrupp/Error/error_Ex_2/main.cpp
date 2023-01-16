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


double ctok(double c) // converts Celsius to Kelvin
{
	if( c < 0 )
	{
		throw std::runtime_error("Non-positive argument of function ctok");
	}
	double k = c + 273.15;
	return k;
}


int main()
{
	try
	{
		double c = 0; // declare input variable
		std::cin >> c; // retrieve temperature to input variable
		if(!(std::cin)) 
		{
			throw std::runtime_error("Illegal input, it's not celcius value");
		}
		double k = ctok(c); // convert temperature
		std::cout << k << '\n' ; // print out temperature
		return 0;
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << "\n";
		return 1;
	}
}
