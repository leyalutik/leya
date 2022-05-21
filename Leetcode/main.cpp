/*
Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"

Example 2:

Input: a = "1010", b = "1011"
Output: "10101"

 

Constraints:

    1 <= a.length, b.length <= 104
    a and b consist only of '0' or '1' characters.
    Each string does not contain leading zeros except for the zero itself.

 

 * */


#include <iostream>
#include <string>
#include <cmath>
#include "test_framework.h"

char sum(char ch1, char ch2, char& electron);



char sum(char ch1, char ch2, char& electron)
{
	char result;
	if((ch1 == '0' && ch2 == '1')
		|| (ch1 == '1' && ch2 == '0')
		)
	{	
		if(electron == '1')
		{
			return '0';
		}
		return '1';
	}
	else if(ch1 == '0' && ch2 == '0')
	{
		if(electron == '1')
		{
			electron = '0';
			return '1';
		}
		return '0';
	}
	else
	{
		if(electron == '1')
		{
			return '1';
		}
		electron = '1';
		return '0';

	}
}



int convert_to_decimal(std::string a)
    {
	    int number = stoi(a);
	    int result = 0;
	    int index = 0;
	    while(number > 0)
	    {
		    result += pow(2,index)*(number%2);
		    number /= 10;
		    ++index;
	    }
	
	    return result;
        
    }
std::string convert_to_binary(int a)
    {
	    if(a == 0) 
	    {
		    return "0";
	    }
	    std::string result;
	    int16_t number = a;
	   
	    while(number >0)
	    {
		result = std::to_string(number%2) + result;
		number /= 2;
	    }


	    return result;
    }

void test_convert_to_binary()
{
	AssertEqual(convert_to_binary(10),"1010","0");
	AssertEqual(convert_to_binary(0),"0","0");
 AssertEqual(convert_to_binary(1),"1","1");
 AssertEqual(convert_to_binary(5),"101","2");
 AssertEqual(convert_to_binary(9),"1001","3");

}
void test_convert_to_decimal()
{
	AssertEqual(convert_to_decimal("0"),0,"0");
	AssertEqual(convert_to_decimal("1"),1,"1");
	AssertEqual(convert_to_decimal("101"),5,"2");
	AssertEqual(convert_to_decimal("10"),2,"3");

}
int main()
{
	
//	TestRunner tr;
//	tr.RunTest(test_convert_to_binary,"test_convert_to_binary");

	std::string str1 = "1010";
	std::string str2 = "1000";
	char electron = '0';
	std::string str(str1);
	for(int i = str1.size()-1; i>=0; --i)
	{
		str[i] = sum(str1[i],str2[i],electron);
	}
	if(electron == '1'){
		str.insert(0,1,electron);
		std::cout << str << "\n";
	}

	return 0;
}
