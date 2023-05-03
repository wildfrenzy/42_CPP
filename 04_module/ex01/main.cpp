/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:12:04 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 16:12:04 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	Animal* animals[6];

	for (int i = 0; i < 6; ++i) {
		if (i < 3)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << RED "	Testing deep copy-assignment" RES << std::endl;
	delete animals[4];
	animals[4] = animals[5];
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
		if (i != 4)
			delete animals[i];

	std::cout << RED "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" RES << std::endl;

	{
		Cat *cat = new Cat();
		std::cout << std::endl;
		std::string first = BLUE "I should eat this marvelous plant in our bedroom" RES;
		std::string second = BLUE "I should definitely hunt my shadow tonight" RES;
		std::string meow = BLUE "meow" RES;

		cat->getBrain()->setIdea(0, first);
		cat->getBrain()->setIdea(1, second);
		std::cout << "Cat [1] " << cat->getBrain()->getIdea(0) << std::endl;
		std::cout << "Cat [1] " << cat->getBrain()->getIdea(1) << std::endl;

		Cat cat2 = Cat(*cat);
		std::cout << "Cat [2] " << cat2.getBrain()->getIdea(1) << std::endl;
		cat->getBrain()->setIdea(0, meow);
		std::cout << "Cat [2] " << cat->getBrain()->getIdea(0) << std::endl;

		std::cout << std::endl;
		std::cout << RED "TEST copy 2" RES << std::endl;
		std::cout << std::endl;

		Cat cat3 = cat2;
		std::cout << "Cat [3] " << cat3.getBrain()->getIdea(0) << std::endl;
		std::cout << "Cat [3] " << cat3.getBrain()->getIdea(1) << std::endl;

		std::cout << std::endl;
		delete cat;
	}
	std::cout << RED "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" RES << std::endl;
	{
		Dog basic;
		{
			Dog tmp = basic;
		}
		std::cout << std::endl;
	}
	return 0;
}