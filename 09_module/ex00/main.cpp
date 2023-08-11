//
// Created by Nadiia Maliarenko on 10.08.23.
//

#include "BitcoinExchange.hpp"


int main (int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return -1;
	}
	std::ifstream	ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "Error: could not open file: " << av[1] << std::endl;
		return -1;
	}
	try {
		BitcoinExchange exchange;
		//std::string str = "2011-01-28";
		//std::cout << exchange.getValue(str) << std::endl;

		exchange.readInput(av[1]);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}


	return 0;
}