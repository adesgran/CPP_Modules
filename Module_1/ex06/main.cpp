/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 16:10:30 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 16:30:23 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>
#include <iostream>
#include <string>

int	str_to_int(std::string str)
{
	if (str == "DEBUG")
		return (1);
	if (str == "INFO")
		return (2);
	if (str == "WARNING")
		return (3);
	if (str == "ERROR")
		return (4);
	return (0);
}

void	display_msg(int i)
{
	Harl harl;

	switch (i)
	{
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("debug");
			display_msg(2);
			break ;
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("info");
			display_msg(3);
			break ;
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("warning");
			display_msg(4);
			break ;
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("error");
			break ;
		default :
			std::cout << "Unknown error type" << std::endl;
			break ;
	}
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Need at last one argument" << std::endl;
		return (1);
	}
	std::string input = av[1];
	display_msg(str_to_int(input));
	return (0);
}

