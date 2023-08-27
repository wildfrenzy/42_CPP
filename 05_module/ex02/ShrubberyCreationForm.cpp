/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:24:32 by nmaliare          #+#    #+#             */
/*   Updated: 2023/08/01 18:24:32 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {
	setSignGrade(145);
	setExecuteGrade(137);
	this->_target = "42 Berlin Shrubbery";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(), _target(target){
	setSignGrade(145);
	setExecuteGrade(137);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &s) {
	this->_target = s._target;
	this->setExecuteGrade(s.getExecuteGrade());
	this->setSignGrade(s.getSignGrade());
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &s){
	if (this == &s)
		return *this;
	this->_target = s._target;
	this->setExecuteGrade(s.getExecuteGrade());
	this->setSignGrade(s.getSignGrade());
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() <= this->getExecuteGrade())
	{

		std::ofstream ofs(this->_target + "_shrubbery");
		std::string tree = "Don't you see ASCII trees? They are here.";
		ofs << tree << std::endl;
	} else
		throw Bureaucrat::GradeTooLowException();

}
