//
// Created by Nadiia Maliarenko on 19.04.23.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {

public:

	HumanA(std::string name, Weapon& type);
	~HumanA();

	void		attack();
	std::string	getName() const;
	Weapon		getWeapon() const;

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif
