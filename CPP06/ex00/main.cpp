/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 03:12:29 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/14 07:43:48 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <climits>
#include <iomanip>
#include <cstdlib>

//Function to define argv1

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
		for (int i = 1; i < int(str.length() - 1); i++)
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

/*----------------------------------------------------------------------*/
//Function to print argv[1]
/*----------------------------------------------------------------------*/

void	printChar(const char *str)
{
	if (isprint(str[0]))
		std::cout << "char : '" << str[0] << "'" << std::endl;
	else
		std::cout << "char : non printable" << std::endl;
	std::cout << "integer : " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float : " << static_cast<float>(str[0]) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(str[0]) << std::endl;	 
}

void	printInt(int nb)
{
	if (isprint(nb))
		std::cout << "char : '" << static_cast<char>(nb) << "'" << std::endl;
	else
		std::cout << "char : non printable" << std::endl;
	std::cout << "integer : " << nb << std::endl;
	std::cout << "float : " << static_cast<float>(nb) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(nb) << ".0" << std::endl;	 
}

void	printFloat(float nb)
{
	if (isprint(nb))
		std::cout << "char : '" << static_cast<char>(nb) << "'" << std::endl;
	else
		std::cout << "char : non printable" << std::endl;
	if (nb > 2147483647 || nb < -2147483648)
		std::cout << "int : out of range" << std::endl;
	else
		std::cout << "integer : " << static_cast<int>(nb) << std::endl;
	if (nb == static_cast<int>(nb))
	{
		std::cout << "float : " << nb << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(nb) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float : " << nb << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(nb) << std::endl;
	}
}

void	printDouble(float nb)
{
	if (isprint(nb))
		std::cout << "char : '" << static_cast<char>(nb) << "'" << std::endl;
	else
		std::cout << "char : non printable" << std::endl;
	if (nb > 2147483647 || nb < -2147483648)
		std::cout << "int : out of range" << std::endl;
	else
		std::cout << "integer : " << static_cast<int>(nb) << std::endl;
	if (nb == static_cast<int>(nb))
	{
		std::cout << "float : " << static_cast<float>(nb) << ".0f" << std::endl;
		std::cout << "double : " << nb << ".0" << std::endl;
	}
	else
	{
		std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
		std::cout << "double : " << nb << std::endl;
	}
}

void	printNan(std::string str)
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "integer : impossible" << std::endl;
	if (str == "-inff" || str == "-inf")
	{
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl; 
	}
	else if (str == "+inff" || str == "+inf")
	{
		std::cout << "float : +inff" << std::endl;
		std::cout << "double : +inf" << std::endl; 
	}
	else
	{
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl; 
	}
}

void	printInv(void)
{
	std::cout << "char : invalid" << std::endl;
	std::cout << "integer : invalid" << std::endl;
	std::cout << "float : invalid" << std::endl;
	std::cout << "double : invalid" << std::endl;
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
		printInv();
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string str(av[1]);
		whatType(str);
	}
	else
		std::cout << "Wrong number of arguments {1 required}" << std::endl;
}
