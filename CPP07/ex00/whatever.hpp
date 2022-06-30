/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:39:47 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/30 16:42:41 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void	swap(T &x, T &y)
{
	T tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T	max(T x, T y)
{
	return ((x > y) ? x : y);
}

template<typename T>
T	min(T x, T y)
{
	return ((x < y) ? x : y);
}