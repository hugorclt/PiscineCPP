/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 09:24:48 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/11 09:37:12 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	str;
	
	std::cout << "Use : debug, info, warning or error, to use Harl" << std::endl;
	if (!getline(std::cin, str))
		return (1);
	harl.complain(str);
	return (0);
}
