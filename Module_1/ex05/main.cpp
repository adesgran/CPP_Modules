/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 16:10:30 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/12 16:28:16 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Need at last one argument" << std::endl;
		return (1);
	}
	std::string level = av[1];
	Harl	harl;
	harl.complain(level);
	return (0);
}

