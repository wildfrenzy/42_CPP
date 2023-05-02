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

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap moulinette("Moulinette");
	std::cout << std::endl;
	ScavTrap student("Student");
	std::cout << std::endl;
	ScavTrap random;
	random = student;
	std::cout << std::endl;

	moulinette.attack("Student");
	moulinette.guardGate();
	std::cout << std::endl;
	student.takeDamage(142);
	student.attack("Bocal");
	student.beRepaired(2);
	student.takeDamage(10);
	std::cout << std::endl;
	random.attack("Moulinette");
	std::cout << std::endl;

	return 0;
}