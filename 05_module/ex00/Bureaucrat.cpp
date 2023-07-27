/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:57:19 by nmaliare          #+#    #+#             */
/*   Updated: 2023/07/27 19:57:19 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout<< BLUE"Default constructor called"RES << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	std::cout<< BLUE"Default constructor for "YELLOW<< this->_name <<RES" called" << std::endl;
	if (grade > 0 && grade < 151)
		this->_grade = grade;
	else

}

Bureaucrat::Bureaucrat(const Bureaucrat &b) {
	*this = b;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b){
	if (this = &b)
		return *this;
	this->_name = b.getName();
	this->_grade = b.getGrade();
}

Bureaucrat::~Bureaucrat() {
	std::cout<< BLUE"Default destructor for "YELLOW<< this->_name <<RES" called" << std::endl;
}

const std::string &Bureaucrat::getName() const {
	return this->_name;
}

int &Bureaucrat::getGrade() const {
	return this->_grade;
}