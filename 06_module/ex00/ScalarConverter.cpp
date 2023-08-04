//
// Created by Nadiia Maliarenko on 04.08.23.
//

#include "ScalarConverter.hpp"
#include "limits.h"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter &s) {
	(void)s;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &s) {
	(void)s;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string &s) {
	this->_str = s;
}

ScalarConverter::operator char() {
	char c = 0;
	if (this->_str.length() == 1)
	{
		try {
			c = static_cast<char>(std::stoi(this->_str));
		}
		catch (const std::exception &e){
			std::string expr = e.what();
			std::size_t dots = expr.find(':');
			expr.erase(0, dots);
			std::cout << BLUE"[char]:" RES << " Impossible: " << expr << std::endl;
			//std::cout << BLUE"[char]:" RES << " Impossible: " << e.what() << std::endl;

			return (0);
		}
		if (c >= ' ' && c <= '~')
			std::cout << BLUE"[char]:" RES << " '" << c << "'" << std::endl;
		else
			std::cout << BLUE"[char]:" RES << " Non displayable" << std::endl;
	}
	else
	{
		int i;
		try {
			i = std::stoi(this->_str);
		}
		catch (const std::exception &e){
			std::string expr = e.what();
			std::size_t dots = expr.find(':');
			expr.erase(0, dots + 2);
			std::cout << BLUE"[char]:" RES << " Impossible: " << expr << std::endl;
			return (0);
		}
		if (i < CHAR_MIN || i > CHAR_MAX){
			std::cout << BLUE"[char]:" RES << " Impossible: Out of range" << std::endl;
			return (0);
		}
		c = static_cast<char>(i);
		if (c >= ' ' && c <= '~')
			std::cout << BLUE"[char]:" RES << " '" << c << "'" << std::endl;
		else
			std::cout << BLUE"[char]:" RES << " Non displayable" << std::endl;
	}
	return c;
}

ScalarConverter::operator int() {
	int i;
	try {
		i = std::stoi(this->_str);
	}
	catch (const std::exception &e){
		std::string expr = e.what();
		std::size_t dots = expr.find(':');
		expr.erase(0, dots + 2);
		std::cout << BLUE"[int]:" RES << " Impossible: " << expr << std::endl;
		return (0);
	}
	std::cout << BLUE"[int]: " RES  << i << std::endl;
	return i;
}

ScalarConverter::operator float() {
	float f;
	try {
		f = std::stof(this->_str);
	}
	catch (const std::exception &e){
		std::string expr = e.what();
		std::size_t dots = expr.find(':');
		expr.erase(0, dots + 2);
		std::cout << BLUE"[float]:" RES << " Impossible: " << expr << std::endl;
		return (0);
	}
	std::cout << BLUE"[float]: " RES  << f << "f" << std::endl;
	return f;
}

ScalarConverter::operator double() {
	double d;
	try {
		d = std::stof(this->_str);
	}
	catch (const std::exception &e){
		std::string expr = e.what();
		std::size_t dots = expr.find(':');
		expr.erase(0, dots + 2);
		std::cout << BLUE"[double]:" RES << " Impossible: " << expr << std::endl;
		return (0);
	}
	std::cout << BLUE"[double]: " RES  << d << std::endl;
	return d;
}