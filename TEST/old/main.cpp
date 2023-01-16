#include<iostream>
#include<fstream>
#include<sstream>
#include <algorithm>
#include <ctime>

const std::string FILENAME_VALUES = "values.txt";
const std::string FILENAME_TESTS = "tests.txt";

using namespace std;

int main()
{
    // Generate data
    const unsigned arraySize = 32768;
    int data[arraySize];


    for (unsigned c = 0; c < arraySize; ++c)
        data[c] = std::rand() % 256;

    // !!! With this, the next loop runs faster.
//    std::sort(data, data + arraySize);

    // Test
    clock_t start = clock();
    long long sum = 0;
    for (unsigned i = 0; i < 100000; ++i)
    {
        for (unsigned c = 0; c < arraySize; ++c)
        {   // Primary loop.
            if (data[c] >= 128)
                sum += data[c];
        }
    }

    double elapsedTime = static_cast<double>(clock()-start) / CLOCKS_PER_SEC;

    std::cout << elapsedTime << '\n';
    std::cout << "sum = " << sum << '\n';

/*

	std::ifstream in_file(FILENAME_VALUES, std::ios::in);
	if(!in_file.is_open())
	{
		std::cout << "File is unable to open.\n";
	}
	std::string word;

	std::ofstream out_file(FILENAME_TESTS, std::ios::app);

	while(in_file >> word)
	{
		out_file << word << "\n";
	}

//Copy lines wothout changes

	while(getline(in_file,word))
	{
		out_file << word << "\n";
		
	}

*/

}
