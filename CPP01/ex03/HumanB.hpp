/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 08:57:33 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/11 08:57:35 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*weapon;
	std::string	name;

public:
	HumanB(std::string name);
	//~HumanB();
	void	setWeapon(Weapon &weapon);
	void	attack();
};

#endif
