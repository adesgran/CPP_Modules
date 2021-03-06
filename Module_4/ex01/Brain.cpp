/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:38:24 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 14:31:38 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mBrain default Contructor called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = std::string();
}

Brain::Brain(const Brain &brain)
{
	if (DEBUG)
		std::cout << "\033[0;34mBrain copy Contructor called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain.getIdeas()[i];
}

Brain::~Brain(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mBrain Destructor called\033[0m" << std::endl;
};

Brain &Brain::operator=(const Brain &brain)
{
	if (DEBUG)
		std::cout << "\033[0;34mBrain copy Operator called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain.getIdeas()[i];
	return (*this);
}

void	Brain::setIdeas( std::string ideas[100])
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];
}

void	Brain::setIdeas( std::string idea, int index)
{
	this->_ideas[index] = idea;
}

const std::string	*Brain::getIdeas(void)const
{
	return (&(this->_ideas[0]));
}

const std::string	Brain::getIdeas(int index)const
{
	return (this->_ideas[index]);
}
