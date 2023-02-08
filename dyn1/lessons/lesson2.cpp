
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

#include "lesson2.h"
#include "lessons.h"
#include "bricks.h"
#include "edit.h"




void lesson2()
{
	display_text_in_page((std::string("Task 2\n\n") 
				+ std::string("\t\t\t\tЧтение столбиков с шаблоном.\n")
				+ right_shift(4) + std::string("Подготовка:\n")
				+ right_shift(5) + std::string("Текст столбиком.\n")
				+ right_shift(5) + std::string("Таймер - 5 минут.\n")
				+ right_shift(4) + std::string("Описание задания:\n")
				+ right_shift(5) + std::string("Cдвигать шаблон сверху вниз\n")
				+ right_shift(6) + std::string("со скоростью одна секунда на колонку.\n")
				+ right_shift(5) + std::string("Через прорез шаблона нужно \"схватить,узнать\"\n")
				+ right_shift(6) + std::string("слова без прочитывания.\n\n")
				+ right_shift(4) + std::string("1.Техника Мандарина\n")
				+ right_shift(4) + std::string("2.Начали!\n")
			     ),7,3,13);

