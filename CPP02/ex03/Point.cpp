/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:36:55 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/23 11:54:00 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

//Constructor && Destructor

Point::Point(void)
{
	Fixed x(0);
	Fixed y(0);
	
	this->x = x;
	this->y = y;
}

Point::Point(const Point &pts)
{
	*this = pts;
}

Point::Point(const float x, const float y)
{
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::~Point()
{
}

//Operator

Point	Point::&operator=(const Point &to_assign)
{
	this->x = to_assign.x;
	this->y = to_assign.y;
	return (*this);
}

