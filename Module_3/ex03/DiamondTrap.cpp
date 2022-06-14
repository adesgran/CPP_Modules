/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:07:15 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 14:59:42 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap::ClapTrap(name), ScavTrap::ScavTrap(name), FragTrap::FragTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->_name = ClapTrap::_name;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage= FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) : ClapTrap::ClapTrap(diamondtrap), ScavTrap::ScavTrap(diamondtrap), FragTrap::FragTrap(diamondtrap)
{

	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{

	std::cout << "ScavTrap Destructor called" << std::endl;
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	std::cout << "ScavTrap Copy Operator called" << std::endl;
	this->_name = diamondtrap.getName();
	return (*this);
}

void	DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}
