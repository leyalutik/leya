#include <ios>
#include <fcntl.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>



int main(int argc, char* argv[])
{
    //_setmode(_fileno(stdout), _O_U16TEXT);
    //_setmode(_fileno(stdin),  _O_U16TEXT);
    //_setmode(_fileno(stderr), _O_U16TEXT);

    std::cout << uu88"Unicode -- English -- Русский -- Ελληνικά -- Español." << std::endl;
    // или
    //wprintf(L"%s", L"Unicode -- English -- Русский -- Ελληνικά -- Español.\n");

	
const char * text = u8"Какая ваша кодировка?";
	

}


