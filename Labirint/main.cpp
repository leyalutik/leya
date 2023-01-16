#include <vector>
#include <map>
#include <set>
#include<exception>
#include <cassert>
#include<cstdlib>
#include<iostream>
#include<string>
#include <sstream>
#include <fstream>
#include <chrono>


 int main()
{

std::vector<int> prices = {796, 3273, 1056, 2112, 3484, 739, 787, 1324, 768, 3360};
std::map<int,std::string>  books= { {796, "Elka.Starinnaya Zabava"}, {3273, "Ostrov Sokrovisch"}, {1056,"Elka.Sto let nazad"}, {2112, "Dvenadcatj mesyacev"}, {3484, "Kniga+epoha.Elka"}, {739, "Chudesa v Zimnem lesu"}, {787, "Shkola pomoshnikov Deda Moroza"}, {1324, "Novogodniy Gorodok"}, {768, "Roschdenstvenskoe chudo mistera Tumi"}, {3360, "Kniga+epoha. Kon-Tiki"}}; 
int Size = 10;
int Amount = 5385;
int max_number_books = 5;
//i e [0,max_number_books]

int sum = 0;
for(int i0 = 0; i0 <  max_number_books; ++i0)
	//i0  индекс книги       3 вложение - 3 элемента prices
{
for(int i1=0; i1 < max_number_books; ++i1)
{
for(int i2=0; i2 < max_number_books; ++i2)
{
for(int i3=0; i3 < max_number_books; ++i3)
{
for(int i4=0; i4 < max_number_books; ++i4)
{
for(int i5=0; i5 < max_number_books; ++i5)
{
for(int i6=0; i6 < max_number_books; ++i6)
{
for(int i7=0; i7 < max_number_books; ++i7)
{
for(int i8=0; i8 < max_number_books; ++i8)
{
for(int i9=0; i9 < max_number_books; ++i9)
{

			sum = prices[0]*i0 + prices[1]*i1+prices[2]*i2 + prices[3]*i3 + prices[4]*i4 + prices[5]*i5 + prices[6]*i6 + prices[7]*i7 + prices[8]*i8 + prices[9]*i9;
			//std::cout << "Sum = " << sum << std::endl;
			if (sum == Amount)
			{
				std::cout << "Amount = " << Amount << "\n";
				if(i0 != 0) 
				{
					std:: cout <<  books[prices[0]] << ", " << prices[0] << " ,quantity = " << i0 << "\n";
				}
				if(i1 != 0) 
				{
					std:: cout <<  books[prices[1]] << ", " << prices[1] << " ,quantity = " << i1 << "\n";
				}

				if(i2 != 0) 
				{
					std:: cout <<  books[prices[2]]  << ", " << prices[2] << " ,quantity = " << i2 << "\n";
				}

				if(i3 != 0) 
				{
					std:: cout <<  books[prices[3]]  << ", " << prices[3] << " ,quantity = " << i3 << "\n";
				}

				if(i4 != 0) 
				{
					std:: cout <<  books[prices[4]]  << ", " << prices[4] << " ,quantity = " << i4 << "\n";
				}

				if(i5 != 0) 
				{
					std:: cout <<  books[prices[5]]  << ", " << prices[5] << " ,quantity = " << i5 << "\n";
				}

				if(i6 != 0) 
				{
					std:: cout <<  books[prices[6]]  << ", " << prices[6] << " ,quantity = " << i6 << "\n";
				}

				if(i7 != 0) 
				{
					std:: cout <<  books[prices[7]]  << ", " << prices[7] << " ,quantity = " << i7 << "\n";
				}

				if(i8 != 0) 
				{
					std:: cout <<  books[prices[8]]  << ", " << prices[8] << " ,quantity = " << i8 << "\n";
				}

				if(i9 != 0) 
				{
					std:: cout <<  books[prices[9]]  << ", " << prices[9] << " ,quantity = " << i9 << "\n";
				}
			}
}}}}}}}}}}

				return 0;
}
