/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:12:17 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/28 18:12:17 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap{
public:
	FlagTrap();
	~FlagTrap();
	FlagTrap(const std::string &name);
	FlagTrap(const FlagTrap &flag);
	FlagTrap& operator=(const FlagTrap &flag);

	void highFivesGuys(void);
};


#endif
