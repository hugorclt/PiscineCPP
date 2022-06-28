/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:28:52 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/28 21:06:30 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

std::string	formId[4] = {
	("shrubbery creation"),
	("robotomy request"),
	("presidential pardon"),
	("None")
};

Intern::Intern()
{
}

Intern::Intern(const Intern &to_cpy)
{
	*this = to_cpy;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &to_assign)
{
	(void)to_assign;
	return (*this);
}

Form	*Intern::makeForm(std::string type, std::string target) const
{
	int	formID = 0;

	while (formId[formID] != type && formID < 3)
		formID++;
	if (formID >= 3)
		throw FormTypeDoesNotExist();
	else
	{
		std::cout << "Intern creates " << type << std::endl;
		switch (formID)
		{
			case 0:
				return (new ShrubberyCreationForm(target));
			case 1:
				return (new RobotomyRequestForm(target));
			case 2:
				return (new PresidentialPardonForm(target));
		}
	}
	return (NULL);
}