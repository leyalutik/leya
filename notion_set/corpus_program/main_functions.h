#pragma once

#include<iostream>
#include<vector>
#include<string>


void find_words(const std::string key, std::vector<std::string> words);
s
** Функция вывода Слова и Опеределения в форматированном виде	
void format_text(const std::string word,const std::string definition,
			int length_word_column, int length_def_column);
** Функция поиска Слова и Определения **
bool find_word_def (const std::string line, std::string& WORD, std::string& DEF);
** Функция конструкции определения map ** 
void construct_map(std::string "raw_dict.txt");