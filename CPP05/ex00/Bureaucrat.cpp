/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:01:06 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/27 13:22:42 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Constructor / Destructor

Bureaucrat::Bureaucrat(void) : name("no_name"), rank(1)
{
}

Bureaucrat::Bureaucrat(const std::string name, int rank) : name(name)
{
	if (rank < 1)
		throw GradeTooHighException();
	else if (rank > 150)
		throw GradeTooLowException();
	else
		this->rank = rank;
}

Bureaucrat::Bureaucrat(Bureaucrat &to_cpy)
{
	*this = to_cpy;
}

Bureaucrat::~Bureaucrat(void)
{
}

//Operator

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &to_assign)
{
	this->rank = to_assign.rank;
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &to_output)
{
	stream << to_output.getName() << ", bureaucrat grade " << to_output.getRank() << std::endl;
	return (stream);
}

//Accessor

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int			Bureaucrat::getRank(void) const
{
	return (this->rank);
}

//Methods

void		Bureaucrat::incrRank(void)
{
	if (this->rank == 1)
		throw GradeTooHighException();
	else
		this->rank--;
}

void		Bureaucrat::decrRank(void)
{
	if (this->rank == 150)
		throw GradeTooLowException();
	else
		this->rank++;
}
