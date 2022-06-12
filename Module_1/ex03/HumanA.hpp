/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:56:49 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/12 15:13:48 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <Weapon.hpp>
#include <iostream>
#include <string>

class HumanA {
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );
		void	attack( void );


	private:
		std::string	_name;
		Weapon		*_weapon;

};

#endif
