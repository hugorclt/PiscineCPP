/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:16:37 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/13 12:11:58 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &value)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = value.getRawBits();
}

Fixed::Fixed(const int &value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << this->bits;
}

Fixed::Fixed(const float &value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << this->bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &to_assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = to_assign.getRawBits();
}

bool			Fixed::operator==(const Fixed &othInstance)
{
	if (this->value == othInstance.value && this->bits == othInstance.value)
		return (true);
	return (false);
}

bool			Fixed::operator!=(const Fixed &othInstance)
{
	if (this->value != othInstance.value)
		return (true);
	if (this->bits != othInstance.bits)
		return (true);
	return (false);
}

bool			Fixed::operator<(const Fixed &othInstance)
{
	if (this->value < othInstance.value)
		return (true);
	if (this->bits < othInstance.bits && this->value == othInstance->value)
		return (true);
	return (false);
}

bool			Fixed::operator>(const Fixed &othInstance)
{
	if (this->value > othInstance.value)
		return (true);
	if (this->bits > othInstance.bits && this->value == othInstance->value)
		return (true);
	return (false);
}

bool			Fixed::operator<=(const Fixed &othInstance)
{
	if (this->value < othInstance.value || (this->value == othInstance.value && this->bits <= othInstance.bits))
		return (true);
	return (false);
}

bool			Fixed::operator>=(const Fixed &othInstance)
{
	if (this->value > othInstance.value || (this->value == othInstance.value && this->bits >= othInstance.bits))
		return (true);
	return (false);
}

Fixed			Fixed::operator+(const Fixed &othInstance)
{
	this->value += othInstance.value;
	this->bits += othInstance.bits;
}

Fixed			Fixed::operator-(const Fixed &othInstance)
{
	this->value -= othInstance.value;
	this->bits -= othInstance.bits;
}

Fixed			Fixed::operator*(const Fixed &othInstance)
{
	this->value *= othInstance.value;
	this->bits *= othInstance.bits;
}

Fixed			Fixed::operator/(const Fixed &othInstance)
{
	this->value /= othInstance.value;
	this->bits /= othInstance.bits;
}

Fixed	Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if (nb1 <= nb2)
		return (nb1);
	return (nb2);
}

Fixed	Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if (nb1 >= nb2)
		return (nb1);
	return (nb2);
}

const Fixed	Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
	
}

const Fixed	Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
	
}


std::ostream	&operator<<(std::ostream &stream, const Fixed &to_output)
{
	stream << to_output.toFloat();
	return (stream);
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->bits));
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}
