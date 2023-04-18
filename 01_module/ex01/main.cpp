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
	int size;
	Zombie *horde;

	std::cout << "Enter horde name: " ;
	std::cin >> name;

	std::cout << "Enter horde size: " ;
	std::cin >> size;

	horde = zombieHorde(size, name);

	delete [] horde;
	return 0;
}