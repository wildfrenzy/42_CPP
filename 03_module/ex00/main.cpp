/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:46:17 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/09 16:49:30 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define BLUE "\x1b[1;36m"
#define RES "\x1b[0m"

int	main()
{
	ClapTrap moulinette("Moulinette");
	ClapTrap student("Student");
	ClapTrap random;
	random = student;

	moulinette.attack("Student");
	student.takeDamage(142);
	student.attack("Bocal");
	student.beRepaired(2);
	student.takeDamage(10);
	random.attack("Moulinette");

	return 0;
}