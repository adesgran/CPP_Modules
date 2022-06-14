/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:26:27 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 13:58:58 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int	main( void )
{
	ClapTrap	bob("Bob");
	FragTrap	frag("Frag");
	frag.highFivesGuys();
	return (0);
}
