/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:35:00 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/09 13:53:45 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type)  {}
Weapon::~Weapon() {}

const std::string& Weapon::getType() const {
	return this->_type;
}

void Weapon::setType(const std::string &newtype) {
	this->_type = newtype;
}
