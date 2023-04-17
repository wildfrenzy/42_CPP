/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:19:56 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/15 22:19:56 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	Contact	&getContact(int i) const;
	int		getOldest() const;
	int		getFull() const;

	void	setContact(Contact contacts, std::string firstN, std::string lastN, std::string nick, std::string phone, std::string secret);
	void	setOldest(int i);
	void	setFull(int i);

private:
	Contact	_contacts[7];
	int		_oldest;
	int		_full;
};

#endif
