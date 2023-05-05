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

Character::Character(std::string name) : name(name) {
	std::cout << "Character default constructor called" << std::endl;
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
	this->name = ch.name;
//	this->inventory = ch.clone(); // clone all 4, not 1
	return *this;
}

