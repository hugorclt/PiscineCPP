/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 08:57:46 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/24 09:48:35 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->type = "random weapon";
}

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string name)
{
	this->type = name;
}

const std::string	&Weapon::getType()
{
	std::string &ref = this->type;
	return (ref);
}

void	Weapon::setType(std::string newType)
{
	if (newType == "")
		std::cout << "You must set a name for the Weapon" << std::endl;
	else
		this->type = newType;
}
