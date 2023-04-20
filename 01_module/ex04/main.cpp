/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:13:19 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/20 16:58:08 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Sed.hpp"

#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
	if (ac != 4) {
		std::cout << "Wrong input" << std::endl;
		return -1;
	}

	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string replace = ".replace";
	std::string replaceFileName = av[1] + replace;

	std::ifstream	ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "Failed to open " << av[1] << std::endl;
		return -1;
	}
	std::string		buff1;
	std::string		buff2;

	ifs >> buff2;
	while (ifs >> buff1)
		buff2 += " " + buff1;
	

	std::cout << "s1: " << s1 << std::endl;
	std::cout << "s2: " << s2 << std::endl;
	std::cout << "replaceFileName: " << replaceFileName << std::endl;
	std::cout << "buff2 : " << buff2 << std::endl;
	std::cout << "buff1: " << buff1 << std::endl;
	ifs.close();


/*	std::ifstream	ifs("numbers"); //Input file stream
	unsigned int	dst;
	unsigned int	dst2;

	ifs >> dst >> dst2;
	std::cout << dst << " . " << dst2 <<std::endl;
	ifs.close();

	std::ofstream ofs("test.out"); //Output file stream
	ofs << " save me" << std::endl;*/
	return 0;
};