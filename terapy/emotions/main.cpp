#include<vector>
#include<iostream>
#include<string>
#include<conio.h>
#include<iomanip>
#include<utility>
#include<ctime>
#include<cmath>
#include<fstream>
#include "emotions.h"
#include "parse_line.h"
#include "tests.h"
#include <windows.h>

//ѕостроим таблицу с внессенными словами меньше 40 знаков
//ѕостроим таблицу с автоматическим переносом слов
//ѕостроим таблицу с учетом слово цифра
//Ќаучимс€ открывать файл emotions_monitoring.cpp после слова Ќова€ запись и закрывать файл, когда она закончитс€.

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

//void output_table_row_to_file(...);
//
//
//void parse_line(const std::string& given_line, std::vector< std::string>& grid_rows,con st in GRID_ROW_SIZE)


//ƒан набор строк дл€ каждой €чейки в строке,
//нужно разбить подстроки в соответствии с шириной €чейки(GRID ROW SIZE)
//и вычисл€ем максимальный число подстрок одного элемента grids
//vector grids должен иметь нулевой размер
void insert_table_date(const std::vector<std::string>& rows,
		std::vector<std::vector<std::string>>& grids,
		const int32_t GRID_ROW_SIZE,
		const int32_t COLUMNS_NUMBER,
		int32_t& max_number_rows);

// ƒан вектор, каждый его элемент набор подстрок (разбитых по ширине пол€),
// дано максимальное количество подстрок из всех элементов (сколько строк нужно зарезервировать)
// дано количество столбцов (должен равн€тьс€ размеру первого вектора)
void output_table_row(const std::vector<std::vector<std::string>>& grids_col_row,
					const int32_t GRID_ROW_SIZE,
					const int32_t NUMBER_COLUMNS,
					const int32_t max_number_rows);
				// 1 grid - time, 2 grid - emotions, 3 - ...)


void output_table_line(const int32_t GRID_ROW_SIZE);


void insert_table_date(const std::vector<std::string>& rows,
		std::vector<std::vector<std::string>>& grids,
		const int32_t GRID_ROW_SIZE,
		const int32_t COLUMNS_NUMBER,
		int32_t& max_number_rows)
{
	//check COLUMNS_NUMBER == rows.size()
	if(static_cast<size_t>(COLUMNS_NUMBER) != rows.size() || rows.size() != 4)
	{
		std::cout << " rows size or number of columns are wrong\n";
		return ;
	}
	std::vector<std::string> temp;
	parse_line(rows[0],temp,GRID_ROW_SIZE);
	grids.push_back(temp);
	temp.clear();

	parse_line_emotions(rows[1],temp,GRID_ROW_SIZE);
	grids.push_back(temp);
	temp.clear();

	parse_line(rows[2],temp,GRID_ROW_SIZE);
	grids.push_back(temp);
	temp.clear();

	parse_line(rows[3],temp,GRID_ROW_SIZE);
	grids.push_back(temp);
	temp.clear();

	max_number_rows = std::max(std::max(grids[0].size(),grids[1].size()),
			std::max(grids[2].size(),grids[3].size()));
}

void output_table_row(const std::vector<std::vector<std::string>>& grids_col_row,
		const int32_t GRID_ROW_SIZE,
		const int32_t NUMBER_COLUMNS,
		const int32_t max_number_rows)
{
	std::string FILE_NAME = "emotions_otchet.txt";
	std::ofstream out(FILE_NAME, std::ios::app);
	if(!out)
	{
		std::cout << "File can't be opened\n"; 
	}
	

	for(size_t i=0; i<static_cast<size_t>(max_number_rows); ++i)
	{
		if(i < grids_col_row[0].size())
		{
			std::cout << std::left << std::setfill(' ')  
				<< "|" << std::setw(10) << grids_col_row[0][i];
		
			out << std::left << std::setfill(' ')  
				<< "|" << std::setw(10) << grids_col_row[0][i];
		}
		else
		{
			std::cout << std::left << std::setfill(' ')  
				<< "|" << std::setw(10) << " ";
			out << std::left << std::setfill(' ')  
				<< "|" << std::setw(10) << " ";
		}
		if(i < grids_col_row[1].size())
		{
			std::cout << std::left << std::setfill(' ')  
				<< "|" << std::setw(GRID_ROW_SIZE) << grids_col_row[1][i];
			out << std::left << std::setfill(' ')  
				<< "|" << std::setw(GRID_ROW_SIZE) << grids_col_row[1][i];
		}
		else
		{
			std::cout << std::left << std::setfill(' ')  
				<< "|" << std::setw(GRID_ROW_SIZE) << " ";
			out << std::left << std::setfill(' ')  
				<< "|" << std::setw(GRID_ROW_SIZE) << " ";
		}
		if(i < grids_col_row[2].size())
		{
			std::cout << std::left << std::setfill(' ')  
				<< "|" << std::setw(GRID_ROW_SIZE) << grids_col_row[2][i];
			out << std::left << std::setfill(' ')  
				<< "|" << std::setw(GRID_ROW_SIZE) << grids_col_row[2][i];
		}
		else
		{
			std::cout << std::left << std::setfill(' ')  
				<< "|" << std::setw(GRID_ROW_SIZE) << " ";
			out << std::left << std::setfill(' ')  
				<< "|" << std::setw(GRID_ROW_SIZE) << " ";
		}
		if(i < grids_col_row[3].size())
		{
			std::cout << std::left << std::setfill(' ')  
				<< "|" << std::setw(GRID_ROW_SIZE) << grids_col_row[3][i];
			out << std::left << std::setfill(' ')  
				<< "|" << std::setw(GRID_ROW_SIZE) << grids_col_row[3][i];
		}
		else
		{
			std::cout << std::left << std::setfill(' ')  
				<< "|" << std::setw(GRID_ROW_SIZE) << " ";
			out << std::left << std::setfill(' ')  
				<< "|" << std::setw(GRID_ROW_SIZE) << " ";
		}
		std::cout << "|\n";
		out << "|\n";
	}
	out.close();

}
	
