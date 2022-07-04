/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:58:37 by hrecolet          #+#    #+#             */
/*   Updated: 2022/07/04 16:10:40 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Data {
	private:
		bool	isHiggsBoson = true;
	
	public:
		bool getHigss(void) const {
			return (this->isHiggsBoson);
		}
};

