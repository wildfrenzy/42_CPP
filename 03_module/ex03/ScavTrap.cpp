/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:11:32 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/28 18:11:32 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define BLUE "\x1b[1;36m"
#define RES "\x1b[0m"

ScavTrap::ScavTrap() {
	std::cout<< "ScavTrap Default constructor called" << std::endl;
	this->_name = "Default";
	this->setHealth(100);
	this->setEnergy(50);
	this->setAttack(20);
}

ScavTrap::ScavTrap(const std::string &name) {
	std::cout<< "ScavTrap constructor for " << name <<" called" << std::endl;
	this->setName(name);
	this->setHealth(100);
	this->setEnergy(50);
	this->setAttack(20);
}

ScavTrap::~ScavTrap() {
	std::cout<< "ScavTrap Destructor for " << this->getName() << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav) {
	std::cout<< "Copy constructor ScavTrap for" << scav.getName() << " called" << std::endl;
	if (this != &scav)
		*this = scav;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav) {
	if(this == &scav)
		return *this;
	this->setName(scav.getName());
	this->setAttack(scav.getAttack());
	this->setEnergy(scav.getEnergy());
	this->setHealth(scav.getHealth());
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " BLUE << this->getName() << RES " is now in Gate keeper mode!" << std::endl;
}