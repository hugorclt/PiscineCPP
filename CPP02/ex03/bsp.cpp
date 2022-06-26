/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:41:16 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/26 11:34:32 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	abs(Fixed value)
{
	Fixed	res;
	
	if (value < 0)
		res = value * (-1);
	else
		res = value;
	return (res);
}

Fixed	area(Point const a, Point const b, Point const c)
{
	Fixed two(2);
	
	return (abs((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / two));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = area(a, b, c);
	Fixed A1 = area(point, b, c);
	Fixed A2 = area(point, a, c);
	Fixed A3 = area(point, a, b);

	return (A == A1 + A2 + A3);
}

