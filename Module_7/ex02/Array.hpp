/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:20:23 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/13 17:44:00 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template< typename T >
class	Array
{
	public:
		Array<T>( void );
		Array<T>( unsigned int n );
		Array<T>( Array<T> const &array );
		Array<T>	&operator=(Array<T> const &array);

		T	&operator[](int i);
		
		unsigned int	size( void ) const;

	private:
		T				_array[];
		unsigned int	_size;
	
}

#include <Array.tpp>

#endif
