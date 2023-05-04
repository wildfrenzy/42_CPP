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

ICharacter::ICharacter() {
	std::cout<< "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &ch) {
	std::cout<< "ICharacter copy constructor called" << std::endl;
	if (this != &ch)
		*this = ch;
}

ICharacter &ICharacter::operator=(const ICharacter &ch) {
	std::cout<< "ICharacter assigning operator called" << std::endl;
	if (this == &ch)
		return *this;
	*this = ch;
	return *this;
}

