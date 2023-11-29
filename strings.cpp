#include <iostream>
#include <string>
#include <string_view>

void errorSV();

void printSV(std::string_view strV) 
{
	std::cout << strV << '\n';
}

int main() 
{
	printSV("Hello World 1!");

	std::string s2{ "Hello World 2!" };
	printSV(s2);

	std::string_view s3{ s2 };
	printSV(s3);

	errorSV();

	return 0;
}


void errorSV() 
{
	// String view sv created
	std::string_view sv{};

	{
		// String s is created within a nested block.
		std::string s{ "Hello World" };

		// sv is now viewing string S
		sv = s;
	}

	// As s was defined within a nested block which has completed, SV will now exhibit undefined behaviour. 
	std::cout << sv << '\n';
}