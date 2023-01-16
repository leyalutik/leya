#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<set>
#include<string>
#include<limits>
#include<fstream>

//why
//P helps me to learn basic C++ defintions
//Describe how it works
// You input some piece of defintion and P output pdf file
// input data
// string
// output data
// pdf file
// Common architecture
// while(!= e)
// {
// 	void display_main_menu()
// 	void handle_main_menu_option(const char& option)
// 	{
// 		option Enter(view set of all definitions)
// 		option f    (find notion in set of definitions)
// 		option e    (exit)
//	}
//	void handle_option_Enter( const set<std::string>& notions)
//	{
//		void print(const type v, const std::string& heading); 
//	}
//	void handle_option_f(const set<std::string>& notions, const std::string& input_user)
//	{
//		string found_key;
//		void find_key(
//			const set<std::string>& notions,
//			const std::string& input_user,
//			const std::string& found key);
//			SYSTEM(found key);
//	}
//}
//
//
//
const std::string path_L = "open /home/leya_lutik/Desktop/leya/notion_set/";
const std::string path_W =  "file:///C:/git/leya/notion_set/";

#define SYSTEM(z,x,y) 				\
{						\
std::string current_path = (y ? path_W : path_L);\
current_path += x;				\
current_path += ".pdf";				\
current_path = z + " " + current_path;		\
const char* command = current_path.c_str();	\
system(command); 				\
}   						




void display_main_menu();
void handle_option_Enter(const std::set<std::string>& notions);
void handle_option_f(const std::set<std::string>& notions,std::string& found_key);
bool find_key(
	const std::set<std::string>& notions,
	const std::string& input_user,
	std::string& found_key
	);
bool find_substr(const std::string& note, const std::string& input_user);
void test_cases_find_key(const std::set<std::string>& notions);

//=============================================================================
int main()
{

	
	std::string browser_input;
	
//Take the value of variable browser_input from file
	std::ifstream ist("browser_input.txt", std::ios::in);
	if(!ist)
	{
		std::cout << "Can't open file \"data_work.txt\". \n";
	}
	getline(ist,browser_input);
	ist.close();	
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
				std::cout << "\nYou wrote command : \'" 
					<< browser_input << "\'\n" 
					<< "is it correct? Y/n";
				correct_browser_input = getchar();
			}

	}
	// Write the value of variable browser_input to file
	std::ofstream ost("browser_input.txt");
	if(!ost)
	{
		std::cout << "Can't open file \"data_work.txt\".\n";
	}
	ost << browser_input;
	ost.close();


	std::string browser_command = "start \"\" ";
	browser_command =  browser_command + browser_input;

	std::set<std::string> notions = { 
		"I_algorithms_lambda_range_based_for",
		"I_containers_vector_map_set",
		"II_int_make_tuple_pair_tie_template_function_typename",
		"II_unit_test_decomposition_assert_test_framework",
		"II_heading_source_pragma_once",
		"II_iterator_back_inserter_queue_deque_stack_remove_if_count_if_copy_if_Input_Forward_Random_Output",
		"II_class_parent_public_private_list_initialization_virtual_override_shared_ptr",
		"I_overloading_functions_stringstream",
		"I_class_structure_function",
		"I_text_file_output_input_stream_manipulator",
		"I_exception_throw_catch_try_run_time_error",
		"I_structure_class_method_const_method,constructure,destructure",
		"III_macros_and_class_template",
		"Ravesli_17_std_string",
		"Ravesli_18_streams_potoki_vvoda_vyvoda"

	};

	system("set os > os.txt");
	std::ifstream fin("os.txt");
	char line[4];
	if(!fin)
	{
		std::cout << " The file os.txt isn't opened\n";
	}
	bool is_Windows = 1;
	std::string os_def = "OS=W";
	int i=0;
	for(auto& ch : line)
	{
		fin >> ch;
		if(os_def[i] != ch)
		{
			is_Windows = 1;
			break;
		}
		++i;
	}
	for(const auto& ch:line)
	{
		std::cout << ch << " ";
	}
	test_cases_find_key(notions);


		char option = 'y';
	while(option != 'e')
	{
		
		display_main_menu();
		std::cout << "\nEnter the option : ";
		option = getchar();
		std::string found_key;
		switch(option){
			case 10	:	handle_option_Enter(notions);
					break;
			case 'f':	handle_option_f(notions,found_key);
					break;
			case 'e':	break;
			default:	std::cout << "Incorrect symbol.Try again.\n";
					break;
		
		}
		if(option == 'f')
		{
			std::cout << "Press buttom ... \n";
			SYSTEM(browser_command, found_key,is_Windows);
			found_key.clear();
		}
	std::cin.clear();
    	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
	}

		return 0;

}

void handle_option_Enter(const std::set<std::string>& notions)
{
	std::cout << "\n\n\t\t  Set of definitions \n";
	std::cout << "---------------------------------------------------------------\n";
	for(const auto& note:notions)
	{
		std::cout << "\n\t\t{ " << note << " }"; 
	}
	std::cout << "\n\n-----------------------------------------------------------\n";
}
void display_main_menu()
{
	std::cout << "\n\t\t Main menu";
	std::cout << "\n===============================================================\n";
	std::cout << " View all definitions	\t\t(Enter) \n";
	std::cout << " Find the definition	\t\t(f)\n";
	std::cout << " Exit			\t\t(e)\n";
	std::cout << "===============================================================\n";
}
void test_cases_find_key(const std::set<std::string>& notions)
{
	std::string input[4] = {"map", "vector", "set", "cont"};
	std::string found_key;	
	uint32_t i = 0;
	while(i < 4)
	{
		if(find_key(notions,input[i],found_key) == 0 
				|| found_key != "I_containers_vector_map_set")
		{
			std::cout << "incorrect value. i = " << i << "\n"; 
		}
	++i;
	}

}
bool find_key(
	const std::set<std::string>& notions,
	const std::string& input_user,
	std::string& found_key)
{
	for(const auto& note : notions)
	{
		if(find_substr(note,input_user))
		{
			found_key = note;
			return 1;
		}
	}
	return 0;
}

bool find_substr(const std::string& note, const std::string& input_user)
{

	for(uint32_t i=0; i<note.size(); i++)
	{
		if(note[i] == input_user[0])
		{
			for(uint32_t j=0; (j+i)< note.size() && j<input_user.size(); ++j)
			{
				if(input_user[j] != note[i+j])
				{	
					i = i+j;
					break;
				}
				if(j == (input_user.size() - 1))
				{	
					return 1;
				}
			}
		}

	}
	return 0;
}
void handle_option_f(const std::set<std::string>& notions,std::string& found_key)
{
		char correct = 'n';
	while( correct != 10 && correct != 'Y' && correct != 'y')
	{
		std::cout << "Enter the aproximate definition :";
		std::string input_user;

		while(!(std::cin >> input_user) || !(find_key(notions,input_user,found_key)))
		{
			std::cout << "No find notions.\n";
			std::cout << "Try again.\n";
		}
		std::cout << "Find file : \"" << found_key << ".pdf\"\n";
		getchar();
		std::cout << "Is it correct file?   Y/n\n";
		correct = getchar();

	}
}

