/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:34:39 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/27 14:47:50 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : name("no_name_AForm"), isSigned(false), rankToSign(2), rankToExec(2)
{
}

AForm::AForm(std::string name, const int rankToSign, const int rankToExec) : name(name), isSigned(false), rankToSign(rankToSign), rankToExec(rankToExec)
{
	if (rankToSign > 150 || rankToExec > 150)
		throw GradeTooLowException();
	else if (rankToSign < 1 || rankToExec < 1)
		throw GradeTooHighException();
}

AForm::AForm(AForm &to_cpy) : name(to_cpy.name), rankToSign(to_cpy.rankToSign), rankToExec(to_cpy.rankToExec) 
{
	*this = to_cpy;
}

AForm::~AForm()
{
}

//Accessor
std::string	AForm::getName(void)
{
	return (this->name);
}

bool	AForm::getIsSigned(void)
{
	return (this->isSigned);
}

int	AForm::getRankToSign(void)
{
	return (this->rankToSign);
}

int	AForm::getRankToExec(void)
{
	return (this->rankToExec);
}

//Operator
AForm	&AForm::operator=(const AForm &to_assign)
{
	this->isSigned = to_assign.isSigned;
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, AForm &AForm)
{
	stream	<< "AForm name : " << AForm.getName()
			<< " is signed : " << AForm.getIsSigned()
			<< " rank to sign :" << AForm.getRankToSign()
			<< " rank to exec :" << AForm.getRankToSign()
			<< std::endl;
	return (stream);
}
