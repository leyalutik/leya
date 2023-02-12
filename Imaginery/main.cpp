#include <iostream>
#include <string>
#include <vector>
#include<fstream>

#include<ctime>

void generator_word_list(int number_of_words){
    std::srand(std::time(0)); //use current time as seed for random generator
    
    std::ifstream file;
    std::string words;

    file.open("data.txt");

    if(file.is_open())
	{
        for(int j=0; j< number_of_words; j++)
	{
        int random_number = int(1000*(double(std::rand())/RAND_MAX));
        int i=0;
        while(file >> words && i<random_number || (words[0] == '0' || words[0] == '1' ||
        words[0] == '2' || words[0] == '3' ||
        words[0] == '4' || words[0] == '5' || 
        words[0] == '6' || words[0] == '7' || 
        words[0] == '8' || words[0] == '9' )
	)
	{
          ++i;
        }
        std::cout << words <<" ";
      }
    }
    else
    {
        std::cout << "Unable to open the file!";
    }
    file.close();

    std::cout<< std::endl;
}

int main( ){

	std::system("chcp 65000");
  int n;
  std::cout << " Please, enter the number of random words\n";
  std::cin >> n;
  generator_word_list(n);  

    
  return 0;
}
