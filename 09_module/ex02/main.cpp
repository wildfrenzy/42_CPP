//
// Created by Nadiia Maliarenko on 12.08.23.
//

#include "PmergeMe.hpp"

int main(int ac, char  *av[])
{
	PmergeMe p;
	int num;

	for (int i = 1; i < ac; ++i) {
		num = std::atoi(av[i]);
		if (num < 0){
			std::cout << "Error" << std::endl;
			return 0;
		}
		p.addInput(num);
	}
	std::cout << "Before:\t";
	p.printSequence();
	p.sort();

	return 0;
}