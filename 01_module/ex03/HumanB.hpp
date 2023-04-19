//
// Created by Nadiia Maliarenko on 19.04.23.
//

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:

	HumanB(std::string name);
	~HumanB();

	void		attack();
	std::string	getName() const;
	Weapon*		getWeapon() const;
	void		setWeapon(Weapon& type);

private:
	std::string	_name;
	Weapon*		_weapon;

};

#endif
