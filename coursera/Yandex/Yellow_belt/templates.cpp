#include<iostream>
#include<string>
#include<map>
#include<tuple>
#include<vector>




template<class K>
std::ostream& operator<<(std::ostream& output, const std::vector<K>& container)
{
	output << "{";
	for(const auto& cont : container)
	{
		output << cont << " ";
	}
	output << "}\n";

	return output;
}

template<class T, class P>
std::pair<T,P> f(const T& v1, const P& v2)
{

	return {v1,v2};
}

int main()
{
	std::vector<int> p = {1,2};
	std::cout << p << '\n';

	return 0;

}

