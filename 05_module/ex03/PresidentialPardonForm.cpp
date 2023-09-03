/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:24:21 by nmaliare          #+#    #+#             */
/*   Updated: 2023/08/01 18:24:21 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm() {
	setSignGrade(25);
	setExecuteGrade(5);
	this->_target = "42 Berlin Pardon";
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm(), _target(target){
	setSignGrade(25);
	setExecuteGrade(5);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &s) {
	this->_target = s._target;
	this->setExecuteGrade(s.getExecuteGrade());
	this->setSignGrade(s.getSignGrade());
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &s){
	if (this == &s)
		return *this;
	this->_target = s._target;
	this->setExecuteGrade(s.getExecuteGrade());
	this->setSignGrade(s.getSignGrade());
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() <= this->getExecuteGrade()) {
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	} else throw Bureaucrat::GradeTooLowException();
}