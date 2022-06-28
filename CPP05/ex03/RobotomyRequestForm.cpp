/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:26:45 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/28 20:54:13 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
: Form("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &to_cpy)
: Form(to_cpy.getName(), to_cpy.getRankToSign(), to_cpy.getRankToExec()), target(to_cpy.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &to_assign)
{
	(void)to_assign;
	return (*this);
}

void	RobotomyRequestForm::beExecuted(void)
{
	std::cout << this->target << " bzzzz bzzz bzz" << std::endl;
	srand(time(0));
	if ((rand() % 10) + 1 > 5)
		std::cout << "Success robotomisation" << std::endl;
	else
		std::cout << "Robotomisation failure" << std::endl;
}