/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 19:27:07 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/13 22:25:30 by auplisas         ###   ########.fr       */
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

template <typename Min> 
Min min(Min &a, Min &b)
{
	if(a >= b)
		return (b);
	else
		return (a);
}

template <typename Max> 
Max max(Max &a, Max &b)
{
	if(a <= b)
		return (b);
	else
		return (a);
}
