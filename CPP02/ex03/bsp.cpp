/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:41:16 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/23 13:41:26 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	abs(Fixed value)
{
	Fixed	res;
	
	if (value < 0)
		res = value * (-1);
	return (res);
}

Fixed	area(Point const a, Point const b, Point const c)
{
	return (abs((a.x * (b.x - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)) / 2.0));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = area(a, b, c);
	Fixed A1 = area(point, b, c);
	Fixed A2 = area(point, a, c);
	Fixed A3 = area(point, a, b);

	return (A == A1 + A2 + A3);
}

