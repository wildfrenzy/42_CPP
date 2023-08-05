//
// Created by Nadiia Maliarenko on 05.08.23.
//

#include "Data.hpp"

Data::Data() : _smth("yes"){}

Data::Data(std::string const &smth) : _smth(smth){}

Data::Data(Data &d) {
	this->_smth = d._smth;
}

Data &Data::operator=(Data &d) {
	if (this != &d)
		this->_smth = d._smth;
	return *this;
}

std::string Data::getSmth() const {
	return this->_smth;
}

Data::~Data() {}