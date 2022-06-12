/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:52:22 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/12 14:56:46 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon( std::string type )
{
	this->_type = type;
}

Weapon::~Weapon(void)
{

};

const std::string	&Weapon::getType( void )
{
	std::string	&res = this->_type;
	return (res);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}
