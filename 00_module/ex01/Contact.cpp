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
	_index += 1;
	//std::cout << "Contact Constructor called" << std::endl;
}

Contact::~Contact() {
	//std::cout << "Contact Destructor called : " << getIndex() << std::endl;
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

int Contact::_index = 0;

void Contact::setFirstName(std::string first) {
	this->_first_name = first;
}

void Contact::setLastName(std::string last) {
	this->_last_name = last;
}

void Contact::setNickname(std::string nickname) {
	this->_nickname = nickname;
}

void Contact::setSecret(std::string secret) {
	this->_secret = secret;
}

void Contact::setPhone(std::string phone) {
	this->_phone = phone;
}
