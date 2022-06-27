/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:28:59 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/27 11:15:55 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

int	main(void)
{
	const Animal	*animals[12];
	
	for (int i = 0; i < 12; i++)
	{
		if (i < 6)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < 12; i++)
		std::cout << animals[i]->getType() << std::endl;
	for (int i = 0; i < 12; i++)
		delete animals[i];
}
