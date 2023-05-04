/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:09:39 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/04 15:09:39 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout<< "AMateria default constructor called" << std::endl;
}
AMateria::AMateria(const std::string &type) {
	std::cout<< "AMateria constructor for "<< type << " called" << std::endl;
	this->type = type;
}

const std::string &AMateria::getType() const {return this->type;}

AMateria::~AMateria() {
	std::cout<< "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &mat) {
	std::cout<< "AMateria copy constructor called" << std::endl;
	if (this != &mat)
		*this = mat;
}

AMateria &AMateria::operator=(const AMateria &mat) {
	std::cout<< "AMateria assigning operator called" << std::endl;
	if (this == &mat)
		return *this;
	*this = mat;
	return *this;
}

