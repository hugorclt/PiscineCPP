/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:22:18 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/26 15:36:48 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap joe("Joe");
	std::cout << std::endl;
	ClapTrap yay;
	std::cout << std::endl;
	ScavTrap willfried("Willfried");
	std::cout << std::endl;
	ScavTrap yay2;
	std::cout << std::endl;
	FragTrap bill("Bill");
	std::cout << std::endl;
	FragTrap yay3;
	std::cout << std::endl;
	DiamondTrap rick("Rick");
	std::cout << std::endl;
	DiamondTrap yay4;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "FlagTrap" << std::endl;
	bill.attack("Willfried");
	bill.highFiveGuys();
	bill.takeDamage(200);
	bill.highFiveGuys();
	yay3.takeDamage(100);

	std::cout << std::endl;
	std::cout << "ScavTrap" << std::endl;
	willfried.attack("Joe");
	willfried.guardGate();
	yay2.takeDamage(200);
	yay2.beRepaired(100);
	yay2.guardGate();

	std::cout << std::endl;
	std::cout << "ClapTrap" << std::endl;
	joe.beRepaired(10);
	joe.takeDamage(10);
	joe.attack("Bill");
	yay.attack("Willfried");

	std::cout << std::endl;
	std::cout << "DiamondTrap" << std::endl;
	rick.attack("Bill");
	rick.whoAmI();
	rick.takeDamage(400);
	rick.whoAmI();
	yay3.beRepaired(6);

	std::cout << std::endl;
	std::cout << std::endl;
}
