/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:21:02 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/15 22:21:02 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CODE_CONTACT_HPP
#define CODE_CONTACT_HPP

#include <iostream>

class Contact {

public:

	Contact(void);
	~Contact(void);

	int getIndex() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;

	//static void setIndex(int i);
	void setFirstName(std::string first);
	void setLastName(std::string last);
	void setNickname(std::string nickname);

private:
	static int _index;
	char _first_name[10];
	char _last_name[10];
	char _nickname[10];

};


#endif
