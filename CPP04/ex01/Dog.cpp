/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:57:14 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/13 15:12:09 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


/* -------------------------------------------------------------------------- */
/*                                     DOG                                    */
/* -------------------------------------------------------------------------- */

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "dog was created" << std::endl;
}

Dog::Dog(Dog &to_cpy) : Animal(to_cpy.type), brain(new Brain(*to_cpy.brain))
{
	std::cout << "dog was created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "dog destroyed" << std::endl;
	delete this->brain;
}

//Operator

Dog	&Dog::operator=(const Dog &to_assign)
{
	*this->brain = *to_assign.brain;
	this->type = to_assign.type;
	return (*this);
}

//Function

void	Dog::makeSound(void) const
{
	std::cout << "bark" << std::endl;
}
