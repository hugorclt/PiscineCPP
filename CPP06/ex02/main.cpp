/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:04:57 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/05 13:43:56 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{	
	switch (rand() % 3)
	{
		case (0) :
			std::cout << "new A" << std::endl;
			return (new A);
		case (1) :
			std::cout << "new B" << std::endl;
			return (new B);
		case (2) :
			std::cout << "new C" << std::endl;
			return (new C);
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "this instance is a A class" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "this instance is a B class" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "this instance is a C class" << std::endl;
}

void	identify(Base &p)
{
	try {
		Base &ref = dynamic_cast<A &>(p);
		std::cout << "this ref is a A class" << std::endl;
		(void)ref;
	} catch (std::exception &e) {
	}
	try {
		Base &ref = dynamic_cast<B &>(p);
		std::cout << "this ref is a B class" << std::endl;
		(void)ref;
	} catch (std::exception &e) {
	}
	try {
		Base &ref = dynamic_cast<C &>(p);
		std::cout << "this ref is a C class" << std::endl;
		(void)ref;
	} catch (std::exception &e) {
	}
}

int	main()
{
	srand(time(NULL));
	for (int i = 0; i < 9; i++)
	{
		std::cout << "Test#" << i + 1 << std::endl;
		Base *test = generate();
		identify(test);
		Base	&ref = *test;
		identify(ref);
		std::cout << "-----------"<< std::endl;
		delete test;
	}
	return (0);
}