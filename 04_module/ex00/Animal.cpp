/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:10:07 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 17:25:35 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout<< "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &an) {
	std::cout<< "Animal copy constructor called" << std::endl;
	if (this != &an)
		*this = an;
}

Animal &Animal::operator=(const Animal &an) {
	if(this == &an)
		return *this;
	this->type = an.type;
	return *this;
}

Animal::~Animal() {
	std::cout<< "Animal default destructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout<< YELLOW "Who am I?" RES << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}
