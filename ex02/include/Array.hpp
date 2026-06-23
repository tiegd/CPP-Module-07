/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:10:21 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/23 16:06:05 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__
#define __ARRAY__

#include <cstdlib>
#include <exception>

template <typename T>
class Array
{
	public:
		T*	_array;
	private:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		Array &operator=(const Array &obj);
		~Array();
		
		size_t	size();
		T &operator[](int);
};

#endif
