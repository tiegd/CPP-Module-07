/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 14:40:29 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/01 15:54:04 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	const std::string	strArray[] = {"Hello", "World"};
	int			intArray[] = {0, 1, 2, 3, 4};
	const int	intConstArray[] = {0, 1, 2, 3, 4};
	double		doubleArray[] = {0.5, 6.1, 3.87};

	iter(strArray, 2, printArray<std::string>);
	iter(intArray, 5, increment<int>);
	iter(intConstArray, 5, printArray<int>);
	iter(doubleArray, 3, increment<double>);
	return (0);
}
