#include<iostream>
#include<string>
#include "test_framework.h"

const std::string PERMISSIVE_SYMBOLS = ".-!#$%&'*+-/=?^_`{|}~";

bool check_email(const std::string& str);

bool check_symb_a(const std::string& str);

bool check_symb_point(const std::string& str);

bool check_first_part(const std::string& str);

bool check_second_part(const std::string& str);

bool check_email(const std::string& str)
{
	
	if(!check_symb_a(str))
	{
		return false;
	}

	if(!check_symb_point(str))
	{
		return false;
	}

	std::string substr;
	int16_t index_a = str.find('@');

	if(!check_first_part(str.substr(0,index_a)))
	{
		return false;
	}
	
	if(!check_second_part(str.substr(index_a+1)))
	{
		return false;
	}


	return true;
}

bool check_symb_a(const std::string& str)
{
	if(str.size() < 3)
	{
		return false;
	}
	
	int position  = static_cast<int>(str.find('@'));
	
	if(position == -1)
	{
		return false;
	}
	if(str.find('@') != str.rfind('@'))
	{
		return false;
	}

	if (str[0] == '@' || str[str.size()-1] == '@')
	{
		return false;
	}

	return true;


}

bool check_symb_point(const std::string& str)
{
	int16_t index_point = static_cast<int>(str.find('.'));
	if(index_point != -1)
	{
		if(str[0] == '.' || str[str.size()-1] == '.')
		{
			return false;
		}
		int N = static_cast<int>(str.size());
		for(int i=1; i<N-2; i++)
		{
			if(str[i] == '.' && str[i+1] == '.')
			{
				return false;
			}
		}
		

	}
	return true;
}

bool check_first_part(const std::string& str)
{
	//length
	if(str.size() > 64 || str.size() == 0)
	{
		return false;
	}
	
	//permissive symbols
	int16_t N = static_cast<int>(str.size());
	for(int i=0; i<N; ++i)
	{
		if(!((str[i] >= 'A' && str[i] <= 'Z') 
			|| (str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= '0' && str[i] <= '9')
			|| static_cast<int>(PERMISSIVE_SYMBOLS.find(str[i])) != -1))
		{
			return false;
		}
	}
	return true;
}

bool check_second_part(const std::string& str)
{
	//length
	if(str.size() > 63 || str.size() == 0)
	{
		return false;
	}
	
	//permissive symbols
	int16_t N = static_cast<int>(str.size());
	for(int i=0; i<N; ++i)
	{
		if(!((str[i] >= 'A' && str[i] <= 'Z') 
			|| (str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= '0' && str[i] <= '9')
			|| (str[i] == '-')
			|| (str[i] == '.')))
		{
			return false;
		}
	}
	return true;

}
int main()
{
	std::cout << "Input the email name:\n";
	std::string email;
	getline(std::cin, email, '\n');
	std::cout << (check_email(email) ? "Yes" : "No") << std::endl;
	return 0;
}
