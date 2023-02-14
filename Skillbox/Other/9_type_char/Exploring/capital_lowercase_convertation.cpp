/*
1) ������ �� ��� ������� � ������� �, ������� ��������� ������ � �������� ������ ����� � ��� �� ��������� � ��������. �������� ���������, ����������� ����� �������, ������ ���, ����� ��������� ����� � ������ ����������� ���������. ������ �������� �� ������� � ��������� ��������� � �������. �������� ��������, ��� ������� '�' � 'z' ����� �������� �� 'a' � 'a' ��������������. �������, ������� �� ��������� � ��������, ����� �������� � �������� ����.


������:

�("Abc") -> "bcd"

M("xYZ�") -> "yza�"


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
