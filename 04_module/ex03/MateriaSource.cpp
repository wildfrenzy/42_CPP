/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:01:20 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/05 18:01:20 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource &mat) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	if (this != &mat)
		*this = mat;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &mat) {
	std::cout << "MateriaSource operator = called" << std::endl;
	if (this == &mat)
		return *this;
	// ?
	return *this;
}