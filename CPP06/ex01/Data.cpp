/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 22:57:44 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/15 23:03:37 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{	
}

Data::Data(const Data &to_cpy)
{
	(void)to_cpy;
}

Data::~Data()
{
}

Data	&Data::operator=(const Data& to_cpy)
{
	(void)to_cpy;
	return (*this);
}

bool	Data::getHigss(void) const {
	return (this->isHiggsBoson);
}
