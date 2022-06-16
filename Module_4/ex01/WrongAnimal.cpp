/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:36:15 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 15:26:49 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = wronganimal.getType();
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	std::cout << "WrongAnimal copy opertator called" << std::endl;
	this->type = wronganimal.getType();
	return (*this);
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

const std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Piou Piou" << std::endl;
}
