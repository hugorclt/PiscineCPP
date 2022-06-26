/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:22:18 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/25 13:22:59 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap yay;
	std::cout << std::endl;
	ClapTrap joe("Joe");
	std::cout << std::endl;
	ClapTrap bill("Bill");
	std::cout << std::endl;
	ScavTrap willfried("Willfried");
	std::cout << std::endl;
	ScavTrap yay2;
	std::cout << std::endl;
	std::cout << std::endl;

	willfried.attack("Joe");
	willfried.guardGate();
	bill.attack("Joe");
	joe.beRepaired(10);
	joe.takeDamage(10);
	joe.attack("Bill");
	yay.attack("Willfried");
	yay2.takeDamage(200);
	yay2.beRepaired(100);
	yay2.guardGate();

	std::cout << std::endl;
}
