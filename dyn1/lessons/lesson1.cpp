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

#include "lesson1.h"
#include "lessons.h"
#include "bricks.h"
#include "edit.h"

void lesson1()
{
	display_text_in_page((std::string("Task 1\n\n") 
				+ right_shift(4) + std::string("Чтение и подсчёт слов.\n")
				+ right_shift(4) + std::string("Подготовка:\n")
				+ right_shift(5) + std::string("Текст с лёгким содержанием.\n")
				+ right_shift(5) + std::string("Таймер - 5 минут.\n")
				+ right_shift(4) + std::string("Описание задания:\n")
				+ right_shift(5) + std::string("Прочитать текст с одновременным подсчётом слов.\n\n")
				
				+ right_shift(4) + std::string("1.Техника Мандарина\n")
				+ right_shift(4) + std::string("2.Начали!\n")
			     ),7,3,11);

/*
	scroll_down(3);
	right_shift(7);	std::cout << "Task 1";
	scroll_down(2);
	right_shift(4);std:: cout << "Чтение и подсчёт слов.";
	scroll_down(2);
	right_shift(4);std:: cout << "Подготовка:\n";
	right_shift(5);std::cout << "Текст с лёгким содержанием.\n";
	right_shift(5);std::cout << "Таймер - 5 минут.\n";
	right_shift(4);std:: cout << "Описание задания:\n";
	right_shift(5);std::cout << "Прочитать текст с одновременным подсчётом слов.\n";
	right_shift(4);std::cout << "1.Техника мандарина.\n";
	right_shift(4);std::cout << "2.Начали!\n";
	
	scroll_down((25-3-2-7-1));
	std::getchar();
	
	scroll_down(8);
	int32_t minutes=1;
	right_shift(4);std::cout << "Input minutes:\n";
	scroll_down(28-8-1-1);
	std::cin >> minutes;
	run_timer((minutes*60)); //seconds

	scroll_down(8);
	right_shift(4);std::cout << "Упражнение 1 завершено";
	scroll_down(2);
	right_shift(4);std::cout << " У вас всё получилось!\n";
	right_shift(4);std::cout << "        Молодец!\n";
	scroll_down((25-8-2-1-1));
	std::getchar();

*/

}




