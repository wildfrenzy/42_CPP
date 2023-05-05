/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:57:37 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/04 15:57:40 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name) {
	std::cout << "Character constructor for "<< name << " called" << std::endl;
}

Character::Character(const Character &ch) {
	std::cout << "Character copy constructor called" << std::endl;
	if (this != &ch)
		*this = ch;
}

Character &Character::operator=(const Character &ch) {
	std::cout << "Character = operator called" << std::endl;
	if (this == &ch)
		return *this;
	this->_name = ch._name;
//	this->inventory = ch.clone(); // clone all 4, not 1
	return *this;
}

Character::~Character(){
	std::cout << "Character destructor called" << std::endl;
}

const std::string &Character::getName() const {return this->_name;}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i])
			this->_inventory[i] = m;
	}
}

void Character::unequip(int idx) {
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
