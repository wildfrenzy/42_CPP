/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:46:17 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/27 20:51:35 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#define BLUE "\x1b[1;36m"
#define RES "\x1b[0m"

int	main()
{
/*	DiamondTrap d;
	std::cout << std::endl;
	DiamondTrap a( "Moulinette" );
	std::cout << std::endl;
	DiamondTrap b( "Student" );
	std::cout << std::endl;
	d = b;
	std::cout << std::endl;
	d.attack("Pisciner");
	std::cout << std::endl;
	a.whoAmI();
	std::cout << std::endl;*/

	DiamondTrap moulinette("Moulinette");
	std::cout << std::endl;
	DiamondTrap student("Student");
	std::cout << std::endl;
	DiamondTrap random;
	std::cout << std::endl;
	random = student;
	ScavTrap pisciner("Pisciner");

	moulinette.attack("Student");
	moulinette.highFivesGuys();
	pisciner.guardGate();
	pisciner.attack("Moulinette");
	student.takeDamage(142);
	student.attack("Bocal");
	student.beRepaired(2);
	student.takeDamage(10);
	random.attack("Moulinette");
	moulinette.whoAmI();

	std::cout << BLUE"Mouli" RES " stats:\nhealth: " << moulinette.getHealth()
	<< "\nenergy: " << moulinette.getEnergy() << std::endl;

	std::cout << BLUE"Student" RES " stats:\nhealth: " << student.getHealth()
			  << "\nenergy: " << student.getEnergy() << std::endl;

	return 0;
}