#include "emotions.h"
//Построим таблицу с внессенными словами меньше 40 знаков
//Построим таблицу с автоматическим переносом слов
//Построим таблицу с учетом слово цифра
//Научимся открывать файл emotions_monitoring.cpp после слова Новая запись и закрывать файл, когда она закончится.

//Architecture
//
//if new_day
//open file
//valuate datum of new_day
//input to table of file
//close file
//if new entry
//valuate time
//input time in grid
//emotions?
//input to special type of memory (take from beginning, deque...) 
//thoughts?
//input to special type of memory
//cations?
//input to special type of memory
//
//try to insert to special table 20 20 20 20
//
//
//
//void parse_line_emotions(const std::string given_line, std::vector<std::string>& rows,
//				int32_t SIZE_ROW))

//
//
//фукнция считывания слов void put_word(const std::string given_line, int32_t given_index,
//					std::string& founded_word, 
//					int32_t& after_word_index);
//функция разделения слов на части 
//void cut_word(std://tring given_word, int32_t SIZE_CUT,
//						std::vector& cut_words<std::string>)
//Функция проверки строки как числа
//is digit()
//
//if(given_line.size() == 0 || SIZE_ROW <= 0)
//{
//
//given_index = 0;
//
//while(index_given_line < given_line_size)
//put_word(given_line,given_index, word1, after_word_index);
//Анализ слова 1
//	Если слово не цифра
//		if word1.size() > grid_size
//			вызываем функцию cut_word(word1,GRID_ROW_SIZE, cut_words)
//			добавляем в grid_rows все слова word1 кроме последнего 
//word1 = последняя часть слова word1;
//		
//		считываем слово 2 (до пробела или конца строки)
//		Если слово цифра и сумма знаков слова1 + " " + слова2 
//			не больше GRID_ROW_SIZE
//			Добавляем grid_rows.push_back(word1+" "+word2)
//			
//			Иначе grid_rows.push_back(word1) индекс на начале втором слове, 
//			чтобы перейти в начало цикла где отчет начинается с word1(word2)
// 
//
//	Иначе grid_rows.push_back(word1)

void parse_line_emotions(const std::string given_line, std::vector<std::string>& rows,
		int32_t SIZE_ROW)
{
	if(given_line.size() == 0 || SIZE_ROW <= 0)
	{
		std::cout << "Invalid input data in function parse_line_emotions\n";
		std::cout << "given_line.size() = " << given_line.size() 
			<< "\nSIZE_ROW = " << SIZE_ROW << "\n";
		return;
	}
	size_t given_index = 0;
	size_t SIZE_ROW_t = SIZE_ROW;
	while(given_index < given_line.size())
	{
		int32_t after_word_index = 0;
		std::string word1;
		put_word(given_line,given_index, word1, after_word_index);

		if(is_digit(word1))
		{
			
				rows.push_back(word1);
				given_index = after_word_index;
			
		}
		else if(!is_digit(word1))
		{
			if(word1.size() > SIZE_ROW_t)
			{
				std::string last_word;
				std::string word_temp = word1;
				std::vector<std::string> cut_words;
				cut_word(word_temp, SIZE_ROW_t, cut_words);
				merge(cut_words,rows,last_word);
				word1 = last_word;
			}
			std::string word2;
			given_index = after_word_index;
			put_word(given_line,given_index, word2, after_word_index);
			if(is_digit(word2)
					&& (word1.size() + word2.size()) <= (SIZE_ROW_t - 1)
			  )
			{
				rows.push_back(word1 + " " + word2);
				given_index = after_word_index;
			}
			else
			{
				rows.push_back(word1);
			}
		}

		//Анализ слова 1
		//	Если слово не цифра
		//		if word1.size() > grid_size
		//			вызываем функцию cut_word(word1,GRID_ROW_SIZE, cut_words)
			//			добавляем в grid_rows все слова word1 кроме последнего 
			//word1 = последняя часть слова word1;
			//		
			//		считываем слово 2 (до пробела или конца строки)
			//		Если слово цифра и сумма знаков слова1 + " " + слова2 
			//			не больше GRID_ROW_SIZE
			//			Добавляем grid_rows.push_back(word1+" "+word2)
			//			
			//			Иначе grid_rows.push_back(word1) индекс на начале втором слове, 
			//			чтобы перейти в начало цикла где отчет начинается с word1(word2)
			// 
			//
			//	Иначе grid_rows.push_back(word1)

	}
}




void merge(const std::vector<std::string>& v1,std::vector<std::string>& v2,
		std::string& last_word)
{
	if(v1.size() == 0)
	{
		std::cout << "Invalid input in function merge\n";
		std::cout << "Cut word size is 0\n";
		return;
	}
	for(size_t i=0; i<v1.size(); ++i)
	{
		if(i != v1.size()-1)
			{
				v2.push_back(*(v1.begin()+i));
			}
		else
		{
			last_word = *(v1.begin()+i);
		}

	}
}


bool is_digit(std::string word)
{	
	return (word.front() <= '9'&& word.front() >= '0' 
			&& word.back() <= '9' && word.back() >= '0');
}

void cut_word(std::string given_word, int32_t SIZE_CUT,
				std::vector<std::string>& cut_words)
{
	//check
	if(SIZE_CUT <= 0)
	{
		return;
	}
	size_t size_cut = static_cast<size_t>(SIZE_CUT);
	if(given_word.size() == 0)
	{
		return;
	}
	if(given_word.size() <= size_cut)
	{
		cut_words.push_back(given_word);
		return;
	}

	for(size_t i = 0; i< given_word.size(); i += size_cut)
	{
		cut_words.push_back(std::string(
					given_word.begin() + i,
					given_word.begin()
						+ ((i+size_cut) < given_word.size() 
							? i+size_cut : given_word.size())
				));

	}
}



void put_word(const std::string given_line, const int32_t given_index,
					std::string& founded_word, 
					int32_t& after_word_index)
{
	if(given_index < 0 || given_index >= static_cast<int32_t>(given_line.size()))
	{
		//throw mistake
		//std::cout << "Mistake of given_index in function put_word(...)\n";
		return;
	}
	if(given_line.size() == 1 && given_line[0] == ' ')
	{
		founded_word.push_back(' ');
		after_word_index = 1;
		return;
	}

	size_t temp_index = given_index;
	while(given_line[temp_index] == ' ')
	{
		++temp_index;
	}
	for(size_t i=temp_index; i < given_line.size(); ++i)
	{
		if(given_line[i] == ' ')
		{
			after_word_index = i;
			break;
		}
		founded_word.push_back(given_line[i]);
		after_word_index = i;
	}
		++after_word_index;
}

		


