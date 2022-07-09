/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:24:28 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/09 17:55:38 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <converter.hpp>

int	main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cout << "\033[0;31mOne argument required!\033[0m" << std::endl;
		return (1);
	}
	converter(av[1]);
	return (0);
}
