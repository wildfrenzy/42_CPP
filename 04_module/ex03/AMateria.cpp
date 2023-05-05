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

AMateria::AMateria(const std::string &type) : _type(type) {
	std::cout<< "AMateria constructor for "<< type << " called" << std::endl;
}

const std::string &AMateria::getType() const {return this->_type;}

AMateria::~AMateria() {
	std::cout<< "AMateria destructor called" << std::endl;
}
