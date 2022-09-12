/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:16:35 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/12 09:26:02 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain was created" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain was destroyed" << std::endl;
}

Brain::Brain(Brain &to_cpy)
{
	*this = to_cpy;
}

Brain	&Brain::operator=(const Brain &to_assign)
{
	for (int i = 0; i < 99; i++)
		this->ideas[i] = to_assign.ideas[i];
	return (*this);
}
