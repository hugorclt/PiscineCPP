/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:08:32 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/14 08:34:01 by hrecolet         ###   ########.fr       */
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
		Animal(std::string type);

		//Operator
		Animal	&operator=(const Animal &to_assign);
	
		//Function
		virtual void	makeSound() const = 0;
		std::string		getType() const;	
};

class Dog : public Animal {
	private:
		Brain		*brain;
	public:
		Dog();
		Dog(Dog &to_cpy);
		virtual ~Dog();

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
		virtual ~Cat();

		Cat	&operator=(const Cat &to_assign);

		//Function
		virtual void 	makeSound() const;
};
