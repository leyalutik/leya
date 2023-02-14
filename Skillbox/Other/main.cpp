/*
 *
 * Что нужно сделать

Петя и Вася играли в крестики-нолики и не стёрли результаты своей игры. Теперь перед вами табличка 3 ? 3, которая осталась после их поединка. Вы хотите понять, выиграл ли кто-то из них или они не доиграли.

На вход программе даётся три строки, кодирующие верхнюю, среднюю и нижнюю строчки игрового поля. Крестик обозначается символом X (английская заглавная буква X), нолик — символом O (заглавная английская буква O), пустая клетка — точкой.

Если ввод некорректен, то есть такая таблица не могла получиться в ходе настоящей игры, то надо написать в ответ слово Incorrect.

Если таблица корректна и выиграли крестики, то нужно вывести в ответ слова Petya won, если нолики — Vanya won, иначе (то есть они не доиграли или сыграли вничью) надо написать Nobody.


Рекомендации
    Активно используйте оператор индексации строки str[i], но помните что индексы начинаются с нуля, а не с единицы.
    Для того, чтобы обращаться к элементам игрового поля, стоит написать отдельную функцию получения элемента поля по его координатам (x, y). В таком случае, часть алгоритмов поиска победителя можно обобщить.
    Функции проверки поля на корректность можно отделить от функций и алгоритмов проверки победителя.
    При достаточной модульности функций, некоторые операции можно реализовать через уже существующие процедуры. К примеру, если уже есть проверка победителя в строке и имеется функция получения колонки по индексу, то функцию поиска победителя в колонке можно реализовать через обе них.
    Проход по диагонали поля можно осуществить в цикле, используя счётчик цикла в качестве обоих координат элемента. Для второй диагонали нужно обратить одну из координат (2 - x или 2 - y).
    Общие условия некорректности поля таковы: 
        Выявлено несколько победителей одновременно
        Нолики победили, а крестиков больше чем ноликов
        Крестики победили, а ноликов столько же или больше
        Нолики и крестики победили несколько раз
        На поле есть невалидные символы
    Для упрощения лучше создать отдельные функции для проверки победителя в строке или столбце, которые на вход принимают строку, а на выходе выдают символ победителя. То есть ‘X’, ‘O’ или ‘.’


Что оценивается

Корректность работы программы по анализу игры на различных вводных данных.
 */
/*
 
  * Game Tic-tac-toe
  * void new_step (std::string& grid, char symb_step, size_t index_space_cell) // Меняем таблицу, input on random space cell
  * bool check_victory(const std::string& grid, char symb);
  * void output_grid(const std::string& grid);
  */

 /*
  *Algorithm

  0<=i<3
  Ввод строки i
  проверка
  Если проперка не пройдена возращаемся в начало
  Если проверка пройдена добавляем строку i в grid 

  Заполняем X_indexes, O_indexes XO_indexes(const std::string grid) 

  Вывод таблицы

  Вывод анализа игры
	

  *

Examples

......... 		Nobody	
XOOOXXXXO	Nobody
XO.OX...X	Petya_won.
XO.OX.O.X	Incorrect
.OX.X.XO.	Petya_won.
.X.OX.OX.	Petya_won.
O.X.OX..X	Petya_won.
XO.XO.X..	Petya_won.
OO.XXX...	Petya_won.
XXXOO....	Petya_won.
....OOXXX	Petya_won.
OOX.X.XO.	Incorrect
.X.OXOOX.	Incorrect
O.XOOX..X	Incorrect
XO.XO.X.O	Incorrect
OOOXXX...	Incorrect
XXXOOO...	Incorrect
..OOOXXX	Incorrect
O.XOX.O.X	Vanya_won.
XO.XO..OX	Vanya_won.
X.OXXO..O	Vanya_won.
OX.XO..XO	Vanya_won.
X.O.OXOX.	Vanya_won.
OOO.X.XX.	Vanya_won.
X..OOOX.X	Vanya_won.
XX..X.OOO	Vanya_won.
O.XOXO.X	Incorrect
XOXXO..OX	Incorrect
X.OXXOX.O	Incorrect
OX.XOX.XO	Incorrect
X.OXOXOX.	Incorrect
OOOXX.XX.	Incorrect
X..OOOXXX	Incorrect
XX.XX.OOO	Incorrect
XOXOXOXOXO	Incorrect
.OX...XO.		Nobody
.X.O..OX.		Nobody
O.X.O...X		Nobody
XO.XO....		Nobody
OO.XX....		Nobody
XX.OO....		Nobody
....OOXX.		Nobody
O.XOX...X	Nobody
XO.XO...X	Nobody
X.OXX...O	Nobody
OX.XO..X.	Nobody
X.O.OX.X.	Nobody
OO..X.XX.	Nobody
X...OOX.X	Nobody
XX..X..OO	Nobody
.........		Nobody
xOoXXXOOO	Incorrect
X.OOXXOOX	Incorrect
X........		Nobody
XO.......		Nobody
...XOX...		Nobody
...XOXO..		Nobody
O........		Incorrect
X.......X		Incorrect
OX......O		Incorrect
XX.OX....		Incorrect
O..XOXO.O	Incorrect
XOXOXOXOO	Incorrect


Сделать вариации из выше примеров Incorrect
Несколько символов
*/

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "test_framework.h"
#include "functions.h"
 //-----------game----------
 
