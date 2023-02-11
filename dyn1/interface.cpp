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
#include <functional>

#include "interface.h"
#include "lessons.h"
#include "edit.h"
#include "bricks.h"
#include "working_space.h"


INTERFACE::INTERFACE(const int32_t number_options_new,
		std::function<void(int)> base_function,//funсtion of actions for every option
		const std::string& raw_menu)
{
	INTERFACE::number_options = number_options_new;
	create_text_menu(raw_menu);

	while(i < number_options)
	{
		INTERFACE::display_options();
		INTERFACE::input();
		base_function(i);

	}
}


void INTERFACE::input() //input number option (positive and integer) (with check) 
{
	std::cin >> INTERFACE::i;
	while(!std::cin && INTERFACE::i < 0 )
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
			std::cin >> INTERFACE::i;
		}


	}


}


void INTERFACE::display_options()
{
	display_text_in_page(text_menu,0,0,4+INTERFACE::number_options+1);
}
void INTERFACE::create_text_menu(const std::string& raw_menu)// Just options with new string
{
	std::string str;
	size_t i = 0;
	std::stringstream stream(raw_menu);
	while(std::getline(stream,str))
	{
		if(i == 0)
		{	INTERFACE::text_menu += scroll_down(4)
				+ right_shift(5) + str
				+ scroll_down(2);


			++i;
		}
		else
		{
			
			INTERFACE::text_menu += right_shift(4) + str 
				+ right_shift(4) + std::to_string(i)
				+ scroll_down(1);
			++i;
		}
	}

	INTERFACE::text_menu += right_shift(4) + std::string("Exit") 
				+ right_shift(4) + std::to_string(i)
				+ scroll_down(1);


		

}








/*
Interface_Main::Interface_Main()
{
	Interface_Main::ws.initialize();

}
void Interface_Main:: start()
{
	int32_t INTERFACE::i = 0;
	display_text_in_page("  СКОРОЧТЕНИЕ\n\n\t\t\t\tНачало программы\n\n\t\t\t\tEnter number of task:",4,8,4);
	input(INTERFACE::i);
	std::getchar();

	display_preparations();
	std::getchar();
	//Week1
	switch(INTERFACE::i)
	{
		case 0:
			{
				int end_cycle = 1;
				while(end_cycle == 1)
				{
					lesson0();
					std::getchar();
					display_text_in_page(
							"Повторить упражнение?\n\t\t\t\tYes(1)/No(2)"
							,4,8,1);

					std::cin >> end_cycle;

					std::getchar();
				}
			}

		case 1:
			{
				int end_cycle = 1;
				while(end_cycle == 1)
				{

					lesson1();
					std::getchar();
					display_text_in_page(
							"Повторить упражнение?\n\t\t\t\tYes(1)/No(2)"
							,4,8,1);

					std::cin >> end_cycle;

					std::getchar();

				}
			}

		case 2:
			{
				int end_cycle = 1;
				while(end_cycle == 1)
				{

					lesson2();
					std::getchar();

					display_text_in_page("Input minutes:",4,8,0);
					int32_t minutes=1;
					input(minutes);
					run_timer((minutes*60)); //seconds
					display_text_in_page((
								std::string("Упражнение 2 завершено\n\n")
								+ right_shift(4) + std::string(" У вас всё получилось!\n")
						+ right_shift(4) + std::string("        Молодец!\n")

							     ),4,8,4);
					std::getchar();


					display_text_in_page(
						"Повторить упражнение?\n\t\t\t\tYes(1)/No(2)"
						,4,8,1);
					input(end_cycle);

					std::getchar();
				}
			}


	}

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





}

*/
