/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:08:32 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/15 19:32:17 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <easyfind.hpp>
#include <string>
#include <vector>
#include <exception>

int main( void )
{
	std::vector<int> v(5, 0);

	for (int i = 0; i < 5; i++)
		v[i] = i;
	
	try
	{
		int res = *easyfind(v, 4);
		std::cout << "Res = " << res << std::endl;
		res = *easyfind(v, 5);
		std::cout << "Res = " << res << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
