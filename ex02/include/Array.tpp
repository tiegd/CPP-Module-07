/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:10:33 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/30 15:46:37 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array()
{
	_array = new T;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n]();
}

template <typename T>
Array<T>::Array(const Array& obj)
{
	_array = obj._array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& obj)
{
	if (this != &obj)
		_array = obj._array;
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete _array;
}

template <typename T>
size_t Array<T>::size()
{
	size_t	i = 0;
	
	while (_array[i])
		i++;
	return (i);
}

template <typename T>
T& Array<T>::operator[](int i)
{
	if (i > size())
		throw std::exception();
	return (_array[i]);
}

