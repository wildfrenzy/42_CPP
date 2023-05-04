/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:10:29 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 16:10:29 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout<< "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &cat) {
	std::cout<< YELLOW "Cat copy constructor called" RES << std::endl;
	if (this != &cat) {
		*this = cat;
	}
}

Cat &Cat::operator=(const Cat &cat) {
	std::cout<< YELLOW "Cat assignment operator called" RES << std::endl;
	if(this == &cat)
		return *this;
	this->type = cat.type;
	this->_brain = new Brain(*cat.getBrain());
	return *this;
}

Brain *Cat::getBrain() const {return this->_brain;}

Cat::~Cat() {
	std::cout<< "Cat destructor called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const {
	std::cout<< YELLOW "meow meow ฅ^•ﻌ•^ฅ" RES << std::endl;
}