/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:10:42 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/30 15:49:21 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>
#include <iostream>

int main()
{
	Array<int> a;
    std::cout << a.size() << std::endl;
    Array<std::string>  str(3);
    std::cout << str.size() << std::endl;
    a = str;
}
