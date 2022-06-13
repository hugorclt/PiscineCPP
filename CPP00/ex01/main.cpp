/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:13:58 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/13 13:06:54 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int	main()
{
	std::string cmd;
	Phonebook	phonebook;
	Contact		contact;
	std::string	firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string	darkestSecret;
	int			index;
	
	std::cout << "Enter a command (ADD, SEARCH or EXIT)" << std::endl;
	while(std::cin.good() == 1)
	{
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			std::cout << "FirstName:" << std::endl;
			std::getline(std::cin, firstName);
			contact.addFirstName(firstName);
			std::cout << "LastName:" << std::endl;
			std::getline(std::cin, lastName);
			contact.addlastName(lastName);
			std::cout << "Nickname:" << std::endl;
			std::getline(std::cin, nickName);
			contact.addNickname(nickName);
			std::cout << "Phone Number:" << std::endl;
			std::getline(std::cin, phoneNumber);
			contact.addPhoneNumber(phoneNumber);
			std::cout << "DarkestSecret:" << std::endl;
			std::getline(std::cin, darkestSecret);
			contact.addDarkestSecret(darkestSecret);
			phonebook.addContact(contact);
			std::cout << "Enter a command (ADD, SEARCH or EXIT)" << std::endl;
		}
		else if (cmd == "SEARCH")
		{
			std::cout
    			<< std::left << std::setw(10) << std::setfill(' ') << "index" << "|"
    			<< std::left << std::setw(10) << std::setfill(' ') << "firstname" << "|"
    			<< std::left << std::setw(10) << std::setfill(' ') << "lastname" << "|"
    			<< std::left << std::setw(10) << std::setfill(' ') << "nickname" << std::endl;
			phonebook.printContact();
			while (std::cin.good() == 1)
			{
				std::cout << "Contact index :" << std::endl;
				std::cin >> index;
				if ((index < phonebook.getIndex() + 1 || phonebook.getFull() == 1) && index <= 8 && index > 0) {
					std::cout << "Firstname:" + phonebook.getContact(index - 1).getFirstName() << std::endl;
					std::cout << "LastName:" + phonebook.getContact(index - 1).getLastName() << std::endl;
					std::cout << "Nickname:" + phonebook.getContact(index - 1).getNickname() << std::endl;
					std::cout << "PhoneNumber:" + phonebook.getContact(index - 1).getPhoneNumber() << std::endl;
					std::cout << "DarkestSecret:" + phonebook.getContact(index - 1).getDarkestSecret() << std::endl;
					std::cout << "Enter a command (ADD, SEARCH or EXIT)" << std::endl;
					break;
				}
				else {
					std::cout << "Index Error" << std::endl;
					std::cout << "Enter a command (ADD, SEARCH or EXIT)" << std::endl;
					break ;
				}
			}
		}
		else if (cmd == "EXIT")
			return (0);
	}
	return (0);
}
