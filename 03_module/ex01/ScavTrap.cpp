
#include "ScavTrap.hpp"

#define BLUE "\x1b[1;36m"
#define RES "\x1b[0m"

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " BLUE << this->getName() << RES " is now in Gate keeper mode!" << std::endl;
}

ScavTrap::ScavTrap() {
	std::cout<< "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) {
	std::cout<< "ScavTrap Default constructor for " << name <<" called" << std::endl;
	this->setName(name);
}

ScavTrap::~ScavTrap() {
	std::cout<< "ScavTrap Destructor for " << this->getName() <<" called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav) {
	std::cout<< "Copy constructor ScavTrap called" << std::endl;
	if (this != &scav)
		*this = scav;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav) {
	if(this == &scav)
		return *this;
	//*this = scav;
	this->setName(scav.getName());
	return *this;
}