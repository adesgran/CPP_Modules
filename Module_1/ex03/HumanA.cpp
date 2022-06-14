/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:57:40 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 15:56:24 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA( std::string name, Weapon &weapon ) : _weapon( weapon )
{
	this->_name = name;
}

HumanA::~HumanA(void)
{

};

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

void	HumanA::setName( std::string name )
{
	this->_name = name;
}

std::string	HumanA::getName(void)
{
	return (this->_name);
}

Weapon	&HumanA::getWeapon(void)
{
	return (this->_weapon);
}
