/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:09:39 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/04 15:09:39 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

#define BLUE "\x1b[1;36m"
#define YELLOW "\x1b[1;92m"
#define RED "\x1b[1;31m"
#define RES "\x1b[0m"

class AMateria {
public:

	AMateria();
	AMateria(std::string const & type);

	AMateria(const AMateria &mat);
	AMateria& operator=(const AMateria &mat);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:
	std::string type;
};


#endif
