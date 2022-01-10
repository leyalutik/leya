/*
 
2. Быки и коровы

В логической игре “быки и коровы” первый игрок загадывает четырехзначное число (оно может начинаться и с нулей), а второй игрок должен его отгадать. Отгадывание происходит так: своим ходом второй игрок называет любое четырехзначное число, а первый ему отвечает, сколько в этом числе “быков” и сколько “коров”. Корова — это цифра, которая совпадает по значению с какой-то из цифр задуманного числа, но стоит не на нужном месте. Бык — это цифра, совпадающая с цифрой в задуманном числе и по значению, и по расположению.

Вам нужно написать программу, которая по загаданному числу и по названному вторым игроком числу определяет, сколько во втором числе “быков” и сколько “коров”. Не забудьте, что числа могут начинаться с нулей!

Примечание. Сумма быков и коров не может быть больше 4.

0123 0213 -> b:2 c:2
0023 2300 -> b:0 c:4
5671 7251 -> b:1 c:2
1234 1234 -> b:4 c:0
0023 2013 -> b:2 c:1
1111 1111 -> b:4 c:0
2300 2013 -> b:1 c:2


*/




#include<cmath>
#include<iostream>
#include<limits>

const int length_number = 4;
bool check_char(char ch);               // check the input of 1 digit
bool check_set_digits(std::string digits); // check the input of  digits
int main(){
	
	std::cout << "Guess and enter four digits without spaces : ";
	std::string first_number;
	while(std::cin >> first_number && (first_number.size()!=length_number || !check_set_digits(first_number)))
	{
		std::cout << "Enter correct four digits : ";
	}

	int cows = 0;
	int bulls = 0;
	int capture_index_for_first_number[] = {0,0,0,0};
	int capture_index_for_second_number[] = {0,0,0,0};

	std::cout << "Enter four-digit number : "; //check input
	std::string second_number;

	while(std::cin >> second_number && 
			(second_number.size() != length_number || !(check_set_digits(second_number))))		{
		std::cout << "Enter correct four digits without spaces : ";
	}

	for(int i=0; i<length_number; i++) // count bulls
	{
		if(first_number[i] == second_number[i])
		{
			++bulls;
			capture_index_for_second_number[i] = 1;
			capture_index_for_first_number[i] = 1;
			//we won't use this index of  second and first numbers in cows
		}
	}
	for(int i=0; i<length_number; i++)//first number iteration 
	{
		for(int j=0; j<length_number; j++)//second number iteration
		{
			if(
				(!capture_index_for_first_number[i])  
				&& (!capture_index_for_second_number[j])
				&& (i != j)
				&& (first_number[i] == second_number[j])
				)
			{
				++cows;
				capture_index_for_first_number[i] = 1;
				capture_index_for_second_number[j] = 1;
			}
		}
	}

	std::cout << " Bulls : " << bulls << std::endl 
		<< " Cows  : " << cows << std::endl << std::endl;
		
	if(bulls == length_number)
	{
		std::cout << "You've guessed a number. Good job!\n";
	}
	

	return 0;
}

bool check_set_digits(std::string digits)
{
	int N = static_cast<int>(digits.size());
	for(int i=0; i<N; i++)
	{
		if(!check_char(digits[i])){
			return 0;
		}
	}
	return 1;
}

bool check_char(char ch) // check if input the digit
{
	if(ch > '9' || ch < '0' )
	{
		return 0;
	}

	return 1;
}

