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
}

Cat::Cat(const Cat &cat) {
	std::cout<< "Cat copy constructor called" << std::endl;
	if (this != &cat)
		*this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
	if(this == &cat)
		return *this;
	this->type = "Cat";
	return *this;
}

Cat::~Cat() {
	std::cout<< "Cat default destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout<< YELLOW "meow meow ฅ^•ﻌ•^ฅ" RES << std::endl;
}