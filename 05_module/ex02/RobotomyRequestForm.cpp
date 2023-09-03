/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:24:21 by nmaliare          #+#    #+#             */
/*   Updated: 2023/08/01 18:24:21 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm() {
	setSignGrade(72);
	setExecuteGrade(45);
	this->_target = "42 Berlin Robotomy";
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(), _target(target){
	setSignGrade(72);
	setExecuteGrade(45);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &s) {
	this->_target = s._target;
	this->setExecuteGrade(s.getExecuteGrade());
	this->setSignGrade(s.getSignGrade());
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &s){
	if (this == &s)
		return *this;
	this->_target = s._target;
	this->setExecuteGrade(s.getExecuteGrade());
	this->setSignGrade(s.getSignGrade());
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() <= this->getExecuteGrade()) {
		std::cout << "* Makes some drilling noises *" << std::endl;
		srand(time(0));
		if (std::rand() % 2 == 0)
			std::cout << BLUE + this->_target << " has been robotomized successfully." RES<< std::endl;
		else
			std::cout << RED "Robotomy failed." RED << std::endl;
	} else throw Bureaucrat::GradeTooLowException();
}