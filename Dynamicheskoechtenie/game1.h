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
void display_preparations();
//Week1
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
//Week2
void display_set_of_words(std::vector<std::string> set_of_words);
void game5(const std::vector<std::string> source_list_of_words,
		const int32_t number_of_words);
void game1(const std::vector<std::string> source_list_of_words,
		const int32_t number_of_words,
		const int32_t number_of_tries);


void create_set_of_words(const std::vector<std::string> source_list_of_words,
		const int32_t number_of_words, std::vector<std::string>& set_of_words);
