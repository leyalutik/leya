#include <iostream>
#include<utility>
#include<map>
#include<vector>
#include<iomanip>
#include<fstream>
//Записная книжка с запусками
//
//
//Меню
//План   Команды   Выход
//
//План   открываем список   Enter
//
//Комманды    key c
//Список команд
//Выбрать команду
//Добавить команду
//Назад


const std::string Baurn_book_url ="https://docviewer.yandex.ru/view/527729788/?page=1^&*=IOMDyU^%2BZFnodVszGAa5GgMzXgAR7InVybCI6InlhLWRpc2s6Ly8vZGlzay8xLtCh0YLQsNC90L7QstC40LzRgdGPINC70YPRh9GI0LUvYmF1cm5fc19vcGVyYXRzaW9ubmFpYV9zaXN0ZW1hX3VuaXguZGp2dSIsInRpdGxlIjoiYmF1cm5fc19vcGVyYXRzaW9ubmFpYV9zaXN0ZW1hX3VuaXguZGp2dSIsIm5vaWZyYW1lIjpmYWxzZSwidWlkIjoiNTI3NzI5Nzg4IiwidHMiOjE2NDMyOTEwNDg5OTksInl1IjoiODE2NTg5NzY2MTYzNDYzNzM2NiJ9%22";

const std::string  data_work_path_W = "C:/git/leya/WORK/data_work.txt"; 
const std::string  data_work_path_L = "/home/leya_lutik/Desktop/leya/WORK/data_work.txt"; 
const std::string firefox = "Firefox.lnk";
const std::string firefox_86 = "Firefox_86";

struct Short_description
{
	explicit Short_description(const std::string& new_value)
	{
		value = new_value;
	}
	
	std::string value;
};
struct Name
{
	explicit Name( const std::string& new_value)
	{
		value = new_value;
	}
	std::string value;	
};
struct Script
{
	explicit Script(const std::string& new_value)
	{
		value = new_value;
	}
	
	std::string value;	
};

struct COMMAND{
	COMMAND(const Name& new_name, const Short_description& new_short
			,const Script& new_script)
	{
		name = new_name.value;
		short_description = new_short.value;
		script = new_script.value;
	}
	std::string name;	// имя команды для запуска
	std::string short_description; //краткое описание
	std::string script;	// код запуска
};


class Command
{
public:
	Command(const COMMAND& attributes):command(attributes)
	{
	}

	std::string get_short_description() const
	{
		return command.short_description;
	}
	
	std::string get_name() const 
	{
		return command.name;
	}

	std::string get_script() const 
	{
		return command.script;
	}


private:
	COMMAND command;

}; 


#define SYSTEM(x)				\
{						\
std::string var = x;				\
const char* command = var.c_str();		\
system(command);				\
}						

/*
#define SYSTEM(x,y) 				\
{						\
std::string current_path = (y ? path_W : path_L);\
current_path += x;				\
current_path += ".pdf";				\
const char* command = current_path.c_str();	\
system(command); 				\
}
*/
//---------------------------------------------------------------
void define_key_table1(std::map<uint8_t,uint8_t>& key_table);
void define_key_table(std::map<int8_t,int8_t>& key_table);
std::string display_russian1(const std::string& rus_string);
std::string display_russian(const std::string& rus_string);

void display_main_menu();
void display_option_commands(const std::vector<Command>& command_set);

void handle_option_list(const std::string& command);
void handle_option_commands(const std::vector<Command>& command_set);

//-----------------------------------------------------------------

