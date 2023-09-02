/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:00:03 by nmaliare          #+#    #+#             */
/*   Updated: 2023/09/02 19:00:03 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include "easyfind.hpp"

int		main(void)
{
	{
		std::list<int>	numbers;

		numbers.push_back(1);
		numbers.push_back(2);
		numbers.push_back(3);
		numbers.push_back(4);
		numbers.push_back(5);
		try
		{
			::easyfind(numbers, 1);
			std::cout << "Number is in list<int>" << std::endl;
			::easyfind(numbers, 4);
			std::cout << "Number is in list<int>" << std::endl;
			::easyfind(numbers, 3);
			std::cout << "Number is in list<int>" << std::endl;
			::easyfind(numbers, 7);
			std::cout << "Number is in list<int>" << std::endl;
		}
		catch (std::exception const &e)
		{
			std::cout << "Number not found in list<int>" << std::endl;
		}
	}
	{
		std::vector<int>	numbers;

		numbers.push_back(1);
		numbers.push_back(2);
		numbers.push_back(3);
		numbers.push_back(4);
		numbers.push_back(5);
		try
		{
			::easyfind(numbers, 1);
			std::cout << "Number is in vector <int>" << std::endl;
			::easyfind(numbers, 4);
			std::cout << "Number is in vector <int>" << std::endl;
			::easyfind(numbers, 3);
			std::cout << "Number is in vector <int>" << std::endl;
			::easyfind(numbers, 7);
			std::cout << "Number is in vector <int>" << std::endl;
		}
		catch (std::exception const &e)
		{
			std::cout << "Number not found in vector<int>" << std::endl;
		}
	}
}
