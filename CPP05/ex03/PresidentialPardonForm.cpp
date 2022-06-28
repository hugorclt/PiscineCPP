/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:55:38 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/28 20:54:19 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
: Form("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &to_cpy)
: Form(to_cpy.getName(), to_cpy.getRankToSign(), to_cpy.getRankToExec()), target(to_cpy.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &to_assign)
{
	(void)to_assign;
	return (*this);
}

void	PresidentialPardonForm::beExecuted(void)
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
