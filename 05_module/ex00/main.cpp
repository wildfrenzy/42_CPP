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

int main()
{
	std::string name = "Hi";
	Bureaucrat first(name, 150);
	try {
		Bureaucrat second("Student", 0);
	} catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		first.decrementGrade();
	} catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}
}
