/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:35:01 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/19 11:45:06 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> T max(T a, T b)
{
	return ((a > b) ? a : b);
}

template <typename T> T min(T a, T b)
{
	return ((a < b) ? a : b);
}

template <typename T> void swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
	// return ();
}
