/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:44:11 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 10:40:02 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap(void) : ClapTrap::ClapTrap()
{
	std::cout << "\033[0;36m[CLASS_INFO] ScavTrap empty constructor called\033[0m" << std::endl;
	this->_name = "UNKNOWN ScavTrap";
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	std::cout << "\033[0;36m[CLASS_INFO] ScavTrap constructor called\033[0m" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap::ClapTrap(scavtrap)
{
	std::cout << "\033[0;36m[CLASS_INFO] ScavTrap copy constructor called\033[0m" << std::endl;
	this->setName(scavtrap.getName());
	this->setHitPoints(scavtrap.getHitPoints());
	this->setEnergyPoints(scavtrap.getEnergyPoints());
	this->setAttackDamage(scavtrap.getAttackDamage());
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[0;36m[CLASS_INFO] ScavTrap destructor called\033[0m" << std::endl;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << "\033[0;36m[CLASS_INFO] ScavTrap copy operator called\033[0m" << std::endl;
	this->setName(scavtrap.getName());
	this->setHitPoints(scavtrap.getHitPoints());
	this->setEnergyPoints(scavtrap.getEnergyPoints());
	this->setAttackDamage(scavtrap.getAttackDamage());
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "\033[0;33mWarning : ScavTrap " << this->getName() << " is dead\033[0m" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "\033[0;33mWarning : ScavTrap " << this->getName() << " don't get enougth energy\033[0m" << std::endl;
		return ;
	}
	std::cout << "ScavTrap \033[0;32m" << this->getName() << "\033[0m attack \033[0;31m" << target << "\033[0m, causing \033[0;31m" << this->getAttackDamage() << "\033[0m points of damage!" << std::endl;
	if (this->getAttackDamage() == 0)
		std::cout << "\033[0;33mScavTrap attack seems to be null, preserve your energy points\033[0m" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "Remaining Energy Points : " << this->getEnergyPoints() << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap \033[0;32m" << this->getName() << "\033[0m is now in Gate keeper mode" << std::endl;
}
