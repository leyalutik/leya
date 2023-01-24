#pragma once

#include <vector>
#include <map>
#include <set>
#include<exception>
#include <cassert>
#include<cstdlib>
#include<iostream>
#include<string>
#include <sstream>
#include <fstream>
#include <chrono>


//List of words for memory
//
//
//
//input number of words
//input number of tries

void display_set_of_words(std::vector<std::string> set_of_words);
void game5(const std::vector<std::string> source_list_of_words,
		const int32_t number_of_words=15);
void game1(const std::vector<std::string> source_list_of_words,
		const int32_t number_of_words,
		const int32_t number_of_tries);


void create_set_of_words(const std::vector<std::string> source_list_of_words,
		const int32_t number_of_words, std::vector<std::string>& set_of_words);
