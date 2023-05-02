/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:43:48 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 17:43:48 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#define YELLOW "\x1b[1;92m"
#define RES "\x1b[0m"

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &an);
	WrongAnimal& operator=(const WrongAnimal &an);
	~WrongAnimal();

	void	makeSound() const;
	std::string getType(void) const;

protected:
	std::string type;
};


#endif