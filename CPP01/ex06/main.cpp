/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 09:24:48 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/24 10:24:00 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl		harl;

		harl.complain(av[1]);
	}
	else
		std::cout << "Use : DEBUG, INFO, WARNING or ERROR, to use Harl" << std::endl;
	return (0);
}
