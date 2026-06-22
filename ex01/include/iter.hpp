/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 14:40:33 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/22 14:56:39 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

template <typename T> void iter(T* array, const std::size_t len, void (*f)(T&))
{
	for (std::size_t i = 0; i < len; i++)
	{
		f(array[i]);
		std::cout << array[i] << ' ';
	}
	std::cout << std::endl;
}

template <typename T> void iter(const T* array, const std::size_t len, void (*f)(const T&))
{
	for (std::size_t i = 0; i < len; i++)
	{
		f(array[i]);
		std::cout << ' ';
	}
	std::cout << std::endl;
}

template <typename T> void printArray(const T& element)
{
	std::cout << element;
}

template <typename T> void increment(T& element)
{
	element++;
}
