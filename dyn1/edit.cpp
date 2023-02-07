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

#include "edit.h"

void picture_swan()
{
	display_right_shift(3);std::cout << "                      +  +                    \n";
	display_right_shift(3);std::cout << "                    +      +                  \n";
	display_right_shift(3);std::cout << "                   +       +                  \n";
	display_right_shift(3);std::cout << "                          +                   \n";
	display_right_shift(3);std::cout << "                        +                     \n";
	display_right_shift(3);std::cout << "                      +                       \n";
	display_right_shift(3);std::cout << "                    +                         \n";
	display_right_shift(3);std::cout << "                  +   +  +  +  +              \n";
	display_right_shift(3);std::cout << "                 + +              +           \n";
	display_right_shift(3);std::cout << "                 +   +              +         \n";
	display_right_shift(3);std::cout << "                  +     +  +  +  +  + +       \n";
	display_right_shift(3);std::cout << "                    +  +  +  +  +  +          \n";
}

//EDIT
//---------------------------------------------------------

void display_scroll_down(const int32_t N)
{
	if(N < 0) 
	{
		std::ostringstream os;
		os << "Illegal value of N " << N << " in finction: scroll_down().";
		throw std::runtime_error(os.str());
	}
	for(int32_t i=0; i<N; ++i)
	{
		std::cout << "\n";
	}
}

void  display_right_shift(const int32_t N)
{
	if(N < 0) 
	{
		std::ostringstream os;
		os << "Illegal value of N " << N << " in finction: display_right_shift().";
		throw std::runtime_error(os.str());
	}
	for(int32_t i=0; i<N; ++i)
	{
		std::cout << "\t";
	}

}

std::string scroll_down(const int32_t N)
{
	if(N < 0) 
	{
		std::ostringstream os;
		os << "Illegal value of N " << N << " in finction: scroll_down().";
		throw std::runtime_error(os.str());
	}
	std::string result = "";
	for(int32_t i=0; i<N; ++i)
	{
		result += "\n";
	}
	return result;
}

std::string right_shift(const int32_t N)
{
	if(N < 0) 
	{
		std::ostringstream os;
		os << "Illegal value of N " << N << " in finction: display_right_shift().";
		throw std::runtime_error(os.str());
	}
	std::string result = "";
	for(int32_t i=0; i<N; ++i)
	{
		result += "\t";
	}
	return result;

}


