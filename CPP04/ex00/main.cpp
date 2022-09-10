/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:16:46 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/10 16:31:37 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const WrongAnimal* wrongCat = new WrongCat();
	const WrongAnimal* meta2 = new WrongAnimal();
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl << std::endl;;
	
	
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	wrongCat->makeSound();
	meta2->makeSound();

	delete wrongCat;
	delete meta2;
	delete meta;
	delete dog;
	delete cat;

	return 0;
}
