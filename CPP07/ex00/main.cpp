/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:39:18 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/30 16:53:34 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int	main(void)
{
	{
		//Test #1 : INTEGER
		std::cout << "Test #1 : INTEGER" << std::endl;
		std::cout << "min(1, 2) : ";
		std::cout << min(1, 2) << std::endl;
		std::cout << "max(8, 16) : ";
		std::cout << max(8, 16) << std::endl;
		int	x = 4;
		int	y = 5;
		std::cout << "x : " << x << std::endl;
		std::cout << "y : " << y << std::endl;
		swap(x, y);
		std::cout << "swap(x, y)" << std::endl;
		std::cout << "x : " << x << std::endl;
		std::cout << "y : " << y << std::endl;
	}
	{
		//Test #2 : Character
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Test #1 : CHARACTER" << std::endl;
		std::cout << "min(a, b) : ";
		std::cout << min('a', 'b') << std::endl;
		std::cout << "max(a, b) : ";
		std::cout << max('a', 'b') << std::endl;
		char	x = 'a';
		char	y = 'b';
		std::cout << "x : " << x << std::endl;
		std::cout << "y : " << y << std::endl;
		std::cout << "swap(x, y)" << std::endl;
		swap(x, y);
		std::cout << "x : " << x << std::endl;
		std::cout << "y : " << y << std::endl;
	}
	{
		//Test #3 : Float
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Test #3 : FLOAT" << std::endl;
		std::cout << "min(0.5, 0.1) : ";
		std::cout << min(0.5, 0.1) << std::endl;
		std::cout << "max(0.5, 0.1) : ";
		std::cout << max(0.5, 0.1) << std::endl;
		float	x = 0.5;
		float	y = 0.1;
		std::cout << "x : " << x << std::endl;
		std::cout << "y : " << y << std::endl;
		std::cout << "swap(x, y)" << std::endl;
		swap(x, y);
		std::cout << "x : " << x << std::endl;
		std::cout << "y : " << y << std::endl;
	}
}