/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:30:22 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/13 14:44:05 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# define DEBUG 0

# include <iostream>
# include <string>

class Data {
	public:
		Data( void );
		Data( const Data &data );
		~Data( void );
		Data &operator=( const Data &data );

		int getValue( void ) const;
		void		setValue( int value );


	private:
		int	_value;

};

#endif
