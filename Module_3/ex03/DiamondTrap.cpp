/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:55:38 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/17 17:51:42 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap(void) 
{
	std::cout << "\033[0;36m[CLASS_INFO] DiamondTrap empty constructor called\033[0m" << std::endl;
	this->ScavTrap::setHitPoints(FragTrap::getHitPoints());
	this->ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	this->ScavTrap::setEnergyPoints(ScavTrap::_energyPoints);
	this->ScavTrap::setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "\033[0;36m[CLASS_INFO] DiamondTrap constructor called\033[0m" << std::endl;
	this->_name = name;
	this->ClapTrap::setName(name.append("_clap_name"));
	this->ScavTrap::setHitPoints(FragTrap::getHitPoints());
	this->ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	this->ScavTrap::setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) : ClapTrap::ClapTrap(diamondtrap), ScavTrap::ScavTrap(diamondtrap), FragTrap::FragTrap(diamondtrap)
{
	std::cout << "\033[0;36m[CLASS_INFO] DiamondTrap copy constructor called\033[0m" << std::endl;
	this->_name = diamondtrap._name;
	this->ClapTrap::setName(diamondtrap.getName());
	this->ScavTrap::setHitPoints(diamondtrap.FragTrap::getHitPoints());
	this->ScavTrap::setEnergyPoints(diamondtrap.ScavTrap::getEnergyPoints());
	this->ScavTrap::setAttackDamage(diamondtrap.FragTrap::getAttackDamage());
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\033[0;36m[CLASS_INFO] DiamondTrap destructor called\033[0m" << std::endl;
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	std::cout << "\033[0;36m[CLASS_INFO] DiamondTrap copy operator called\033[0m" << std::endl;
	this->_name = diamondtrap._name;
	this->ClapTrap::setName(diamondtrap.getName());
	this->ScavTrap::setHitPoints(diamondtrap.FragTrap::getHitPoints());
	this->ScavTrap::setEnergyPoints(diamondtrap.ScavTrap::getEnergyPoints());
	this->ScavTrap::setAttackDamage(diamondtrap.FragTrap::getAttackDamage());
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap name : \033[0;32m" << this->_name << "\033[0m" << std::endl;
	std::cout << "ClapTrap name : \033[0;32m" << this->ClapTrap::getName() << "\033[0m" << std::endl;
}
