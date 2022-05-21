/*
 
3. Длинное вещественное число

Вы решили разработать программу-калькулятор, которая складывает числа сколь угодно большой длины. Для этого вы планируете работать с ними как со строками. Первая проблема, с которой вы столкнулись, — по данной строке нужно понять, является она корректной записью вещественного числа или нет.

Корректной записью считается запись, удовлетворяющая следующим условиям. Первым символом в ней должна быть либо цифра, либо знак минус. После этого может идти еще несколько цифр (возможно, ни одной). Затем может идти точка, отделяющая целую часть от дробной. До точки может и не быть цифр. В таком случае считается, что до точки стоит 0. После точки еще несколько цифр (возможно, ни одной). Хотя бы одна цифра в записи числа должна присутствовать. (Для простоты в этой задаче мы не будем рассматривать числа в экспоненциальной записи, такие как 1.2e-3.)

Напишите программу, которая получает от пользователя строку и выводит в ответ Yes, если эта строка корректно задает вещественное число, в противном случае выводит No.


Примеры корректных записей:

0123
00.000
.15
165.
999999999999999999999999999999999.999999999999999999999
-1.0
-.35


Примеры некорректных записей:

1.2.3 (десятичная точка может быть только одна)
-. (должна быть хотя бы одна цифра в записи)
11e-3 (мы не разрешаем использовать символ e в записи)
+25 (мы не разрешаем использовать символ + в записи)

*/

/*
проверка последовательно символов 
 Последовательность правил, если на каком-то шаге некорректность выходим из цикла 
1 step
	check first symbol
2 step
	check every symbol (must be space, digit(at least once) or point(one time))
3 step check that digit is happened
4 step check that point happened only one time
 */
#include<cmath>
#include<iostream>
#include<limits>

bool check_digit(char ch);
bool check_first_symbol(char ch);
bool check_space(char ch);
bool check_dot(char ch);

int main(){

	std::string real_number;	
	getline(std::cin, real_number, '\n');
	
	bool correct = 1;
	bool one_dot_is_happened = 0;
	bool digit_is_happened = 0;
	for(unsigned int i=0; i < real_number.size(); ++i)
	{
		if(i == 0)
		{
			if(!check_first_symbol(real_number[0]))
			{
				correct = 0;
				break;
			}
			if(check_dot(real_number[0]))
			{
				one_dot_is_happened = true;
			}
		}
		else if(check_digit(real_number[i]))
		{
			if(!digit_is_happened) 
			{
				digit_is_happened=true;
			}
		}
		else if(check_dot(real_number[i]) && !one_dot_is_happened) //check for one dor
		{
			one_dot_is_happened=true;
		}
		else if(check_space(real_number[i]))
		{
		}
		else
		{
			correct = 0;
			break;
		}
		
	}
	if(!digit_is_happened)
	{
		correct = 0;
	}
	std::cout << (correct ? "Yes" : "No") << std::endl;
	return 0;
}
bool check_digit(char ch)
{
	return ((ch<='9' && ch>='0') ? 1 : 0);
}
bool check_first_symbol(char ch)
{
	return((ch=='-' || check_digit(ch) || check_dot(ch)) ? 1 : 0);
}
bool check_space(char ch)
{
	return (ch==' ' ? 1 : 0);
}
bool check_dot(char ch)
{
	return (ch == '.' ? 1 : 0);
}


