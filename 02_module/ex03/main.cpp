/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:29:26 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/27 19:46:20 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {

	Point const a(2, 2);
	Point const b(5, 7);
	Point const c(9, 4);
	Point const p(5, 6);

	bsp(a, b, c , p) ? (std::cout << "ok" << std::endl) : (std::cout << "ko" << std::endl);

	return 0;
}