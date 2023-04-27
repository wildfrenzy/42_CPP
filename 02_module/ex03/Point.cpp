/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:35:13 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/27 19:42:43 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0){}

Point::Point(float x, float y): _x(x), _y(y) {}

Point::Point(const Point &cpy) {
	*this = cpy;
}

Point::~Point() {}

Point &Point::operator=(const Point &num){
	if (this == &num)
		return *this;
	const_cast<Fixed&>(this->_x) = num.getX();
	const_cast<Fixed&>(this->_y) = num.getY();
	return *this;
}

const Fixed& Point::getX() const {
	return this->_x;
}

const Fixed& Point::getY() const {
	return this->_y;
}
