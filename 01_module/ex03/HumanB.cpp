//
// Created by Nadiia Maliarenko on 19.04.23.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon("") {
}

HumanB::~HumanB() {}

std::string HumanB::getName() const {
	return this->_name;
}

Weapon HumanB::getWeapon() const {
	return this->_weapon;
}

void HumanB::setWeapon(Weapon type) {
	this->_weapon = type;
}

void HumanB::attack() {
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}