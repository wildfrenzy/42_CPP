//
// Created by Nadiia Maliarenko on 10.08.23.
//

#include "BitcoinExchange.hpp"
#include <ctime>

BitcoinExchange::BitcoinExchange() {
	std::ifstream	ifs("data.csv");
	if (!ifs.is_open())
	{
		std::cout << "Error: could not open [data.csv] file. " << std::endl;
		throw std::exception();
	}

	BitcoinExchange::readData(ifs, this->_data);

	//Todo:
	// 4. do output

}

BitcoinExchange::BitcoinExchange(BitcoinExchange &b) {
	if (this != &b)
		this->_data = b._data;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange &b) {
	if (this != &b)
		this->_data = b._data;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

float BitcoinExchange::getValue(std::string &date){
	return this->_data.lower_bound(date)->second;
}

void BitcoinExchange::readData(std::ifstream &ifs, std::map<std::string, float> &data) {
	std::string line;
	std::size_t found;
	std::string date;
	struct std::tm tmp;
	float value;

	std::getline(ifs, line); // bla bla la skip first line

	while (std::getline(ifs, line))
	{
		found = line.find(',');
		if (found == std::string::npos)
			throw std::invalid_argument("Error: Wrong file format.");
		date = line.substr(0, found);
		if (!strptime(date.c_str(), "%Y-%m-%d", &tmp))
			throw std::invalid_argument("Error: Invalid date.");
		value = std::stof(line.substr(found + 1, line.length()));
		if (value < 0)
			throw std::invalid_argument("Error: Invalid exchange rate.");
		data[date] = value;
	}

}

void BitcoinExchange::readInput(std::string const &file) {
	std::ifstream	ifs(file);
	if (!ifs.is_open())
	{
		std::cout << "Error: could not open [ " << file << " ] file. " << std::endl;
		throw std::exception();
	}

	std::string line;
	std::size_t found;
	std::string date;
	struct std::tm tmp;
	float value;

	std::getline(ifs, line); // bla bla la skip first line

	while (std::getline(ifs, line))
	{
		found = line.find(" | ");
		if (found == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		date = line.substr(0, found);
		if (!strptime(date.c_str(), "%Y-%m-%d", &tmp))
		{
			std::cout << "Error: bad input => " + date << std::endl;
			continue;
		}
		value = std::stof(line.substr(found + 3, line.length()));
		if (value < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (value > 1000)
		{
			std::cout << "Error: too large a number" << std::endl;
			continue;
		}
		std::cout << date << " => " << value << " = "  << getValue(date) * value << std::endl;
	}
}

