

#include <iostream>
#include <string>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "String address:" << &string << std::endl;
	std::cout << "StringPTR address:" << stringPTR << std::endl;
	std::cout << "StringRef address:" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String:" << string << std::endl;
	std::cout << "StringPTR:" << *stringPTR << std::endl;
	std::cout << "StringRef:" << stringREF << std::endl;
}
