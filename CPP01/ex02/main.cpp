

#include <iostream>
#include <string>

int	main()
{
	std::string var = "HI THIS IS BRAIN";
	std::string *varPTR = &var;
	std::string &varREF = var;

	std::cout << "String address:" << &var << std::endl;
	std::cout << "StringPTR address:" << varPTR << std::endl;
	std::cout << "StringRef address:" << &varREF << std::endl;
	std::cout << std::endl;
	std::cout << "String:" << var << std::endl;
	std::cout << "StringPTR:" << *varPTR << std::endl;
	std::cout << "StringRef:" << varREF << std::endl;
}