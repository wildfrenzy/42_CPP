/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:47:59 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/18 15:47:59 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP
#include <iostream>

class Zombie {

public:
	Zombie();
	~Zombie();

	void announce( void );
	std::string getName() const;
	void setName(std::string name);

private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
