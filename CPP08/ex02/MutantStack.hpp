/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:57:02 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/06 22:14:07 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type container_type;
		typedef typename container_type::iterator iterator;
		
		iterator	begin(void) {
			return (this->c.begin());
		}
		
		iterator	end(void) {
			return (this->c.end());
		}
		
		MutantStack() {}
		MutantStack(const MutantStack &cpy) {
			*this = cpy;
		}
		MutantStack	&operator=(const MutantStack &to_assign) {
			this->c = to_assign.c;
			return (*this);
		}
		
		virtual ~MutantStack() {};
};