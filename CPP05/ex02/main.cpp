/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:01:04 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/27 14:48:43 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "Test#1" << std::endl;
	try {
		Form form1("form1", 2, 3);
		std::cout << form1;
		Bureaucrat paul("Paul", 2);	
		paul.signForm(form1);
		std::cout << form1;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << std::endl;
	std::cout << "Test#2" << std::endl;
	try {
		Form form1("form1", 1, 3);
		Bureaucrat paul("Paul", 2);	
		paul.signForm(form1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
