/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:16:40 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/11 12:34:05 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
	private:
		int	value;
		const static int bits = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed& value);
		~Fixed(void);
		void	operator=(const Fixed &to_assign);
		void	setRawBits(const int raw);
		int		getRawBits(void) const;
};
