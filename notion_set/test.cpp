#include<iostream>
#include "test_framework.h"

int function(int a, int b)
{
	return a+b;
}

void test_function()
{
	AssertEqual(function(5,3),8,"hint");
}

int main()
{
	TestRunner tr;
	tr.RunTest(test_function, "test_function");

	return 0;
}
