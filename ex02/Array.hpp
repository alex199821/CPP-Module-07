/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 23:14:17 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/14 14:39:40 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib> 

template <typename T> 
class Array
{
  private:
	T *_array;
	unsigned int _size;

  public:
	// Constructors
	Array();
	Array(unsigned int n);
	Array(const Array<T> &copy);
	~Array();
	Array<T> &operator=(const Array<T> &copy);

	T &operator[](unsigned int n);
	unsigned int size() const;
	T *getArray(void) const;
	void printArray(Array<T>& array) const;
	// Exception classes
	class OutOfBounds : public std::exception
	{
		public:
		const char *what() const throw();
	};
};

#include "Array.tpp"
