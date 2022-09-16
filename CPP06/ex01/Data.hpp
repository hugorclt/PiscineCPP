/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:58:37 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/15 22:59:35 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Data {
	private:
		const static bool	isHiggsBoson = true;
	
	public:
		Data();
		Data(const Data &to_cpy);
		~Data();

		Data	&operator=(const Data &to_cpy);
		
		bool getHigss(void) const;
};

