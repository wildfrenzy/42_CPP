/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:53:40 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 14:33:45 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap &clap);
	ClapTrap& operator=(const ClapTrap &clap);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	setName(const std::string& name);
	std::string			getName(void)const;
/*	unsigned int 		getHealth(void)const;
	unsigned int 		getEnergy(void)const;
	unsigned int 		getAttack(void)const;*/

protected:
	std::string		_name;
	unsigned int	_health;
	unsigned int	_energy;
	unsigned int	_attack;
};


#endif
