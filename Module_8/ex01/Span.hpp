/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:34:08 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/15 20:53:33 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define DEBUG 0

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span {
	public:
		Span( unsigned int );
		Span( const Span &span );
		~Span( void );
		Span &operator=( const Span &span );

		unsigned int	getSize( void ) const;
		void	addNumber(int n);
		int		shortestSpan( void );
		int		longestSpan( void );

		std::vector<int> const	getNumbers( void ) const;
		Span &operator+( const std::vector<int> v );

	private:
		std::vector<int>	_numbers;
		unsigned int		_size;

		class FullSpanException : public std::exception {
			virtual const char	*what( void ) const throw();
		};
		class NotEnoughtNumbersException : public std::exception {
			virtual const char	*what( void ) const throw();
		};

};

#endif
