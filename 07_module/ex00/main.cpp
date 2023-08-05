#include "whatever.hpp"
#include <iostream>

int main()
{
	int b = 4;
	int c = 2;

	std::string d = "Lviv";
	std::string e = "Vinnytsia";

	swap(b, c);
	swap(d, e);

	std::cout << "Int: " << b << " -> " << c << std::endl;
	std::cout << "String: " << d << " -> " << e << std::endl;

	std::cout << "min(b, c) = " << ::min(b, c) << std::endl;
	std::cout << "max(b, c) = " << ::max(b, c) << std::endl;

	std::cout << "min(d, e) = " << ::min(d, e) << std::endl;
	std::cout << "max(d, e) = " << ::max(d,e) << std::endl;
}