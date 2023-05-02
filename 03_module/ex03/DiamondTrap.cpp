/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:10:51 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/28 19:10:51 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#define BLUE "\x1b[1;36m"
#define RES "\x1b[0m"

DiamondTrap::DiamondTrap() {
	this->_name = "Default";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
	std::cout<< "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) {
	std::cout<< "DiamondTrap constructor for " << name <<" called" << std::endl;
	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dia){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	if (this != &dia)
		*this = dia;
}

DiamondTrap::~DiamondTrap() {
	std::cout<< "DiamondTrap destructor for " << this->_name<< " called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dia) {
	if (this == &dia)
		return *this;

	this->setName(dia._name);
	this->ClapTrap::setName(this->getName() + "_clap_name");
	this->_attack = dia._attack;
	this->_energy = dia._energy;
	this->_health = dia._health;
	return *this;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " BLUE << this->_name << RES ", my ClapTrap is " BLUE << this->ClapTrap::_name  << RES " :)" << std::endl;
}