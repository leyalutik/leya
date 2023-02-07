#pragma once


//FORMAT TEXT
void display_text_in_page(std::string text, const int32_t rightshift, const int32_t number_upper_lines,const int32_t number_n_in_text);


//INPUT
void input(int32_t& number_lesson); // non negative integer number
//TIME
//----------------------------------------------------
void run_timer(const int32_t seconds);
void flash(const int32_t times);  // pulse when time is over
void display_time(const int32_t minutes, int32_t seconds);
void timer(const int32_t milliseconds);

//CREATE
//------------------------------------------------------------
//Функция создания вектора(столбца) с заданным количеством слов, с заданным размером слов)
void create_set(const std::string& file_name, //source file
			const int32_t size_set, // length of vector
			const size_t size_element, // length of vector element
			std::vector<std::string>& set);


//DISPLAY
//Просто вывод столбца  с заданным отступом слева
void display_set(const int32_t number_tab,
			const std::vector<std::string>& set);
//Output several columns
//In vector every element (vector) is column from left to right 
void display_colomns_in_row( const int32_t number_tab, 
			int32_t number_columns, 
			 const std::vector<std::vector<std::string>>& sets);