void output_table_line(const int32_t GRID_ROW_SIZE)
{
	std::string FILE_NAME = "emotions_otchet.txt";
	std::ofstream out(FILE_NAME, std::ios::app);
	if(!out)
	{
		std::cout << "File can't be opened\n"; 
	}
	

	std::cout << std::left 
			<< std::setfill('-')
			<< "|" << std::setw(10) << '-'
			<< std::setw(GRID_ROW_SIZE+1) << '-'								<< std::setw(GRID_ROW_SIZE+1) << '-'
			<< std::setw(GRID_ROW_SIZE+1) << '-'
			<< "|";
		std::cout << "\n";
		
		out << std::left 
			<< std::setfill('-')
			<< "|" << std::setw(10) << '-'
			<< std::setw(GRID_ROW_SIZE+1) << '-'								<< std::setw(GRID_ROW_SIZE+1) << '-'
			<< std::setw(GRID_ROW_SIZE+1) << '-'
			<< "|\n";
	
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int32_t GRID_ROW_SIZE = 20;
	int32_t COLUMNS_NUMBER = 4;

//test

		
//test
	// convert now to tm struct for UTC
	//int32_t GRID_ROW_SIZE = 20;
	//int32_t COLUMNS_NUMBER = 4;
	char new_day = 0;
	char new_entry = 0;
	std::cout << "\nStarting the program.\n\n";
	std::cout << "Are you starting a new day? Y(1)/n(2) \n";
	new_day = getch();
	if(new_day == 'y' || new_day == 'Y' 
			|| new_day == '\n' || new_day == 13
			|| new_day == '1') //carriege return
	{
	
		int32_t max_number_rows = 0;
		std::string currentdate = current_date();
		std::vector<std::string> day_row = {currentdate," "," "," "};
		std::vector<std::vector<std::string>> grids_day;
		insert_table_date(day_row,
				grids_day,
				GRID_ROW_SIZE,COLUMNS_NUMBER,
				max_number_rows);
		//output(...);
		output_table_row(grids_day,GRID_ROW_SIZE,COLUMNS_NUMBER,
				max_number_rows);

			output_table_line(GRID_ROW_SIZE);
	}

	while(new_entry != 'n' && new_entry != 'N' && new_entry != '2')
	{
		std::cout << "New entry? Y(1)/n(2) \n";
		new_entry = getch();
		if(new_entry == 'y' || new_entry == 'Y' || new_entry == '1'
				|| new_entry == '\n' || new_entry == 13)
		{
			std::vector<std::string> rows;
			std::string currenttime = current_time();
			rows.push_back(currenttime);
			std::string emotions, thoughts, actions;	
			input_data("Emotions?", emotions);
			rows.push_back(emotions);
			input_data("Thoughts?", thoughts);
			rows.push_back(thoughts);
			input_data("Actions?", actions);
			rows.push_back(actions);

			std::vector<std::vector<std::string>> grids;
			int32_t max_number_rows = 0;
			insert_table_date(rows,
					grids,
					GRID_ROW_SIZE,COLUMNS_NUMBER,
					max_number_rows);

			//Open emotions.txt
			output_table_row(grids,
					GRID_ROW_SIZE,COLUMNS_NUMBER,
					max_number_rows);
			output_table_line(GRID_ROW_SIZE);
			//Close emotions.txt
		}

	}

	std::cout << "\nThe end of the program.\n";

	getch();
	
	return 0;
}
