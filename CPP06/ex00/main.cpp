/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 03:12:29 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/30 04:05:55 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

bool	isInteger(std::string str)
{
	if (std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
	{
		for (int i = 1; i < int(str.length()); i++)
		{
			if (std::isdigit(str[i]) == 0)
				return (false);
		}
	}
	else
		return (false);
	return (true);
}

bool	isDouble(std::string str)
{
	int	there_is_pts = 0;
	
	if (strcmp(str.c_str(), "-inf") == 0 || strcmp(str.c_str(), "+inf") == 0 || strcmp(str.c_str(), "nan") == 0)
		return (true);
	if (std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
	{
		for (int i = 1; i < int(str.length()); i++)
		{
			if (str[i] == '.')
				there_is_pts++;
			else if (std::isdigit(str[i]) == 0)
				return (false);
		}
	}
	else
		return (false);
	if (there_is_pts == 1)
		return (true);
	return (false);
}

bool	isFloat(std::string str)
{
	int	there_is_pts = 0;
	
	if (strcmp(str.c_str(), "-inff") == 0 || strcmp(str.c_str(), "+inff") == 0 || strcmp(str.c_str(), "nanf") == 0)
		return (true);
	if (std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
	{
		for (int i = 1; i < int(str.length()); i++)
		{
			if (str[i] == '.')
				there_is_pts++;
			else if (std::isdigit(str[i]) == 0)
				return (false);
		}
	}
	else
		return (false);
	if (there_is_pts == 1 && str[str.length() - 1] == 'f')
		return (true);
	return (false);
}

bool	isChar(std::string str)
{
	if (str.length() == 1)
	{
		if (isdigit(str[0]) == 0)
		{
			if (isprint(str[0]))
				return (true);
		}
	}
	return (false);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string str(av[1]);
	}
	else
		std::cout << "Wrong number of arguments {1 required}" << std::endl;
}