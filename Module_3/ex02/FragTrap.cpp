/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:38:34 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/17 15:51:57 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap(void) : ClapTrap::ClapTrap()
{
	std::cout << "\033[0;36m[CLASS_INFO] FragTrap empty constructor called\033[0m" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	std::cout << "\033[0;36m[CLASS_INFO] FragTrap constructor called\033[0m" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap::ClapTrap(fragtrap)
{
	std::cout << "\033[0;36m[CLASS_INFO] FragTrap copy constructor called\033[0m" << std::endl;
	this->setName(fragtrap.getName());
	this->setHitPoints(fragtrap.getHitPoints());
	this->setEnergyPoints(fragtrap.getEnergyPoints());
	this->setAttackDamage(fragtrap.getAttackDamage());
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[0;36m[CLASS_INFO] FragTrap destructor called\033[0m" << std::endl;
};

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	std::cout << "\033[0;36m[CLASS_INFO] FragTrap copy operator called\033[0m" << std::endl;
	this->setName(fragtrap.getName());
	this->setHitPoints(fragtrap.getHitPoints());
	this->setEnergyPoints(fragtrap.getEnergyPoints());
	this->setAttackDamage(fragtrap.getAttackDamage());
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap \033[0;34m" << this->getName() << "\033[0m want a high five" << std::endl;
}
