/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:43:33 by hrecolet          #+#    #+#             */
/*   Updated: 2022/09/16 03:54:20 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>

template <typename T>
class Array {
	private:
		unsigned int	_size;
		T				*array;
		
	public:
		Array();
		Array(const unsigned int n);
		Array(const Array &oth_instance);
		~Array();
		
		//Operator
		Array	&operator=(const Array &to_assign);
		T		&operator[](const long long int index);
		
		//Methods
		unsigned int	size(void) const;

		class OutOfBoundsExceptions : public std::exception {
			public:
				virtual const char *what() const throw () {
					return ("index out of bounds");
				}
		};
};

template <typename T>
Array<T>::Array() : _size(0), array(NULL)
{
}

template <typename T>
Array<T>::Array(const unsigned int n) : _size(n), array(new T[n]())
{
}

template <typename T>
Array<T>::Array(const Array<T> &oth_instance) : _size(oth_instance._size), array(new T[oth_instance._size]) {
	for (unsigned int i = 0; i < oth_instance.size(); i++)
		this->array[i] = oth_instance.array[i];
}

template <typename T>
Array<T>::~Array(void) {
	delete []this->array;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &to_assign) {
	delete []this->array;
	this->array = new T[to_assign._size];
	this->_size = to_assign._size;
	for (unsigned int i = 0; i < to_assign._size; i++) {
		this->array[i] = to_assign.array[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](const long long int index) {
	if (index >= (this->_size) || index < 0)
		throw Array<T>::OutOfBoundsExceptions();
	return (this->array[index]);
}

template <typename T>
unsigned int	Array<T>::size(void) const {
	return (this->_size);
}

template <typename T>
void	printArray(Array<T> &ref) {
	for (unsigned int i = 0; i < ref.size(); i++)	
		std::cout << ref[i] << std::endl;
}
