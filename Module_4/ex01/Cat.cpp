/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:56:32 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 13:37:33 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat(void) : Animal::Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain;
}

Cat::Cat(const Cat &cat) : Animal::Animal("Cat")
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = cat.getType();
	this->_brain = new Brain(*(cat.getBrain()));
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
};

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat copy operator called" << std::endl;
	this->type = cat.getType();
	*(this->_brain) = *(cat.getBrain());
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}

void	Cat::setBrain(Brain *brain)
{
	delete this->_brain;
	this->_brain = brain;
}
