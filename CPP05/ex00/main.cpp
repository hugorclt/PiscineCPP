/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:01:04 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/14 08:50:55 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "Test#1" << std::endl;
	try {
		Bureaucrat paul("Paul", -1);	
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << std::endl;
	std::cout << "Test#2" << std::endl;
	try {
		Bureaucrat paul("Paul", 151);	
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << std::endl;
	std::cout << "Test#3" << std::endl;
	try {
		Bureaucrat paul("Paul", 150);
		std::cout << paul;
		paul.decrRank();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "Test#4" << std::endl;
	try {
		Bureaucrat paul("Paul", 1);
		std::cout << paul;
		paul.incrRank();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "Test#5" << std::endl;
	try {
		Bureaucrat paul("Paul", 5);
		std::cout << paul;
		paul.incrRank();
		std::cout << paul;
		paul.incrRank();
		std::cout << paul;
		paul.incrRank();
		std::cout << paul;
		paul.decrRank();
		std::cout << paul;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
