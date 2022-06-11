/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:15:01 by hrecolet          #+#    #+#             */
/*   Updated: 2022/03/03 05:23:26 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

Phonebook::Phonebook(void)
{
	this->index = 0;
	this->is_full = 0;
	return ;
}

Contact	Phonebook::getContact(int index)
{
	return this->contact[index];
}

int		Phonebook::getIndex()
{
	return this->index;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::addContact(Contact contact)
{
	if (this->index == 8)
	{
		this->is_full = 1;
		this->index = 0;
	}
	this->contact[index] = contact;
	this->index++;
}

void	Phonebook::printContact()
{
	int	j;
	
	if (is_full == 1)
		j = 8;
	else
		j = this->index;
	for (int i = 0; i < j; i++)
	{
		std::cout
    		<< std::left << std::setw(10) << std::setfill(' ') << i << "|"
    		<< std::left << std::setw(10) << std::setfill(' ') << this->truncate(this->contact[i].getFirstName(), 10) << "|"
    		<< std::left << std::setw(10) << std::setfill(' ') << this->truncate(this->contact[i].getLastName(), 10) << "|"
			<< std::left << std::setw(10) << std::setfill(' ') << this->truncate(this->contact[i].getNickname(), 10) << std::endl;
		std::cout << std::endl;
	}
}
