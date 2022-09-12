/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:18:21 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/12 09:42:36 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* -------------------------------------------------------------------------- */
/*                                   Animal                                   */
/* -------------------------------------------------------------------------- */

Animal::Animal()
{
	std::cout << "animal was created" << std::endl;
}

Animal::Animal(Animal &to_cpy)
{
	*this = to_cpy;
}

Animal::~Animal()
{
	std::cout << "animal was destroyed" << std::endl;
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

void		Animal::setType(const std::string type)
{
	this->type = type;
}

/* -------------------------------------------------------------------------- */
/*                                     DOG                                    */
/* -------------------------------------------------------------------------- */

Dog::Dog()
{
	std::cout << "dog was created" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(Dog &to_cpy)
{
	this->brain = new Brain();
	this->brain = to_cpy.brain;
	this->type = to_cpy.type;
}

Dog::~Dog()
{
	std::cout << "dog destroyed" << std::endl;
	delete this->brain;
}

//Operator

Dog	&Dog::operator=(const Dog &to_assign)
{
	delete this->brain;
	this->brain = new Brain();
	this->brain = to_assign.brain;
	this->type = to_assign.type;
	return (*this);
}

//Function

void	Dog::makeSound(void) const
{
	std::cout << "yes im barking now" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                     Cat                                    */
/* -------------------------------------------------------------------------- */

Cat::Cat()
{
	std::cout << "cat was created" << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(Cat &to_cpy)
{
	this->brain = new Brain();
	this->brain = to_cpy.brain;
	this->type = to_cpy.type;
}

Cat::~Cat()
{
	std::cout << "cat destroyed" << std::endl;
	delete this->brain;
}

//Operator

Cat	&Cat::operator=(const Cat &to_assign)
{
	delete this->brain;
	this->brain = new Brain();
	this->brain = to_assign.brain;
	this->type = to_assign.type;
	return (*this);
}

//Function

void	Cat::makeSound(void) const
{
	std::cout << "MiaouMiaouMiaou norminet is my rival" << std::endl;
}
