/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:26:27 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/17 15:50:58 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int	main( void )
{
	FragTrap	bob("Bob");

	bob.highFivesGuys();
	bob.attack("Angry Bad Boy");
	bob.takeDamage(8);
	bob.beRepaired(5);
	bob.setAttackDamage(10);
	bob.attack("Angry Bad Boy");
	bob.takeDamage(8);
	bob.beRepaired(5);
	return (0);
}
