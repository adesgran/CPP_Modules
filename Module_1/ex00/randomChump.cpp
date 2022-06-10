/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:17:38 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/10 13:22:10 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Zombie.hpp>
#include <stdlib.h>

void	randomChump( std::string name )
{
	Zombie	zombie;

	zombie.set_name(name);
	zombie.announce();
}
