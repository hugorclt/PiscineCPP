/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:28:54 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/28 21:01:37 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>
#include "Form.hpp"

class Intern {
	private:

	public:
		Intern();
		Intern(const Intern &to_cpy);
		~Intern();
		
		Intern	&operator=(const Intern &to_assign);

		class FormTypeDoesNotExist : public std::exception {
			public:
				virtual const char 	*what() const throw()
				{
					return ("Form name doesn't exist");
				}
		};
		Form	*makeForm(std::string type, std::string target) const;
};