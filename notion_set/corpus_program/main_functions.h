#pragma once

#include<iostream>
#include<vector>
#include<string>


void find_words(const std::string key, std::vector<std::string> words);
s
** ������� ������ ����� � ������������ � ��������������� ����	
void format_text(const std::string word,const std::string definition,
			int length_word_column, int length_def_column);
** ������� ������ ����� � ����������� **
bool find_word_def (const std::string line, std::string& WORD, std::string& DEF);
** ������� ����������� ����������� map ** 
void construct_map(std::string "raw_dict.txt");