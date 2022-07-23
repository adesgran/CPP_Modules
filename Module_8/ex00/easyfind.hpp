/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:42:02 by adesgran          #+#    #+#             */
/*   Updated: 2022/07/23 12:33:49 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

template< typename T >
typename T::iterator	easyfind( T container, int x )
{
	typename T::iterator iterator;

	iterator = find(container.begin(), container.end(), x);
	if (iterator == container.end())
		throw (std::length_error("No occurence"));
	else
		return (iterator);
}

#endif
