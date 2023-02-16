#include <iostream>
#include <string>
#include <vector>
#include<fstream>

#include<ctime>

void generator_word_list(int number_of_words){
	std::srand(std::time(0)); //use current time as seed for random generator

	//std::ifstream file;
	std::wifstream file;
	

	file.open("data.txt");
	if(file.is_open())
	{
		std::cout << "\n";
		for(int j=0; j< number_of_words; j++)
		{
			int random_number = 10;//int(1000*(double(std::rand())/RAND_MAX));
			int i=0;
			//std::string words;
			std::wstring words;

			while(std::getline(file,words) && (i<random_number || (words[0] >='0' && words[0] <='9' )))
			{
				++i;
				std::wcout << i << "\n";
				std::wcout << words << "\n";
				//std::wcout << std::endl;
			}
			
			//std::cout << words << " ";
			std::wcout << words <<" ";
		}
	}
	else
	{
		std::wcout << "Unable to open the file!";
	}
	file.close();

	std::cout << std::endl;
}

int main( ){

	std::system("chcp 65000");
	int n;
	std::wcout << " Please, enter the number of random words\n";
	std::cin >> n;
	generator_word_list(n);  


	return 0;
}
