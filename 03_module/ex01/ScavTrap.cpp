/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:03:48 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 14:23:39 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define BLUE "\x1b[1;36m"
#define YELLOW "\x1b[1;92m"
#define RED "\x1b[1;31m"
#define RES "\x1b[0m"

ScavTrap::ScavTrap() {
	std::cout<< "ScavTrap default constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(const std::string &name){
	std::cout<< "ScavTrap constructor for " << name <<" called" << std::endl;
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::~ScavTrap() {
	std::cout<< "ScavTrap destructor for " << this->_name <<" called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav) {
	std::cout<< "ScavTrap copy constructor  called" << std::endl;
	if (this != &scav)
		*this = scav;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav) {
	if(this == &scav)
		return *this;
	this->_name = scav._name;
	this->_attack = scav._attack;
	this->_energy = scav._energy;
	this->_health = scav._health;

	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " BLUE << this->_name << RES " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->_energy > 0)
	{
		std::cout << "ScavTrap " BLUE << this->_name << RES" attacks " YELLOW <<
			target << RES", causing " RED << this->_attack << RES" points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "ScavTrap " BLUE << this->_name << RES" doesn't have energy!" << std::endl;
}