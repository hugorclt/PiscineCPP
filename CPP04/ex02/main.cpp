/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:28:59 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/13 15:15:47 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

int main()
{
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();
	
	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	
	dog->makeSound();
	cat->makeSound();

/*
	Animal	*animal = new Animal();
*/

	delete dog;
	delete cat;
	return 0;
}
