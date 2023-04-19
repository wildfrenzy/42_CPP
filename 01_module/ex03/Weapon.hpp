//
// Created by Nadiia Maliarenko on 19.04.23.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {

public:

	Weapon(std::string type);
	~Weapon();

	std::string	getType() const;
	void		setType(std::string newtype);

private:
	std::string _type;
};


#endif