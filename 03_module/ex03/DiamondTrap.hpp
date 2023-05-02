/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:11:07 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/28 19:11:07 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &dia);
	DiamondTrap& operator=(const DiamondTrap &dia);

	void attack(const std::string &target);
	void whoAmI();
private:
	std::string _name;
};


#endif
