#include <iostream>
#include <string>
#include <fstream>
#include <chrono>




int main()
{
	std::string filename = "test.txt";
	std::fstream f(filename, f.binary  | f.in | f.out);
	if(!f.is_open())
	{
		std::cout << "File " << filename << " is not opened\n";
	}
	f.seekp(0);
	f << "hello3!";
	

	return 0;
}
