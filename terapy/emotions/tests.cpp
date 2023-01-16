#include "tests.h"

void test_parse_line()
{	
	std::vector<std::string> grid_rows;

	std::cout << "\nparse_line(\"1\",grid_rows,5)\n";
	parse_line("1",grid_rows,5);
	std::cout << "{Program result}\n";
	output(grid_rows);
	grid_rows.clear();
	getch();

	std::cout << "\nparse_line(\"1 2 3 4 5\",grid_rows,5)\n";
	parse_line("1 2 3 4 5",grid_rows,5);
	std::cout << "{Program result}\n";
	output(grid_rows);
	grid_rows.clear();
	getch();

	std::cout << "\nparse_line(\"123456 123\",grid_rows,5)\n";
	parse_line("123456 123",grid_rows,5);
	std::cout << "{Program result}\n";
	output(grid_rows);
	grid_rows.clear();//Erases all elements from the container. 
			//After this call, size() returns zero.
	getch();
	std::cout << "\nparse_line(\"12345 12345\",grid_rows,5)\n";
	parse_line("12345 12345",grid_rows,5);
	std::cout << "{Program result}\n";
	output(grid_rows);
	grid_rows.clear();

	getch();
	std::cout << "\nparse_line(\"123 123 1\",grid_rows,3)\n";
	parse_line("123 123 1",grid_rows,3);
	std::cout << "{Program result}\n";
	output(grid_rows);
	grid_rows.clear();

	getch();
	std::cout << "\nparse_line(\"123 123 1\",grid_rows,7)\n";
	parse_line("123 123 1",grid_rows,7);
	std::cout << "{Program result}\n";
	output(grid_rows);
	grid_rows.clear();

	getch();
	std::cout << "\nparse_line(\"1234567\",grid_rows,3)\n";
	parse_line("1234567",grid_rows,3);
	std::cout << "{Program result}\n";
	output(grid_rows);
	grid_rows.clear();
}

void test_parse_line_emotions()
{
	std::string given_line;
	std::vector<std::string> rows;
	int32_t row_size = 0;

	given_line = "Agressio 10 Trevoga 15";
	row_size = 10;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	output(rows);
	given_line.clear();
	rows.clear();

	
	given_line = "Agressio 10 Trevoga 15";
	row_size = 9;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 1 \n";
	output(rows);
	given_line.clear();
	rows.clear();

	given_line = "Agressio 10 Trevoga 15";
	row_size = 8;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 2 \n";
	output(rows);
	given_line.clear();
	rows.clear();


	given_line = "Agressio 10 Trevoga 15";
	row_size = 11;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 3 \n";
	output(rows);
	given_line.clear();
	rows.clear();



	given_line = "Agressio 10 Trevoga 15";
	row_size = 12;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 4 \n";
	output(rows);
	given_line.clear();
	rows.clear();




	getchar();
	given_line = "Agressio 10 Trevoga ";
	row_size = 10;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 5 \n";
	output(rows);
	given_line.clear();
	rows.clear();

	getchar();
	given_line = "  Agressio 10 Trevoga 15";
	row_size = 10;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 6 \n";
	output(rows);
	given_line.clear();
	rows.clear();

	getchar();
	given_line = "Agressio 10 Trevoga 15";
	row_size = 3;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 7 \n";
	output(rows);
	given_line.clear();
	rows.clear();

	getchar();
	given_line = "Agressio Trevoga 15";
	row_size = 10;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 8 \n";
	output(rows);
	given_line.clear();
	rows.clear();


	getchar();
	given_line = "15 Agressio 10 Trevoga 15";
	row_size = 20;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 9 \n";
	output(rows);
	given_line.clear();
	rows.clear();

	getchar();
	given_line = " ";
	row_size = 10;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 10\n";
	output(rows);
	given_line.clear();
	rows.clear();


	getchar();
	given_line = "";
	row_size = 10;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 11\n";
	output(rows);
	given_line.clear();
	rows.clear();


	getchar();
	given_line = "  Agressio 10 Trevoga 15";
	row_size = 10;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 12\n";
	output(rows);
	given_line.clear();
	rows.clear();


	getchar();
	given_line = "";
	row_size = 10;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 13\n";
	output(rows);
	given_line.clear();
	rows.clear();


	getchar();
	given_line = " 123";
	row_size = -1;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 14\n";
	output(rows);
	given_line.clear();
	rows.clear();


	getchar();
	given_line = "  Agressio   Trevoga ";
	row_size = 30;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 15\n";
	output(rows);
	given_line.clear();
	rows.clear();


	getchar();
	given_line = "  15 1/10  13";
	row_size = 30;
	parse_line_emotions(given_line, rows, row_size);
	std::cout << "given line = " << given_line << "\n";
	std::cout << "row_size = " << row_size << "\n";
	std::cout << " 16\n";
	output(rows);
	given_line.clear();
	rows.clear();

}

