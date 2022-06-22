/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:26:27 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 11:08:56 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>
#include <DiamondTrap.hpp>

int	main( void )
{
	DiamondTrap tmp("Bob");
	tmp.highFivesGuys();
	DiamondTrap	bob = tmp;

	bob.highFivesGuys();
	bob.whoAmI();
	bob.setName("Bib");
	bob.whoAmI();
	bob.attack("Angry Bad Boy");
	bob.takeDamage(8);
	bob.beRepaired(5);
	bob.setAttackDamage(10);
	bob.attack("Angry Bad Boy");
	bob.takeDamage(8);
	bob.beRepaired(5);

	DiamondTrap tmp2;
	tmp2.whoAmI();
	return (0);
}
