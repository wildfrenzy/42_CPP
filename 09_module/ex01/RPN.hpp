//
// Created by Nadiia Maliarenko on 10.08.23.
//

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN {
public:
	RPN();
	RPN(RPN &r);
	RPN &operator=(RPN &r);
	~RPN();

	void readInput(std::string const &av);
	void printResult(void);

private:
	bool isToken(char c);
	std::stack<int> _numbers;
};


#endif //RPN_HPP
