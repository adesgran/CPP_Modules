/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:03:04 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 15:52:18 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <Weapon.hpp>
#include <iostream>
#include <string>

class HumanB {
	public:
		HumanB( std::string name );
		~HumanB( void );
		void	attack( void );
		void	setWeapon( Weapon &weapon );
		void	setName( std::string name );
		std::string	getName( void );
		void	setWeapon( Weapon *weapon );
		Weapon	*getWeapon( void );


	private:
		std::string	_name;
		Weapon		*_weapon;

};

#endif
