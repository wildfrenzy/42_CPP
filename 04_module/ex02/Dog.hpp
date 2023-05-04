/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:10:17 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 16:10:17 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog : public Animal{
public:
	Dog();
	Dog(const Dog &dog);
	Dog& operator=(const Dog &dog);
	~Dog();

	virtual void	makeSound() const;
	Brain*			getBrain() const;
private:
	Brain*	_brain;
};

#endif
