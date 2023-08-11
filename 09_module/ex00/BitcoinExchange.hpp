//
// Created by Nadiia Maliarenko on 10.08.23.
//

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange {
public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange &b);
	BitcoinExchange &operator=(BitcoinExchange &b);
	~BitcoinExchange();

	float getValue(std::string &date);
	void readInput(std::string const &file);

private:

	void readData(std::ifstream	&ifs, std::map<std::string, float> &data);

	std::map<std::string, float> _data;
	std::map<std::string, float> _input;
};


#endif //BITCOINEXCHANGE_HPP
