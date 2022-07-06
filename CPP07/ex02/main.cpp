/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:43:17 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/05 16:46:18 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	{
		std::cout << "TEST#1" << std::endl;
		Array<int> intTab(10);
		printArray(intTab);
		for (unsigned int i = 0; i < intTab.size(); i++)
			intTab[i] = 1;
		printArray(intTab);
		std::cout << "---------" << std::endl;
	}
	{
		std::cout << "TEST#2" << std::endl;
		Array<char> intTab(10);
		printArray(intTab);
		for (unsigned int i = 0; i < intTab.size(); i++)
			intTab[i] = 'A';
		printArray(intTab);
		std::cout << "---------" << std::endl;
	}
}