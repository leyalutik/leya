#pragma once

#include<vector>
#include<iostream>
#include<string>
#include<conio.h>
#include<iomanip>
#include<utility>
#include<ctime>

template <typename K>			
void output(const std::vector<K>& vec)
{
	bool flag = false;
	std::cout << "{";
	for(auto& v:vec)
		{
			if(flag ==true)
			{
				std::cout << ",";
			}
			else
			{
				flag = true;
			}
			std::cout << v;
		}
	std::cout << "}\n";
}


void parse_line_emotions(const std::string given_line, std::vector<std::string>& rows,
		int32_t SIZE_ROW);

//Add elements of vector v1 to vector v2 except last element, last_word assigns the last element
void merge(const std::vector<std::string>& v1,std::vector<std::string>& v2, std::string& last_word);

//фукнция считывания слов   (окончаниие строки) 
//(индекс after_word или на следу.щем пробеле или следующий индекс после слова)
void put_word(const std::string given_line, const int32_t given_index,
					std::string& founded_word, 
					int32_t& after_word_index);//(-1 если конец строки,
					//индекс следующего символа после слова (обычно пробел)
					//в given_line)
//разделение слов по фиксированному размеру,
//размер элемента вектора cut_words не больше size_cut
void cut_word(std::string given_word, int32_t SIZE_CUT,
				std::vector<std::string>& cut_words);
//Если первая и последняя символ цифры
bool is_digit(std::string word);


