/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 19:24:36 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/13 19:37:37 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Templates.hpp"

int	main(void)
{
	int a = 5;
    int b = 10;

    double doubleA = 5.21;
    double doubleB = 10.23;
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    std::cout << "Before swap: doubleA = " << doubleA << ", doubleB = " << doubleB << std::endl;

	swap(doubleA, doubleB);

	std::cout << "After swap: doubleA = " << doubleA << ", doubleB = " << doubleB << std::endl;
	return (0);
}