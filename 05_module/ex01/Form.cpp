/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:09:33 by nmaliare          #+#    #+#             */
/*   Updated: 2023/07/27 18:09:33 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Nadiia Maliarenko on 29.07.23.
//

#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _signInGrade(150), _executeGrade(150) {
	std::cout<< BLUE"Default constructor called"RES << std::endl;
}

Form::Form(const std::string &name, int sign, int exec) : _name(name), _signed(false), _signInGrade(sign), _executeGrade(exec) {
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	std::cout<< BLUE"Constructor for "YELLOW<< this->_name <<RES" called" << std::endl;
}

Form::Form(Form &f): _name(f._name), _signInGrade(f._signInGrade), _executeGrade(f._executeGrade) {
	_signed = f._signed;
}

Form &Form::operator=(Form &f) {
	if (this == &f)
		return *this;
	this->_signed = f._signed;
	return *this;
}

Form::~Form() {
	std::cout<< BLUE"Destructor for "YELLOW<< this->_name << BLUE" called"RES  << std::endl;
}

std::ostream & operator<<(std::ostream &o, Form &f){
	o << "Form " YELLOW<< f.getName() <<RES << std::endl;
	o << "Form is ";
	o << (f.getSignature() ?  "signed" : "not signed") << std::endl;
	o << "Grade required to sign it: "<< f.getSignGrade() << std::endl;
	o << "Grade required to execute it: " << f.getExecuteGrade() << std::endl;
	return o;
}

const char * Form::GradeTooHighException::what() const throw() {
	return "Grade too high.";
};

const char * Form::GradeTooLowException::what() const throw() {
	return "Grade too low.";
};

bool Form::getSignature() const {
	return this->_signed;
}

int Form::getSignGrade() const {
	return this->_signInGrade;
}

int Form::getExecuteGrade() const {
	return this->_executeGrade;
}

std::string Form::getName() const {
	return this->_name;
}

void Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= this->getSignGrade())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

