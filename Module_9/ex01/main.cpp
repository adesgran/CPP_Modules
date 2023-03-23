/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:16:15 by adesgran          #+#    #+#             */
/*   Updated: 2023/03/23 14:28:40 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>
#include <string>
#include <iostream>

int main(int ac, char **av)
{
	if ( ac != 2 )
	{
		std::cout << "RPN : 1 argument required" << std::endl;
		return (1);
	}
	RPN rpn;
	float	res;
	try
	{
		res = rpn.solve(av[1]);
		std::cout << res << std::endl;
	}
	catch (std::exception &s)
	{
		std::cout << "\033[0;31mError\033[0m" << std::endl;
	}
	return (0);
}
