/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 08:57:53 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/30 00:11:33 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{

private:
	std::string type;

public:
	Weapon(std::string const &name);
	~Weapon();
	const std::string	&getType();
	void				setType(std::string newType);
};
#endif
