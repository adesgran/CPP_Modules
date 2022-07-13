/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:54:24 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/13 17:03:13 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template < typename T, typename S>
void	iter( T *tab, S size, void (*f)(T&))
{
	for (int i = 0; i < size; i++)
	{
		f(tab[i]);
	}
}

#endif
