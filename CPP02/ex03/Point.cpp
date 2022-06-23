/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:36:55 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/23 14:14:35 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

//Constructor && Destructor

Point::Point(void)
{	
}

Point::Point(const Point &pts)
{
	this->x.setRawBits(pts->x);
	this->y.setRawBits(pts->y);
}

Point::Point(const float x, const float y)
{
	this->x.setRawBits(x);
	this->y.setRawBits(y);
}

Point::~Point()
{
}

//Operator

Point	&Point::operator=(const Point &to_assign)
{
	this->x = to_assign.x;
	this->y = to_assign.y;
	return (*this);
}