int main()
{
	char OS  = 'W';
	{
		std::cout << "Is your Operating system Windows? Y/n \n";
		char answer;
		while(answer != '\n' && answer != 'Y' && answer != 'y' && answer != 'n' && answer != 'N')
		{
			answer = getchar();
			if(answer != '\n')
			{
				getchar();
			}
		}
		if(answer == 'n' || answer == 'N')
		{
			OS = 'L';
		}
		else
		{
			OS = 'W';
		}
	}

	std::string browser_input;
	std::ifstream ist((OS == 'L' ? "/home/leya_lutik/Desktop/leya/WORK/data_work.txt" : "C:/git/leya/WORK/data_work.txt"), std::ios::in);
	if(!ist)
	{
		std::cout << "Can't open file \"data_work.txt\". \n";
	}
	getline(ist,browser_input);
	ist.close();	

	//Prompt for browser_choice
	std::cout << "Do you want to continue with current set up browser \'" << browser_input << "\'? Y/n\n";
	char introduction_main_menu = getchar();
	if(introduction_main_menu != 10)
	{
		getchar();
	}
	if(introduction_main_menu != 10 && introduction_main_menu != 'Y' && introduction_main_menu != 'y')
	{
			std::cout << "Input command for starting definite browser on Windows system.\n"
				<< "You can set up  browser firefox:\n" 
				<< "Input \"firefox.exe\" without \"\"\n"
				<< "\nOr just press 'WhiteSpace' button, "
				<< "if you don't want any browser\n";
			char correct_browser_input =  'c';
			while( correct_browser_input != 10 
					&& correct_browser_input != 'y'
					&& correct_browser_input != 'Y'
			     )
			{
				getline(std::cin,browser_input);
				std::cout << "\nYou wrote command : \'" << browser_input << "\'\n" << "is it correct? Y/n";
				correct_browser_input = getchar();
			}

	}
	std::ofstream ost((OS == 'L' ? data_work_path_L : data_work_path_W));
	if(!ost)
	{
		std::cout << "Can't open file \"data_work.txt\".\n";
	}
	ost << browser_input;
	ost.close();

	

	std::vector<Command> command_set = {

		{{Name("Keybord training"),
		Short_description("Train fingers "),
		Script((OS == 'L' ? (browser_input + " https://www.ratatype.ua/ru/"): ("start \"\" " + browser_input + " https://www.ratatype.ua/ru/")))}},

		{{Name("Learn programming words"),
		Short_description("site Anki Web "),
		Script((OS == 'L' ? (browser_input + " https://ankiweb.net/account/login") : "start \"\" " + browser_input + " https://ankiweb.net/account/login"))}},

		{{Name("TOEFL"),
		Short_description("Open book TOEFL and text document "),
		Script("start \"\" " + browser_input + " https://skyeng.ru & start \"\"  " + browser_input + " file:///C:/git/leya/WORK/\"220_1- Oxford preparation course for the TOEFL iBT Exam_2011 -727p.pdf\"  & start \"\" notepad.exe C:\\git\\leya\\WORK\\TOEFL.txt")}},
		
		{{Name("Skyeng."),
		Short_description("site Skyeng."),
		Script("start \"\" " + browser_input + " https://skyeng.ru/")}},


		{{Name("Stolyarov. C++ I part."),
		Short_description("To open book \"Stolyarov. Vvedenie v programmirovanie\""),
		Script(" start \"\"  " + browser_input +" file:///C:/git/leya/WORK/\"progintro_dmkv1.pdf\" & start \"\" notepad.exe C:\\git\\leya\\WORK\\Stolyarov_conspect.txt")}},
		
		{{Name("Stroustrup. C++."),
		Short_description("To open book \"Programming. Principles and Practice Using C++.\""),
		Script(" start \"\"  " + browser_input +" file:///C:/git/leya/WORK/\"Stroustrup_Programming__Principles_and_Practice_Using_C++.pdf\" & start \"\" notepad.exe C:\\git\\leya\\WORK\\Straustrup_conspect.txt")}},
		
		{{Name("Leetcode"),
		Short_description("To run site Leetcode"),
		Script(" start \"\"  " + browser_input + " https://leetcode.com/ & start \"\" notepad.exe C:\\git\\leya\\Leetcode\\main.cpp " )}},


		{{Name("Baurn_book"),
		Short_description("To run site with Baurn's book by browser firefox"),
		Script( "start \"\" " + browser_input + " file:///C:/git/leya/WORK/baurn_s_operatsionnaia_sistema_unix.pdf &  start \"\" notepad.exe C:\\git\\leya\\WORK\\Baurn.txt ")}},

		{{Name("Coursera"),
		Short_description("Site coursera on programming "),
		Script("start \"\" notepad.exe C:\\git\\leya\\Coursera\\main.cpp & start \"\" " + browser_input + " https://www.coursera.org/")}},

		{{Name("Skillbox"),
		Short_description("Site Skillbox on programming "),
		Script("start \"\" C:\\git\\leya\\Skillbox\\main.cpp & start \"\" " + browser_input +  " https://go.skillbox.ru/")}}


	};
	
	int8_t option = 'r';
	while(option != 'e')
	{
		display_main_menu();
		option = getchar();
		switch(option)
		{
			case '\n'	:	
				{
					std::string command = (OS == 'L' ? "gedit ~/Desktop/leya/protocol.txt &" : "start "" notepad.exe C:\\git\\leya\\protocol.txt ");
					handle_option_list(command);
				}
					break;
			case 'c':	handle_option_commands(command_set);
					break;
			case 'e':	break;
			default :	std::cout << "Undefined symbol. Try again.\n";
					break;
		}
	}

	return 0;
}
//-------------------------------------------------------------


