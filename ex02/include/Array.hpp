/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:10:21 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/01 13:51:53 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__
#define __ARRAY__

#include <cstdlib>
#include <exception>

template <typename T>
class Array
{
	private:
		T*		_array;
		size_t	_len;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		Array &operator=(const Array &obj);
		~Array();
		
		size_t	size() const;
		T &operator[](size_t);
};

#include "Array.tpp"

#endif
