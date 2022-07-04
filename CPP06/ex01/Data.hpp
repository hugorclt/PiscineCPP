/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:58:37 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/04 21:41:24 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Data {
	private:
		const static bool	isHiggsBoson = true;
	
	public:
		bool getHigss(void) const {
			return (this->isHiggsBoson);
		}
};

