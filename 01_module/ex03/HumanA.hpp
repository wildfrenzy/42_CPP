/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:35:00 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/09 13:35:00 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {

public:

	HumanA(const std::string& name,Weapon& type);
	~HumanA();

	void		attack();
	const std::string&	getName() const;
	const Weapon&		getWeapon() const;

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif
