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

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhone() const;
	std::string getSecret() const;

	void setFirstName(const std::string &first);
	void setLastName(const std::string &last);
	void setNickname(const std::string &nickname);
	void setPhone(const std::string &phone);
	void setSecret(const std::string &secret);

private:
	static int	_index;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
};

#endif
