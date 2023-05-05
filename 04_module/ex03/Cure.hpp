/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:49:22 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/05 15:49:22 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
public:
	Cure();
	Cure(const Cure &cure);
	Cure& operator=(const Cure &cure);
	~Cure();

	void	use(ICharacter &target);
	Cure*	clone() const;
};

#endif