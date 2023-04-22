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

class Fixed {
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &num); // copy constructor
	Fixed& operator=(const Fixed &num);
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int					_val;
	static const int	_bits;
};


#endif