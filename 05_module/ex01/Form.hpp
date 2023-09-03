/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:55:06 by nmaliare          #+#    #+#             */
/*   Updated: 2023/07/27 17:55:06 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

#define BLUE "\x1b[1;36m"
#define YELLOW "\x1b[1;92m"
#define RED "\x1b[1;31m"
#define RES "\x1b[0m"

class Form {
public:
	Form();
	Form(const std::string &name, int sign, int exec);
	Form(Form &f);
	Form& operator=(Form &f);
	~Form();

	std::string getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool getSignature() const;
	void beSigned(Bureaucrat &b);

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
	const int _signInGrade;
	const int _executeGrade;
};

std::ostream & operator<<(std::ostream &o, Form &f);

#endif
