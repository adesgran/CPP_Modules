/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:07:01 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/10 13:23:26 by adesgran         ###   ########.fr       */
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
		~Zombie(void);
		void	announce( void );
		void	set_name( std::string name );

	private:
			std::string	name;
			

};

#endif