std::string analyze_game(const std::string& grid);

bool check_string(const std::string str, const size_t correct_size,
			const std::string& correct_char_set);

void get_index_char_set(std::string str, const char special_char, std::vector<int>& index_char_set);


std::string analyze_game(const std::string& grid)
{
	if(!check_string(grid,9,".XO"))
	{
		return "Incorrect";
	}
	std::vector<int> X_indexes, O_indexes;
	
	get_index_char_set(grid,'X', X_indexes);
	get_index_char_set(grid,'O', O_indexes);

	//Simulate game
	//for 1 step (play X and O at once)
	std::string new_grid(9,'.');
	int16_t step = 0;
	while(step++ < 9)
	{
		//Turn X:
		if (X_indexes.size() == 0)
		{
			if(O_indexes.size() == 0)
			{
				return "Nobody";
			}
			else
			{
				return "Incorrect";
			}
		}
		//Add X to the grid
		new_step(new_grid,'X', X_indexes[X_indexes.size()-1]);
		X_indexes.pop_back();	
		//check victory
		bool is_victory = check_victory(new_grid,'X');
		if(is_victory)
		{					
			if(O_indexes.size() == 0)
			{
				return "Petya_won."; //(X)
			}
			else
			{
				return "Incorrect";
			}
		}		

		//	Turn O:  
		if(O_indexes.size() == 0)
		{
			if(X_indexes.size()  == 0)
			{
				return "Nobody";
			}
			else
			{
				return "Incorrect";
			}
		}
		//add to grid
		new_step(new_grid,'O', O_indexes[O_indexes.size()-1]);
		//check victory
		O_indexes.pop_back();	
		is_victory = check_victory(new_grid,'O');
		if(is_victory)
		{					
			if(X_indexes.size() == 0)
			{
				return "Vanya_won.";// (O)
			}
			else
			{
				return "Incorrect";
			}
		}
		//Delete last element of O_indexes
	}
	return "Something was going wrong.";
}

bool check_string(const std::string str, const size_t correct_size,
		const std::string& correct_char_set)
{
	if(str.size() != correct_size)
	{
		return false;
	}
	for(const char& ch : str)
	{
		bool match = false;
		for(const char& correct_char : correct_char_set)
		{
			if(ch == correct_char)
			{
				match = true;
			}
		}
		if(!match)
		{
			return false;
		}
	}
	return true;
}

