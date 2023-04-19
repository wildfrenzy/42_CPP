//
// Created by Nadiia Maliarenko on 19.04.23.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _weapon(type) {

}

HumanA::~HumanA() {
	//std::cout << "Destructor called" << std::endl;
}

std::string HumanA::getName() const {
	return this->_name;
}

Weapon HumanA::getWeapon() const {
	return this->_weapon;
}

void HumanA::attack() {
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;

}