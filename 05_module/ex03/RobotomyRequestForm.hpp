//
// Created by Nadiia Maliarenko on 01.08.23.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(RobotomyRequestForm &r);
	RobotomyRequestForm & operator=(RobotomyRequestForm &r);
	~RobotomyRequestForm();

	void execute(Bureaucrat const &executor) const;

private:
	std::string _target;
};


#endif
