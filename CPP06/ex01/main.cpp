/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:00:52 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/13 17:24:39 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	res;
	
	res = reinterpret_cast<uintptr_t>(ptr);
	return (res);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*res;

	res = reinterpret_cast<Data *>(raw);
	return (res);
}

int	main(void)
{
	Data	*ptr = new Data();

	std::cout << "dataPTR: " << ptr << std::endl;
	uintptr_t	serialized_ptr = serialize(ptr);
	std::cout << "Serialized dataPTR: " << serialized_ptr << std::endl;
	Data	*cpyOfData = deserialize (serialized_ptr);
	std::cout << "Deserialized dataPTR: " << cpyOfData << std::endl;
	
	delete ptr;
}
