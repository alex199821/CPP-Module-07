/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:38:02 by macbook           #+#    #+#             */
/*   Updated: 2025/04/14 13:22:24 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

// Default constructor
template <typename T> 
Array<T>::Array() : _array(nullptr), _size(0)
{
	std::cout << "Array constructed via default constructor." << std::endl;
}
// Paramtered constructor
template <typename T> 
Array<T>::Array(unsigned int n) : _array(new T[n]),
	_size(n)
{
	std::cout << "Array with size: " << n << " is constructed." << std::endl;
}
// Array destructor
template <typename T> 
Array<T>::~Array(void)
{
	delete	_array;

	std::cout << "The Array is destroyed" << std::endl;
};
// Copy assignment operator
template <typename T> 
Array<T>::Array(const Array &copy)
{
	_len = copy.size();
	_array = new T[_len];
	for (unsigned int i = 0; i < _len; i++)
		_array[i] = copy.getArray()[i];
	std::cout << "The Array is copied" << std::endl;
}
// = Overload Operator
template <typename T> 
Array<T> &Array<T>::operator=(const Array<T> &copy)
{
	if (this != *copy)
	{
		for (int i = 0; i < _len; i++)
			_array[i] = copy.getArray()[i];
	}
	std::cout << "The Array is copied by assigning" << std::endl;
	return (*this);
}

// [] Overload Operator
template <typename T> 
T &Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index > (int)size())
		throw(OutOfBounds()) 
    return (_arr[index]);
}

// Error exception
template <typename T> 
const char *Array<T>::OutOfBounds::what() const throw()
{
	return ("Given Index is out of bounds of array");
}
//Getter
template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}