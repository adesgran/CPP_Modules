/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:07:07 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/10 13:32:41 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie(void)
{

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

void	Zombie::set_name( std::string name )
{
	this->name = name;
}
