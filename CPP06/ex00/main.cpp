/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 03:12:29 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/30 15:14:25 by hrecolet         ###   ########.fr       */
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
			return (true);
	}
	return (false);
}

void	printChar(char *str)
{
	if (isprint(str[0]))
		std::cout << "char : " << str[0] << std::endl;
	else
		std::cout << "char : non printable" << std::endl;
	 
}

void	whatType(std::string str)
{
	if (isChar(str) == true)
		printChar(str.c_str());
	else if (isInteger(str) == true)
		printInt(atoi(str.c_str()));
	else if (isFloat(str) == true)
		printFloat(atof(str.c_str()));
	else if (isDouble(str) == true)
		printDouble(atof(str.c_str()));
	else if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
		printNan(str);
	else
		printImp(void);
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
