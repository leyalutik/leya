#pragma once

#include<iostream>
#include<vector>
#include<string>
#include<ffstream>
#include<map>

class menu_main
{

	//Список слов
	vector<string> words

	//Словарик пара Слово - Определение
	map<string> dictionary

	//команда запуска в терминале компьютера
	std::string command_browser;

	//Ширины столбца для Слова
	int length_word_column = 20;

	//Ширина столбца для Определения
	int length_def_column = 40;

	menu_main(const std::string browser_command_value,
		int length_word_column_value, int length_def_column_value);
	menu_main(const std::string browser_command_value); 

	//Главная функция класса menu_course
	void launch();
	
	//Функция считывания выбора
	void choose_option(std::string& option)

	//Функция запуска нужного выбора
	void launch_option(const std::string option);

	//Вывод меню на экран
 	void display_menu();

	//функция выводит все слова, которые есть в словарике (Страуструппа)
	void option_1();

	//output full list of words
	void view_all_words();

	//find woreds
	void option_2();
	
	//Функция определяющая, string thing это слово или цифра
	bool is_digit(const std::string);

	//add word and definition
	void option_3();
		
	//Функция добавления пары Слово+Определение в словарик--
	void add_word_definition(const std::string Word, const std::string Definition);
	
	//Launch Ravesli menu
	void option_4(); 
	
	//Launch Yandex_coursera menu
	void option_5();

	//Change browser_command
	void option_6();

	void change_browser_command(std::string new_command);

	//Обнуляет  стартовый текстовой файл со словарем, добавляет текущий map dictionary.
	~menu_main();
};