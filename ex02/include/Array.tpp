/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:10:33 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/11 10:49:57 by gaducurt         ###   ########.fr       */
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
	_len = n;
}

template <typename T>
Array<T>::Array(const Array& obj)
{
	_len = obj.size();
	_array = new T[_len]();
	for (size_t i = 0; i < _len; i++)
		_array[i] = obj._array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& obj)
{
	if (this != &obj)
	{
		_len = obj.size();
		_array = new T[_len]();
		for (size_t i = 0; i < _len; i++)
			_array[i] = obj._array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
size_t Array<T>::size() const
{
	return (_len);
}

template <typename T>
T& Array<T>::operator[](size_t i)
{
	if (i >= size() || i < 0)
		throw std::exception();
	return (_array[i]);
}

template <typename T>
void Array<T>::print() const
{
	std::cout << "[ ";
	for (size_t i = 0; i < _len; i++)
	{
		std::cout << _array[i];
		if (i < _len - 1)
			std::cout << ", ";
	}
	std::cout << " ]";
	std::cout << std::endl;
}
