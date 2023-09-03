/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:24:21 by nmaliare          #+#    #+#             */
/*   Updated: 2023/08/03 18:24:21 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"

class Intern {
public:
	Intern();
	Intern(Intern &i);
	Intern &operator=(Intern &i);
	~Intern();

	AForm* makeForm(std::string name, std::string target);
};


#endif //INTERN_HPP
