
#include "menu_main.h"




menu_main::menu_main(const std::string browser_command_value,
		int length_word_column_value, int length_def_column_value)
{
}

menu_main::menu_main(const std::string browser_command_value)
{

}

menu_main::
menu_main::

menu_main::
menu_main::
menu_main::
menu_main::
menu_main::
menu_main::
menu_main::
menu_main::
menu_main::
menu_main::
menu_main::
menu_main::
menu_main::
menu_main::
menu_main::



	menu_main(const std::string browser_command_value,
		int length_word_column_value, int length_def_column_value);
	menu_main(const std::string browser_command_value); 

	//������� ������� ������ menu_course
	void launch();
	
	//������� ���������� ������
	void choose_option(std::string& option)

	//������� ������� ������� ������
	void launch_option(const std::string option);

	//����� ���� �� �����
 	void display_menu();

	//������� ������� ��� �����, ������� ���� � ��������� (������������)
	void option_1();

	//output full list of words
	void view_all_words();

	//find woreds
	void option_2();
	
	//������� ������������, string thing ��� ����� ��� �����
	bool is_digit(const std::string);

	//add word and definition
	void option_3();
		
	//������� ���������� ���� �����+����������� � ��������--
	void add_word_definition(const std::string Word, const std::string Definition);
	
	//Launch Ravesli menu
	void option_4(); 
	
	//Launch Yandex_coursera menu
	void option_5();

	//Change browser_command
	void option_6();

	void change_browser_command(std::string new_command);

	//��������  ��������� ��������� ���� �� ��������, ��������� ������� map dictionary.
	~menu_main();
};