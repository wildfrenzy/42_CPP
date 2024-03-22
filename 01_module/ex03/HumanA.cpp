/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:35:00 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/09 13:35:00 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name,Weapon& type) : _name(name), _weapon(type) {}

HumanA::~HumanA() {}

const std::string &HumanA::getName() const {
	return this->_name;
}

const Weapon& HumanA::getWeapon() const {
	return this->_weapon;
}

void HumanA::attack() {
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;

}