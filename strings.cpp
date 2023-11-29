#include <iostream>
#include <string>
#include <string_view>

void printString(std::string str) 
{
	std::cout << str << '\n';
}

int main() 
{
	printString("This is a string!");

	return 0;
}