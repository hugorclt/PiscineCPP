/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:00:52 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/04 16:08:59 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	res;
	
	res = dynamic_cast<uintptr_t>(ptr);
	return (res);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*res;

	res = dynamic_cast<Data *>(raw);
	return (res);
}

int	main(void)
{
	
}