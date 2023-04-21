/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:13:31 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/21 18:13:31 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
	Harl	harl;
	int		i = -1;

	if (ac == 2)
	{
		std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		while (++i <= 3)
			if (complains[i] == av[1])
				break;
		switch (i) {
			case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				harl.complain("DEBUG");
				std::cout << "\n[ INFO ]" << std::endl;
				harl.complain("INFO");
				std::cout << "\n[ WARNING ]" << std::endl;
				harl.complain("WARNING");
				std::cout << "\n[ ERROR ]" << std::endl;
				harl.complain("ERROR");
				break;
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				harl.complain("INFO");
				std::cout << "\n[ WARNING ]" << std::endl;
				harl.complain("WARNING");
				std::cout << "\n[ ERROR ]" << std::endl;
				harl.complain("ERROR");
				break;
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				harl.complain("WARNING");
				std::cout << "\n[ ERROR ]" << std::endl;
				harl.complain("ERROR");
				break;
			case 3:
				std::cout << "[ ERROR ]" << std::endl;
				harl.complain("ERROR");
				break;
			default:
				harl.complain("whatever");
				break;
		}
	}
	return 0;
}