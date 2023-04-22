/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:29:41 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/22 19:06:54 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _val(0){
	std::cout<< "Default constructor called" << std::endl;
}
Fixed::~Fixed() {
	std::cout<< "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &num) {
	std::cout<< "Copy constructor called" << std::endl;
	this->_val = num.getRawBits(); // ?
}

Fixed &Fixed::operator=(const Fixed &num) {
	std::cout<< "Copy assignment operator called" << std::endl;
	this->_val = num.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout<< "getRawBits member function called" << std::endl;
	return this->_val;
}

void Fixed::setRawBits(const int raw) {
	this->_val = raw;
}

const int Fixed::_bits = 8;
