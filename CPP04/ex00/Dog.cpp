/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:07:36 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/13 15:12:02 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog was Created" << std::endl;
}

Dog::Dog(Dog &to_cpy) : Animal(to_cpy.type)
{
	std::cout << "Dog was Created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog was Destroyed" << std::endl;
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
	std::cout << "bark" << std::endl;
}
