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

PhoneBook::PhoneBook(){
	//std::cout << "PB Constructor called" << std::endl;
}
PhoneBook::~PhoneBook() {
	//std::cout << "PB Destructor called" << std::endl;
}

Contact& PhoneBook::getContact(int i){
	return this->_contacts[i];
}

void PhoneBook::setContact(Contact *contacts, std::string firstN,
		std::string lastN, std::string nick, std::string phone, std::string secret) {
	contacts->setFirstName(firstN);
	contacts->setLastName(lastN);
	contacts->setNickname(nick);
	contacts->setSecret(secret);
	contacts->setPhone(phone);
}
