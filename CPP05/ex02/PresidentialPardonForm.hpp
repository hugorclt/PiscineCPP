/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:20:16 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/28 17:24:45 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <string>

class PresidentialPardonForm : public Form {
	private:
		const std::string target;
		void	beExecuted(void);

	public:
		PresidentialPardonForm(const std::string target = "Default");
		PresidentialPardonForm(PresidentialPardonForm &oth);
		~PresidentialPardonForm(void);
};