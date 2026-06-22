/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 14:40:29 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/22 11:49:00 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	const std::string	str = "coucou";
	int			intArray[5] = {0, 1, 2, 3, 4};
	double		doubleArray[3] = {0.5, 6.1, 3.87};

	iter(str, str.size(), &printArray);
}
