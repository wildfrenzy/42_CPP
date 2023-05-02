/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:47:18 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 17:47:18 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout<< "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &an) {
	std::cout<< "WrongAnimal copy constructor called" << std::endl;
	if (this != &an)
		*this = an;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &an) {
	if(this == &an)
		return *this;
	this->type = an.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout<< "WrongAnimal default destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout<< YELLOW "wrong animal sounds" RES << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}