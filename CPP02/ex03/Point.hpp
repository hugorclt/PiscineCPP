/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:36:23 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/23 11:02:48 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {

	private:
		const Fixed x;
		const Fixed y;
		
	public:
		Point();
		Point(const Point &pts);
		Point(const float x, const float y);
		~Point();
		Point	&operator=(const Point &to_assign);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
