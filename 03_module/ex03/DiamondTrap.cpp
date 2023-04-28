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

DiamondTrap::DiamondTrap() {
	this->_name = "Default";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_health = FlagTrap::getHealth();
	this->_energy = ScavTrap::getEnergy();
	this->_attack = FlagTrap::getAttack();
	std::cout<< "DiamondTrap Default constructor for " << this->_name <<" called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) {
	std::cout<< "DiamondTrap constructor for " << name <<" called" << std::endl;
	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_health = FlagTrap::getHealth();
	this->_energy = ScavTrap::getEnergy();
	this->_attack = FlagTrap::getAttack();
}

DiamondTrap::DiamondTrap(const DiamondTrap &dia) {
	if (this != &dia)
		*this = dia;
}

DiamondTrap::~DiamondTrap() {
	std::cout<< "DiamondTrap Destructor for " << this->_name<< " called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dia) {
	if (this == &dia)
		return *this;
	//this->_name = dia.getName(); // stays default
	this->setName(dia.getName()); // sets to student
	this->_attack = dia.getAttack();
	this->_energy = dia.getEnergy();
	this->_health = dia.getHealth();
	return *this;
}

void DiamondTrap::attack(const std::string &target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->_name << ", my ClapTrap is " << this->ClapTrap::_name << std::endl;
}