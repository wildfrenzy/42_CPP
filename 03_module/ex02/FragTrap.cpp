/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:12:03 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 14:46:30 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define BLUE "\x1b[1;36m"
#define RES "\x1b[0m"

FragTrap::FragTrap() {
	std::cout<< "FragTrap default constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
}
FragTrap::FragTrap(const std::string &name) {
	std::cout<< "FragTrap constructor for " << name <<" called" << std::endl;
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(const FragTrap &frag) {
	std::cout<< "FragTrap copy constructor for" << frag._name << " called" << std::endl;
	if (this != &frag)
		*this = frag;
}

FragTrap::~FragTrap() {
	std::cout<< "FragTrap destructor for " << this->_name << " called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &frag) {
	if (this == &frag)
		return *this;
	this->_name = frag._name;
	this->_attack = frag._attack;
	this->_energy = frag._energy;
	this->_health = frag._health;
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " BLUE << this->_name << RES " gave high fives!" << std::endl;
}
