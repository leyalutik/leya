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



void run_timer(const int32_t seconds)
{
	if(seconds <= 0) 
	{
		std::ostringstream os;
		os << "Illegal value of seconds " << seconds << " in finction: run_timer().";
		throw std::runtime_error(os.str());
	}
	
	scroll_down(12);
	right_shift(3);
	std::cout << "Запустите таймер на ";
	display_time(seconds/60,seconds%60);
	std::cout << ".";

	scroll_down(1);
	right_shift(3);
	std::cout << "Нажмите \"Enter\" :\n";

	scroll_down((25-12-3));
	std::getchar();
	
	
	scroll_down(4);
	picture_swan();
	scroll_down(25-13-4);
	timer(seconds*1000);
	
	flash(5);
	
	scroll_down(12);
	right_shift(3);
	std::cout << "Время закончилось. Прошло ";
	display_time(seconds/60,seconds%60);
	std::cout << ".";

	scroll_down(1);
	right_shift(3);
	std::cout << "Нажмите \"Enter\" :\n";
	scroll_down((25-12-1));
	std::getchar();
	
} 
void flash(const int32_t times)
{

	for(int i=0; i<times; ++i)
	{
		scroll_down(4);
		picture_swan();
		scroll_down(25-13-4);
		
		timer(1000);
		
		scroll_down(25);
		
		timer(1000);
	}
}
void display_time(const int32_t minutes, int32_t seconds)
{
	std::cout << minutes << "m:" << seconds << "s";
}

void timer(const int32_t milliseconds)
{
	if(milliseconds <= 0) 
	{
		std::ostringstream os;
		os << "Illegal value of seconds " << milliseconds << " in finction: timer().";
		throw std::runtime_error(os.str());
	}
	auto start = std::chrono::steady_clock::now();
	auto finish = std::chrono::steady_clock::now();
	while(std::chrono::duration_cast<std::chrono::milliseconds>(finish-start).count()
        <= milliseconds)
{
	finish = std::chrono::steady_clock::now();
}
  
}

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

//CREATE
//------------------------------------------------------------
//Функция создания вектора(столбца) с заданным количеством слов, с заданным размером слов)
void create_set(const std::string& file_name, //source file
			const int32_t size_set, // length of vector
			const size_t size_element, // length of vector element
			std::vector<std::string>& set)
{

}


//DISPLAY
//Просто вывод столбца  с заданным отступом слева
void display_set(const int32_t number_tab,
			const std::vector<std::string>& set)
{

}
//Output several columns
//In vector every element (vector) is column from left to right 
void display_colomns_in_row( const int32_t number_tab, 
			int32_t number_columns, 
			const std::vector<std::vector<std::string>>& sets)
{

}

