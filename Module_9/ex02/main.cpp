/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:51:18 by adesgran          #+#    #+#             */
/*   Updated: 2023/03/24 12:48:09 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <PmergeMe.hpp>
#include <vector>

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "PmergeMe : require at least 1 argument" << std::endl;
		return (1);
	}
	try
	{
		PmergeMe	pmm(ac - 1, ++av);
		pmm.print();
	}
	catch (std::exception const &e)
	{
		std::cout << "Error" << std::endl;
	}
	return (0);
}
	
