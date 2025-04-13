/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 19:27:07 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/13 19:37:13 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <utility>

template <typename Swap> 
void swap(Swap &a, Swap &b)
{
	Swap	temp;
	temp = a;
	a = b;
	b = temp;
}
