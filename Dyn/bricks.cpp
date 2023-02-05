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
#include "edit.h"
#include "parse_file.h"
//FORMAT TEXT

void display_text_in_page(const std::string& text, const int32_t rightshift, const int32_t number_upper_lines,const int32_t number_n_in_text) //if text contains more than one line, then number_lines > 0
{
	if(number_n_in_text < 0 || number_upper_lines < 0 || rightshift < 0)
	{
		throw std::runtime_error("Illegal value in function display_text_in_page()");
	}
	scroll_down(number_upper_lines);
	right_shift(rightshift);
	std::cout << text << "\n";
	scroll_down(25-2-number_n_in_text - number_upper_lines);
}

//INPUT POSITIVE NUMBERS
void input(int32_t& number_lesson)
{
	std::cin >> number_lesson;
	while(!std::cin && number_lesson < 0 )
	{
		if(std::cin.bad())  //поток повреждён; Отправляем отчет об ошибке внешней программе
		{
			throw std::runtime_error ("In function stream cin was corrupted");
		}
		if(std::cin.eof())
		{
			std::cout << "The input stream is overloaded.\n";
			//Больше никаких входных данных
			//Последовательность символов правильно должна оканчиваться именно так
		}
		if(std::cin.fail()) // поток столкнулся с чем-то неожиданным
		{
			std::cin.clear();// make ready for more input
			std::cin.ignore(32767, '\n'); // очищаем поток от мусора
			std::cin >> number_lesson;
		}


	}
}
void run_timer(const int32_t seconds)
{
	if(seconds <= 0) 
	{
		std::ostringstream os;
		os << "Illegal value of seconds " << seconds << " in finction: run_timer().";
		throw std::runtime_error(os.str());
	}
	
	scroll_down(8);
	right_shift(4);
	std::cout << "Запустите таймер на ";
	display_time(seconds/60,seconds%60);
	std::cout << ".";

	scroll_down(1);
	right_shift(4);
	std::cout << "   Нажмите \"Enter\" :\n";

	scroll_down((25-8-1-1-1));
	std::getchar();
	
	
	scroll_down(4);
	picture_swan();
	scroll_down(25-13-4);
	timer(seconds*1000);
	
	flash(5);
	
	scroll_down(8);
	right_shift(4);
	std::cout << "Время закончилось. Прошло ";
	display_time(seconds/60,seconds%60);
	std::cout << ".";

	scroll_down(1);
	right_shift(4);
	std::cout << "   Нажмите \"Enter\" :\n";
	scroll_down((25-8-1-1));
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

