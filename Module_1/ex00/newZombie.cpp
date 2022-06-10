/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:14:03 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/10 13:24:17 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <stdlib.h>

Zombie* newZombie( std::string name)
{
	Zombie	*res = new Zombie();

	res->set_name(name);
	return (res);
}
