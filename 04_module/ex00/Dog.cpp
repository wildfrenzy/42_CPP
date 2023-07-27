/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:10:16 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/09 18:00:10 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout<< "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &dog) {
	std::cout<< "Dog copy constructor called" << std::endl;
	if (this != &dog)
		*this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
	if(this == &dog)
		return *this;
	this->type = "Dog";
	return *this;
}

Dog::~Dog() {
	std::cout<< "Dog default destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout<< YELLOW "woof woof ▼・ᴥ・▼" RES << std::endl;
}