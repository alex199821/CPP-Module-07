/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 19:24:36 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/14 20:11:33 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int	main(void)
// {
//     //Swap
// 	int a = 5;
//     int b = 10;

//     double doubleA = 5.21;
//     double doubleB = 10.23;

// 	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
// 	swap(a, b);
// 	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
//     std::cout << std::endl;

//     std::cout << "Before swap: doubleA = " << doubleA << ", doubleB = " << doubleB << std::endl;
// 	swap(doubleA, doubleB);
// 	std::cout << "After swap: doubleA = " << doubleA << ", doubleB = " << doubleB << std::endl;
//     std::cout << std::endl;

// 	int smaller = 4;
//     int bigger = 7;
// 	//Min
// 	std::cout << "Min: " << min(smaller, bigger) << std::endl;
//     std::cout << std::endl;
// 	//Max
// 	std::cout << "Max: " << min(smaller, bigger) << std::endl;
//     std::cout << std::endl;
// 	return (0);
// }

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}