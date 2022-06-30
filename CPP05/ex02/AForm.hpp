/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:34:37 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/27 14:46:30 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Bureaucrat;

class AForm {
	private:
		const std::string	name;
		bool				isSigned;
		const int			rankToSign;
		const int			rankToExec;

	public:
		//Constructor
		AForm();
		AForm(std::string name, const int rankToSign, const int rankToExec);
		AForm(AForm &to_cpy);
		~AForm();

		//Accessor
		std::string	getName(void);
		bool		getIsSigned(void);
		int			getRankToSign(void);
		int		getRankToExec(void);

		//Operator
		AForm	&operator=(const AForm &to_assign);
	
		//Methods
		void	beSigned(Bureaucrat &b);

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
};

std::ostream	&operator<<(std::ostream &stream, AForm &AForm);
