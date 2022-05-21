#include <iostream>
#include <string>

bool check_IP_address(const std::string& str); 

int16_t number_points(const std::string& str);

bool check_number(const std::string& str); // проверяет "число" между точками

bool is_digit(char ch);

bool check_IP_address(const std::string& str)
{
	if(str.size() < 6)
	{
		return false;
	}
	if(number_points(str) != 3)
	{
		return false;
	}

	size_t index0 = 0;
	size_t index;
	int16_t iter = 0;
	while(iter < 4)
	{
		index = (iter != 3 ? str.find('.', index0) : str.size());
		//std::cout << "iter=" << iter << " str=" << str << " index0=" << index0 << " index=" << index << "\n";
		if(!check_number(str.substr(index0,index-index0)))
		{
			return false;
		}
		index0 = index+1;
		++iter;
	}
	return true;
}

int16_t number_points(const std::string& str)
{
	int16_t index = 0;
	for(const char& s:str)
	{
		if(s == '.')
		{
			++index;
		}
	}

	return index;
}

bool check_number(const std::string& str)
{
//	std::cout << "check_number:\n";
//	std::cout << "str=" << str << '\n';
	if(str.size() > 3 || str.size() == 0)
	{
		return false;
	}

	for(char s:str)
	{
		if(!is_digit(s))
		{
			return false;
		}
	}
	
	if(str[0] == '0' && str.size() != 1)
	{
		return false;
	}

	int16_t num = stoi(str);
//	std::cout << "num=" << num << "\n";
	
	return (num >= 0 && num <= 255); 

}

bool is_digit(char ch)
{
	return (ch >= '0' && ch <= '9');
}


int main()
{
	std::string str;

	std::cout << "Input IP address:";
	std::cin >> str;

	std::cout << (check_IP_address(str) ? "Valid" : "Invalid") << '\n';

	return 0;
}
