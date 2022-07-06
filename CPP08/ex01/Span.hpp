/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:36:27 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/06 21:53:45 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>

class Span {
	private:
		unsigned int		len;
		std::vector<int>	vec;

	public:
		Span(const unsigned int n = 0);
		Span(const Span &oth_instance);
		~Span();
		
		Span &operator=(const Span &to_assign);

		//methods
		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
		int	shortestSpan();
		int	longestSpan();
		
};