void test_merge()
{
	std::vector<std::string> v1 = {"1"," 2","3 "," 4 "};
	std::vector<std::string> v2;
	std::string last_word;
	
	merge(v1,v2,last_word);
	std::cout << "last_word = " << last_word << "\n";
	output(v2);
}

void test_is_digit()
{
	std::string word = "123";
	std::cout << word << (is_digit(word) ? " is digit.\n" : " is not digit.\n");

	word.clear();
	word = "";
	std::cout << word << (is_digit(word) ? " is digit.\n" : " is not digit.\n");
	
	word.clear();
	word = "1av";
	std::cout << word << (is_digit(word) ? " is digit.\n" : " is not digit.\n");

	word.clear();
	word = "adsf";
	std::cout << word << (is_digit(word) ? " is digit.\n" : " is not digit.\n");

	word.clear();
	word = "1a3";
	std::cout << word << (is_digit(word) ? " is digit.\n" : " is not digit.\n");

	word.clear();
	word = "aa4";
	std::cout << word << (is_digit(word) ? " is digit.\n" : " is not digit.\n");

}

void test_cut_word()
{
	std::string given_word = "Agressio";
	int32_t SIZE_CUT = 3;
	std::vector<std::string> cut_words;

	cut_word(given_word,SIZE_CUT,cut_words);
	std::cout << "given_word = " << given_word << "\n";
	std::cout << "SIZE_CUT = " << SIZE_CUT << "\n";
	output(cut_words);

	cut_words.clear();

	SIZE_CUT = 10;

	cut_word(given_word,SIZE_CUT,cut_words);
	std::cout << "given_word = " << given_word << "\n";
	std::cout << "SIZE_CUT = " << SIZE_CUT << "\n";
	output(cut_words);

	cut_words.clear();

	SIZE_CUT = 1;

	cut_word(given_word,SIZE_CUT,cut_words);
	std::cout << "given_word = " << given_word << "\n";
	std::cout << "SIZE_CUT = " << SIZE_CUT << "\n";
	output(cut_words);
	cut_words.clear();

	SIZE_CUT = 3;

	cut_word(given_word,SIZE_CUT,cut_words);
	std::cout << "given_word = " << given_word << "\n";
	std::cout << "SIZE_CUT = " << SIZE_CUT << "\n";
	output(cut_words);

	given_word.clear();
	cut_words.clear();

	given_word = "Agressio 10";
	SIZE_CUT = 3;
	cut_word(given_word,SIZE_CUT,cut_words);
	std::cout << "given_word = " << given_word << "\n";
	std::cout << "SIZE_CUT = " << SIZE_CUT << "\n";
	output(cut_words);

	given_word.clear();
	cut_words.clear();

	given_word = "12";
	SIZE_CUT = 3;

	cut_word(given_word,SIZE_CUT,cut_words);
	std::cout << "given_word = " << given_word << "\n";
	std::cout << "SIZE_CUT = " << SIZE_CUT << "\n";
	output(cut_words);

	given_word.clear();
	cut_words.clear();

	given_word = "123";
	SIZE_CUT = 3;

	cut_word(given_word,SIZE_CUT,cut_words);
	std::cout << "given_word = " << given_word << "\n";
	std::cout << "SIZE_CUT = " << SIZE_CUT << "\n";
	output(cut_words);





//   Агрессия, 3
//   Агрессия, 10
//   Агрессия, 1
//   Агрессия 10, 3

}

