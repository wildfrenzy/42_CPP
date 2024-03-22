/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:35:00 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/09 13:35:00 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:

	HumanB(const std::string &name);
	~HumanB();

	void		attack();
	const std::string&	getName() const;
	Weapon*		getWeapon() const;
	void		setWeapon(Weapon& type);

private:
	std::string	_name;
	Weapon*		_weapon;

};

#endif
