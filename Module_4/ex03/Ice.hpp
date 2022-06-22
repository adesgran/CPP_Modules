/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:31:31 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 15:31:45 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# define DEBUG 1

# include <iostream>
# include <string>

class Ice : AMateria()
{
	public:
		Ice( void );
		Ice( const Ice &ice );
		~Ice( void );
		Ice &operator=( const Ice &ice );


	private:

};

#endif
