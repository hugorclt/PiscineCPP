/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:29:56 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/26 15:20:43 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:

	public:
		//Constructor
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &to_copy);
		
		//Destructor	
		~FragTrap();

		//operator
		FragTrap	&operator=(const FragTrap &to_assign);
		
		//Function
		void	highFiveGuys();
};