/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:55:45 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 14:29:00 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal(std::string type)
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = animal.getType();
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
};

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal copy operator called" << std::endl;
	this->type = animal.getType();
	return (*this);
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

const std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Piou Piou" << std::endl;
}
