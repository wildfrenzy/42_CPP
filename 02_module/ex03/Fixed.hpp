/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:29:41 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/22 16:29:41 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float fnum);
	~Fixed();
	Fixed(const Fixed &num);

	float toFloat(void)	const;
	int toInt(void) const;

	Fixed& operator=(const Fixed &num);

	bool operator>(const Fixed &second) const;
	bool operator<(const Fixed &second) const;
	bool operator>=(const Fixed &second) const;
	bool operator<=(const Fixed &second) const;
	bool operator==(const Fixed &second) const;
	bool operator!=(const Fixed &second) const;

	Fixed operator+(const Fixed &second) const;
	Fixed operator-(const Fixed &second) const;
	Fixed operator*(const Fixed &second) const;
	Fixed operator/(const Fixed &second) const;

	Fixed& operator++(void);
	Fixed operator++(int);
	Fixed& operator--(void);
	Fixed operator--(int);

	static Fixed& min(Fixed &first, Fixed &second);
	static  const Fixed& min(const Fixed &first, const Fixed &second);

	static Fixed& max(Fixed &first, Fixed &second);
	static const Fixed& max(const Fixed &first, const Fixed &second);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int					_val;
	static const int	_bit;
};

std::ostream & operator<<(std::ostream &o, Fixed const &num);


#endif