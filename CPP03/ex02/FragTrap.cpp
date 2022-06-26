/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:33:47 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/25 13:42:33 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FlagTrap::FlagTrap()
{
	std::cout << "FlagTrap is born" << std::endl;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FlagTrap::FlagTrap(std::string name)
{
	std::cout << name << " FlagTrap is born" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FlagTrap::FlagTrap(FlagTrap &to_cpy)
{
	std::cout << "FlagTrap is born" << std::endl;
	*this = to_cpy;
}

FlagTrap::~FlagTrap()
{
	std::cout << this->name << " FlagTrap was destroyed by the angry compilo" << std::endl;
}

void	FlagTrap::highFiveGuys(void)
{
	if (this->energy > 0 && this->health > 0)
		std::cout << this->name << " : Please can we HighFive guys ?" << std::endl;
}