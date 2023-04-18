/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:19:35 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/18 15:19:35 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << getName() <<" died" << std::endl;
}

std::string Zombie::getName() const {
	return this->_name;
}

void Zombie::setName(std::string name) {
	this->_name = name;
	announce();
}

void Zombie::announce() {
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
