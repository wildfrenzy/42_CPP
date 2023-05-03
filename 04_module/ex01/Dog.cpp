/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:10:16 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 16:10:16 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout<< "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &dog) {
	std::cout<< YELLOW "Dog copy constructor called" RES << std::endl;
	if (this != &dog)
		this->_brain = new Brain(*dog.getBrain());
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout<< YELLOW "Dog assignment operator called" RES << std::endl;
	if(this == &dog)
		return *this;
	this->type = dog.getType();
	this->_brain = dog.getBrain();
	return *this;
}

Brain *Dog::getBrain() const {return this->_brain;}

Dog::~Dog() {
	std::cout<< "Dog destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const {
	std::cout<< YELLOW "woof woof ▼・ᴥ・▼" RES << std::endl;
}