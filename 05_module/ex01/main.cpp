/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:57:50 by nmaliare          #+#    #+#             */
/*   Updated: 2023/07/27 19:57:50 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::string name = "CEO";
	Bureaucrat first(name, 150);
	std::cout << first << std::endl;
	try {
		Bureaucrat second("Student", 0);
	} catch (std::exception const &e) {
		std::cout << YELLOW "Caught exception: " RES << e.what() << std::endl;
	}
	try {
		first.decrementGrade();
	} catch (std::exception const &e) {
		std::cout << YELLOW "Caught exception: " RES << e.what() << std::endl;
	}
	Bureaucrat third("Bocal", 42);
	Form test1("CEO Form", 42, 42);
	Form test2("Bocal Form", 42, 42);
	std::cout << test1 << std::endl;
	std::cout << test2 << std::endl;

	try {
		std::cout << first.getName() << " " << first.getGrade() <<std::endl;
		test1.beSigned(first);
	}
	catch (std::exception const &e){
		std::cout << YELLOW "Caught exception: " RES << e.what() << std::endl;
	}
	try {
		std::cout << third.getName() << " " << third.getGrade() << std::endl;
		test2.beSigned(third);
	}
	catch (std::exception const &e){
		std::cout << YELLOW "Caught exception: " RES << e.what() << std::endl;
	}
	first.signForm(test1.getName(), test1.getSignature());
	third.signForm(test2.getName(), test2.getSignature());
}
