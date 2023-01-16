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

struct Reading
{
	int hour;  //[0,23]
	double temperature; //celcious
};


void simple_input(const std::string& name, std::vector<Reading>& elements);
void simple_output(const std::string& name, std::vector<Reading>& elements);

void simple_output(const std::string& name, std::vector<Reading>& elements)
{
	std::ofstream ost{name};
	if(!ost)
	{
		throw std::runtime_error("Can't open file " + name + ".");
	}
	for(size_t i=0; i<elements.size(); ++i)
	{
		ost << elements[i].hour << " " << elements[i].temperature << "\n";
	}
}
void simple_input(const std::string& name, std::vector<Reading>& elements)
{
	std::ifstream ist{name};
	if(!ist)
	{
		throw std::runtime_error("Can't open " + name + " file.");
	}
	Reading r;
	int hour;
	double temperature;
	while(ist >> hour >> temperature)
	{
		elements.push_back(Reading{hour,temperature});
	}



}


const std::string input = "values.txt";
const std::string output = "results.txt";

 int main()
{
	std::vector<Reading> temps;
	simple_input(input,temps);

	simple_output(output,temps);

	return 0;
}