void get_index_char_set(std::string str, const char special_char, std::vector<int>& index_char_set)
{
	for(size_t i = 0; i< str.size(); ++i)
	{
		if(str[i] == special_char)
		{
			index_char_set.push_back(i);
		}
	}
}
void test_analyze_game()
{
 AssertEqual(analyze_game("........."),"Nobody","1");
 AssertEqual(analyze_game("XOOOXXXXO"),"Nobody","2");
 AssertEqual(analyze_game("XO.OX...X"),"Petya_won.","3");
 AssertEqual(analyze_game("XO.OX.O.X"),"Incorrect","4");
 AssertEqual(analyze_game(".OX.X.XO."),"Petya_won.","5");
 AssertEqual(analyze_game(".X.OX.OX."),"Petya_won.","6");
AssertEqual(analyze_game("O.X.OX..X"),"Petya_won.","7");
 AssertEqual(analyze_game("XO.XO.X.."),"Petya_won.","8");
 AssertEqual(analyze_game("OO.XXX..."),"Petya_won.","9");
 AssertEqual(analyze_game("XXXOO...."),"Petya_won.","10");
 AssertEqual(analyze_game("....OOXXX"),"Petya_won.","11");
 AssertEqual(analyze_game("OOX.X.XO."),"Incorrect","12");
 AssertEqual(analyze_game(".X.OXOOX."),"Incorrect","13");
 AssertEqual(analyze_game("O.XOOX..X"),"Incorrect","14");
 AssertEqual(analyze_game("XO.XO.X.O"),"Incorrect","15");
 AssertEqual(analyze_game("OOOXXX..."),"Incorrect","16");
 AssertEqual(analyze_game("XXXOOO..."),"Incorrect","17");
 AssertEqual(analyze_game("..OOOXXX"),"Incorrect","18");
 AssertEqual(analyze_game("O.XOX.O.X"),"Vanya_won.","19");
 AssertEqual(analyze_game("XO.XO..OX"),"Vanya_won.","20");
 AssertEqual(analyze_game("X.OXXO..O"),"Vanya_won.","21");
 AssertEqual(analyze_game("OX.XO..XO"),"Vanya_won.","22");
 AssertEqual(analyze_game("X.O.OXOX."),"Vanya_won.","23");
 AssertEqual(analyze_game("OOO.X.XX."),"Vanya_won.","24");
 AssertEqual(analyze_game("X..OOOX.X"),"Vanya_won.","25");
 AssertEqual(analyze_game("XX..X.OOO"),"Vanya_won.","26");
 AssertEqual(analyze_game("O.XOXO.X"),"Incorrect","27");
 AssertEqual(analyze_game("XOXXO..OX"),"Incorrect","28");
 AssertEqual(analyze_game("X.OXXOX.O"),"Incorrect","29");
 AssertEqual(analyze_game("OX.XOX.XO"),"Incorrect","30");
 AssertEqual(analyze_game("X.OXOXOX."),"Incorrect","31");
 AssertEqual(analyze_game("OOOXX.XX."),"Incorrect","32");
 AssertEqual(analyze_game("X..OOOXXX"),"Incorrect","33");
 AssertEqual(analyze_game("XX.XX.OOO"),"Incorrect","34");
 AssertEqual(analyze_game("XOXOXOXOXO"),"Incorrect","35");
 AssertEqual(analyze_game(".OX...XO."),"Nobody","36");
 AssertEqual(analyze_game(".X.O..OX."),"Nobody","37");
 AssertEqual(analyze_game("O.X.O...X"),"Nobody","38");
 AssertEqual(analyze_game("XO.XO...."),"Nobody","39");
 AssertEqual(analyze_game("OO.XX...."),"Nobody","40");
 AssertEqual(analyze_game("XX.OO...."),"Nobody","41");
 AssertEqual(analyze_game("....OOXX."),"Nobody","42");
 AssertEqual(analyze_game("O.XOX...X"),"Nobody","43");
 AssertEqual(analyze_game("XO.XO...X"),"Nobody","44");
 AssertEqual(analyze_game("X.OXX...O"),"Nobody","45");
 AssertEqual(analyze_game("OX.XO..X."),"Nobody","46");
 AssertEqual(analyze_game("X.O.OX.X."),"Nobody","47");
 AssertEqual(analyze_game("OO..X.XX."),"Nobody","48");
 AssertEqual(analyze_game("X...OOX.X"),"Nobody","49");
 AssertEqual(analyze_game("XX..X..OO"),"Nobody","50");
 AssertEqual(analyze_game("........."),"Nobody","51");
 AssertEqual(analyze_game("XOoXXXOOO"),"Incorrect","52");
 AssertEqual(analyze_game("X.OOXXOOX"),"Incorrect","53");
 AssertEqual(analyze_game("X........"),"Nobody","54");
 AssertEqual(analyze_game("XO......."),"Nobody","55");
 AssertEqual(analyze_game("...XOX..."),"Nobody","56");
 AssertEqual(analyze_game("...XOXO.."),"Nobody","57");
 AssertEqual(analyze_game("O........"),"Incorrect","58");
 AssertEqual(analyze_game("X.......X"),"Incorrect","59");
 AssertEqual(analyze_game("OX......O"),"Incorrect","60");
 AssertEqual(analyze_game("XX.OX...."),"Incorrect","61");
 AssertEqual(analyze_game("O..XOXO.O"),"Incorrect","62");
 AssertEqual(analyze_game("XOXOXOXOO"),"Incorrect","63");
 AssertEqual(analyze_game("X..OXOOOO"),"Incorrect","1");
 AssertEqual(analyze_game("X...X.OO."),"Nobody","2");
 AssertEqual(analyze_game("XXOOOXXOX"),"Nobody","3");
 AssertEqual(analyze_game("XO.XO.X.O"),"Incorrect","4");
 AssertEqual(analyze_game("OX.XOXX.O"),"Incorrect","5");
 AssertEqual(analyze_game("..XOX.X.O"),"Petya_won.","6");
 AssertEqual(analyze_game("O........"),"Incorrect","7"); 
}
int main()
{
	TestRunner tr;
	tr.RunTest(test_analyze_game,"test_analyze_game");
	std::string grid(9);
	output(grid);
	//std::cout << analyze_game("O..XOXO.O") << '\n';
	
	return 0;
}
