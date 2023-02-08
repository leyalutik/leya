#pragma once


template<class FUNC>
class INTERFACE
{
	public:
		INTERFACE(const int32_t number_options_new,
				FUNC base_funcion_new,//fucntion of actions for every option
				const string& display_options);
		void input(); //input number option (positive and integer) (with check) 
		int32_t i = 0;  //curent option number
		int32_t number_options = 0;
		std::string text_menu;
		FUNC base_function;
		void display_options();
		void create_text_menu(const string& display_options);
		
		void start()
		{
			display_text_in_page("Enter number of option ");
			while(i < number_options)
			{
				display_options();
				input(i);
				base_function(i);
			}
		}
};



