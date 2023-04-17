/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaliare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:53:49 by nmaliare          #+#    #+#             */
/*   Updated: 2023/04/17 22:53:49 by nmaliare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void	add(PhoneBook *phoneBook)
{
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string Phone;
	std::string Secret;
	static int index = 0;

	std::cout << "\x1b[1;33mInput your contact information:\n1. First name: \x1b[0m" << std::endl;
	std::cin >> FirstName;
	std::cout << "\x1b[1;33m2. Last name: \x1b[0m" << std::endl;
	std::cin >> LastName;
	std::cout << "\x1b[1;33m3. Nick name: \x1b[0m" << std::endl;
	std::cin >> NickName;
	std::cout << "\x1b[1;33m4. Phone number: \x1b[0m" << std::endl;
	std::cin >> Phone;
	std::cout << "\x1b[1;33m5. Your darkest secret: \x1b[0m" << std::endl;
	std::cin >> Secret;

	std::cout << "First Name: " << FirstName << std::endl;
	std::cout << "Last Name: " << LastName << std::endl;
	std::cout << "Nick Name: " << NickName << std::endl;
	std::cout << "Phone number: " << Phone << std::endl;
	std::cout << "Secret: " << Secret << std::endl;
	std::cout << "Index: " << index << std::endl;
	phoneBook->setContact(phoneBook->getContact(index), FirstName, LastName, NickName, Phone, Secret);
}

void search(PhoneBook *phoneBook)
{
	int i;
	//Contact tmp;
	std::cout << "> SEARCH <"  << std::endl;
	std::cout << "\x1b[1;33mInput index: \x1b[0m" << std::endl;
	std::cin >> i;
	//tmp = phoneBook->getContact(i);
	std::cout << "First Name: " << phoneBook->getContact(i).getFirstName() << std::endl;
	std::cout << "Last Name: " << phoneBook->getContact(i).getLastName() << std::endl;
	std::cout << "Nick Name: " << phoneBook->getContact(i).getNickName() << std::endl;
	std::cout << "Phone number: " << phoneBook->getContact(i).getPhone() << std::endl;
	std::cout << "Secret: " << phoneBook->getContact(i).getSecret() << std::endl;
}

int main()
{
	std::string command;
	PhoneBook phoneBook;
	while (1)
	{
		std::cout << "\x1b[1;36mPlease enter the command. Available commands are: ADD, SEARCH, EXIT\x1b[0m" << std::endl;
		std::cin >> command;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			add(&phoneBook);
		else if (command == "SEARCH")
			search(&phoneBook);
	}

	return 0;
}
