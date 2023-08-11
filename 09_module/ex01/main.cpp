//
// Created by Nadiia Maliarenko on 10.08.23.
//

#include <iostream>
#include "RPN.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Error" << std::endl;
		return 0;
	}
	try{
		RPN rpn;
		rpn.readInput(av[1]);
		rpn.printResult();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}