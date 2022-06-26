/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:36:55 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/26 15:06:47 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

//Constructor && Destructor

Point::Point(void)
{
}

Point::Point(const Point &pts) : x(pts.x), y(pts.y)
{
}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y))
{
}

Point::~Point()
{
}

//Operator

Point	&Point::operator=(const Point &to_assign)
{
	(void)to_assign;
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}

