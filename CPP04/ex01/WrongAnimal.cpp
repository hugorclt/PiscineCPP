/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:32:03 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/26 20:47:49 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{	
}

WrongAnimal::WrongAnimal(WrongAnimal &to_cpy)
{
	*this = to_cpy;
}

WrongAnimal::~WrongAnimal()
{
}

//Operator

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &to_assign)
{
	this->type = to_assign.type;
	return (*this);
}

//Function

void	WrongAnimal::makeSound(void) const
{
	std::cout << "behhhh im a wrong animal now" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}


//WrongCat

WrongCat::WrongCat()
{
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &to_cpy)
{
	*this = to_cpy;
}

WrongCat::~WrongCat()
{
}

//Operator

WrongCat	&WrongCat::operator=(const WrongCat &to_assign)
{
	this->type = to_assign.type;
	return (*this);
}

//Function

void	WrongCat::makeSound(void) const
{
	std::cout << "MiaouMiaouMiaou norminet is my rival" << std::endl;
}