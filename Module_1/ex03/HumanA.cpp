/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:57:40 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/12 15:15:45 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA( std::string name, Weapon &weapon )
{
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA(void)
{

};

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
