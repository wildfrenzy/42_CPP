/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:04:07 by nmaliare          #+#    #+#             */
/*   Updated: 2023/09/02 18:59:28 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	{
		std::cout << "0 numbers: " << std::endl;
		try {
			Span sp = Span(50);
			sp.addNumber(6);
			std::cout << "Shortest:" << sp.shortestSpan() << std::endl;
			std::cout << "Longest:" << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "Error" << std::endl;
		}
	}
	{
		std::cout << "\n1 number: " << std::endl;
		try {
			Span sp = Span(50);
			sp.addNumber(6);
			std::cout << "Shortest:" << sp.shortestSpan() << std::endl;
			std::cout << "Longest:" << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "Error" << std::endl;
		}
	}
	{
		std::cout << "\n5 numbers: " << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest:" << sp.shortestSpan() << std::endl;
		std::cout << "Longest:" << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\n30 numbers: " << std::endl;
		try {
			Span sp = Span(42);
			sp.addNumber(0, 30);
			std::cout << "Shortest:" << sp.shortestSpan() << std::endl;
			std::cout << "Longest:" << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "Error" << std::endl;
		}
	}
	{
		std::cout << "\n10 000 numbers: " << std::endl;
		try {
			Span sp = Span(10001);
			sp.addNumber(0, 10000);
			std::cout << "Shortest:" << sp.shortestSpan() << std::endl;
			std::cout << "Longest:" << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "Error" << std::endl;
		}
	}
	return 0;
}