/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:46:14 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/27 19:46:16 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed hmm(Point const a, Point const b, Point const point)
{
	return ((point.getX() - a.getX()) * (b.getY() - a.getY())) -
			((point.getY() - a.getY()) * (b.getX() - a.getX()));
}

bool check_line(Point const a, Point const b, Point const c, Point const point)
{
	return (hmm(a, b, c) * hmm(a, b, point) > 0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if(!check_line(a, b, c, point)) return false;
	if(!check_line(b, c, a, point)) return false;
	if(!check_line(c, a, b, point)) return false;
	return true;
}