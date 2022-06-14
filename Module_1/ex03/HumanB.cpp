/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:07:29 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 15:58:24 by adesgran         ###   ########.fr       */
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

void	HumanB::setName( std::string name )
{
	this->_name = name;
}

std::string	HumanB::getName(void)
{
	return (this->_name);
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
}

Weapon	*HumanB::getWeapon(void)
{
	return (this->_weapon);
}
