#include "parse_line.h"

//-------------------------definitions--modify string in grid----------------------------------
void parse_line(const std::string given_line, 
		std::vector<std::string>& grid_rows,
		const int32_t GRID_ROW_SIZE)
{

	//Если в строка без пробелов превысила лимит размера ячейки обрубаем слово,
	//остаток переносим на новую строчку
	//Есть пробел, ищем максимальный.
	//и после него переносим
	//
	//start_line - index of counting start

	int32_t start_line = 0;
	int32_t total_line_size = static_cast<int32_t>(given_line.size()); 

	if(given_line.size() == 1 && given_line[0] == ' ')
	{
		grid_rows.push_back(" ");
		return;
	}

	while(start_line < total_line_size)
	{
		int32_t index_space = -1;
		int32_t line_end = ( (start_line + GRID_ROW_SIZE) < total_line_size 
				? (start_line + GRID_ROW_SIZE) : total_line_size);
		for(int i = start_line; i <= line_end; ++i)
		{
			if(given_line[i] == ' ')
			{
				index_space  = i;
				//std::cout << "start_line = " << start_line << "\n";
				//std::cout << "index = " << index_space << "\n";
			}
		}
		if(index_space == start_line)
		{
			++start_line;
		}
		else if(index_space == -1)  //no whitespaces in range [start_line,start_end)
		{
			grid_rows.push_back(std::string(given_line, start_line
						,line_end-start_line));
			start_line = line_end;
		}
		else if(line_end == total_line_size)
		{
			grid_rows.push_back(std::string(given_line, start_line
						,line_end-start_line));
			start_line = total_line_size;

		}
		else 
		{
			grid_rows.push_back(std::string(given_line, start_line
						,index_space-start_line));
			start_line = index_space + 1;
		}
	}

}

//-------------------definitions---main------------------------------

void input_data(const std::string prompt_text, std::string& words)
{
	std::cout << "\n" << prompt_text << "\n";
	getline(std::cin, words, '\n');
}
std::string current_time()
{
	// current date/time based on current system
	std::time_t now = time(0);

	// convert now to string form
	char* dt = ctime(&now);
	return (std::string(dt+11,dt+19));
}
std::string current_date()
{
	std::time_t now = time(0);
	// convert now to string form
	char* dt = ctime(&now);
	return(std::string(dt+4,dt+10));
}
//int GRID_NUMBER (0)
//int TOTAL_GRID_HORIZONTAL_SIZE(20)
//
//current_grid_horizontal_size (0)
//current_grid_vertical_size (0)
//
//std::string word = words.front();
//if current_grid_size+word.size() <= TOTAL_GRID_HORIZONTAL_SIZE
//	std::cout << " " << word
//else
//++ current_grid_vertical_size;
//std::cout << "\n";
//std::cout << std::setfill(" ") << std::setw(GRID_NUMBER*TOTAL_GRID_HORIZONTAL_SIZE) << " ";
//


