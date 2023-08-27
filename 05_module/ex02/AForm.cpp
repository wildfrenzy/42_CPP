/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 18:24:21 by nmaliare          #+#    #+#             */
/*   Updated: 2023/07/29 18:24:21 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Default"), _signed(false), _signInGrade(0), _executeGrade(0) {
	std::cout<< "Default constructor called" << std::endl;
}

AForm::AForm(const std::string &name, int sign, int exec) : _name(name), _signed(false), _signInGrade(sign),  _executeGrade(exec) {
	std::cout<< "Constructor for "YELLOW<< this->_name <<RES" called" << std::endl;
}

AForm::AForm(AForm &f): _name(f._name), _signInGrade(f._signInGrade), _executeGrade(f._executeGrade) {
	_signed = f._signed;
}

AForm &AForm::operator=(AForm &f) {
	if (this == &f)
		return *this;
	this->_signed = f._signed;
	this->_signInGrade = f._signInGrade;
	this->_executeGrade = f._executeGrade;
	return *this;
}

AForm::~AForm() {
	std::cout<< "Destructor for "YELLOW<< this->_name << RES" called"  << std::endl;
}

std::ostream & operator<<(std::ostream &o, AForm &f){
	o << "AForm " YELLOW<< f.getName() <<RES << std::endl;
	o << "AForm is ";
	o << (f.getSignature() ?  "signed" : "not signed") << std::endl;
	o << "Grade required to sign it: "<< f.getSignGrade() << std::endl;
	o << "Grade required to execute it: " << f.getSignGrade() << std::endl;
	return o;
}

const char * AForm::GradeTooHighException::what() const throw() {
	return BLUE"Grade too high."RES;
}

const char * AForm::GradeTooLowException::what() const throw() {
	return BLUE"Grade too low."RES;
}

bool AForm::getSignature() const {
	return this->_signed;
}

int AForm::getSignGrade() const {
	return this->_signInGrade;
}

int AForm::getExecuteGrade() const {
	return this->_executeGrade;
}

std::string AForm::getName() const {
	return this->_name;
}

void AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= this->getSignGrade())
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

void AForm::setSignGrade(int grade) {
	this->_signInGrade = grade;
}

void AForm::setExecuteGrade(int grade) {
	this->_executeGrade = grade;
}