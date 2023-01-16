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

void display_protocols();
void handle_option_protocols();

void input_date_in_file(std::string filename); //current date input in the end of file filename
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

		
		{{Name("News!"),
			 Short_description("Opening daily news."),
			 Script((OS == 'L' ? ("Hello") : ("start \"\" C://git//leya//WORK//news_option.bat  ")))}},

		{{Name("Keybord training"),
		Short_description("Train fingers "),
		Script((OS == 'L' ? (browser_input + " https://www.ratatype.ua/ru/"): ("start \"\" " + browser_input + " https://www.ratatype.ua/ru/")))}},

		{{Name("Learn programming words"),
		Short_description("site Anki Web "),
		Script((OS == 'L' ? (browser_input + " https://ankiweb.net/account/login") : "start \"\" " + browser_input + " https://ankiweb.net/account/login"))}},

		{{Name("TOEFL"),
		Short_description("Open book TOEFL and text document "),
		Script( (OS == 'L' ? "chrome  https://skyeng.ru " : "start \"\" " + browser_input + " https://skyeng.ru & start \"\"  " + browser_input + " file:///C:/git/leya/WORK/\"220_1- Oxford preparation course for the TOEFL iBT Exam_2011 -727p.pdf\"  & start \"\" notepad.exe C:\\git\\leya\\WORK\\TOEFL.txt"))}},
		
		{{Name("Reading books"),
		Short_description("Launch nglish notes for reading english books"),
		Script((OS == 'L' ? " " : "start \"\" notepad.exe english_notes.txt" ))}},
	
		{{Name("Dynamicheskoe chtenie"),
		Short_description("Open scientific articles"),
		Script((OS == 'L' ? " " : "start \"\" notepad.exe dynamicheskoe_chtenie.txt && start "" dynamicheskoe_chtenie.bat && start "" " + browser_input + " file:///C:/git/leya/WORK/Dynamicheskoe_chtenie.pdf" ))}},

		/*{{Name("Skyeng."),
		Short_description("site Skyeng."),
		Script((OS == 'L' ? " " : "start \"\" " + browser_input + " https://skyeng.ru/"))}},
*/

		{{Name("Stolyarov. C++ I part."),
		Short_description("To open book \"Stolyarov. Vvedenie v programmirovanie\""),
		Script((OS == 'L' ? " " :
			" start \"\"  " + browser_input + " file:///C:/git/leya/Stolyarov/\"progintro_dmkv1.pdf\" " 
			+ " &  start \"\"  " + browser_input + " file:///C:/git/leya/Stolyarov/\"progintro_dmkv2.pdf\" "
			+ " &  start \"\"  "+ browser_input + " file:///C:/git/leya/Stolyarov/\"progintro_dmkv3.pdf\" "  
			+ " &  start \"\"  " + browser_input + " \" http://www.stolyarov.info \" " 
			+ "& start \"\" notepad.exe C:\\git\\leya\\WORK\\Stolyarov_conspect.txt"	
					))}},
		
		{{Name("Stroustrup. C++."),
		Short_description("To open book \"Programming. Principles and Practice Using C++.\""),
		Script((OS == 'L' ? " " : " start \"\"  " + browser_input
				+ " file:///C:/git/leya/Stroustrupp/\"Stroustrup_Programming__Principles_and_Practice_Using_C++.pdf\" & start \"\" notepad.exe C:\\git\\leya\\Stroustrupp\\Straustrup_conspect.txt"
				+ " & start \"\" " + browser_input + " \" https://onedrive.live.com/redir?resid=36E8E85166152F81\%215366&page=Edit&wd=target\%28\%D0\%A1\%D1\%82\%D1\%80\%D0\%B0\%D1\%83\%D1\%81\%D1\%82\%D1\%80\%D1\%83\%D0\%BF\%D0\%BF.one\%7Cf16bf7b4-5bba-40eb-a87e-311e85037cd0\%2FPart\%20I\%20Chapter\%203\%7C9367b757-f3e6-48df-a9d9-e1f74f18e339\%2F\%29&wdorigin=NavigationUrl \"" 
				+ " & start \"\" " + browser_input + " \"https://www.stroustrup.com/glossary.html \"" 
				+ " & start \"\" " + browser_input + " \"https://www.stroustrup.com/ \"" ))}},
		{{Name("System"),
		Short_description("Learning Windows and Linux systems."),
		Script((OS == 'L' ? " " : " start \"\"  " + browser_input
				+ " file:///C:/git/leya/system/\"Prakticheskoye rukovodstvo sistemnogo administratora.pdf \" " + " & start \"\"  " + browser_input
				+  " file:///C:/git/leya/system/Olifer_Networks.pdf & start \"\" notepad.exe C:\\git\\leya\\system\\system.txt" ))}},

		{{Name("Leetcode"),
		Short_description("To run site Leetcode"),
		Script((OS == 'L' ? " " : " start \"\" notepad.exe C:\\git\\leya\\leetcode\\main.cpp &  start \"\"  " + browser_input + " https://leetcode.com/ & start \"\" explorer.exe \"C:\\git\\leya\\leecode\\\"" ))}},


		{{Name("Baurn_book"),
		Short_description("To run site with Baurn's book by browser firefox"),
		Script((OS == 'L' ? " " : "start \"\" " + browser_input + " file:///C:/git/leya/WORK/baurn_s_operatsionnaia_sistema_unix.pdf &  start \"\" notepad.exe C:\\git\\leya\\WORK\\conspect_Baurn.txt "))}},

		{{Name("Hiryanov"),
		Short_description("Site coursera on programming "),
		Script((OS == 'L' ? " " : "start \"\" notepad.exe C:\\git\\leya\\Hiryanov\\conspect_Hyrianov.txt & start \"\" "
				+ browser_input 
				+ " \"https://www.youtube.com/c/ТимофейХирьянов/playlists\" & start \"\" explorer.exe \"C:\\git\\leya\\Hiryanov\\\""))}},
		
		{{Name("RoadMap"),
			 Short_description("Base knowledge of C++ tools"),
			 Script((OS == 'L' ? " " : " start \"\" " + browser_input + " https://raw.githubusercontent.com/leyalutik/CppDeveloperRoadmap/main/Russian/Graph/roadmap.svg & start \"\" notepad C:\\git\\leya\\roadmap.txt"))}},

		{{Name("Coursera"),
			 Short_description("Site coursera on programming "),
			 Script((OS == 'L' ? " " : " start \"\" " + browser_input + " https://www.coursera.org/ & start \"\" explorer.exe \"C:\\git\\leya\\Coursera\\\""))}},
		
		{{Name("Konstructor"),
			 Short_description("Learning the engineering" ),
			 Script((OS == 'L' ? " " : " start \"\" " + browser_input + "  file:///C:/git/leya/Alternative/konstructor/Kniga_yunogo_tekhnika_by_Kiselev_L_i_dr.pdf" ))}},

		{{Name("Wooden work"),
			 Short_description("Learning the creating the wooden works" ),
			 Script((OS == 'L' ? " " : " start "" explorer.exe C:\\git\\leya\\Alternative\\plotnik " ))}},

		{{Name("SPORT"),
			 Short_description("Learning plavanie and running"),
			 Script((OS == 'L' ? "" : ("start \"\" explorer C:\\git\\leya\\Alternative\\SPORT")))}},

		{{Name("Shitie"),
			 Short_description("Train fingers "),
			 Script((OS == 'L' ? "" : ("start \"\" explorer C:\\git\\leya\\Alternative\\Shitie")))}},

		{{Name("Skillbox"),
		Short_description("Site Skillbox on programming "),
		Script((OS == 'L' ? " " : "start \"\" C:\\git\\leya\\Skillbox\\main.cpp & start \"\" " + browser_input +  " https://go.skillbox.ru/ & start \"\" explorer.exe \"C:\\git\\leya\\Skillbox\\\""))}},

		{{Name("Return"),
		Short_description("Return to the main menu"),
		Script((OS == 'L' ? " " : " "))}}


	};
	
	int8_t option = 'r';
	while(option != 'e' && option != '3')
	{
		display_main_menu();
		option = getchar();
		switch(option)
		{
			case '0'	:
				{
					std::getchar();
					input_date_in_file("plan.txt");
					system("start "" notepad.exe plan.txt");

				}
				break;

						
			case '\n'	:	
				{
					input_date_in_file("plan.txt");
					system("start "" notepad.exe plan.txt");

				}
					break;
			case '1'	:	
				{
					std::getchar();
					display_protocols();
					handle_option_protocols();
				}
					break;
			case 'c':	{	
						std::getchar();
						handle_option_commands(command_set);
					}
					break;
			case '2':	{
						std::getchar();
						handle_option_commands(command_set);
					}
					break;

			case 'e':	{
						std::getchar();
						break;
					}
			case '3':	{
						std::getchar();
						break;
					}			
			default :	std::cout << "Undefined symbol. Try again.\n";
					break;
		}
	}

	return 0;
}
//-------------------------------------------------------------
void input_date_in_file(std::string filename)
{
	SYSTEM(" echo ------------------ >> \"" + filename
	       + "\" && echo \%Date\% >> \"" + filename
	       + "\" && echo ------------------ >> \"" + filename + "\"");
	//SYSTEM("findstr /M \%Date\%  plan.txt &&  pause ");


	//SYSTEM("findstr /M \%Date\%  " + filename + " && if \%errorlevel\%==1 echo  \%Date\% >> " + filename + " && pause ");


	//SYSTEM("findstr /M \%Date\% " + filename + " &&  if \%errorlevel\% == 1 echo - >> " + filename + " && echo --------------------------- >> " + filename + " && echo \%Date\% >> " + filename + " && echo --------------------------- >> " + filename  + " && pause");

}

