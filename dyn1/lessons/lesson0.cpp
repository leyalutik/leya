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

#include "lesson0.h"
#include "lessons.h"
#include "bricks.h"
#include "edit.h"



void lesson0()
{


	display_text_in_page((std::string("Task 0\n\n") 
				+ right_shift(4) + std::string("Упражнения по концентрации и расширению сферы зрения.\n")
				+ right_shift(4) + std::string("Подготовка:\n")
				+ right_shift(5) + std::string("Программа Скорочтение:\n")
				+ right_shift(6) + std::string("Тренажёр >> Нейронный ускоритель.\n")
				+ right_shift(5) + std::string("Таймер - 5 минут.\n")
				+ right_shift(4) + std::string("Описание задания:\n")
				+ right_shift(5) + std::string("Открыть программу.\n\n")
				
				+ right_shift(4) + std::string("1.Техника Мандарина\n")
				+ right_shift(4) + std::string("2.С Богом!\n")
			     ),7,3,11);

/*	scroll_down(3);
	right_shift(7);	std::cout << "Task 0";
	scroll_down(2);
	right_shift(4);std:: cout << "Упражнения по концентрации и расширению сферы зрения.\n";
	scroll_down(2);
	right_shift(4);std:: cout << "Подготовка:\n";
	right_shift(5);std::cout << "Программа Скорочтение:\n";
	right_shift(6);std::cout << "Тренажёр >> Нейронный ускоритель.\n";
	right_shift(5);std::cout << "Таймер - 5 минут.\n";
	right_shift(4);std::cout << "Описание задания:\n";
	right_shift(5);std::cout << "Открыть программу.\n";
	right_shift(4);std::cout << "1.Техника мандарина.\n";
	right_shift(4);std::cout << "2.С Богом!\n";






	scroll_down((25-3-2-2-9));
	std::getchar();

	scroll_down(8);
	right_shift(4);std::cout << "Упражнение 0 завершено";
	scroll_down(2);
	right_shift(4);std::cout << " У вас всё получилось!\n";
	right_shift(4);std::cout << "        Молодец!\n";
	scroll_down((25-8-2-1));
	std::getchar();

*/

}
