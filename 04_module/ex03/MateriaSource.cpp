/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:01:20 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/05 18:01:20 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}
MateriaSource::MateriaSource(const MateriaSource &mat) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	if (this != &mat)
		*this = mat;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &mat) {
	std::cout << "MateriaSource operator = called" << std::endl;
	if (this == &mat)
		return *this;
	for (int i = 0; i < 4; i++) {
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < 4; i++) {
		if (mat._inventory[i])
			this->_inventory[i] = mat._inventory[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
}

void MateriaSource::learnMateria(AMateria *l) {
	for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i])
		{
			this->_inventory[i] = l->clone();
			break;
		}
	}
	delete l;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return this->_inventory[i]->clone();
	}
	return 0;
}
