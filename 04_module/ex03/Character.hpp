/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:51:36 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/04 15:51:36 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class ICharacter {
public:
	//ICharacter();
//	ICharacter(const ICharacter &ch);
	//ICharacter& operator=(const ICharacter &ch);
	virtual ~ICharacter(){}

	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

class Character {
public:
	Character();
	Character(const Character &ch);
	Character& operator=(const Character &ch);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
protected:
	AMateria* inventory[4];
};

#endif
