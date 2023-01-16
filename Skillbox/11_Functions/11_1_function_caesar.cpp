/*
Задание 1. Шифр Цезаря

Что нужно сделать

В древности для шифрования сообщений использовался такой способ: все буквы в сообщении сдвигались на одно и то же число позиций в алфавите. Число позиций могло быть как положительным, так и отрицательным и являлось параметром шифра — его ключом. Если для сдвига на данное число позиций алфавита не хватает, то он зацикливается (то есть буква с номером 27 — это снова буква a, буква с номером 28 — это буква b и так далее).

Например, слово abracadabra при сдвиге на десять позиций превратится в klbkmknklbk. Этот простейший шифр называется шифром Цезаря. Регистр букв (заглавные и строчные) менять не нужно. Напишите функцию encrypt_caesar от строки и числа, которая возвращает исходную строку, зашифрованную шифром Цезаря с параметром, равным данному числу. Также напишите функцию decrypt_caesar, выполняющую обратное преобразование. Считаем, что входные строки состоят лишь из английских букв. Если там содержатся и другие символы, то их надо игнорировать.
*/

/*
 *
 * }
 
   std::string encrypt_caesar(const std::string& origin_str, const int& encrypted_key)
   {
   	std::string modified_str = origin_str;
		
	for(auto& symbol : modified_str)
	{
		symbol = encrypt_caesaer_symb(symbol,encrypted_key);

	}

   }
   ("", 2) - ""
   "abc",0 - "abc"
   ("abc",1) - "bcd"
   ("ABC",1) - "BCD"
   ("Abc",2) - "Cde"
   "aBC",3 - "dEF"
   "abc bcd" , 1 - "bcd cde"

   int modify_encrypted_key (const int& encrypted_key);
   преобразовывают по модулю количество букв в алфавите
   0 - 0
   4 -4
   27 - 1
   26 - 0
   bool is_english_letter(const int& ansi_number);


 */


#include <iostream>
#include <string>
#include "test_framework.h"

const int  ALPHABET_LENGTH = 26;

char encrypt_caesar_symb(const char& origin_symb, const int& positive_encrypted_key);
bool is_english_letter(const char& symb);
std::string encrypt_caesar(const std::string& origin_str, const int& encrypted_key);
int convert_key_to_positive(const int& encrypted_key);
std::string decrypt_caesar(const std::string& origin_str, const int& encrypted_key);
bool is_english_letter(const char& symb)
{
		return ( (symb <= 'z' && symb >= 'a') || 
		(symb <= 'Z' && symb >= 'A') );
}

char encrypt_caesar_symb(const char& origin_symb, const int& encrypted_key){
	char modified_symb = origin_symb;
	if(is_english_letter(origin_symb))
	{	
		char upper_boundary = 'Z';    
		char lower_boundary = 'A';

		if(origin_symb <= 'z' && origin_symb >= 'a') 
		{
			upper_boundary = 'z';
			lower_boundary = 'a';
		}

		int positive_encrypted_key = convert_key_to_positive(encrypted_key);
		modified_symb = 
			lower_boundary +
				((origin_symb-lower_boundary + 
			  		(positive_encrypted_key%ALPHABET_LENGTH))
			 	%(upper_boundary-lower_boundary+1));

	
	}
	return modified_symb;
}
int convert_key_to_positive(const int& encrypted_key)
{
	int positive_encrypted_key = encrypted_key;
	if(positive_encrypted_key < 0 )
	{
		positive_encrypted_key = -positive_encrypted_key%ALPHABET_LENGTH;
		positive_encrypted_key = ALPHABET_LENGTH - positive_encrypted_key ;
	}
	return positive_encrypted_key;


}
std::string encrypt_caesar(const std::string& origin_str, const int& encrypted_key)
{
   	std::string modified_str = origin_str;
			
	for(auto& symbol : modified_str)
	{
		symbol = encrypt_caesar_symb(symbol,encrypted_key);

	}
	return modified_str;
}

std::string decrypt_caesar(const std::string& origin_str, const int& encrypted_key)
{
	return encrypt_caesar(origin_str,(-1)*encrypted_key);
}

void test_encrypt_caesar()
{
	AssertEqual(encrypt_caesar("",2),"","1");
	AssertEqual(encrypt_caesar("abc",0),"abc","2");
	AssertEqual(encrypt_caesar("abc",1),"bcd","3");
	AssertEqual(encrypt_caesar("ABC",1),"BCD","4");
	AssertEqual(encrypt_caesar("Abc",2),"Cde","5");
	AssertEqual(encrypt_caesar("Lorem ipsum dolor sit amet consectetur adipiscing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua Ut enim ad minim veniam quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur Excepteur sint occaecat cupidatat non proident sunt in culpa qui officia deserunt mollit anim id est laborum",-1),
			"Knqdl hortl cnknq rhs zlds bnmrdbsdstq zchohrbhmf dkhs rdc cn dhtrlnc sdlonq hmbhchctms ts kzanqd ds cnknqd lzfmz zkhptz Ts dmhl zc lhmhl udmhzl pthr mnrsqtc dwdqbhszshnm tkkzlbn kzanqhr mhrh ts zkhptho dw dz bnllncn bnmrdptzs Cthr ztsd hqtqd cnknq hm qdoqdgdmcdqhs hm unktoszsd udkhs drrd bhkktl cnknqd dt etfhzs mtkkz ozqhzstq Dwbdosdtq rhms nbbzdbzs btohczszs mnm oqnhcdms rtms hm btkoz pth neehbhz cdrdqtms lnkkhs zmhl hc drs kzanqtl","6");
	AssertEqual(decrypt_caesar("The quick brown fox jumps over the lazy dog",-5),"Ymj vznhp gwtbs ktc ozrux tajw ymj qfed itl","7");
	AssertEqual(decrypt_caesar("Ymj vznhp gwtbs ktc ozrux tajw ymj qfed itl",5),"The quick brown fox jumps over the lazy dog","8");
}
void test_encrypt_caesar_symb()
{

	AssertEqual(encrypt_caesar_symb('a',1),'b',"1");
	AssertEqual(encrypt_caesar_symb('a',0),'a',"2");
	AssertEqual(encrypt_caesar_symb('z',1),'a',"3");
	AssertEqual(encrypt_caesar_symb('a',26),'a',"4");
	AssertEqual(encrypt_caesar_symb('a',27),'b',"5");
	AssertEqual(encrypt_caesar_symb('a',28),'c',"6");
	AssertEqual(encrypt_caesar_symb('y',52),'y',"5");
	AssertEqual(encrypt_caesar_symb('y',-1),'x',"6");
	AssertEqual(encrypt_caesar_symb('a',-1),'z',"7");
	AssertEqual(encrypt_caesar_symb(' ',-1),' ',"8");
	AssertEqual(encrypt_caesar_symb('%',1),'%',"9");
}

int main()
{
	TestRunner tr;
	tr.RunTest(test_encrypt_caesar_symb,"test_encrypt_caesar_symb");
	tr.RunTest(test_encrypt_caesar,"test_encrypt_caesar");	
 	return 0;
	
}
