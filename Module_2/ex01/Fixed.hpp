/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:15:22 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/20 14:28:44 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed( void );
		Fixed( const int value );
		Fixed( const float value );
		Fixed( const Fixed &fixed );
		~Fixed( void );
		Fixed &operator=( const Fixed &fixed );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		getNBits( void ) const;
		float	toFloat( void ) const;
		int		toInt( void ) const;


	private:
		int	_rawBits;
		static const int	_n_bits;

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
