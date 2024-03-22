/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:35:00 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/09 13:35:00 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name) {}

HumanB::~HumanB() {}

const std::string& HumanB::getName() const {
	return this->_name;
}

Weapon* HumanB::getWeapon() const {
	return (this->_weapon);
}

void HumanB::setWeapon(Weapon& type) {
	this->_weapon = &type;
}

void HumanB::attack() {
	std::cout << getName() << " attacks with their " << (getWeapon() ? getWeapon()->getType() : "NULL") << std::endl;
}