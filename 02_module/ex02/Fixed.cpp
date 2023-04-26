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
	//std::cout<< "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
	//std::cout<< "Int constructor called" << std::endl;
	this->_val = num << 8;
}

Fixed::Fixed(const float num) {
	//std::cout<< "Float constructor called" << std::endl;
	this->_val = roundf(num * (1 << 8));
}

Fixed::Fixed(const Fixed &num) {
	//std::cout<< "Copy constructor called" << std::endl;
	*this = num;
}
Fixed::~Fixed() {
	//std::cout<< "Destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream &o, Fixed const &num)
{
	o << num.toFloat();
	return o;
}

int Fixed::toInt() const {
	return (this->_val / (1 << _bit));
}

float Fixed::toFloat() const {
	return ((float)this->_val /(float)(1 << _bit));
}

int Fixed::getRawBits() const {
	return this->_val;
}

void Fixed::setRawBits(const int raw) {
	this->_val = raw;
}

Fixed &Fixed::operator=(const Fixed &num) {
	//std::cout<< "Copy assignment operator called" << std::endl;
	this->_val = num.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &second) const {
	return this->_val > second._val;
}

bool Fixed::operator<(const Fixed &second) const {
	return this->_val < second._val;
}

bool Fixed::operator>=(const Fixed &second) const {
	return this->_val >= second._val;
}

bool Fixed::operator<=(const Fixed &second) const {
	return this->_val <= second._val;
}

bool Fixed::operator==(const Fixed &second) const {
	return this->_val == second._val;
}

bool Fixed::operator!=(const Fixed &second) const {
	return this->_val != second._val;
}

Fixed Fixed::operator+(const Fixed &second) const {
	return this->toFloat() + second.toFloat();
}

Fixed Fixed::operator-(const Fixed &second) const {
	return this->toFloat() - second.toFloat();
}

Fixed Fixed::operator*(const Fixed &second) const {
	return this->toFloat() * second.toFloat();
}

Fixed Fixed::operator/(const Fixed &second) const {
	return this->toFloat() / second.toFloat();
}

Fixed& Fixed::operator++(void) {
	this->_val += 1;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed copy(*this);
	operator++();
	return copy;
}

Fixed& Fixed::operator--(void) {
	this->_val -= 1;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed copy(*this);
	operator--();
	return copy;
}

Fixed &Fixed::min(Fixed &first, Fixed &second) {
	return (first < second ? first : second);
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second) {
	return (first < second ? first : second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second) {
	return (first > second ? first : second);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second) {
	return (first > second ? first : second);
}


const int Fixed::_bit = 8;
