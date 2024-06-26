//
// Created by Nadiia Maliarenko on 10.08.23.
//

#include "RPN.hpp"
#include <sstream>

RPN::RPN() {}

RPN::RPN(RPN &r) {
	this->_numbers = r._numbers;
}

RPN &RPN::operator=(RPN &r) {
	if (this != &r)
		this->_numbers = r._numbers;
	return *this;
}

RPN::~RPN() {}

void RPN::readInput(const std::string &av) {
	std::stringstream ss(av);
	int res;

	for (char c = 0; ss >> c;) {
		if (isdigit(c))
			this->_numbers.push(c - 48);
		else if (isToken(c)){
			res = this->_numbers.top();
			this->_numbers.pop();
			switch (c) {
				case '+':
					res += this->_numbers.top();
					break;
				case '-':
					res = this->_numbers.top() - res;
					break;
				case '*':
					res *= this->_numbers.top();
					break;
				case '/':
					res = this->_numbers.top() / res;
					break;
				default:
					std::cout << "hi :)" << std::endl;
			}
			this->_numbers.pop();
			this->_numbers.push(res);
		}
		else
			throw std::invalid_argument("Error");
	}
}

bool RPN::isToken(char c) {
	return (c == '+' || c == '-' || c == '/' || c == '*');
}

void RPN::printResult() {
	if (this->_numbers.size() > 1)
		throw std::invalid_argument("Error");
	std::cout << this->_numbers.top() << std::endl;
}