/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:07:23 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/13 15:10:01 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "cat was created" << std::endl;

}

Cat::Cat(Cat &to_cpy) : Animal(to_cpy.type)
{
	std::cout << "cat was created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "cat was destroyed" << std::endl;
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
	std::cout << "meow" << std::endl;
}
