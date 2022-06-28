/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:01:04 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/28 21:07:28 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << "Test#1" << std::endl;
	try {
		Intern joe;
		Form *form1;
		form1 = joe.makeForm("shrubbery creation", "jardin"); 
		std::cout << *form1;
		Bureaucrat paul("Paul", 2);	
		paul.signForm(*form1);
		std::cout << *form1;
		paul.executeForm(*form1);
		delete form1;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "Test#2" << std::endl;
	try {
		Intern joe;
		Form *form1;
		form1 = joe.makeForm("robotomy request", "coolguy"); 
		std::cout << *form1;
		Bureaucrat paul("Paul", 2);	
		paul.signForm(*form1);
		std::cout << *form1;
		paul.executeForm(*form1);
		delete form1;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "Test#3" << std::endl;
	try {
		Intern joe;
		Form *form1;
		form1 = joe.makeForm("presidential pardon", "yes"); 
		std::cout << *form1;
		Bureaucrat paul("Paul", 2);	
		paul.signForm(*form1);
		std::cout << *form1;
		paul.executeForm(*form1);
		delete form1;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "Test#4" << std::endl;
	try {
		Intern joe;
		Form *form1;
		form1 = joe.makeForm("jesaispasquoi request", "lol"); 
		std::cout << *form1;
		Bureaucrat paul("Paul", 2);	
		paul.signForm(*form1);
		std::cout << *form1;
		paul.executeForm(*form1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
