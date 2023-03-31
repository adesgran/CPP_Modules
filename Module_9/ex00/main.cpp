/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:33:59 by adesgran          #+#    #+#             */
/*   Updated: 2023/03/31 14:30:35 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <BitcoinExchange.hpp>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <stdexcept>

#define OK 0
#define BAD_INPUT 1
#define NEGATIVE_NUMBER 2
#define LARGE_NUMBER 3


bool check_date( std::string date )
{
	if ( date.size() != 10 )
		return (false);
	if ( date[4] != '-' || date[7] != '-' )
		return (false);
	date[4] = '0';
	date[7] = '0';
	if (atoi(date.substr(5, 2).c_str()) > 12)
		return (false);
	if (atoi(date.substr(8, 2).c_str()) > 31)
		return (false);
	for (std::string::iterator it = date.begin(); it != date.end(); it++)
	{
		if ( !isdigit(*it) )
			return (false);
	}
	return (true);
}

int	check_price( std::string price )
{
	std::stringstream ss;
	long long int res;
	try
	{
		ss << price;
		ss >> res;
	}
	catch (std::exception const &e)
	{
		return (BAD_INPUT);
	}
	if (res < 0)
		return (NEGATIVE_NUMBER);
	if (res > 1000)
		return (LARGE_NUMBER);
	return (0);


}

bool	check_line( std::string line )
{
	std::string::size_type	split_pos = line.find(" | ");
	if (split_pos != 10)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (false);
	}
	std::string date = line.substr(0, split_pos);
	std::string price = line.substr(split_pos + 3);

	if ( !check_date(date) )
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}
	switch(check_price(price)) {
		case BAD_INPUT :
			std::cout << "Error: bad input => " << price << std::endl;
			return (false);
		case NEGATIVE_NUMBER:
			std::cout << "Error: not a positive number." << std::endl;
			return (false);
		case LARGE_NUMBER:
			std::cout << "Error: too large a number." << std::endl;
			return (false);
	}

	return (true);
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

	BitcoinExchange bce;

	if ( bce.is_empty() )
	{
		std::cout << "btc : Error while generating BitcoinExchange object : object is empty, program will return" << std::endl;
		return (3);
	}

	std::ifstream	infile(av[1]);
	if ( !check_file( infile ) )
	{
		std::cout << "btc : Please send a valid input file" << std::endl;
	}



	std::string line;
	while ( std::getline(infile, line) )
	{
		if (check_line(line))
		{
			std::string date = line.substr(0, 10);
			float price; 
			std::stringstream ss;
			ss << std::atof(line.substr(13).c_str());
			ss >> price;
			std::cout << date <<  " => " << price << " = " << bce.convert(date, price) << std::endl;
		}
	}

	return (0);
}
