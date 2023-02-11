#pragma once

#include <functional>

class INTERFACE
{
	public:
		INTERFACE(const int32_t number_options_new,
				std::function<void(int)> base_function,//funсtion of actions for every option
				const std::string& raw_menu);
		INTERFACE(const int32_t number_options_new,
				std::function<void(int&,int&)> base_function,//funсtion of actions for every option
				const std::string& raw_menu);
		
		void input(); //input number option (positive and integer) (with check) 
		int32_t i = 0;  //curent option number
		int32_t number_options = 0;
		std::string text_menu = "";
		void display_options();
		void create_text_menu(const std::string& display_options);
		int32_t get_i();

};

//Menu_Lesson
//Proceed
//Repeat
//Miss lesson
//Choose the number lesson
//Return to Main Menu

/*base_fuction(i)
{
	flow_lessons(i);
	INTERFACE lesson_menu(6, lesson_menu, string lesson_menu_text);
	lesson_menu.start();

*/
