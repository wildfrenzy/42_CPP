/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NonMember.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:58:43 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/17 16:58:43 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NonMember.hpp"

NonMember::NonMember() {
	cout << "Constructor called" << endl;
	_nbInst += 1;
}

NonMember::~NonMember() {
	cout << "Destructor called" << endl;
	_nbInst -= 1;
}

int NonMember::getNbInst() {
	return NonMember::_nbInst;
}

int NonMember::_nbInst = 0;
