/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:22:18 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/14 11:24:29 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap joe("Joe");
	ClapTrap bill("Bill");

	bill.attack("Joe");
	joe.beRepaired(10);
	joe.takeDamage(10);
}
