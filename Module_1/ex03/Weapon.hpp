/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:48:49 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/12 14:56:32 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {
	public:
		Weapon( std::string type );
		~Weapon( void );
		const std::string	&getType( void );
		void	setType( std::string type );


	private:
		std::string	_type;

};

#endif
