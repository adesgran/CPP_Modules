/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:07:01 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 15:42:06 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <stdlib.h>
#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie(void);
		Zombie( std::string name );
		~Zombie(void);
		void	announce( void );
		void	setName( std::string name );
		const std::string	getName( void ) const;

	private:
			std::string	name;
			

};

#endif
