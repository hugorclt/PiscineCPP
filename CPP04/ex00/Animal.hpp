/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:08:32 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/26 20:27:16 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Animal {
	protected:
		std::string	type;

	public:
		Animal();
		Animal(Animal &to_cpy);
		~Animal();

		//Operator
		Animal	&operator=(const Animal &to_assign);
	
		//Function
		virtual void	makeSound() const;
		std::string		getType() const;	
};

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog &to_cpy);
		~Dog();

		Dog	&operator=(const Dog &to_assign);

		//Function
		virtual void 	makeSound() const;
};

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat &to_cpy);
		~Cat();

		Cat	&operator=(const Cat &to_assign);

		//Function
		virtual void 	makeSound() const;
};