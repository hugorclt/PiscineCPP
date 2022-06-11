/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:14:43 by hrecolet          #+#    #+#             */
/*   Updated: 2022/03/03 04:23:05 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::addFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::addlastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::addNickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::addPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::addDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void)
{
	return this->firstName;
}

std::string Contact::getLastName(void)
{
	return this->lastName;
}

std::string	Contact::getNickname(void)
{
	return this->nickname;
}

std::string Contact::getPhoneNumber(void)
{
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret(void)
{
	return this->darkestSecret;
}
