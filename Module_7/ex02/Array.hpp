/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:20:23 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/15 18:25:49 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <string>

template< typename T >
class	Array
{
	public:
		Array<T>( void );
		Array<T>( unsigned int n );
		Array<T>( Array<T> const &array );
		~Array<T>( void );
		Array<T>	&operator=(Array<T> const &array);

		T	&operator[](unsigned int i) const;
		
		unsigned int	size( void ) const;

	private:
		T				*_array;
		unsigned int	_size;

		class InvalidIndexException : public std::exception {
			public :
				virtual const char	*what( void ) const throw();
		};
	
};

#include <Array.tpp>

#endif
