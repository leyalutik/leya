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

#include "start.h"
#include "edit.h"

int main()
{
	std::system ("chcp 65001");
	display_text_in_page("    ЗАПУСК ПРОГРАММЫ\n\n\t\t\t\tПРЕДВАРИТЕЛЬНЫЕ НАСТРОЙКИ\n\n\t\t\t\tСделайте ваше окно терминала: высота - 25, ширина - 120.",4,1,4);
	std::getchar();


	try
	{
		start_program();	
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

