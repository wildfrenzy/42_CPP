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

Contact::Contact() : _first_name(), _last_name(), _nickname() {
	memset(_first_name, 0 ,10);
	memset(_last_name, 0 ,10);
	memset(_nickname, 0 ,10);
	_index += 1;
	std::cout << "Constructor called" << std::endl;
}

Contact::~Contact() {
	std::cout << "Destructor called" << std::endl;
}

int Contact::getIndex() const {
	return Contact::_index;
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

//void Contact::setIndex(int i) {
//	Contact::_index = i;
//}

int Contact::_index = -1;

void Contact::setFirstName(std::string first) {
	int i = -1;
	while (first[++i] && i < 9)
		this->_first_name[i] = first[i];
	if (first[i] != '\0')
		this->_first_name[i - 1] = '.';
	this->_first_name[i] = '\0';
}

void Contact::setLastName(std::string last) {
	int i = -1;
	while (last[++i] && i < 9)
		this->_last_name[i] = last[i];
	if (last[i] != '\0')
		this->_last_name[i - 1] = '.';
	this->_last_name[i] = '\0';
}

void Contact::setNickname(std::string nickname) {
	int i = -1;
	while (nickname[++i] && i < 9)
		this->_nickname[i] = nickname[i];
	if (nickname[i] != '\0')
		this->_nickname[i - 1] = '.';
	this->_nickname[i] = '\0';
}

