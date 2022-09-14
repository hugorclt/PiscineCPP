/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:18:21 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/13 15:12:44 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "animal was created" << std::endl;
}

Animal::Animal(Animal &to_cpy)
{
	*this = to_cpy;
}

Animal::Animal(std::string type) : type(type)
{
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
	std::cout << "undefined" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void		Animal::setType(const std::string type)
{
	this->type = type;
}

