/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:48:07 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/25 13:22:39 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "a ScavTrap is born" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << name << " ScavTrap is born" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(ScavTrap &to_copy)
{
	std::cout << "a ScavTrap is born" << std::endl;
	*this = to_copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " ScavTrap was destroyed by the angry compilo" << std::endl;
}

//Function

void	ScavTrap::guardGate(void)
{
	if (this->energy > 0 && this->health > 0)
		std::cout << this->name << " : Gate Keeper mode activated" << std::endl;
}