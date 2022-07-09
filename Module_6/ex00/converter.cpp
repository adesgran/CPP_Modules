/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:47:10 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/09 18:16:20 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <converter.hpp>

int	check_char(std::string str)
{
	if (str.size() != 1)
		return (0);
	char	c = str.c_str()[0];
	if (isprint(c) && !isdigit(c))
		return (1);
	return (0);
}

int	check_int(std::string str)
{
	if (str[0] == '-')
		str.erase(0, 1);
	for (unsigned long i = 0; i < str.size(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

void	converter(std::string str)
{
	std::cout << check_char(str) << std::endl;
	std::cout << check_int(str) << std::endl;
}