void test_put_word()
{
	std::string given_line = "  ";
	int32_t given_index = 0;
	std::string founded_word;
	int32_t after_word_index = 0;

	put_word(given_line, given_index, founded_word, after_word_index);
	std::cout << " 1 \n";
	std::cout << "\ngiven_line = " << given_line << "\n";
	std::cout << "given_index = " << given_index << "\n";
	std::cout << "founded_word = |" << founded_word << "|\n";
	std::cout << "after_word_index = " << after_word_index << "\n";

	given_line.clear();
	founded_word.clear();
	
	given_line = "Agressio";
	after_word_index = 0;
	given_index = 0;
	
	put_word(given_line, given_index, founded_word , after_word_index);
	std::cout << " 2 \n";
	std::cout << "\ngiven_line = " << given_line << "\n";
	std::cout << "given_index = " << given_index << "\n";
	std::cout << "founded_word = " << founded_word << "\n";
	std::cout << "after_word_index = " << after_word_index << "\n";

	given_line.clear();
	founded_word.clear();
	
	given_line = "Agressio";
	after_word_index = 0;
	given_index = 9;
	
	put_word(given_line, given_index, founded_word , after_word_index);
	std::cout << " 3 \n";
	std::cout << "\ngiven_line = " << given_line << "\n";
	std::cout << "given_index = " << given_index << "\n";
	std::cout << "founded_word = " << founded_word << "\n";
	std::cout << "after_word_index = " << after_word_index << "\n";

	given_line.clear();
	founded_word.clear();
	
	given_line = "  Agressio";
	after_word_index = 0;
	given_index = 0;
	
	put_word(given_line, given_index, founded_word , after_word_index);
	std::cout << " 4 \n";
	std::cout << "\ngiven_line = " << given_line << "\n";
	std::cout << "given_index = " << given_index << "\n";
	std::cout << "founded_word = " << founded_word << "\n";
	std::cout << "after_word_index = " << after_word_index << "\n";

	given_line.clear();
	founded_word.clear();
	
	given_line = "  Agressio 9";
	after_word_index = 0;
	given_index = 0;
	
	put_word(given_line, given_index, founded_word , after_word_index);
	std::cout << " 5 \n";
	std::cout << "\ngiven_line = " << given_line << "\n";
	std::cout << "given_index = " << given_index << "\n";
	std::cout << "founded_word = " << founded_word << "\n";
	std::cout << "after_word_index = " << after_word_index << "\n";

	given_line.clear();
	founded_word.clear();
	
	given_line = "Agressio 10";
	after_word_index = 0;
	given_index = 0;
	
	put_word(given_line, given_index, founded_word , after_word_index);
	std::cout << " 6 \n";
	std::cout << "\ngiven_line = " << given_line << "\n";
	std::cout << "given_index = " << given_index << "\n";
	std::cout << "founded_word = " << founded_word << "\n";
	std::cout << "after_word_index = " << after_word_index << "\n";

	given_line.clear();
	founded_word.clear();
	
	given_line = "Agressio  ";
	after_word_index = 0;
	given_index = 0;
	
	put_word(given_line, given_index, founded_word , after_word_index);
	std::cout << " 7 \n";
	std::cout << "\ngiven_line = " << given_line << "\n";
	std::cout << "given_index = " << given_index << "\n";
	std::cout << "founded_word = " << founded_word << "\n";
	std::cout << "after_word_index = " << after_word_index << "\n";

	given_line.clear();
	founded_word.clear();
	
	given_line = "Agressio 10";
	after_word_index = 0;
	given_index = 8;
	
	put_word(given_line, given_index, founded_word , after_word_index);
	std::cout << " 8 \n";
	std::cout << "\ngiven_line = " << given_line << "\n";
	std::cout << "given_index = " << given_index << "\n";
	std::cout << "founded_word = " << founded_word << "\n";
	std::cout << "after_word_index = " << after_word_index << "\n";



}


