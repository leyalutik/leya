#include "configure_preparation.h"

preparing_module(string& command_browser)
{
	std::cout << Launching function \"preparing_modele()\"\n";
	command_browser = "start \"\" chrome.exe"; 
}