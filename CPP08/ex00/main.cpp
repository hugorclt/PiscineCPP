/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:21:45 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/06 19:56:09 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int	main()
{
	{
		std::cout << "Test#1" << std::endl;
		try {
			std::list<int>	lst;

			lst.push_back(10);
			lst.push_back(6);
			lst.push_back(3);
			lst.push_back(278);
			lst.push_back(1);
			lst.push_back(9);
			lst.push_back(252);
			lst.push_back(42);
			lst.push_back(43);
			lst.push_back(45);
			lst.push_back(90);
			lst.push_back(97);

			int	res = easyFind(lst, 42);
			std::cout << res << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "Test#2" << std::endl;
		try {
			std::list<int>	lst;

			lst.push_back(10);
			lst.push_back(6);
			lst.push_back(3);
			lst.push_back(278);
			lst.push_back(1);
			lst.push_back(9);
			lst.push_back(252);
			lst.push_back(42);
			lst.push_back(43);
			lst.push_back(45);
			lst.push_back(90);
			lst.push_back(97);

			int	res = easyFind(lst, 41);
			std::cout << res << std::endl;
		} catch (NumberNotFound &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "Test#3" << std::endl;
		try {
			std::vector<int>	vect;

			vect.push_back(10);
			vect.push_back(6);
			vect.push_back(3);
			vect.push_back(278);
			vect.push_back(1);
			vect.push_back(9);
			vect.push_back(252);
			vect.push_back(42);
			vect.push_back(43);
			vect.push_back(45);
			vect.push_back(90);
			vect.push_back(97);

			int	res = easyFind(vect, 41);
			std::cout << res << std::endl;
		} catch (NumberNotFound &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "Test#4" << std::endl;
		try {
			std::vector<int>	vect;

			vect.push_back(10);
			vect.push_back(6);
			vect.push_back(3);
			vect.push_back(278);
			vect.push_back(1);
			vect.push_back(9);
			vect.push_back(252);
			vect.push_back(42);
			vect.push_back(43);
			vect.push_back(45);
			vect.push_back(90);
			vect.push_back(97);

			int	res = easyFind(vect, 97);
			std::cout << res << std::endl;
		} catch (NumberNotFound &e) {
			std::cout << e.what() << std::endl;
		}
	}
}