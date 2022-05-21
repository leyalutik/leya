/*
1) Многие из вас слышали о функции М, которая принимает строку и заменяет каждую букву в ней на следующую в алфавите. Напишите программу, выполняющую такую функцию, сделав так, чтобы заглавные буквы в строке становились строчными. Строка читается из консоли и результат выводится в консоль. Обратите внимание, что символы 'я' и 'z' будут меняться на 'a' и 'a' соответственно. Символы, которые не относятся к алфавиту, стоит оставить в исходном виде.


Пример:

М("Abc") -> "bcd"

M("xYZ—") -> "yza—"


 *
 * 
 */


#include<cmath>
#include<iostream>
#include<limits>

const char left_border_capitals = 65;
const char right_border_capitals = 90;
const char difference_lowercase_capitals = 32;

int main(){
	
	//std::cin.ignore(INT_MAX,'\n');
	std::string str;
	getline(std::cin, str, '\n');
	for(char& ch:str)
	{
		if(ch>=left_border_capitals && ch<=right_border_capitals)
		{
			ch += difference_lowercase_capitals;
		}
	}
	std::cout << str << '\n';


	return 0;
}
