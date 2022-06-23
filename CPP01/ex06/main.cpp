/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 09:24:48 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/23 09:54:02 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	str;
	
	std::cout << "Use : DEBUG, INFO, WARNING or ERROR, to use Harl" << std::endl;
	if (!getline(std::cin, str))
		return (1);
	harl.complain(str);
	return (0);
}
