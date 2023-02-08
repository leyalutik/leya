#pragma once
#include "working_space.h"

class LESSONS
{

	public:
		LESSONS(int32_t numbeк_lessons_new);
		LESSONS(int32_t numbeк_lessons_new,const std::string& OS_new, const std::string& browser_command_new);
		void flow(int32_t i);
		void start(const int32_t start_number);	

		Working_Space ws;
		int32_t number_lessons;				
		void display_preparations();
		void lesson0();
		void lesson1();
		void lesson2();
		void lesson3();
		void lesson4();
		void lesson5();
		void lesson6();
		void lesson7();
		void lesson8();
		void lesson9();
		void lesson10();
		void lesson11();
		void lesson12();
		void lesson13();
		void lesson14();
		void lesson15();
		void lesson16();
		void lesson17();
		void lesson18();
		void lesson19();
		void lesson20();

};


