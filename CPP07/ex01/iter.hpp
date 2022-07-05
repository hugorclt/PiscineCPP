/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:48:57 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/05 13:57:18 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <iostream>

template <typename T>
void	iter(T array[], size_t len, void (function(T))) {
	for (size_t i = 0; i < len; i++)
		function(array[i]);
}

template <typename T>
void	print(T elem)
{
	std::cout << elem << std::endl;
}