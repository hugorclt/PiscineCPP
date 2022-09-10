/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:18:21 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/10 17:24:46 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Animal

Animal::Animal()
{
	this->brain = new Brain();
}

Animal::Animal(Animal &to_cpy)
{
	*this = to_cpy;
}

Animal::~Animal()
{
	delete this->brain;
}

//Operator

Animal	&Animal::operator=(const Animal &to_assign)
{
	this->type = to_assign.type;
	return (*this);
}

//Function

void	Animal::makeSound(void) const
{
	std::cout << "meuh im an animal yay" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}




//Dog

Dog::Dog()
{
	this->type = "Dog";
}

Dog::Dog(Dog &to_cpy)
{
	*this = to_cpy;
}

Dog::~Dog()
{
}

//Operator

Dog	&Dog::operator=(const Dog &to_assign)
{
	this->type = to_assign.type;
	return (*this);
}

//Function

void	Dog::makeSound(void) const
{
	std::cout << "yes im barking now" << std::endl;
}






//Cat

Cat::Cat()
{
	this->type = "Cat";
}

Cat::Cat(Cat &to_cpy)
{
	*this = to_cpy;
}

Cat::~Cat()
{
}

//Operator

Cat	&Cat::operator=(const Cat &to_assign)
{
	this->type = to_assign.type;
	return (*this);
}

//Function

void	Cat::makeSound(void) const
{
	std::cout << "MiaouMiaouMiaou norminet is my rival" << std::endl;
}
