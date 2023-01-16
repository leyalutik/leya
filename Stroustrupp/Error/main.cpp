#include <vector>
#include <map>
#include <set>
#include<exception>
#include <cassert>
#include<cstdlib>
#include<iostream>
#include<string>
#include <sstream>
#include <fstream>
#include <chrono>


//create our own type of error
class Bad_area 
{
	public:
	std::string message;	
};

class Bad_area_empty
{
};

int area(int length, int width);
int framed_area(int x, int y); //return (x-2)*(y-2) calculate area within frame
void function_throw_narrow_errors();

//A - type we have, R - type we want. 
template<class R, class A> 
	R narrow_cast(const A& a)
	{
		R r = R(a); // приведение к типу R
		if (A(r) != a)	//Обратное приведение к A
		{
			throw std::runtime_error(std::string("Hello! I'm bug of type : Narrow error."));
		}
		return r;
	}
void function_throw_narrow_errors()
{
	int x1 = narrow_cast<int>(2.9); // throws
	int x2 = narrow_cast<int>(2.0); // OK
	char c1 = narrow_cast<char>(1066); // throws
	char c2 = narrow_cast<char>(85); // OK	
}

//------------------------------------------------------------------------------
int main()
{

	try{
		std::cout << "Hello!\n";

		int s1 = area(7,8); // error: ) missing
		int s2 = area(7,8); // error: ; missing
		int s3 = area(7,8); // error: Int is not a type
		int s4 = area(7,8); // error: non-terminated character (' missing)	

		int x4 = area(10,7); // OK: but what is a rectangle with a width of minus 7?
		int x5 = area(10,9); // OK: but calls area(10,9)
		int x6 = area(100,999); // OK: but truncates the result

		function_throw_narrow_errors();

	//	area(7,-8);
		std::vector<int> v = {1,2,3}; // a vector of ints
		for (int x; std::cin>>x; )
			v.push_back(x);
		for (int i = 0; i<v.size(); ++i) // print values
			std::cout << "v[" << i <<"] == " << v.at(i) << '\n';
		
		if(v.at(0) == 1)
		{
			throw std::runtime_error("Hello! I'm a  bug of a type Run_time error");
		}
		return 0;
	}

	catch(Bad_area& e) // Create your own type bag
	{
		std::cerr << e.message << "\n";
		return 1;
	}
	catch(Bad_area_empty&) //Create your own type bug
	{
		std::cerr << "Hello! I'm a bug of type Bad_area_empty.\n";
		return 1;
	}

	catch(std::out_of_range&)
	{
		std::cerr << "Hello! I'm a bug of type out_of_range.\n";
		return 1;
	}
	catch(std::runtime_error& e)
	{
		std::cerr << e.what() << "\n";
		return 1;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << "\n" << "Hello! I'm bug of common type exception.\n";
		return 1;
	}
	catch(...)
	{
		std::cerr << "Hello! I'm a bug of type Unknown.\n";
		return 1;
	}
	
}
//--------------------------------------------------------------------------------

int area(int length, int width)
{
	if(length < 0)
	{
		Bad_area a;		//Notation of exception 1
		a.message = "Hello, i'm a bug of type: Bad_area";
		throw a;
	}
	if(width < 0)
	{
		throw Bad_area_empty{};   //Notation of exception 2
	}


	return length*width;
}

int framed_area(int x, int y) // calculate area within frame
{
	constexpr int frame_width = 2;
	if (x-frame_width<=0 || y-frame_width<=0)
	return area(x-frame_width,y-frame_width);
}


