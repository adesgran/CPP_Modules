/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:33:59 by adesgran          #+#    #+#             */
/*   Updated: 2023/03/21 17:27:06 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <BitcoinExchange.hpp>
#include <stdlib.h>
#include <fstream>

#define OK 0
#define BAD_INPUT 1
#define NEGATIVE_NUMBER 2
#define LARGE_NUMBER 3


bool check_date( std::string date )
{
	if ( date.size() != 10 )
		return (false);
	if ( date[4] != '-' || date[6] != '-' )
		return (false);
	date[4] = 0;
	date[6] = 0;
	for (std::string:iterator it = date.begin(); it != date.end(); it++)
	{
		if ( !isdigit(*it) )
			return (false);
	}
	return (true);
}

int	check_line( std::string line )
{
	std::string::size_type	split_pos = line.find(" | ");
	std::string date = line.substr(0, split_pos);

	if ( !check_date(date) )
		return (BAD_INPUT);

	return (OK);
}



bool	check_file( std::ifstream &infile )
{
	if ( !infile || !infile.is_open() )
		return (false);
	std::string line;
	if ( !std::getline(infile, line) )
		return (false);
	if ( line != "date | value" )
		return (false);
	return (true);
}


int main(int ac, char **av)
{
	if ( ac > 2)
	{
		std::cout << "btc : Only one argument required" << std::endl;
		return (1);
	}  
	if ( ac < 2 )
	{
		std::cout << "btc : One argument required" << std::endl;
		return (2);
	}

	std::ifstream	infile(av[1]);
	if ( !check_file( infile ) )
	{
		std::cout << "btc : Please send a valid input file" << std::endl;
	}

	BitcoinExchange bce;


	std::string line;

	return (0);
}
