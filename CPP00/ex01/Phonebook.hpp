/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:16:05 by hrecolet          #+#    #+#             */
/*   Updated: 2022/03/03 05:24:02 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		void	addContact(Contact contact);
		int		getIndex();
		void	printContact();
		Contact	getContact(int index);
		std::string	truncate(std::string str, size_t width)
		{
			if (str.length() > width)
				return (str.substr(0, width - 1) + ".");
			else
				return (str);
		};
		

	private:
		int		index;
		Contact contact[8];
		int		is_full;
};

#endif
