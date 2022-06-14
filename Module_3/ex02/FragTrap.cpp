/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:55:47 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/14 13:57:42 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap( std::string frag_name) : ClapTrap::ClapTrap(frag_name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap::ClapTrap( fragtrap )
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	this->_name = fragtrap.getName();
	this->_hitPoints = fragtrap.getHitPoints();
	this->_energyPoints = fragtrap.getEnergyPoints();
	this->_attackDamage = fragtrap.getAttackDamage();
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;

};

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	std::cout << "FragTrap Copy Operator called" << std::endl;
	this->_name = fragtrap.getName();
	this->_hitPoints = fragtrap.getHitPoints();
	this->_energyPoints = fragtrap.getEnergyPoints();
	this->_attackDamage = fragtrap.getAttackDamage();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " want a High Five" << std::endl;
}
