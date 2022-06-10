/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:36:58 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/10 13:48:43 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <iostream>
#include <string>

Zombie*	zombieHorde( int N, std::string name);

int	main( void )
{
	Zombie *list = zombieHorde(5, "Joe");

	delete[] list;
	return (0);
}
