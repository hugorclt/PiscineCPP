/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:08:32 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/12 09:30:46 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {
	protected:
		std::string	type;

	public:
		virtual ~Animal();
		Animal();
		Animal(Animal &to_cpy);

		//Operator
		Animal	&operator=(const Animal &to_assign);
	
		//Function
		virtual void	makeSound() const;
		std::string		getType() const;
		void			setType(const std::string	type);	
};

class Dog : public Animal {
	private:
		Brain		*brain;
		
	public:
		Dog();
		Dog(Dog &to_cpy);
		~Dog();

		Dog	&operator=(const Dog &to_assign);

		//Function
		virtual void 	makeSound() const;
};

class Cat : public Animal {
	private:
		Brain		*brain;
		
	public:
		Cat();
		Cat(Cat &to_cpy);
		~Cat();

		Cat	&operator=(const Cat &to_assign);

		//Function
		virtual void 	makeSound() const;
};
