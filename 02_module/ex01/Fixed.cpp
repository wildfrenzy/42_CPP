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

Fixed::Fixed(const int num) {
	std::cout<< "Int constructor called" << std::endl;
	this->_val = num << 8;
}

Fixed::Fixed(const float num) {
	std::cout<< "Float constructor called" << std::endl;
	this->_val = num * (1 << 8);
}

Fixed::Fixed(const Fixed &num) {
	std::cout<< "Copy constructor called" << std::endl;
	*this = num;
}
Fixed::~Fixed() {
	std::cout<< "Destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream &o, Fixed const &num)
{
	o << num.toFloat();
	return o;
}

int Fixed::toInt() const {
	return (this->_val / (1 << 8));
}

float Fixed::toFloat() const {
	return ((float)this->_val / (1 << 8));
}

int Fixed::getRawBits() const {
	return this->_val;
}

Fixed &Fixed::operator=(const Fixed &num) {
	std::cout<< "Copy assignment operator called" << std::endl;
	this->_val = num.getRawBits();
	return *this;
}

void Fixed::setRawBits(const int raw) {
	this->_val = raw;
}

const int Fixed::_bit = 8;
