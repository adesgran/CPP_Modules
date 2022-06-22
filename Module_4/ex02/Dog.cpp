/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:56:36 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 13:37:09 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(void) : Animal::Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain;
}

Dog::Dog(const Dog &dog) : Animal::Animal("Dog")
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = dog.getType();
	this->_brain = new Brain(*(dog.getBrain()));
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete	this->_brain;
};

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog copy operator called" << std::endl;
	this->type = dog.getType();
	*(this->_brain) = *(dog.getBrain()); 
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf Wouf" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}

void	Dog::setBrain(Brain *brain)
{
	delete this->_brain;
	this->_brain = brain;
}