void display_main_menu()
{
	std::cout << "\n" << std::setw(25) << " " << "Main menu";
	std::cout << "\n==============================================================================\n";
	std::cout << std::setw(7) << std::left << " " 
		<< std::setw(30) << std::left << "PLAN"//display_russian("План действий") 
		<< std::setw(30) << std::left <<  "(0/Enter)" << " \n";
	
	std::cout << std::setw(7) << std::left << " " 
		 << std::setw(30) << std::left << "Protocols"//display_russian("План действий" 
		<< std::setw(30) << std::left <<  "(1)" << " \n";
	std::cout << std::setw(7) << std::left << " " 
		<< std::setw(30) << std::left << "Commands"//display_russian("Команды") 
		<< std::setw(30) << std::left << std::setfill(' ') << "(2/c)" << "\n";
	std::cout << std::setw(7) << std::left << " " 
		<< std::setw(30) << std::left << "Exit"//display_russian("Выход") 
		<< std::setw(30) << std::left << "(3/e)" << "\n";
	std::cout << "==============================================================================\n";
}
void display_protocols()
{
std::cout << "\n" << std::setw(25) << " " << "menu Protocols";
	std::cout << "\n==============================================================================\n";
	std::cout << std::setw(20) << "My_own_pages " << std::setw(40) << std::left << "          General" << std::setw(30) << std::left << "         (0)" << "\n";

	std::cout << std::setw(20) << "Protocol " << std::setw(40) << std::left << "          General" << std::setw(30) << std::left << "         (1)" << "\n";
	std::cout << std::setw(20) << "Protocol_stolyar " << std::setw(40) << std::left << "          Stolyarnoe delo" << std::setw(30) << std::left << "         (2)" << "\n";
	std::cout << std::setw(20) << "Protocol_shitie " << std::setw(40) << std::left << "          Creating clothes" << std::setw(30) << std::left << "         (3)" << "\n";
	std::cout << std::setw(20) << "Protocol_sport " << std::setw(40) << std::left << "          Everything about sport" << std::setw(30) << std::left << "         (4)" << "\n";
	std::cout << std::setw(20) << "Protocol_music " << std::setw(40) << std::left << "          MUZIKA CREATING" << std::setw(30) << std::left << "         (5)" << "\n";
	std::cout << std::setw(20) << "Protocol_dance " << std::setw(40) << std::left << "          Dance. Beautiful movements." << std::setw(30) << std::left << "         (6)" << "\n";
	std::cout << std::setw(20) << "Protocol_kulinaria " << std::setw(40) << std::left << "          Create dishes. Helthy diet." << std::setw(30) << std::left << "         (7)" << "\n";
	std::cout << std::setw(20) << "Return to the main_menu " << std::setw(40) << std::left << "          Create dishes. Helthy diet." << std::setw(30) << std::left << "(Any symbol)" << "\n";


	std::cout << "\n";
}
void handle_main_menu()
{

}
void handle_option_protocols()
{
	char OS = 'W'; // Terrible using this variable. It's a global variable
	int32_t index = 0;
	std::vector <std::string> filenames = {
				"C:\\git\\leya\\WORK\\my_own_pages.txt"
				,"C:\\git\\leya\\protocol.txt"
				,"protocol_stolyar.txt"
				,"protocol_shtie.txt"
				,"protocol_sport.txt"
				,"protocol_misic.txt"
				,"protocol_dance.txt"
				,"protocol_kulinaria.txt"
		};

	while(index < static_cast<int32_t>(filenames.size()) && index >= 0)
	{	
		char option = '0';
		std::cout << "Choose the protocol:\n";
		std::cin >> option;
		index = static_cast<int32_t> (option) - static_cast<int32_t>('0');
		if (index < static_cast<int32_t>(filenames.size()) && index >= 0) 
		{
			input_date_in_file(filenames[index]); 

			std::string command = (OS == 'L' ? "" : " start \"\" notepad.exe " 
					+ filenames[index]);
			handle_option_list(command);
			display_protocols();
		}

	}
	std::getchar();
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
	

