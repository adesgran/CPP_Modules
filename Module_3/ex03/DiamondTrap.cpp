/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:55:38 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 11:20:42 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap(void) 
{
	std::cout << "\033[0;36m[CLASS_INFO] DiamondTrap empty constructor called\033[0m" << std::endl;
	this->setName("UNKNOWN DiamondTrap");
	this->setHitPoints(FragTrap::getHitPoints());
	FragTrap	tmp("tmp");
	this->setEnergyPoints(tmp.getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "\033[0;36m[CLASS_INFO] DiamondTrap constructor called\033[0m" << std::endl;
	this->setName(name);
	this->setHitPoints(FragTrap::getHitPoints());
	FragTrap	tmp("tmp");
	this->setEnergyPoints(tmp.getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) : ClapTrap::ClapTrap(diamondtrap), ScavTrap::ScavTrap(diamondtrap), FragTrap::FragTrap(diamondtrap)
{
	std::cout << "\033[0;36m[CLASS_INFO] DiamondTrap copy constructor called\033[0m" << std::endl;
	this->_name = diamondtrap.getName();
	this->ClapTrap::setName(diamondtrap.ClapTrap::getName());
	this->setHitPoints(diamondtrap.getHitPoints());
	this->setEnergyPoints(diamondtrap.getEnergyPoints());
	this->setAttackDamage(diamondtrap.getAttackDamage());
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\033[0;36m[CLASS_INFO] DiamondTrap destructor called\033[0m" << std::endl;
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	std::cout << "\033[0;36m[CLASS_INFO] DiamondTrap copy operator called\033[0m" << std::endl;
	this->_name = diamondtrap.getName();
	this->ClapTrap::setName(diamondtrap.ClapTrap::getName());
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

void	DiamondTrap::setName( std::string name )
{
	this->_name = name.c_str();
	std::string tmp(name);
	this->ClapTrap::_name = (tmp.append("_clap_name"));
}

std::string	DiamondTrap::getName( void ) const
{
	return (this->_name);
}
