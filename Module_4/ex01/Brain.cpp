/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:39:54 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/16 15:43:26 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	this->ideas = brain.getIdeas();
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
};

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << "Brain copy operator called" << std::endl;
	this->ideas = brain.getIdeas();
	return (*this);
}

