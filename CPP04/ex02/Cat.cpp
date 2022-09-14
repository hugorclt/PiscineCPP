/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:57:23 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/13 15:00:27 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "cat was created" << std::endl;
}

Cat::Cat(Cat &to_cpy) : Animal(to_cpy.type), brain(new Brain(*to_cpy.brain))
{
	std::cout << "cat was created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "cat destroyed" << std::endl;
	delete this->brain;
}

//Operator

Cat	&Cat::operator=(const Cat &to_assign)
{
	*this->brain = *to_assign.brain;
	this->type = to_assign.type;
	return (*this);
}

//Function

void	Cat::makeSound(void) const
{
	std::cout << "miaou" << std::endl;
}

