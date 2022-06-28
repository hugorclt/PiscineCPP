/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:31:49 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/28 20:54:02 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &to_cpy)
: Form(to_cpy.getName(), to_cpy.getRankToSign(), to_cpy.getRankToExec()), target(to_cpy.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &to_assign)
{
	(void)to_assign;
	return (*this);
}

void	ShrubberyCreationForm::beExecuted(void)
{
	std::ofstream outfile;

	outfile.open((this->target + "_shrubbery").c_str());
	if (!outfile.is_open())
		throw ShrubberyCreationForm::ErrorOpeningFile();
	outfile << TREE;
	outfile.close();
}