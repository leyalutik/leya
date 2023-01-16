#include <iostream >
#include <vector >
#include <map>
#include <sstream>
#include <utility>

template<class Vector>
std::ostream& operator<<(std::ostream& output, const std::vector<Vector>& v);
template<class T, class P>
std::ostream& operator<<(std::ostream& output, const std::pair<T,P>& p);
template<class T, class P>
std::ostream& operator<<(std::ostream& output, const std::map<T,P>& m);


template<class Container_t, class delimiter_t>
std::string join(const Container_t& container, delimiter_t delimiter)
{
	std::stringstream ss;
	bool first_element = 1;
	for(const auto& cont:container)
	{
		if(!first_element)
		{
			ss << delimiter << " " << cont;
		}
		else
		{
			first_element = !first_element;
			ss << cont;
		}
	}
	return ss.str();
}

template<class Vector>
std::ostream& operator<<(std::ostream& output, const std::vector<Vector>& v)
{
	output << '[' << join(v,',') << ']';
	return output;
}

template<class T, class P>
std::ostream& operator<<(std::ostream& output, const std::pair<T,P>& p)
{
	return output << '(' << p.first << ',' << p.second << ')';
}

template<class T, class P>
std::ostream& operator<<(std::ostream& output, const std::map<T,P>& m)
{
	output << '{' << join(m,',') << '}';
	return output;
}

int main () {
	std::vector <double> vi = {1.4 , 2, 3};
	std::pair <int, int> m1 = {1, 2};
	std::map<double , double > m2 = {{1.4 , 2.1} , {3.4 , 4}};
	std::cout << vi << ' ' << m1 << ' ' << m2 << std::endl;

	return 0;
}
