/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:30:08 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 13:46:21 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap( std::string scav_name) : ClapTrap::ClapTrap(scav_name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap::ClapTrap( scavtrap )
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	this->_name = scavtrap.getName();
	this->_hitPoints = scavtrap.getHitPoints();
	this->_energyPoints = scavtrap.getEnergyPoints();
	this->_attackDamage = scavtrap.getAttackDamage();
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;

};

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap Copy Operator called" << std::endl;
	this->_name = scavtrap.getName();
	this->_hitPoints = scavtrap.getHitPoints();
	this->_energyPoints = scavtrap.getEnergyPoints();
	this->_attackDamage = scavtrap.getAttackDamage();
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " goes into Gate Keeper mode" << std::endl;
}
