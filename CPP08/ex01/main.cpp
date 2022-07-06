/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:52:56 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/06 21:53:42 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "Span.hpp"
#include <iostream>

int	main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::vector <int> vect;
	for (int i = 0; i < 25000; i++)
	{
		vect.push_back(i);
	}
	Span test = Span(25000);
	test.addNumber(vect.begin(), vect.end());
	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;

	return (0);
}