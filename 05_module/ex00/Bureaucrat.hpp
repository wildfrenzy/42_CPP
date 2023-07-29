/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:56:54 by nmaliare          #+#    #+#             */
/*   Updated: 2023/07/27 19:56:54 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

#define BLUE "\x1b[1;36m"
#define YELLOW "\x1b[1;92m"
#define RED "\x1b[1;31m"
#define RES "\x1b[0m"

class Bureaucrat {

public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(Bureaucrat &b);
	Bureaucrat& operator=(Bureaucrat &b);
	~Bureaucrat();

	const std::string &getName(void) const;
	int &getGrade(void);
	void incrementGrade(void);
	void decrementGrade(void);

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
	int _grade;

};

std::ostream & operator<<(std::ostream &o, Bureaucrat &b);

#endif
