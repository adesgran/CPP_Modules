/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:17:38 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 15:34:06 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Zombie.hpp>
#include <stdlib.h>

void	randomChump( std::string name )
{
	Zombie	zombie;

	zombie.setName(name);
	zombie.announce();
}
