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

Bureaucrat::Bureaucrat() : _name("Moulinette"), _grade(42) {
	std::cout<< BLUE"Default constructor called"RES << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name){
	std::cout<< BLUE"Constructor for "YELLOW<< this->_name <<RES" called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &b) {
	*this = b;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &b){
	if (this == &b)
		return *this;
	this->_grade = b.getGrade();
	return *this;
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high\n";
};

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low\n";
};

void Bureaucrat::incrementGrade() {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

Bureaucrat::~Bureaucrat() {
	std::cout<< BLUE"Default destructor for "YELLOW<< this->_name << BLUE" called"RES  << std::endl;
}

const std::string &Bureaucrat::getName() const {
	return this->_name;
}

int &Bureaucrat::getGrade(){
	return this->_grade;
}

std::ostream & operator<<(std::ostream &o, Bureaucrat &b){
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return o;
}