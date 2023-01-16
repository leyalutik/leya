#include "menu_main.h"

Menu::Menu(const std::string& source_file_name)
{
	Menu::source_file = source_file_name;
	

}
	
void Menu::display_menu(){}
	
void Menu::launch(){}

void Menu::read_option(int32_t& choice){}

void Menu::launch_option(const int32_t choice){}

/*

void Menu::display_main_menu()
{
	std::cout << "\n";
	std::cout << "    ==================================================n\n";
	std::cout << "                           Main menu\n";
	std::cout << "    ==================================================n\n";
	std::cout << "\n\n";
	std::cout << "-----------  Open file \"Walking_1000_li.txt\".      -----------  (1)\n";
	std::cout << "-----------  Add to column \"Planning\" the idea.    -----------  (2)\n";  
	std::cout << "-----------  Add to column \"Done\" completed task.  -----------  (3)\n";
	std::cout << "-----------  Start new day.                        -----------  (4)\n";
	std::cout << "-----------  Exit the program.                     -----------  (5) \n";
	std::cout << "\n\n";
}
void Menu::read_option(char& option)
{
	std::cout << "Enter the option:\n";
	while(std::cin >> option && (option > '9' || option < '0'))
	{	
		"Wrong input, enter the option again.\n";
		std::cin.clear();
		std::cin.ignore(32767, '\n'); 
	}
}
void Menu::launch()
{
	char option;
	while (option != '5')
	{
		display_main_menu();
		read_option(option);
		launch_option(option);

	}
}

void Menu::launch_option(const char option)
{
	switch(option)
	{
		case '1': launch_option_1();
			  break;
		case '2':launch_option_2();
			 break;
		case '3':launch_option_3();
			 break;
			 case '4':launch_option_4();
			 break;
		default : break;
	}
}

void Menu::launch_option_1()
{
	std::system("start \"\" notepad.exe walking_1000_li.txt" );  
}
void Menu::launch_option_2()
{
	char end_cycle = 'y';
	while(end_cycle != 'n' && end_cycle != 'N' && end_cycle != '2' )
	{
		std::string the_idea;
		std::cout << "Add to column \"Planning\" the idea:\n";
		std::getchar();
		getline(std::cin, the_idea,'\n');

		std::cout << "Other idea?  Y(1)/n(2)\n";
		std::cin >> end_cycle;
	}
}
void Menu::launch_option_3()
{
	char end_cycle = 'y';
	while(end_cycle != 'n' && end_cycle != 'N' && end_cycle != '2' )
	{
		std::string the_task;
		std::cout << "Add to column \"Done\" the completed task:\n";
		std::getchar();
		getline(std::cin, the_task,'\n');

		std::cout << "Other task?  Y(1)/n(2)\n";
		std::cin >> end_cycle;
	}

}
void Menu::launch_option_4()
{
	std::cout << "\nAdd current date\n";
	std::getchar();
	std::getchar();
}
*/
