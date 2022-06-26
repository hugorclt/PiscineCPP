/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:47:34 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/26 15:47:58 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("no_name_clap_name"), ScavTrap(), FragTrap()
{	
	std::cout << "a DiamondTrap is born" << std::endl;
	this->damage = FragTrap::damage;
	this->energy = ScavTrap::energy;
	this->health = FragTrap::health;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << name << " DiamondTrap is born" << std::endl;
	this->name = name;
	this->damage = FragTrap::damage;
	this->energy = ScavTrap::energy;
	this->health = FragTrap::health;
}

DiamondTrap::DiamondTrap(DiamondTrap &to_cpy)
{
	*this = to_cpy;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << name << " DiamondTrap was destroyed by the angry compilo" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &to_assign)
{
	this->name = to_assign.name;
	this->health = to_assign.health;
	this->energy = to_assign.energy;
	this->damage = to_assign.damage;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	if (this->energy > 0 && this->health > 0)
		std::cout << "I'am " << this->name << " and " << ClapTrap::name << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}