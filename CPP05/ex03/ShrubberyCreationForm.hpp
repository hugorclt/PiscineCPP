/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:19:38 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/28 20:35:34 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <exception>
#include <string>

#define TREE "\
		 /\\\n\
        /  \\\n\
       /    \\\n\
      / +    \\\n\
     /     ¤  \\\n\
    /__     *__\\\n\
      /  +   \\\n\
     / *      \\\n\
    /     *    \\\n\
   /  +    ¤    \\\n\
  /___        ___\\\n\
     /     *  \\\n\
    /  *       \\\n\
   /         +  \\\n\
  / +            \\\n\
 /         *      \\\n\
/__________________\\\n\
        |  |\n\
        |  |\n\
        |  |\n\
        ====\n"

class ShrubberyCreationForm : public Form {
	private:
		const std::string target;
		void	beExecuted(void);

	public:
		ShrubberyCreationForm(const std::string target = "Default");
		ShrubberyCreationForm(ShrubberyCreationForm &oth);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &to_assign);
			
		class ErrorOpeningFile : public std::exception{
			public:
				virtual const char 	*what() const throw()
				{
					return ("Error in the process of opening the file");
				}
		};
};