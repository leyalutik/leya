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
	right_shift(3);std::cout << "                      +  +                    \n";
	right_shift(3);std::cout << "                    +      +                  \n";
	right_shift(3);std::cout << "                   +       +                  \n";
	right_shift(3);std::cout << "                          +                   \n";
	right_shift(3);std::cout << "                        +                     \n";
	right_shift(3);std::cout << "                      +                       \n";
	right_shift(3);std::cout << "                    +                         \n";
	right_shift(3);std::cout << "                  +   +  +  +  +              \n";
	right_shift(3);std::cout << "                 + +              +           \n";
	right_shift(3);std::cout << "                 +   +              +         \n";
	right_shift(3);std::cout << "                  +     +  +  +  +  + +       \n";
	right_shift(3);std::cout << "                    +  +  +  +  +  +          \n";
}

//EDIT
//---------------------------------------------------------

void scroll_down(const int32_t N)
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

void right_shift(const int32_t N)
{
	if(N < 0) 
	{
		std::ostringstream os;
		os << "Illegal value of N " << N << " in finction: right_shift().";
		throw std::runtime_error(os.str());
	}
	for(int32_t i=0; i<N; ++i)
	{
		std::cout << "\t";
	}

}


