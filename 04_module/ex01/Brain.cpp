/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:17:42 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 21:17:42 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout<< "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain) {
	std::cout<< "Brain copy constructor called" << std::endl;
	if (this != &brain)
	{
		std::string tmp;
		for (int i = 0; i < 100; ++i) {
			tmp = brain.getIdea(i);
			//this->ideas[i] = brain.getIdea(i);
			this->setIdea(i,  tmp);
		}
		*this = brain;
	}
}

std::string Brain::getIdea(int index) const {
	return this->ideas[index];
}

void Brain::setIdea(int index, std::string& idea) {
	this->ideas[index] = idea;
}

Brain &Brain::operator=(const Brain &brain) {
	if (this == &brain)
		return *this;
	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = brain.getIdea(i);
	}
	return *this;
}

Brain::~Brain() {
	std::cout<< "Brain destructor called" << std::endl;
}