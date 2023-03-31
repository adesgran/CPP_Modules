/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:44:29 by adesgran          #+#    #+#             */
/*   Updated: 2023/03/31 14:32:40 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

BitcoinExchange::BitcoinExchange( void )
{
	std::ifstream	datafile("data.csv");
	std::string		line;

	if ( !datafile || !datafile.is_open() )
	{
		std::cout << "btc : Can't open \"data.csv\"" << std::endl;
		return ;
	}

	std::getline(datafile, line);

	while ( std::getline(datafile, line) )
	{
		std::string::size_type	split_it = line.find(',');
		float	rate;
		std::stringstream	ss;
		ss << line.substr(split_it + 1);
		ss >> rate;
		convert_map.insert( std::map<std::string, float>::value_type( line.substr(0, split_it), rate ) );
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &bitcoinexchange)
{
	*this = bitcoinexchange;
}

BitcoinExchange::~BitcoinExchange(void)
{
	convert_map.clear();
};

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &bitcoinexchange)
{
	convert_map = bitcoinexchange.convert_map;
	return (*this);
}

bool	BitcoinExchange::is_empty( void )
{
	return (convert_map.empty());
}


float	BitcoinExchange::convert( std::string date, float value )
{
	std::map<std::string, float>::iterator	it = convert_map.upper_bound(date);
	if ( it == convert_map.begin() )
		return (0);
	it--;
	return ( it->second * value );
}
