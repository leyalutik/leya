#include<iostream>
#include<string>
#include<algorithm>

class Person
{
	public: 
		std::string _first_name;
		std::string _last_name;
	 	int _age;
	public:
		Person(const std::string & f_name, const std::string& l_name, const int& a)
			:_first_name(f_name),_last_name(l_name),_age(a)
		{}
		void greeting()
		{
			std::cout << "Hello, I'm a person " << _first_name << std::endl;
		}


};

class Employee : public Person
{
	public:
		int _inn;
		int _number_passport;

	public:
		Employee(const std::string & f_name, const std::string& l_name, const int& a,
				const int& inn, const int& number_passport)
			: Person(f_name,l_name,a),_inn(inn), _number_passport(number_passport)
		{}
		void greeting()
		{
			std::cout << "Hello, I'm an employee " << _first_name<< std::endl;
		}
};
	
class Developer : public Employee
{
	private:
		int _level;
	public:
		Developer(const std::string & f_name, const std::string& l_name, const int& a,
				const int& inn, const int& number_passport,
				const int& level)
			:Employee(f_name,l_name,a,inn,number_passport), _level(level)
		{
			std::cout << _inn << std::endl;
		}
		void greeting()
		{
			std::cout << "Hello, I'm a developer " << _first_name << std::endl; 
		}			


};

int main()
{

	std::string str = "Hello";
	sort(str.begin(), str.end());

	return 0;
}
