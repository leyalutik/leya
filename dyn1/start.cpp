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
#include "start.h"




void start_program()
{
	LESSONS dynamic(13);
	
	dynamic.start_program();

	display_text_in_page("Конец!",4,8,0);
	std::getchar();
}


