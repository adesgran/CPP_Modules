/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:07:07 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 15:41:49 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie(void)
{
	std::cout << "Zombie Constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Zombie Constructor called with name = " << name << std::endl;
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie named " << this->name << " destroyed !" << std::endl;
};

void	Zombie::announce( void )
{
	if (this->name.empty())
		std::cout << "<name>: BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->name = name;
}

const std::string	Zombie::getName(void) const
{
	return (this->name);
}
