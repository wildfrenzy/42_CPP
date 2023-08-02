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
	std::cout<< "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name){
	std::cout<<"Constructor for "YELLOW<< this->_name <<RES" called" << std::endl;
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
	return BLUE"Grade too high."RES;
};

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return BLUE"Grade too low."RES;
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
	std::cout<<"Default destructor for "YELLOW << this->_name << RES " called"  << std::endl;
}

const std::string &Bureaucrat::getName() const {
	return this->_name;
}

const int &Bureaucrat::getGrade() const{
	return this->_grade;
}

std::ostream & operator<<(std::ostream &o, Bureaucrat &b){
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return o;
}

void Bureaucrat::signForm(AForm &f) {
	if (f.getSignature())
		std::cout << this->getName() << " already signed " << f.getName() << std::endl;
	else if (!f.getSignature() && this->_grade <= f.getSignGrade())
	{
		f.beSigned(*this);
		std::cout << YELLOW + this->getName() + RES << " signed " << YELLOW + f.getName() + RES << std::endl;
	}
	else
		std::cout << this->getName() << " couldn't sign " << f.getName() << " because grade is too low." << std::endl;
}

void Bureaucrat::executeForm(const AForm &form) {
	if (this->_grade <= form.getExecuteGrade())
		std::cout << YELLOW  << this->getName() << RES " executed "YELLOW << form.getName() << RES << std::endl;
	else
		std::cout << "Attempt to execute form failed." << std::endl;
}
