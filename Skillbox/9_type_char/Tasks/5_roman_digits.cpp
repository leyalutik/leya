/*
 5. Из обычных чисел — в римские

Напишите программу, которая переводит данное пользователем число в римскую запись. Например, 19 в римской записи представляется как XIX.

Римская запись числа получается по следующим правилам. Сначала в ней идут буквы, описывающие количество тысяч в числе. Затем идут буквы, обозначающие количество сотен, затем буквы, обозначающие количество десятков, и в конце — буквы, обозначающие количество единиц. Для записи используются следующие буквы: 1 — I, 5 — V, 10 — X, 50 — L, 100 — C, 500 — D и 1000 — M. Число получается как сумма значений использованных в нем букв, за тем исключением, что если буква с меньшим значением идет перед буквой с большим значением, то ее значение вычитается из значения числа. Вычитание используется только в случае, когда надо передать цифру 4 или 9, в остальных случаях используется сложение. (Например, 9 обозначается как IX, 40 обозначается как XL). В числе запрещено писать более трех одинаковых букв подряд (таким образом, максимальное число, которое можно записать по этим правилам, равно 3999).

Программе на вход дается целое число из диапазона от 1 до 3999. (Вы можете считывать его как число или как строку, если так удобнее.)

Программа должна вывести римскую запись данного числа.


Примеры:

Ввод: 351

Вывод: CCCLI


Ввод: 449

Вывод: CDXLIX


Ввод: 1313

Вывод: MCCCXIII


Ввод: 2020

Вывод: MMXX

0 - ничего
1 - I
4 - IV
8 - VIII
9 - IX
10 - X
11 - XI
14 - XIV
*/

/*
1 step
 check input
2 step
size of user_number = digit_capacity
3 step
iteration on digit layers
to use the 3 signs of roman_table
if value of layer ~1-9 result += ""
4 step 
reverse user_number

*/

#include<iostream>
#include<string>


const std::string roman_table = "IVXLCDMMM";


bool check_input_arabic_number_string(std::string input);
bool check_digit(char ch);
int main()
{
	std::cout << "Enter the number : ";
	std::string arabic_number;
	while(std::cin >> arabic_number && !check_input_arabic_number_string(arabic_number))
	{
		std::cout << "Enter correct number: ";
	}
	
	int depth_digits = arabic_number.size();
	std::string result;

	for(int i=0; i<depth_digits; i++)
	{
		std::string roman_signs_for_depth[3];
		for(int j=0; j<3; j++)
		{
			roman_signs_for_depth[j] = roman_table[2*i + j];
		}

		int value = static_cast<int>(arabic_number[depth_digits-1-i]-'0');
		if(value == 4 || value == 9)
		{
			result += roman_signs_for_depth[value/4]
				+ roman_signs_for_depth[0];//after we'll converse the string
		}
		else 
		{
			for(int k=0; k<value%5; k++)
			{
				result += roman_signs_for_depth[0];
			}
			result += (value/5 ? roman_signs_for_depth[1] : "");

		}
	
	}

	int N = static_cast<int>(result.size());
	for(int i=0; i<(N/2); i++) //conversion
	{
		char temp = result[i];
		result[i] = result[N-1-i];
		result[N-1-i] = temp;
	}

	std::cout << result << std::endl;

	return 0;

}

bool check_digit(char ch)
{
	return ((ch>='0' && ch<='9') ? 1 : 0);
}
bool check_input_arabic_number_string(std::string input)
{
	if(input.size() > 4)
	{
		return 0;
	}
	for(unsigned i=0; i<input.size(); i++)
	{
		if(!check_digit(input[i]))
		{
			return 0;
		}
	}
	if(input.size() == 4 && input[0] > '3')
	{
		return 0;
	}

	return 1;
}
