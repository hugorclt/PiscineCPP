/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:19:29 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/28 17:27:06 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <string>

class RobotomyRequestForm : public Form {
	private:
		const std::string target;
		void	beExecuted(void);

	public:
		RobotomyRequestForm(const std::string target = "Default");
		RobotomyRequestForm(RobotomyRequestForm &oth);
		~RobotomyRequestForm(void);
};