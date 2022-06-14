/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:51:52 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/14 11:27:00 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string.h>

class ClapTrap
{
	private:
		std::string name;
		int			health;
		int			energy;
		int			damage;
		
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &inst);
		~ClapTrap();
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);	
};
