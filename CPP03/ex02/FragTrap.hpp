/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:29:56 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/25 13:33:43 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {
	private:

	public:
		//Constructor
		FlagTrap();
		FlagTrap(std::string name);
		FlagTrap(FlagTrap &to_copy);
		
		//Destructor	
		~FlagTrap();

		//Function
		void	highFiveGuys();
};