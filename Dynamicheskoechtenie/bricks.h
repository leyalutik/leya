#pragma once


//time
void time_stop(const int32_t milliseconds);


// Edit texts
void right_shift(const int32_t N_tabs); //right shift text on N*tabs length
void display_scroll_down(const int32_t N_strings); // scroll down on N strings

//Creating

void create_column(const int32_t N_words, //create set of words with certain number of words
		const size_t size_word, 	// with size word limit
		std::vector<std::string>& column); // and vector for writing

//Display

void display_columns_rows( const int32_t N_tabs, // right shift every element of column
			int32_t N_columns, // Not neccessary because of vector
			const std::vector<std::vector<std::string>>&& word_sets); // 

void display_column(const int32_t N_tabs,
		const std::vector<std::string>& column);


//--------------------------------------------------------------------------

void display_set_of_words(const std::vector<std::string>& set_of_words);
void game5_russian(const std::vector<std::string>& source_list_of_words,
		const int32_t number_of_words);
void game5(const std::vector<std::string>& source_list_of_words,
		const int32_t number_of_words);
void game1(const std::vector<std::string>& source_list_of_words,
		const int32_t number_of_words,
		const int32_t number_of_tries);

void create_set_of_words(const std::vector<std::string>& source_list_of_words,
		const int32_t number_of_words, std::vector<std::string>& set_of_words);
void display_n();

