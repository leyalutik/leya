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
#include "interface.h"
#include "edit.h"
#include "working_space.h"


int main()
{
	std::system ("chcp 65001");

	right_shift(1);
	std::cout << "\nСделайте ваше окно терминила: высота - 25, ширина - 120.";	
	scroll_down(2);
	right_shift(4);
	std::cout << "СКОРОЧТЕНИЕ\n";

	try
	{
		Interface_Main training;
		training.ws.initialize();
		training.start();
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
	
