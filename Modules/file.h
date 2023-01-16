#pragma once

#include<string>
#include<iostream>
#include<fstream>
#include "exception.h"


class File
{
	private:
		std::string name;
		std::string buffer_file;
		std::string buffer_line;
		std::string buffer_word;


	public:
		File(const std::string& name_new);

		//From Stroustrupp
		void is_file_opened(const std::string& iname); // input in method File(...)


		std::string get_buffer_word();
		std::string get_buffer_line();
		std::string get_buffer_file();
		std::string get_name();
		
		void display_line(const int32_t number);//number line [0:N]
		void display_line(); //display current line
		void display_file(); // display current file
		void display_word();//display current word
		

		bool find_word(const std::string& word); // 1 - найдена 0 - нет
		int32_t count_lines(const std::string& word); //Подсчет строк, в которых находится слово
		
		int32_t count_words(const std::string& word); //Подсчет слов, в которых находится слово
		void find_line_by_word(const std::string& word);
		void find_line_by_word_number(const std::string& word
				, const int32_t word_number );//Найти строку
		//		, в котором находится повторяющееся слово под номером [0,N] 
		void write_line();// open for writing Prompt для записи текста до Enter
		void extract_file();// extract file in  buffer_file
		void clear_file(); //clear file with current name and clear buffer variables;
		void extract_last_line();//extract to buffer_line
		void extract_line(const int32_t number_line); //number=[0,N] extract to buffer_line
		void input_line_to_the_end(const std::string& line);
		void replace_line(const std::string& line, const int32_t number); //number [0:N]

};
