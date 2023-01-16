#include "menu_main.h"
#include "time.h"
#include "file.h"
#include "exception.h"

int main()
{

	std::cout << "Date: " <<  __DATE__ << "\n";
	std::cout << "line: " << __LINE__ << "\n";
	try{
	File file("test10.txt");
	std::string line;
	file.find_line_by_word("Priv");
	std::cout << "Found " << file.get_buffer_line() <<  " lines.\n";
	file.write_line();
	Menu M("test.txt");
	M.launch();
	}catch (error& er)
	{
		std::cout << "Exception happens: " << er.report() << "\n";
	}
	return 0;
}
