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

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define BLUE "\x1b[1;36m"
#define RES "\x1b[0m"

int	main()
{
	FragTrap moulinette("Moulinette");
	std::cout << std::endl;
	FragTrap student("Student");
	std::cout << std::endl;
	FragTrap random;
	random = student;
	std::cout << std::endl;
	ScavTrap pisciner("Pisciner");
	std::cout << std::endl;

	moulinette.attack("Student");
	moulinette.highFivesGuys();
	std::cout << std::endl;
	pisciner.guardGate();
	pisciner.attack("Moulinette");
	std::cout << std::endl;
	student.takeDamage(142);
	student.attack("Bocal");
	student.beRepaired(2);
	student.takeDamage(10);
	std::cout << std::endl;
	random.attack("Moulinette");
	std::cout << std::endl;

/*	std::cout << BLUE"Mouli" RES " stats:\nhealth: " << moulinette.getHealth()
	<< "\nenergy: " << moulinette.getEnergy() << std::endl;

	std::cout << BLUE"Student" RES " stats:\nhealth: " << student.getHealth()
			  << "\nenergy: " << student.getEnergy() << std::endl;*/

	return 0;
}