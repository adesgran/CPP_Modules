/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:35:07 by adesgran          #+#    #+#             */
/*   Updated: 2023/03/30 04:01:53 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <stdlib.h>
# include <sstream>

class BitcoinExchange {
	public:
		typedef	std::map<std::string, float>	value_type;
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange &bitcoinexchange );
		~BitcoinExchange( void );
		BitcoinExchange &operator=( const BitcoinExchange &bitcoinexchange );

		bool	is_empty( void );
		float	convert( std::string date, float value );


	private:
		std::map<std::string, float> convert_map;
};

#endif
