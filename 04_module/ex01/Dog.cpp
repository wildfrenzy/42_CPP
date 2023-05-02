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

Dog::Dog(const Dog &cat) {
	std::cout<< "Dog copy constructor called" << std::endl;
	if (this != &cat)
		*this = cat;
}

Dog &Dog::operator=(const Dog &cat) {
	if(this == &cat)
		return *this;
	this->type = "Dog";
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