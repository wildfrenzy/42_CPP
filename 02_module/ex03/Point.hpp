/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:42:16 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/27 16:42:23 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(float x, float y);
	Point(const Point &cpy);
	Point& operator=(const Point &num);
	~Point();

	const Fixed& getX(void)const;
	const Fixed& getY(void)const;

private:
	Fixed const _x;
	Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
