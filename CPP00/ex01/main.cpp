/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:13:58 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/12 18:55:46 by hrecolet         ###   ########.fr       */
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
	
	while(1)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT)" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			std::cout << "FirstName:" << std::endl;
			std::cin >> firstName;
			contact.addFirstName(firstName);
			std::cout << "LastName:" << std::endl;
			std::cin >> lastName;
			contact.addlastName(lastName);
			std::cout << "Nickname:" << std::endl;
			std::cin >> nickName;
			contact.addNickname(nickName);
			std::cout << "Phone Number:" << std::endl;
			std::cin >> phoneNumber;
			contact.addPhoneNumber(phoneNumber);
			std::cout << "DarkestSecret:" << std::endl;
			std::cin >> darkestSecret;
			contact.addDarkestSecret(darkestSecret);
			phonebook.addContact(contact);
		}
		else if (cmd == "SEARCH")
		{
			std::cout
    			<< std::left << std::setw(10) << std::setfill(' ') << "index" << "|"
    			<< std::left << std::setw(10) << std::setfill(' ') << "firstname" << "|"
    			<< std::left << std::setw(10) << std::setfill(' ') << "lastname" << "|"
    			<< std::left << std::setw(10) << std::setfill(' ') << "nickname" << std::endl;
			phonebook.printContact();
			while (1)
			{
				std::cout << "Contact index :" << std::endl;
				std::cin >> index;
				if ((index < phonebook.getIndex() || phonebook.getFull() == 1) && index <= 8 && index >= 0) {
					std::cout << "Firstname:" + phonebook.getContact(index).getFirstName() << std::endl;
					std::cout << "LastName:" + phonebook.getContact(index).getLastName() << std::endl;
					std::cout << "Nickname:" + phonebook.getContact(index).getNickname() << std::endl;
					std::cout << "PhoneNumber:" + phonebook.getContact(index).getPhoneNumber() << std::endl;
					std::cout << "DarkestSecret:" + phonebook.getContact(index).getDarkestSecret() << std::endl;
					break;
				}
				else {
					std::cout << "Index Error" << std::endl;
					break ;
				}
			}
		}
		else if (cmd == "EXIT")
			return (0);
		else if (cmd == "")
			return (0);
	}
	return (0);
}
