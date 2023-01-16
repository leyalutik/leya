#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<iomanip>

int main()
{
	std::ifstream input("input.txt");
	if(input.is_open())
	{
		
		float number;
		std::ofstream output("output.txt");
		while(input >> number)
		{
			std::cout << std::fixed << std::setprecision(3) << std::setw(5) 
				<< number << '\n';
		}
	}


	return 0;
}
