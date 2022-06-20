/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:15:22 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/20 14:29:36 by adesgran         ###   ########.fr       */
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
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		getNBits( void ) const;
		float	toFloat( void ) const;
		int		toInt( void ) const;
		//////Operator Overload
		//Comparator
		bool	operator>( const Fixed &fixed );
		bool	operator<( const Fixed &fixed );
		bool	operator>=( const Fixed &fixed );
		bool	operator<=( const Fixed &fixed );
		bool	operator==( const Fixed &fixed );
		bool	operator!=( const Fixed &fixed );
		//Arithmetic
		Fixed	operator*( const Fixed &fixed );
		Fixed	operator/( const Fixed &fixed );
		Fixed	operator+( const Fixed &fixed );
		Fixed	operator-( const Fixed &fixed );
		//Increment/Decrement
		Fixed	&operator++( void );
		Fixed	&operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );
		//
		Fixed	&operator=( const Fixed &fixed );
		//////
		static Fixed	&min( Fixed &f1, Fixed &f2 );
		static const Fixed	&min( const Fixed &f1, const Fixed &f2 );
		static Fixed	&max( Fixed &f1, Fixed &f2 );
		static const Fixed	&max( const Fixed &f1, const Fixed &f2 );

	private:
		int	_rawBits;
		static const int	_n_bits;

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
