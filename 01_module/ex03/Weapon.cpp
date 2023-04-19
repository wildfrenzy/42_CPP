//
// Created by Nadiia Maliarenko on 19.04.23.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)  {
//	std::cout << "> Weapon " << _type << " created" << std::endl;
}

Weapon::~Weapon() {
	//std::cout << "> Destructor for " << getType() << " called" << std::endl;
}

std::string Weapon::getType() const {
	return this->_type;
}

void Weapon::setType(std::string newtype) {
	this->_type = newtype;
}
