/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 22:37:29 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/13 23:09:37 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <iostream>
#include <utility>

template <typename Array, typename Function> 
void iter(Array *array, size_t length, Function func)
{
	for (size_t i = 0; i < length; ++i)
		func(array[i]);
}

template <typename PrintValue> 
void print(PrintValue value)
{
	std::cout << value << std::endl;
}