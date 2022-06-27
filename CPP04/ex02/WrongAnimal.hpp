/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:17:38 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/26 20:47:03 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class WrongAnimal {
	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal &to_cpy);
		~WrongAnimal();

		//Operator
		WrongAnimal	&operator=(const WrongAnimal &to_assign);
	
		//Function
		void		makeSound() const;
		std::string	getType() const;		
};

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(WrongCat &to_cpy);
		~WrongCat();

		WrongCat	&operator=(const WrongCat &to_assign);

		//Function
		void 	makeSound() const;
};