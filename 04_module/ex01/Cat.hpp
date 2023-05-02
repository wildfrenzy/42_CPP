/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:10:29 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 16:10:29 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
public:
	Cat();
	Cat(const Cat &cat);
	Cat& operator=(const Cat &cat);
	~Cat();

	virtual void	makeSound() const;
	Brain*			getBrain() const;

private:
	Brain*	_brain;
};


#endif
