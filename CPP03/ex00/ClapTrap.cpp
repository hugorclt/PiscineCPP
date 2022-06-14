/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:54:07 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/14 11:27:51 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " is born" << std::endl;
	this->name = name;
	this->energy = 10;
	this->health = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &inst)
{
	std::cout << "a clone of " << inst.name << " was created" << std::endl;
	*this = inst;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->name << " was destroyed by the angry compilo" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->health && this->energy)
	{
		this->energy--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->health && this->energy)
	{
		this->health -= amount;
		std::cout << this->name << " : ouch! i lost " << amount << " hit points" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy && this->health)
	{
		this->health += amount;
		this->energy--;	
		std::cout << " Cling... Cling... i'm now at " << this->health << " and i have " << this->energy << " left" << std::endl;
	}
}
