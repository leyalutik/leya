#pragma once
#include "working_space.h"

class LESSONS
{

	public:
		LESSONS(const int32_t number_lessons_new);
		LESSONS(const int32_t number_lessons_new,const std::string& OS_new, const std::string& browser_command_new);
		void flow(const int32_t i);
		void start(const int32_t start_new, const int32_t end_new);
		void check(const int32_t);	
		void menu();
		void display_menu();
		void base_function(const int32_t i);
		void display_main_menu();
		void base_main_function(const int32_t i);
		void start_program();


		Working_Space ws;
		int32_t number_lessons;				
		int32_t current_number;
		int32_t START_LESSON = 0;
		int32_t END_LESSON = 0;
			
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


