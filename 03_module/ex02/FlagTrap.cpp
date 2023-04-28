/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:12:03 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/28 18:12:03 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"
#define BLUE "\x1b[1;36m"
#define RES "\x1b[0m"

FlagTrap::FlagTrap() {
	std::cout<< "FlagTrap Default constructor called" << std::endl;
}
FlagTrap::FlagTrap(const std::string &name) {
	std::cout<< "FlagTrap constructor for " << name <<" called" << std::endl;
	this->setName(name);
	this->setHealth(100);
	this->setEnergy(100);
	this->setAttack(30);
}

FlagTrap::FlagTrap(const FlagTrap &flag) {
	std::cout<< "Copy constructor FlagTrap for" << flag.getName() << " called" << std::endl;
	if (this != &flag)
		*this = flag;
}

FlagTrap::~FlagTrap() {
	std::cout<< "FlagTrap Destructor for " << this->getName() << " called" << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &flag) {
	if (this == &flag)
		return *this;
	this->setName(flag.getName());
	this->setAttack(flag.getAttack());
	this->setEnergy(flag.getEnergy());
	this->setHealth(flag.getHealth());
	return *this;
}

void FlagTrap::highFivesGuys() {
	std::cout << "FlagTrap " BLUE << this->getName() << RES " gave high fives!" << std::endl;
}
