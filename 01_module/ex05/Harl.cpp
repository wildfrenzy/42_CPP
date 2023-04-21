/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:13:04 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/21 23:41:28 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level) {
	int i = -1;
	std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (++i <= 3)
		if (complains[i] == level)
		{
			(this->*f[i])();
			break ;
		}
	if (i > 3)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::debug() {
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-specialketchup burger. "
				 "I really do!" << std::endl;
}

void Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. "
				 "You didn’t put enough bacon in my burger! "
				 "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. "
				 "I’ve been coming for years whereas you started "
				 "working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}