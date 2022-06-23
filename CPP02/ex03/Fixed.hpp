/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:16:40 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/23 15:05:13 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	value;
		const static int bits = 8;
		
	public:
	
		//Constructor
		Fixed(void);
		Fixed(const Fixed& value);
		Fixed(const int &value);
		Fixed(const float &value);

		//Destructor
		~Fixed(void);
		
		//Assignation operator
		Fixed			&operator=(const Fixed &to_assign);
		
		//Comparison operator
		bool				operator==(const Fixed &othInstance) const;
		bool				operator<(const Fixed &othInstance) const;
		bool				operator>(const Fixed &othInstance) const;
		bool				operator<=(const Fixed &othInstance) const;
		bool				operator>=(const Fixed &othInstance) const;
		bool				operator!=(const Fixed &othInstance) const;
		
		//Mathematics operator
		Fixed				operator+(const Fixed &othInstance) const;
		Fixed				operator-(const Fixed &othInstance) const;
		Fixed				operator*(const Fixed &othInstance);
		Fixed				operator/(const Fixed &othInstance) const;
		
		//Pre-incrementation operator
		Fixed				operator++(void);
		Fixed				operator--(void);
		
		//Post-incrementation operator
		Fixed				operator++(int);
		Fixed				operator--(int);

		//Function
		void				setRawBits(const int raw);
		int					getRawBits(void) const;
		int					toInt(void) const;
		float				toFloat(void) const;
		static const Fixed	min(const Fixed &nb1, const Fixed &nb2);
		static const Fixed	max(const Fixed &nb1, const Fixed &nb2);
		static Fixed		min(Fixed &nb1, Fixed &nb2);
		static Fixed		max(Fixed &nb1, Fixed &nb2);
};

std::ostream				&operator<<(std::ostream &stream, const Fixed &to_output);
