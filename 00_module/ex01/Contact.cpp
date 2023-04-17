/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:21:02 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/15 22:21:02 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
	std::cout << "Contact Constructor called" << std::endl;
	_i += 1;
	this->_index = _i;
	std::cout << "index: " << getIndex() << std::endl;
}

Contact::~Contact() {
	std::cout << "Contact Destructor called : " << getIndex() << std::endl;
	//_index -= 1;
}

int Contact::getIndex() const {
	return this->_index;
}

std::string Contact::getFirstName() const {
	return this->_first_name;
}

std::string Contact::getLastName() const {
	return this->_last_name;
}

std::string Contact::getNickName() const {
	return this->_nickname;
}

std::string Contact::getPhone() const {
	return this->_phone;
}

std::string Contact::getSecret() const {
	return this->_secret;
}

void Contact::setIndex(int i) {
	this->_index = i;
}

int Contact::_i = -1;

void Contact::setFirstName(std::string first) {
	this->_first_name = first;
	/*int i = -1;
	while (first[++i] && i < 9)
		this->_first_name[i] = first[i];
	if (first[i] != '\0')
		this->_first_name[i - 1] = '.';
	this->_first_name[i] = '\0';*/
}

void Contact::setLastName(std::string last) {
	this->_last_name = last;
/*	int i = -1;
	while (last[++i] && i < 9)
		this->_last_name[i] = last[i];
	if (last[i] != '\0')
		this->_last_name[i - 1] = '.';
	this->_last_name[i] = '\0';*/
}

void Contact::setNickname(std::string nickname) {
	this->_nickname = nickname;
/*	int i = -1;
	while (nickname[++i] && i < 9)
		this->_nickname[i] = nickname[i];
	if (nickname[i] != '\0')
		this->_nickname[i - 1] = '.';
	this->_nickname[i] = '\0';*/
}

void Contact::setSecret(std::string secret) {
	this->_secret = secret;
}

void Contact::setPhone(std::string phone) {
	this->_phone = phone;
}
