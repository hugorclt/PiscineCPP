/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:34:39 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/28 17:53:10 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : name("no_name_form"), isSigned(false), rankToSign(2), rankToExec(2)
{
}

Form::Form(std::string name, const int rankToSign, const int rankToExec) : name(name), isSigned(false), rankToSign(rankToSign), rankToExec(rankToExec)
{
	if (rankToSign > 150 || rankToExec > 150)
		throw GradeTooLowException();
	else if (rankToSign < 1 || rankToExec < 1)
		throw GradeTooHighException();
}

Form::Form(Form &to_cpy) : name(to_cpy.name), rankToSign(to_cpy.rankToSign), rankToExec(to_cpy.rankToExec) 
{
	*this = to_cpy;
}

Form::~Form()
{
}

//Accessor
std::string	Form::getName(void)
{
	return (this->name);
}

bool	Form::getIsSigned(void)
{
	return (this->isSigned);
}

int	Form::getRankToSign(void)
{
	return (this->rankToSign);
}

int	Form::getRankToExec(void)
{
	return (this->rankToExec);
}

//Operator
Form	&Form::operator=(const Form &to_assign)
{
	this->isSigned = to_assign.isSigned;
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, Form &form)
{
	stream	<< "Form name : " << form.getName()
			<< " is signed : " << form.getIsSigned()
			<< " rank to sign :" << form.getRankToSign()
			<< " rank to exec :" << form.getRankToExec()
			<< std::endl;
	return (stream);
}

//Methods
void	Form::execute(const Bureaucrat &executor)
{
	if (this->rankToExec < executor.getRank())
		throw Form::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw Form::FormIsntSigned();
	this->beExecuted();
}