void display_main_menu()
{
	std::cout << "\n" << std::setw(25) << " " << "Main menu";
	std::cout << "\n==============================================================================\n";
	std::cout << std::setw(7) << std::left << " " 
		<< std::setw(30) << std::left << "Protocol"//display_russian("План действий") 
		<< std::setw(30) << std::left <<  "(Enter)" << " \n";
	std::cout << std::setw(7) << std::left << " " 
		<< std::setw(30) << std::left << "Commands"//display_russian("Команды") 
		<< std::setw(30) << std::left << std::setfill(' ') << "(c)" << "\n";
	std::cout << std::setw(7) << std::left << " " 
		<< std::setw(30) << std::left << "Exit"//display_russian("Выход") 
		<< std::setw(30) << std::left << "(e)" << "\n";
	std::cout << "==============================================================================\n";
}
void handle_option_commands(const std::vector<Command>& command_set)
{
	int8_t option = 'r';
	while(option != 'e')
	{
		
		display_option_commands(command_set);
		std::cout << "Enter the name of command or its associative number\n";
		int input;
		std::cin >> input;
		if(input < int(command_set.size()) && input >= 0)
		{
			SYSTEM(command_set[input].get_script());
			getchar();
		}
		else 
		{
			std::cout << "Incorrect number.\n";
		}
		return;
	}

}

void display_option_commands(const std::vector<Command>& command_set)
{

	//system("");

	std::cout << "\n" << std::setw(25) << " " << "menu Commands";
	std::cout << "\n==============================================================================\n";
	std::cout << std::setw(12) << " " << std::setw(17) << std::left << "{Name}" << std::setw(30) 
		<< std::left << "            {Description}" << "\n";
	for(size_t i=0; i < command_set.size(); ++i)
	{
		std::cout << std::setw(7) << std::right << i << "." 
			<< std::setw(30) << std::left << command_set[i].get_name()
			<< std::setw(30) << std::left << command_set[i].get_short_description() << "\n";
	
	}

	std::cout << "===============================================================================\n";

}

void handle_option_list(const std::string& command)
{
	SYSTEM(command);
	return;
}

void define_key_table(std::map<int8_t,int8_t>& key_table)
{
	std::string russian_letters = "АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдежзийклмнопрстуфхцчшщъыьэяюЁё";
	for(size_t i = 0; i< russian_letters.size(); ++i)
	{
		int8_t value = 0;
		int8_t key = russian_letters[i];
		if(i < 48)   //code from 128 less than 'р'  
		{
			value += i -128;
		}
		else   // i >=48 'p'  code from 224
		{
			value += i- 48 - 32;
		}
		key_table[key] = value;
	//	std::cout << i << " " << key  << " " << key_table[key] << std::endl;
	}
}
//---------------------------------------------------------------------
std::string display_russian(const std::string& rus_string)
{
	std::string result(rus_string);
	std::map<int8_t,int8_t> keys;
	define_key_table(keys);
	for(size_t i = 0; i< result.size(); ++i)
	{
		result[i] = (keys.count(result[i]) == 1 ? keys[result[i]] : result[i]);
	}	
	return result;
}
void define_key_table1(std::map<uint8_t,uint8_t>& key_table)
{
	std::string russian_letters = "АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдежзийклмнопрстуфхцчшщъыьэяюЁё";
	for(size_t i = 0; i< russian_letters.size(); ++i)
	{
		uint8_t value = 0;
		uint8_t key = russian_letters[i];
		if(i < 48)   //code from 128 less than 'р'  
		{
			value += i + 128;
		}
		else   //'p'  code from 224
		{
			value += i-48 + 224;
		}
		key_table[key] = value;
	//	std::cout << i << " " << key  << " " << key_table[key] << std::endl;
	}
	
}
std::string display_russian1(const std::string& rus_string)
{
	std::string result(rus_string);
	std::map<uint8_t,uint8_t> keys;
	define_key_table1(keys);
	for(size_t i = 0; i< result.size(); ++i)
	{
		result[i] = (keys.count(result[i]) == 1 ? keys[result[i]] : result[i]);
	}	
	return result;
}	
