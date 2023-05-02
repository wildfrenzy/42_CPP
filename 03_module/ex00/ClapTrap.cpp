/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:53:26 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/27 21:07:02 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define BLUE "\x1b[1;36m"
#define YELLOW "\x1b[1;92m"
#define RED "\x1b[1;31m"
#define RES "\x1b[0m"

ClapTrap::ClapTrap() : _health(10), _energy(10), _attack(10) {
	std::cout<< "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _health(10), _energy(10), _attack(10){
	std::cout<< "Default constructor for " << name <<" called" << std::endl;
}
ClapTrap::~ClapTrap() {
	std::cout<< "Destructor for " << this->getName() <<" called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &clap) {
	std::cout<< "Copy constructor called" << std::endl;
	if (this != &clap)
		*this = clap;
}

unsigned int ClapTrap::getAttack() const { return this->_attack; }

unsigned int ClapTrap::getEnergy() const { return this->_energy; }

unsigned int ClapTrap::getHealth() const { return this->_health; }

std::string ClapTrap::getName() const { return this->_name; }

ClapTrap &ClapTrap::operator=(const ClapTrap &clap) {
	if (this == &clap)
		return *this;
	this->_name = clap.getName();
	this->_attack = clap.getAttack();
	this->_energy = clap.getEnergy();
	this->_health = clap.getHealth();
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_energy > 0)
	{
		std::cout << "ClapTrap " BLUE << this->getName() << RES" attacks "YELLOW <<
			target << RES", causing " RED << this->getAttack() << RES" points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "ClapTrap " BLUE << this->getName() << RES" doesn't have energy!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if(this->_health >= amount)
	{
		std::cout << "ClapTrap " BLUE << this->getName() << RES" takes " RED << amount << RES" damage!" << std::endl;
		this->_health -= amount;
	}
	else
		std::cout << "ClapTrap " BLUE << this->getName() << RES" can't take " RED << amount << RES" damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy > 0)
	{
		std::cout << "ClapTrap " BLUE << this->getName() << RES" repaired " RED << amount << RES" health!" << std::endl;
		this->_health += amount;
		this->_energy -= 1;
	}
	else
		std::cout << "ClapTrap " BLUE << this->getName() << RES" doesn't have energy!" << std::endl;
}