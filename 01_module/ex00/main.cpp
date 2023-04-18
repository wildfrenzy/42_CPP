/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:36:51 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/18 15:36:51 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string name;
	Zombie *newzombie;

	std::cout << "Enter zombie name: " ;
	std::cin >> name;
	newzombie = newZombie(name);

	std::cout << "Enter Chump name: " ;
	std::cin >> name;
	randomChump(name);

	delete newzombie;
	return 0;
}