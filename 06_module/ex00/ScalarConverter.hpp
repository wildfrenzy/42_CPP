//
// Created by Nadiia Maliarenko on 04.08.23.
//

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

#define BLUE "\x1b[1;36m"
#define YELLOW "\x1b[1;92m"
#define RED "\x1b[1;31m"
#define RES "\x1b[0m"

class ScalarConverter {
public:
	ScalarConverter();
	ScalarConverter(ScalarConverter &s);
	ScalarConverter &operator=(ScalarConverter &s);
	~ScalarConverter();

	void convert(std::string &s);

	std::string getStr(void) const;

	operator int();
	operator char();
	operator float ();
	operator double ();

private:
	std::string _str;

};


#endif //SCALARCONVERTER_HPP
