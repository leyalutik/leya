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

#include "lessons.h"


int main()
{
/*	int number_task = 0;
	std::ifstream in("options.txt", std::ios_base::in);
	in >> number_task;
	
	in.close();

	std::cout << "number_task = " << number_task << "\n";

	number_task = 10;
	std::ofstream out("options.txt");
	out << number_task;

	std::cout << "number_task = " << number_task << "\n";
	out.close();

	std::cout << "Change the console encoding to UTF-8 \n"
		<< "	And be sure that text files are also in UTF-8 encoding.\n";
	std::cout <<  "Enter \'Enter\':\n";
	std::getchar();

	display_shift();
	std::cout << "Task1:\n";
	display menu_task();	
	switch(std::getchar())
	{
		case '1':
			task1();
			break;
		case '3':
			return 0;
				 
		default	:	
			break;

	}
*/
	std::system ("chcp 65001");
	std::cout << "\n\t\t\t\t СКОРОЧТЕНИЕ\n";
	std::cout << "Enter number of task:\n";
	int32_t number_task = 0;
	std::cin >> number_task;
	while(!std::cin)
	{
		if(std::cin.bad())  //поток повреждён; Отправляем отчет об ошибке внешней программе
		{
			throw std::runtime_error ("In function stream cin was corrupted");
		}
		if(std::cin.eof())
		{
			//Больше никаких входных данных
			//Последовательность символов правильно должна оканчиваться именно так
		}
		if(std::cin.fail()) // поток столкнулся с чем-то неожиданным
		{
			std::cin.clear();// make ready for more input
			std::cin.ignore(32767, '\n'); // очищаем поток от мусора
			std::cin >> number_task;
		}

			
	}
	std::getchar();

	display_preparations();
	std::getchar();
//Week1
	switch(number_task)
	{
		case 0:
			//task_menu
			lesson0();
		case 1:
			lesson1();
		case 2:
			lesson2();
	}
	/*
		case 3:
			std::cout << "\t Task 3\n";
			lesson3();
			std::getchar();
		case 4:
			std::cout << "\t Task 4\n";
			lesson4();
			std::getchar();
		case 5:
			std::cout << "\t Task 5\n";
			lesson5();
			std::getchar(); 
		case 6:
			std::cout << "\t Task 6\n";
			lesson6();
			std::getchar(); 
		case 7:
			std::cout << "\t Task 7\n";
			lesson7();
			std::getchar(); 
		case 8:
			std::cout << "\t Task 8\n";
			lesson8();
			std::getchar(); 
		case 9:
			std::cout << "\t Task 9\n";
			lesson9();
			std::getchar(); 
		case 10:
			std::cout << "\t Task 10\n";
			lesson10();
			std::getchar(); 
		case 11:
			std::cout << "\t Task11\n";
			lesson11();
			std::getchar(); 
		case 12:
			std::cout << "\t Task 12\n";
			lesson12();
			std::getchar();

//Week2	
	
		case 13:
			std::cout << "\t Task 13\n";
			lesson13();
			std::getchar();
		case 14:
			std::cout << "\t Task 14\n";
			lesson14();
			std::getchar();
		case 15:
			std::cout << "\t Task 15\n";
			lesson15();
			std::getchar();
		case 16:
			std::cout << "\t Task 16\n";
			lesson16();
			std::getchar();
		case 17:
			std::cout << "\t Task 17\n";
			lesson17();
			std::getchar();
		case 18:
			std::cout << "\t Task 18\n";
			lesson18();
			std::getchar();
		case 19:
			std::cout << "\t Task 19\n";
			lesson19();
			std::getchar();
	}

	*/

	return 0;
}
	
