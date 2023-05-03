/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:15:02 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 21:15:02 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
public:
	Brain();
	Brain(const Brain &brain);
	Brain& operator=(const Brain &brain);
	~Brain();

	std::string	getIdea(int index) const;
	void		setIdea(int index, std::string idea);

protected:
	std::string ideas[100];
};


#endif
