/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:49:42 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/04 17:49:42 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout<< "Ice default constructor called" << std::endl;
	this->_type = "ice";
}
Ice::Ice(const Ice &ice) : AMateria("ice") {
	std::cout<< "Ice copy constructor called" << std::endl;
	if (this != &ice)
		*this = ice;
}
Ice &Ice::operator=(const Ice &ice) {
	std::cout<< "Ice assigning operator called" << std::endl;
	if (this != &ice)
		*this = ice;
	return *this;
}

Ice::~Ice(){
	std::cout<< "Ice destructor called" << std::endl;
}

void Ice::use(ICharacter &target) {
	std::cout << BLUE"* shoots ice bolt at "<< target.getName() << " *" RES << std::endl;
}

Ice *Ice::clone() const {
	return new Ice();
}