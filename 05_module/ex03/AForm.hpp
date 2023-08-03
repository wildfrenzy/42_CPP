
#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
//#include "Bureaucrat.hpp"

#define BLUE "\x1b[1;36m"
#define YELLOW "\x1b[1;92m"
#define RED "\x1b[1;31m"
#define RES "\x1b[0m"

class Bureaucrat;

class AForm {
public:
	AForm();
	AForm(const std::string &name, int sign, int exec);
	AForm(AForm &f);
	AForm& operator=(AForm &f);
	virtual ~AForm();

	std::string getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool getSignature() const;

	void beSigned(Bureaucrat &b);
	void setSignGrade(int grade);
	void setExecuteGrade(int grade);

	virtual void execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException : public std::exception{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:
		const char* what() const throw();
	};

private:
	const std::string _name;
	bool _signed;
	int _signInGrade;
	int _executeGrade;
};

std::ostream & operator<<(std::ostream &o, AForm &f);

#endif
