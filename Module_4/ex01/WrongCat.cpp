/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:43:43 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 15:27:01 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat(void) : WrongAnimal::WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal::WrongAnimal("WrongCat")
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = wrongcat.getType();
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
};

WrongCat &WrongCat::operator=(const WrongCat &wrongcat)
{
	std::cout << "WrongCat copy operator called" << std::endl;
	this->type = wrongcat.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaou Miaou" << std::endl;
}
