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

#define BLUE "\x1b[1;36m"
#define YELLOW "\x1b[1;92m"
#define RED "\x1b[1;31m"
#define RES "\x1b[0m"

class Bureaucrat {

public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat& operator=(const Bureaucrat &b);
	~Bureaucrat();

	std::string const &getName(void) const;
	int &getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);

	Bureaucrat operator<<(const Bureaucrat &b) const; //?

private:
	const std::string _name;
	int _grade;

};


#endif
