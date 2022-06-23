/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:16:39 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/23 11:02:26 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point A(0, 0);
	Point B(20, 0);
	Point C(10, 30);
	Point point(10, 15);

	std::cout << bsp(A, B, C, point);
}
