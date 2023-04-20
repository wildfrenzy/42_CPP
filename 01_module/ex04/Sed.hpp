/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:10:42 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/20 17:12:15 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

class Sed {

	public:
		Sed();
		~Sed();
		void replaceLine(std::string s1, std::string s2);

	private:
		std::string _s1;
		std::string _s2;
		std::string _replaceFileName;

};


#endif
