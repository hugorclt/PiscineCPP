/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:16:05 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/13 12:50:23 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
class Phonebook
{
	public:
		//Constructor, destructor
		Phonebook(void);
		~Phonebook(void);

		//function
		void	addContact(Contact contact);
		int		getIndex();
		void	printContact();
		Contact	getContact(int index);
		int		getFull(void);

	private:
		//Attributes
		int		index;
		Contact contact[8];
		int		is_full;

		//Private function for more protection
		std::string	truncate(std::string str, size_t width);

};

#endif
