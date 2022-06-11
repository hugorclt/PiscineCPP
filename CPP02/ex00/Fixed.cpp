/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:16:37 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/11 11:00:12 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& value)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = value.value;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::operator=(const Fixed &to_assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = to_assign.value;
}

int	Fixed::getRawBits(void)
{
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}
