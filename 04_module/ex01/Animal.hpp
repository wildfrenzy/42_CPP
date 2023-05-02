/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:10:07 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 16:10:07 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

#define BLUE "\x1b[1;36m"
#define YELLOW "\x1b[1;92m"
#define RED "\x1b[1;31m"
#define RES "\x1b[0m"

class Animal {
public:
	Animal();
	Animal(const Animal &an);
	Animal& operator=(const Animal &an);
	virtual ~Animal();

	virtual void	makeSound() const;
	std::string getType(void) const;

protected:
	std::string type;
};


#endif
