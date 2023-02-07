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


#include "interface.h"
#include "lessons.h"
#include "edit.h"
#include "bricks.h"
#include "working_space.h"


Interface_Main::Interface_Main()
{
	Interface_Main::ws.initialize();

}
void Interface_Main:: start()
{
	int32_t number_lesson = 0;
	display_text_in_page("  СКОРОЧТЕНИЕ\n\n\t\t\t\tНачало программы\n\n\t\t\t\tEnter number of task:",4,8,4);
	input(number_lesson);
	std::getchar();

	display_preparations();
	std::getchar();
	//Week1
	switch(number_lesson)
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


}


