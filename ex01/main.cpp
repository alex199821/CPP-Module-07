/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 22:37:32 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/13 23:10:33 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int intArr[] = {1, 2, 3, 4, 5};
	std::string strArr[] = {"one", "two", "three", "four", "five"};
    iter(intArr, 5, print<int>);
    std::cout << std::endl;
    iter(strArr, 5, print<std::string>);
	return (0);
}