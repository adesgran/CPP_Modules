/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:28:27 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/17 15:05:14 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap(void)
{
	std::cout << "\033[0;36m[CLASS_INFO] ClapTrap empty constructor called\033[0m" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "\033[0;36m[CLASS_INFO] ClapTrap constructor called\033[0m" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "\033[0;36m[CLASS_INFO] ClapTrap copy constructor called\033[0m" << std::endl;
	this->_name = claptrap.getName();
	this->_hitPoints = claptrap.getHitPoints();
	this->_energyPoints = claptrap.getEnergyPoints();
	this->_attackDamage = claptrap.getAttackDamage();
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\033[0;36m[CLASS_INFO] ClapTrap destructor called\033[0m" << std::endl;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "\033[0;36m[CLASS_INFO] ClapTrap copy operator called\033[0m" << std::endl;
	this->_name = claptrap.getName();
	this->_hitPoints = claptrap.getHitPoints();
	this->_energyPoints = claptrap.getEnergyPoints();
	this->_attackDamage = claptrap.getAttackDamage();
	return (*this);
}

std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}

void	ClapTrap::setName( std::string name )
{
	this->_name = name;
}

void	ClapTrap::setHitPoints( unsigned int value )
{
	this->_hitPoints = value;
}

void	ClapTrap::setEnergyPoints( unsigned int value )
{
	this->_energyPoints = value;
}

void	ClapTrap::setAttackDamage( unsigned int value )
{
	this->_attackDamage = value;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "\033[0;33mWarning : ClapTrap " << this->_name << " is dead\033[0m" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "\033[0;33mWarning : ClapTrap " << this->_name << " don't get enougth energy\033[0m" << std::endl;
		return ;
	}
	std::cout << "ClapTrap \033[0;32m" << this->_name << "\033[0m attack \033[0;31m" << target << "\033[0m, causing \033[0;31m" << this->_attackDamage << "\033[0m points of damage!" << std::endl;
	if (this->_attackDamage == 0)
		std::cout << "\033[0;33mClapTrap attack seems to be null, preserve your energy points\033[0m" << std::endl;
	this->_energyPoints--;
	std::cout << "Remaining Energy Points : " << this->_energyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "\033[0;33mWarning : ClapTrap " << this->_name << " is already dead\033[0m" << std::endl;
		return ;
	}
	std::cout << "ClapTrap \033[0;32m" << this->_name << "\033[0m take \033[0;31m" << amount << "\033[0m damages" << std::endl;
	if (amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << "\033[0;31mClapTrap " << this->_name << " died\033[0m" << std::endl;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << "Remaining Life : " << this->_hitPoints << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "\033[0;33mWarning : ClapTrap " << this->_name << " is already dead\033[0m" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "\033[0;33mWarning : ClapTrap " << this->_name << " don't get enougth energy\033[0m" << std::endl;
		return ;
	}
	std::cout << "ClapTrap \033[0;32m" << this->_name << "\033[0m recover \033[0;32m" << amount << "\033[0m life points by repairing himself" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "Remaining Life : " << this->_hitPoints << std::endl;
	std::cout << "Remaining Energy Points : " << this->_energyPoints << std::endl;
}
