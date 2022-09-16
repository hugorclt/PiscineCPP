/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:43:17 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/16 04:56:07 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	{
		std::cout << "TEST#1" << std::endl;
		Array<int> intTab;
		printArray(intTab);
		for (unsigned int i = 0; i < intTab.size(); i++)
			intTab[i] = 1;
		printArray(intTab);
		std::cout << "---------" << std::endl;
	}
	{
		std::cout << "TEST#2" << std::endl;
		Array<int> intTab(10);
		printArray(intTab);
		for (unsigned int i = 0; i < intTab.size(); i++)
			intTab[i] = 1;
		printArray(intTab);
		std::cout << "---------" << std::endl;
	}
	{
		std::cout << "TEST#3" << std::endl;
		Array<char> intTab(10);
		printArray(intTab);
		for (unsigned int i = 0; i < intTab.size(); i++)
			intTab[i] = 'A';
		printArray(intTab);
		std::cout << "---------" << std::endl;
	}
	{
		std::cout << "TEST#4" << std::endl;
		Array<int> intTab(10);
		Array<int> tab(intTab);
		std::cout << "tab1:" << std::endl;
		printArray(intTab);
		std::cout << "tab2:" << std::endl;
		printArray(tab);
		for (unsigned int i = 0; i < intTab.size(); i++)
			intTab[i] = 4;
		std::cout << "tab1:" << std::endl;
		printArray(intTab);
		std::cout << "tab2:" << std::endl;
		printArray(tab);
		std::cout << "---------" << std::endl;
	}
}
