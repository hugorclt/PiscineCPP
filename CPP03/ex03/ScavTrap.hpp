/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:48:10 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/25 13:09:32 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:

	public:
		//Constructor
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &to_copy);
		
		//Destructor	
		~ScavTrap();

		//Function
		void	guardGate();
};