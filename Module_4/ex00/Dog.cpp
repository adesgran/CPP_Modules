/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:56:36 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 15:36:40 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(void) : Animal::Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal::Animal("Dog")
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = dog.getType();
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
};

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog copy operator called" << std::endl;
	this->type = dog.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf Wouf" << std::endl;
}
