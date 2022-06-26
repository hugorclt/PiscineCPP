/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:33:47 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/26 15:13:43 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FlagTrap is born" << std::endl;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << name << " FlagTrap is born" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(FragTrap &to_cpy)
{
	std::cout << "FragTrap is born" << std::endl;
	*this = to_cpy;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " FragTrap was destroyed by the angry compilo" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &to_assign)
{
	this->name = to_assign.name;
	this->health = to_assign.health;
	this->energy = to_assign.energy;
	this->damage = to_assign.damage;
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	if (this->energy > 0 && this->health > 0)
		std::cout << this->name << " : Please can we HighFive guys ?" << std::endl;
}