//
// Created by Nadiia Maliarenko on 01.08.23.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(ShrubberyCreationForm &s);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm &s);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const &executor) const;

private:
	std::string _target;
};


#endif
