/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:43:06 by hrecolet          #+#    #+#             */
/*   Updated: 2022/03/26 15:56:52 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Missing parameters, correct use is : ./sed {file_to_modify} {to_search} {to_replace}" << std::endl;
		return (1);
	}
	else
	{
		std::ifstream	input(av[1]);
		std::string		to_search(av[2]);
		std::string		to_replace(av[3]);
		std::string		name = av[1];
		std::string		tmp;
		std::string		tmp2;

		name += ".replace";

		if (!input)
			return (std::cerr << "Couldn't open the file " << av[1] << std::endl, 0);
		std::string		line;
		std::ofstream	output(name.c_str());
		if (to_search == to_replace)
		{
			while (std::getline(input, line))
			{
				output << line << std::endl;
				output.close();
				return (0);
			}
		}
		while (std::getline(input, line))
		{
			while (1)
			{
				std::size_t	index_found = line.find(to_search);
				if (index_found != std::string::npos)
				{
					tmp = line.substr(0, index_found);
					tmp = tmp + to_replace;
					tmp2 = line.substr(index_found + to_search.length(), line.length());
					line = tmp + tmp2;
				}
				else
					break;
			}
			output << line << std::endl;
		}
		output.close();
		std::cout << "all good ! check : " << name << std::endl;
	}
}
