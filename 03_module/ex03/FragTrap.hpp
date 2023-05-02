/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:12:17 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/02 14:54:06 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
public:
	FragTrap();
	~FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &frag);
	FragTrap& operator=(const FragTrap &frag);

	void highFivesGuys(void);
};


#endif
