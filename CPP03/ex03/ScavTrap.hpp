/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:48:10 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/26 15:23:16 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
	private:

	public:
		//Constructor
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &to_copy);
		
		//Destructor	
		~ScavTrap();

		//Operator
		ScavTrap &operator=(const ScavTrap &to_assign);

		//Function
		void	guardGate();
		void	attack(const std::string &target);
};