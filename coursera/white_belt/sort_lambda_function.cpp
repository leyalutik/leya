#include<algorithm>
#include<iostream>
#include<vector>


int abs_i(const int& x);
void print_i(const std::vector<int>& A);

int main()
{

	//input
	int N=0;
	std::cin >> N;
	std::vector<int> A(N);
	for(auto& el : A)
	{
		std::cin >> el;
	}
	//sort on module
	sort(A.begin(),A.end(), [](int x1,int x2)
			{
				return abs_i(x1) < abs_i(x2);
			}
	    );
	print_i(A);

	return 0;

}
void print_i(const std::vector<int>& A)
{
	for(const auto& el : A)
	{
		std::cout << el << " ";
	}
	std::cout << std::endl;
	
}
int abs_i(const int& x)
{
	return((x<0)*(-x) + (x>=0)*x);
}


