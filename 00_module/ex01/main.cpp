/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 01:27:15 by nmaliare          #+#    #+#             */
/*   Updated: 2023/05/09 11:29:16 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

void	add(PhoneBook *phoneBook)
{
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string Phone;
	std::string Secret;

	static int index = -1;

	index += 1;
	std::cout << "\x1b[1;33mInput your contact information:\n"
				 "1. First name: \x1b[0m" << std::endl;
	std::cin >> FirstName;
	std::cout << "\x1b[1;33m2. Last name: \x1b[0m" << std::endl;
	std::cin >> LastName;
	std::cout << "\x1b[1;33m3. Nick name: \x1b[0m" << std::endl;
	std::cin >> NickName;
	std::cout << "\x1b[1;33m4. Phone number: \x1b[0m" << std::endl;
	std::cin >> Phone;
	std::cout << "\x1b[1;33m5. Your darkest secret: \x1b[0m" << std::endl;
	std::cin >> Secret;
	phoneBook->setContact(&phoneBook->getContact(index), FirstName, \
	LastName, NickName, Phone, Secret);
	if (index == 7)
	{
		std::cout << "\x1b[1;31mAttention! Contact book is full, next contact will replace oldest one.\x1b[0m" << std::endl;
		index = -1;
	}
}

void print_field(std::string str)
{
	std::cout << std::setw(10);
	if (str.length() > 10)
	{
		str.resize(9);
		str.replace(9,1, ".");
	}
	std::cout << str << "|";
}

void search(PhoneBook *phoneBook)
{
	int i = -1;
	Contact tmp;
	std::string stmp;

	while (++i < 8)
	{
		std::cout << std::setw(10);
		tmp = phoneBook->getContact(i);
		std::cout << i << "|";
		print_field(tmp.getFirstName());
		print_field(tmp.getLastName());
		print_field(tmp.getNickName());
		std::cout << std::endl;
	}
	std::cout << "\x1b[1;33mInput index: \x1b[0m" << std::endl;
	std::cin >> i;
	if ( i < 0 || i > 7)
		std::cout << "\x1b[1;31mWrong index!\x1b[0m" << std::endl;
	else
	{
		tmp = phoneBook->getContact(i);
		if (tmp.getFirstName().empty())
			std::cout << "\x1b[1;31mThis contact is empty!\x1b[0m" << std::endl;
		else
		{
			std::cout << "First Name: " << tmp.getFirstName() << std::endl;
			std::cout << "Last Name: " << tmp.getLastName() << std::endl;
			std::cout << "Nick Name: " << tmp.getNickName() << std::endl;
			std::cout << "Phone number: " << tmp.getPhone() << std::endl;
			std::cout << "Secret: " << tmp.getSecret() << std::endl;
		}
	}
}

int main()
{
	std::string command;
	PhoneBook phoneBook;
	while (1)
	{
		std::cout << "\x1b[1;36mPlease enter the command. "
					 "Available commands are: ADD, SEARCH, EXIT\x1b[0m" << std::endl;
		std::cin >> command;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			add(&phoneBook);
		else if (command == "SEARCH")
			search(&phoneBook);
		else
			std::cout << "\x1b[1;31mWrong command!\x1b[0m" << std::endl;
	}
	return 0;
}
