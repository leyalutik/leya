#pragma once








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

