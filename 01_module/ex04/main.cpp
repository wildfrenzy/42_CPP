/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:13:19 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/21 16:58:00 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::string		buff2;
	std::string		result;

	ifs >> buff2;
	while (ifs >> result)
		buff2 += " " + result;
	ifs.close();
	result.erase(0,std::string::npos);
	std::size_t found = buff2.find(s1);
	while (found != std::string::npos)
	{
		result += buff2.substr(0, found) + s2;
		if (found != 0) buff2.erase(0, found + s1.length());
		else buff2.erase(found, s1.length());
		found = buff2.find(s1);
	}
	if (!buff2.empty()) result += buff2;
	std::ofstream ofs(replaceFileName.c_str());
	ofs << result << std::endl;
	return 0;
};