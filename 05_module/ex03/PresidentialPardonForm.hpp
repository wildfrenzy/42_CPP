//
// Created by Nadiia Maliarenko on 01.08.23.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(PresidentialPardonForm &r);
	PresidentialPardonForm & operator=(PresidentialPardonForm &r);
	~PresidentialPardonForm();

	void execute(Bureaucrat const &executor) const;

private:
	std::string _target;
};


#endif
