/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:28:59 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/12 14:50:57 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

int	main(void)
{
	Animal	*animals[12];
	
	for (int i = 0; i < 12; i++)
	{
		if (i < 6)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < 12; i++)
		std::cout << animals[i]->getType() << std::endl;

	//Test to know if the copy on an animal is shallow or deep
	animals[0]->setType("ecureuil");
	Animal	test(*animals[0]);
	
	std::cout << animals[0]->getType() << std::endl;
	std::cout << test.getType() << std::endl;
	test.setType("cat");

	std::cout << animals[0]->getType() << std::endl;
	std::cout << test.getType() << std::endl;
	//here it's deep because when i change the type of "test" the type of animal is unchanged

	//same for the assignation operator, it's a deep copy
	*animals[0] = test;
	std::cout << animals[0]->getType() << std::endl;
	std::cout << test.getType() << std::endl;
	test.setType("colossal Diplodocus");

	std::cout << animals[0]->getType() << std::endl;
	std::cout << test.getType() << std::endl;
	
	for (int i = 0; i < 12; i++)
		delete animals[i];
}
