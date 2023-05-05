/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:58:34 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/05 17:58:34 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &mat);
	MateriaSource& operator=(const MateriaSource &mat);
	~MateriaSource();

	void		learnMateria(AMateria *l);
	AMateria*	createMateria(std::string const &type);

private:
	AMateria*	_inventory[4];
};

#endif
