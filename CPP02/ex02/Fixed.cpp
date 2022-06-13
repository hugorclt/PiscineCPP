/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:16:37 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/13 15:32:50 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/****************/
/****CONSTRUC****/
/****************/


Fixed::Fixed(void)
{
	this->value = 0;
}

Fixed::Fixed(const Fixed &value)
{
	*this = value;
}

Fixed::Fixed(const int &value) : value(value << Fixed::bits)
{
}

Fixed::Fixed(const float &value) : value(roundf(value * (1 << this->bits)))
{
}

Fixed::~Fixed(void)
{
}

/****************/
/****OPERATOR****/
/****************/


Fixed	&Fixed::operator=(const Fixed &to_assign)
{
	this->value = to_assign.getRawBits();
	return (*this);
}

bool			Fixed::operator==(const Fixed &othInstance) const
{
	if (this->value == othInstance.value)
		return (true);
	return (false);
}

bool			Fixed::operator!=(const Fixed &othInstance) const
{
	if (this->value != othInstance.value)
		return (true);
	return (false);
}

bool			Fixed::operator<(const Fixed &othInstance) const
{
	if (this->value < othInstance.value)
		return (true);
	return (false);
}

bool			Fixed::operator>(const Fixed &othInstance) const
{
	if (this->value > othInstance.value)
		return (true);
	return (false);
}

bool			Fixed::operator<=(const Fixed &othInstance) const
{
	if (this->value <= othInstance.value)
		return (true);
	return (false);
}

bool			Fixed::operator>=(const Fixed &othInstance) const
{
	if (this->value >= othInstance.value)
		return (true);
	return (false);
}

Fixed			Fixed::operator+(const Fixed &othInstance) const
{
	Fixed	sum;

	sum.setRawBits(this->value + othInstance.value);
	return (sum);
}

Fixed			Fixed::operator-(const Fixed &othInstance) const
{
	Fixed	diff;

	diff.setRawBits(this->value - othInstance.value);
	return (diff);
}

Fixed			Fixed::operator*(const Fixed &othInstance)
{
	Fixed	product;

	product.setRawBits((long)this->value * othInstance.value / (1 << Fixed::bits));
	return (product);
}

Fixed			Fixed::operator/(const Fixed &othInstance) const
{
	Fixed	quotient;

	quotient.setRawBits(((long)this->value * (1 << Fixed::bits)) / othInstance.value);
	return (quotient);
}

Fixed			Fixed::operator++(void)
{
	this->value += (1 << this->bits);
	return (*this);
}

Fixed			Fixed::operator--(void)
{
	this->value -= (1 << this->bits);
	return (*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed	save(*this);
	operator++();
	return (save);
}

Fixed			Fixed::operator--(int)
{
	Fixed	save(*this);
	operator--();
	return (save);
}


/****************/
/****METHODES****/
/****************/


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
	if (nb1 <= nb2)
		return (nb1);
	return (nb2);
}

const Fixed	Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
	if (nb1 >= nb2)
		return (nb1);
	return (nb2);
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
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}
