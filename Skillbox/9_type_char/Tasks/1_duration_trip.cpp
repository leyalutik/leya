/*
 
1. ����� � ����

����� ������������ � AA ����� BB ����� � ��������� � ����� ���������� � CC ����� DD �����. ������� ����� � ����� �� ��������� � ����?

�������� ���������, ������� ��������� �� ������������ ��� ������ � ����� ����������� � ����� �������� ������. ����� �������� ������� �� 5 �������� � ������� HH:MM. ���������� �������� �����, ��������� �����, ��� ����� ���������.

��������� ������ ��������, ������� ����� � ����� ����� ��������� � ����. ���� ����� ����������� ������ ������� ��������, ��������, ��� ����� ��������� � ����� ���������� �� ��������� ����.


�������:

������� ����� �����������: 07:15

������� ����� ��������: 16:55

����� ��������� � ���� 9 ����� 40 �����


������� ����� �����������: 21:10

������� ����� ��������: 08:05

����� ��������� � ���� 10 ����� 55 �����
*/

#include<cmath>
#include<iostream>
#include<limits>

const int length_time_format = 5;

bool check_format_time(std::string time_input); // check for format HH:MM

int main(){
	
	std::cout << "Enter the depature time : ";
	std::string depature_time;
	while(std::cin >> depature_time && !check_format_time(depature_time))
	{
		std::cout << "Enter the correct time in format HH:MM\n";
	}

	std::cout << "Enter the arrival time : ";
	std::string arrival_time;
	while(std::cin >> arrival_time && !check_format_time(arrival_time))
	{
		std::cout << "Enter the correct time in format HH:MM\n";
	}
	
	int depature_total_minutes = static_cast<int>(
		60*(10*(depature_time[0]-'0') + depature_time[1]-'0')
		+ 10*(depature_time[3]-'0') + depature_time[4]-'0');
	int arrival_total_minutes =  static_cast<int>(
		60*(10*(arrival_time[0]-'0') + arrival_time[1]-'0')
		+ 10*(arrival_time[3]-'0') + arrival_time[4]-'0');
	int duration = arrival_total_minutes - depature_total_minutes;
	
	if(arrival_total_minutes < depature_total_minutes)
	{
		duration += 24*60;  //add day in minutes
	}

	std::cout << "The duration of the trip is " << duration/60 << " hours " 
						<<duration%60 << " minutes " << std::endl;
	return 0;
}


bool check_format_time(std::string time_input) // check for format HH:MM
{
	if(time_input.size() != length_time_format 
		|| time_input[0] < '0' || time_input[0] > '9' 
		|| time_input[1] < '0' || time_input[1] > '9' 
		|| time_input[2] != ':'
		|| time_input[3] < '0' || time_input[3] > '9' 
		|| time_input[4] < '0' || time_input[4] > '9'
		)
	{
		return 0;
	}
	
	int hours = static_cast<int>(10*(time_input[0] - '0')+time_input[1] - '0'); 
	if(hours > 23 || hours < 0)
	{
		return 0;			
	}
	int minutes = static_cast<int>(10*(time_input[3] - '0')+time_input[4] - '0');
	if(minutes > 59 || minutes < 0)
	{
		return 0;
	}

	return 1;
}

