/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:17:13 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/12 09:25:20 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Brain {
	private:
		std::string	ideas[99];

	public:
		Brain();
		Brain(Brain &to_cpy);
		~Brain();

		//Operator
		Brain		&operator=(const Brain &to_assign);
};
