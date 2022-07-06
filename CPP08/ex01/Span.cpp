/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:36:29 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/06 21:54:26 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <algorithm>

Span::Span(const unsigned n) : len(n)
{
}

Span::Span(const Span &oth_instance)
{
	*this = oth_instance;
}

Span::~Span()
{
}

Span	&Span::operator=(const Span &to_assign)
{
	this->vec = to_assign.vec;
	this->len = to_assign.len;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (this->vec.size() < this->len)
		this->vec.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	while (it < ite)
	{
		this->len++;
		if (this->vec.size() > this->len)
		{
			this->len--;
			throw std::length_error("span too long, can't add");
		}
		this->vec.push_back(*it);
		it++;
	}	
}

int	Span::shortestSpan(void)
{
	std::vector<int>	tmp = this->vec;
	int					res = 0;

	std::sort(tmp.begin(), tmp.end());
	res = abs(tmp[1] - tmp[0]);
	for (unsigned int i = 0; i < tmp.size(); i++)
	{
		if (res > abs(tmp[i] - tmp[i + 1]))
			res = abs(tmp[i] - tmp[i + 1]);
	}
	return (res);
}

int	Span::longestSpan(void)
{
	int	min = *std::min_element(this->vec.begin(), this->vec.end());
	int	max = *std::max_element(this->vec.begin(), this->vec.end());
	return (max - min);
}