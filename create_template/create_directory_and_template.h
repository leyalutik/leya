#pragma once

#include <vector>
#include <map>
#include <set>


#include<exception>
#include <cassert>

#include<cstdlib>

#include<iostream>
#include<string>
#include <sstream>
#include <fstream>

#include <chrono>

//Module
//Destination: create simple template for helping with programming tasks from learning books
//Usage: 
//	include "template_work.h"
//	write finction create_template(std::string absolute_path, std::string name_directory)
//	This one effects 
//	1) Create directory absolute_path/name_directory
//	2) Create file main.cpp with neccessary 'includes'
//	3) Create Makefile with GOAL=name_directory
//
//	Using executive file everythere
//	create bat file
//	create everything
//
//	create file, how
//

#define SYSTEM(x)				\
{						\
std::string var = x;				\
const char* command = var.c_str();		\
system(command);				\
}	

void create_directory_and_template()
{
	std::cout << "Input name of directory and then press Enter ...\n";
	std::string name_directory;
	std::cin >> name_directory;

	std::ofstream in_file_main("main.cpp1");
	in_file_main << "#include <vector>\n#include <map>\n#include <set>\n#include<exception>"
		<< "\n#include <cassert>\n#include<cstdlib>\n#include<iostream>"
		<< "\n#include<string>\n#include <sstream>\n#include <fstream>"
		<< "\n#include <chrono>\n"
		<< "\n\n int main()"
		<< "\n{"
		<< "\n\n"
		<< "\tstd::cout << \"Hello!\\n\";\n"
		<< "\n\treturn 0;\n"
		<< "}\n";
	in_file_main.close();

	std::ofstream in_file_Makefile("Makefile1"); 
	in_file_Makefile << "CXX = g++\n"
		<< "CXXFLAGS = -ggdb -Wall -pthread -std=c++20\n"
		<< "SOURCE=main.cpp\n"
		<< "GOAL=" << name_directory << "\n"
		<< "##GOAL=$(SOURCE:.cpp=$*)\n"
		<< "##MODULES=template_work.cpp\n"
		<< "OBJMODULES=$(MODULES:.cpp=.o)\n"
		<< "\nall: run\n"
		<< "\nrun : $(GOAL)\n"
		<< "\t./$(GOAL)\n"
		<< "\n.o:.cpp .h\n"
		<< "\t$(CXX) $(CXXFLAGS) -c $<\n"
		<< "\n$(GOAL) : $(SOURCE) $(OBJMODULES)\n"
		<< "\t$(CXX) $(CXXFLAGS) $^ -o $@\n"
		<< "\nclean :\n"
		<< "\trm -f *.o *\n";
	in_file_Makefile.close();
 		//std::cout << "Choose the wanted directory.\n";
		//std::cout << "Enter the command \" cd | clip \"\n"
	//	<< "And then paste that in next line.\n";
	//std::string absolute_path;
	//std::cin >> absolute_path;
	SYSTEM("mkdir " + name_directory); 
	SYSTEM("move main.cpp1 " + name_directory);
	SYSTEM("move Makefile1 " + name_directory);
	SYSTEM("move " + name_directory + "\\main.cpp1 " + name_directory + "\\main.cpp"); 
	SYSTEM("move " + name_directory + "\\Makefile1 " + name_directory + "\\Makefile"); 
}








template <class T>
std::ostream& operator << (std::ostream& os, const std::set<T>& s) {
  os << "{";
  bool first = true;
  for (const auto& x : s) {
    if (!first) {
      os << ", ";
    }
    first = false;
    os << x;
  }
  return os << "}";
}

template <class K, class V>
std::ostream& operator << (std::ostream& os, const std::map<K, V>& m) {
  os << "{";
  bool first = true;
  for (const auto& kv : m) {
    if (!first) {
      os << ", ";
    }
    first = false;
    os << kv.first << ": " << kv.second;
  }
  return os << "}";
}

template<class T, class U>
void AssertEqual(const T& t, const U& u,
    const std::string& hint)
{
  if (t != u) {
	  std::ostringstream os;
    os << "Assertion failed: " << t << " != " << u
       << " hint: " << hint;
    throw std::runtime_error(os.str());
  }
}

inline void Assert(bool b, const std::string& hint) {
  AssertEqual(b, true, hint);
}

class TestRunner {
public:
  template <class TestFunc>
  void RunTest(TestFunc func, const std::string& test_name) {
    try {
	  func();
	  std::cerr << test_name << " OK" << std::endl;
	} catch (std::runtime_error& e) {
	  ++fail_count;
	  std::cerr << test_name << " fail: " << e.what() << std::endl;
	}
  }

  ~TestRunner() {
    if (fail_count > 0) {
	    std::cerr << fail_count << " unit tests failed. Terminate" << std::endl;
      exit(1);
    }
  }

private:
  int fail_count = 0;
};


