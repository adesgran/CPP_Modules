/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:55:32 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/12 14:43:10 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string>

int	main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF= str;

	std::cout << "Address value : " << std::endl;
	std::cout << "-str : " << &str << std::endl;
	std::cout << "-stringPTR : " << stringPTR << std::endl;
	std::cout << "-stringREF: " << &stringREF << std::endl << std::endl;
	std::cout << "String value : " << std::endl;
	std::cout << "-str : " << str << std::endl;
	std::cout << "-stringPTR : " << *stringPTR << std::endl;
	std::cout << "-stringREF: " << stringREF << std::endl;
	return (0);
}
