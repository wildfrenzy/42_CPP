/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:51:26 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/05 15:51:26 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	std::cout<< "Cure default constructor called" << std::endl;
	this->_type = "cure";
}
Cure::Cure(const Cure &cure) : AMateria("cure") {
	std::cout<< "Cure copy constructor called" << std::endl;
	if (this != &cure)
		*this = cure;
}

Cure &Cure::operator=(const Cure &cure) {
	std::cout<< "Cure assigning operator called" << std::endl;
	if (this != &cure)
		*this = cure;
	return *this;
}

Cure::~Cure(){
	std::cout << "Cure destructor called" << std::endl;
}

void Cure::use(ICharacter &target) {
	std::cout << BLUE "* heals "<< target.getName() << "'s wounds *" RES << std::endl;
}

Cure *Cure::clone() const {
	return new Cure();
}
