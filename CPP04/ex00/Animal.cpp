/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:18:21 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/13 15:10:58 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Animal

Animal::Animal()
{
	std::cout << "Animal was created" << std::endl;
}

Animal::Animal(Animal &to_cpy) : type(to_cpy.type)
{
	std::cout << "Animal was created" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal was created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal was Destroyed" << std::endl;
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
	std::cout << "undefined" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
