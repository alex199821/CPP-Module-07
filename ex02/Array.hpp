/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 23:14:17 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/14 03:13:26 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename ARR> 
class Array
{
  private:
	ARR *_arr;
	unsigned int _size;

  public:
	// Constructors
	Array();
	Array(unsigned int n);
	Array(const Array<ARR> &copy);
	~Array();
	Array<ARR> &operator=(const Arrayy<ARR> &copy);
	ARR &operator[](unsigned int n);
	unsigned int size() const;
	// Exception classes
	class InaccessibleException : public std::exception
	{
		public:
		const char *what() const throw();
	};
};