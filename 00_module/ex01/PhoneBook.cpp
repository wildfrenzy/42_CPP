/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:19:56 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/15 22:19:56 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _oldest(0) {
	std::cout << "Constructor called" << std::endl;
}
PhoneBook::~PhoneBook() {
	std::cout << "Destructor called" << std::endl;
}

Contact PhoneBook::getContact(int i) const {
	return this->_contacts[i];
}

int PhoneBook::getOldest() const {
	return this->_oldest;
}

void PhoneBook::setContact(Contact *contacts, int index, std::string firstN, std::string lastN, std::string nick) {
	//contacts.setIndex(index);
	contacts->setFirstName(firstN);
	contacts->setLastName(lastN);
	contacts->setNickname(nick);
}
