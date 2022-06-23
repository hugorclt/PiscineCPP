/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:18:13 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/23 09:33:59 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	//Create two Zombie, Phil on the heap, with the keyword new inside newZombie.cpp
	//Olivier on the stack inside randomChump.cpp
	Zombie *z1 = newZombie("Phil");
	randomChump("Olivier");
	
	z1->announce();

	delete z1;
}
