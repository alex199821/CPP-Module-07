/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 23:13:36 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/14 14:54:22 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	leaks(void)
{
	system("leaks array");
}

int	main(void)
{
	atexit(leaks);
	// Test default constructor
	const Array<int> defaultArray;
	std::cout << "Default array size: " << defaultArray.size() << std::endl;

	// Test parameterized constructor
	Array<int> array(10);
	std::cout << "Parameterized array size: " << array.size() << std::endl;
	for (int i = 0; i < 10; i++)
	{
		int value = rand();
		array[i] = value;
	}
	printArray(array);
	try
    {
		std::cout << "Data at index 25: " << array[25] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
    {
		std::cout << "Data at index -1: " << array[-1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
    {
		std::cout << "Data at index 5: " << array[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	Array<int> copyArray;
	copyArray = array;
	std::cout << std::endl;
	std::cout << "Copied array by = operator: " << std::endl;
	printArray(copyArray);
	std::cout << std::endl;
	std::cout << "Changing data in copied array" << std::endl;
	copyArray[0] = 23;
	std::cout << "Printing copied array - ";
	printArray(copyArray);
	std::cout << "Printing Original array - ";
	printArray(array);
	std::cout << std::endl;

	Array<int> copyConstructorArray(array);
	printArray(copyConstructorArray);
	try
    {
		copyConstructorArray[11] = 2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
    {
		copyConstructorArray[1] = 2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	std::cout << "Printing copied array - ";
	printArray(copyConstructorArray);
	std::cout << "Printing Original array - ";
	printArray(array);
	std::cout << std::endl;
	std::cout << std::endl;

	return (0);
}