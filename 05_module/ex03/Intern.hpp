//
// Created by Nadiia Maliarenko on 03.08.23.
//

#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"

class Intern {
public:
	Intern();
	Intern(Intern &i);
	Intern &operator=(Intern &i);
	~Intern();

	AForm* makeForm(std::string name, std::string target);
};


#endif //INTERN_HPP
