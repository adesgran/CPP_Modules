/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:26:27 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/17 14:22:31 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int	main( void )
{
	ClapTrap	bob("Bob");

	bob.attack("Angry Bad Boy");
	bob.takeDamage(8);
	bob.beRepaired(5);
	bob.setAttackDamage(10);
	bob.attack("Angry Bad Boy");
	bob.takeDamage(8);
	bob.beRepaired(5);
	return (0);
}
