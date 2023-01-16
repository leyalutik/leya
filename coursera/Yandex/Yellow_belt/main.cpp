//Реализуйте шаблонную функцию GetRefStrict,
//которая на вход принимает: map и значение ключа k.
//Если элемент по ключу k в коллекции отсутствует, 
//то функция должна бросить исключение runtime_error,
//иначе вернуть ссылку на элемент в коллекции.
//
//

#include<iostream>
#include<map>
#include<exception>

template<class T, class P>
P& GetRefStrict(std::map<T,P>& m, T value)
{
	if(m.count(value) == 0)	
	{
		throw std::runtime_error("No key");
	}
	return m[value];
}


int main () {
	try
	{
		std::map<int, std::string> m = {{0,"Hello"}};
		std::string &i = GetRefStrict(m,0);
		i = "new_value";
		std::cout << m[0] << '\n';
	}
	catch(std::runtime_error& er)
	{
		std::cout << er.what() << std::endl;
	}
	return 0;
}
