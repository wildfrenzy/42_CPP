//
// Created by Nadiia Maliarenko on 03.08.23.
//

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern &i) {
	(void)i;
}
Intern::~Intern() {}

Intern &Intern::operator=(Intern &i) { // ???
	(void)i;
	return *this;
}

/*
template <class X> AForm* make()
{
	return new X();
}
*/

AForm *makeRobo(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *makePresident(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm *makeShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target) {

	AForm *created = NULL;
	//typedef AForm* FormMaker();
	//FormMaker *makers[3] = {make<RobotomyRequestForm>, make<PresidentialPardonForm>, make<ShrubberyCreationForm>};

	std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm *(*f[3])(std::string target) = {makeRobo, makePresident, makeShrubbery};

	int i = -1;
	while (++i <= 2)
		if (forms[i] == name)
		{
			//created = makers[i]();
			created = f[i](target);
			std::cout << "Intern creates " + name << std::endl;
			break ;
		}
	if (i > 2)
		std::cout << "Form [" + name + "] doesn't exist." << std::endl;
	return created;
}