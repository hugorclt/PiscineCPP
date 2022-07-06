/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:21:46 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/06 19:54:35 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <exception>
#include <iostream>

class NumberNotFound : std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Error: Occurence not found");
		}
};

template <typename T>
int	easyFind(T container, int nb)
{
	int	count = 0;

	count += std::count(container.begin(), container.end(), nb);
	if (count <= 0)
		throw ::NumberNotFound();
	return (nb);
}