/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:34:37 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/28 17:50:51 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Bureaucrat;

class Form {
	private:
		const std::string	name;
		bool				isSigned;
		const int			rankToSign;
		const int			rankToExec;

		virtual void		beExecuted(void) = 0;

	public:
		//Constructor
		Form();
		Form(std::string name, const int rankToSign, const int rankToExec);
		Form(Form &to_cpy);
		virtual ~Form(void) = 0;

		//Accessor
		std::string	getName(void);
		bool		getIsSigned(void);
		int			getRankToSign(void);
		int			getRankToExec(void);

		//Operator
		Form	&operator=(const Form &to_assign);
	
		//Methods
		void	beSigned(Bureaucrat &b);
		void	execute(Bureaucrat const &executor);

		//Exception
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
		class FormIsntSigned : public std::exception {
			public:
				virtual const char 	*what() const throw()
				{
					return ("Can't execute this form because it wasn't signed");
				}
		};
};

std::ostream	&operator<<(std::ostream &stream, Form &form);
