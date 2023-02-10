#include <vector>
#include <map>
#include <set>
#include <exception>
#include <cassert>
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <chrono>
#include <functional>

#include "lessons.h"
#include "bricks.h"
#include "interface.h"
#include "edit.h"
//#include "working_space.h"

void flow(int i)
{
	switch(i)
	{
		case 1: display_text_in_page("0",5,6,0);
			getchar();
			getchar();
			break;
		case 2:display_text_in_page("1",5,6,0);
			getchar();
		       getchar();
			break;
		default :display_text_in_page("Hello!",5,6,0);
				getchar();
			 	getchar();
				break;


	}
}

int main()
{

	std::string menu = "Menu\n1\n2\n3";
	INTERFACE proba(3,flow,menu);
	std::getchar();
	std::system ("chcp 65001");
display_text_in_page("    ЗАПУСК ПРОГРАММЫ\n\n\t\t\t\tПРЕДВАРИТЕЛЬНЫЕ НАСТРОЙКИ\n\n\t\t\t\tСделайте ваше окно терминала: высота - 25, ширина - 120.",4,1,4);
std::getchar();
	

	try
	{
		int32_t  start = 0;
		int32_t number_options = 13;
		LESSONS lesson(number_options);
		lesson.start(start);
	}
	catch(std::runtime_error &e)
	{
		std::cerr << e.what() << "\n";
	}
	catch(...)
	{
		std::cerr << "Unknown mistake.\n";
	}

	return 0;
}
	
