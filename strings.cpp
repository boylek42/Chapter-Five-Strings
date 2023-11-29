#include <iostream>
#include <string>
#include <string_view>

void printS(std::string str) 
{
	std::cout << str << '\n';
}

void printSV(std::string_view str)
{
	std::cout << str << '\n';
}

int main() 
{
	using namespace std::string_view_literals;
	using namespace std::string_literals;

	printS("This is a string!"s);
	printSV("This is a string view"sv);

	return 0;
}