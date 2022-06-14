/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:07:13 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 15:38:27 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie* newZombie( std::string name);
void	randomChump( std::string name );

int	main( void )
{
	Zombie *joe = newZombie("Joe");
	joe->announce();
	randomChump("Mike");
	delete joe;
	return (0);
}
