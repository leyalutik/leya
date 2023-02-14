/*
 
3. ������� ������������ �����

�� ������ ����������� ���������-�����������, ������� ���������� ����� ����� ������ ������� �����. ��� ����� �� ���������� �������� � ���� ��� �� ��������. ������ ��������, � ������� �� �����������, � �� ������ ������ ����� ������, �������� ��� ���������� ������� ������������� ����� ��� ���.

���������� ������� ��������� ������, ��������������� ��������� ��������. ������ �������� � ��� ������ ���� ���� �����, ���� ���� �����. ����� ����� ����� ���� ��� ��������� ���� (��������, �� �����). ����� ����� ���� �����, ���������� ����� ����� �� �������. �� ����� ����� � �� ���� ����. � ����� ������ ���������, ��� �� ����� ����� 0. ����� ����� ��� ��������� ���� (��������, �� �����). ���� �� ���� ����� � ������ ����� ������ ��������������. (��� �������� � ���� ������ �� �� ����� ������������� ����� � ���������������� ������, ����� ��� 1.2e-3.)

�������� ���������, ������� �������� �� ������������ ������ � ������� � ����� Yes, ���� ��� ������ ��������� ������ ������������ �����, � ��������� ������ ������� No.


������� ���������� �������:

0123
00.000
.15
165.
999999999999999999999999999999999.999999999999999999999
-1.0
-.35


������� ������������ �������:

1.2.3 (���������� ����� ����� ���� ������ ����)
-. (������ ���� ���� �� ���� ����� � ������)
11e-3 (�� �� ��������� ������������ ������ e � ������)
+25 (�� �� ��������� ������������ ������ + � ������)

*/

/*
�������� ��������������� �������� 
 ������������������ ������, ���� �� �����-�� ���� �������������� ������� �� ����� 
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


