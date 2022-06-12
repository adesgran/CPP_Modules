/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:07:29 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/12 15:15:57 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB( std::string name )
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void)
{

};

void	HumanB::setWeapon( Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack( void )
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
