/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:01:08 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/27 14:11:45 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {
	private:
		const std::string	name;
		int					rank;

	public:
		//Nested Class
		class GradeTooHighException : public std::exception{
			public:
				virtual const char 	*what() const throw()
				{
					return ("Grade too high, value have to be between 1 and 150");
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char 	*what() const throw()
				{
					return ("Grade too low, value have to be between 1 and 150");
				}
		};
		
		//Contructor / Destructor
		Bureaucrat();
		Bureaucrat(const std::string name, int rank);
		Bureaucrat(Bureaucrat &to_cpy);
		~Bureaucrat();

		//Operator
		Bureaucrat		&operator=(const Bureaucrat &to_assign);

		//Accessor
		std::string	getName(void) const;
		int			getRank(void) const;

		//Methods
		void		incrRank(void);
		void		decrRank(void);
		void		signForm(Form &form);
};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &to_output);
