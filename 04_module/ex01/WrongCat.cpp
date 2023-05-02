/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:50:04 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 17:50:04 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout<< "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &cat) {
	std::cout<< "WrongCat copy constructor called" << std::endl;
	if (this != &cat)
		*this = cat;
}

WrongCat &WrongCat::operator=(const WrongCat &cat) {
	if(this == &cat)
		return *this;
	this->type = "WrongCat";
	return *this;
}

WrongCat::~WrongCat() {
	std::cout<< "WrongCat default destructor called" << std::endl;
}

//void WrongCat::makeSound() const {
//	this->WrongAnimal::makeSound();
//	//std::cout<< YELLOW "meow" RES << std::endl;
//}