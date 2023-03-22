/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:44:29 by adesgran          #+#    #+#             */
/*   Updated: 2023/03/22 13:35:00 by adesgran         ###   ########.fr       */
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
		convert_map.insert( std::map<std::string, float>::value_type( line.substr(0, split_it), std::atof( line.substr( split_it + 1 ).c_str() ) ) );
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
	return ( convert_map.lower_bound(date)->second * value );
}
