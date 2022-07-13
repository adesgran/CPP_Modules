/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:51:53 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/13 16:52:20 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template < typename T >
void	swap( T &a, T &b)
{
	T c = b;
	b = a;
	a = c;
}

template < typename T >
T	min(T const &a, T const &b)
{
	return ((a < b) ? a : b);
}

template < typename T >
T	max(T const &a, T const &b)
{
	return ((a > b) ? a : b);
}

#endif
