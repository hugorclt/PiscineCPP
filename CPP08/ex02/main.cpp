/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:12:45 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/06 22:31:32 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <iostream>

int main()
{
	try
	{
		std::cout << "----- MutantStack -----" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	} catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "===== List =====" << std::endl;
        std::list<int> list;
        list.push_back(5);
        list.push_back(17);
        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        list.push_back(0);
        std::list<int>::iterator it2 = list.begin();
        std::list<int>::iterator ite2 = list.end();
        while (it2 != ite2)
        {
            std::cout << *it2 << std::endl;
            ++it2;
        }
	} catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}