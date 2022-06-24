/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:11:07 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/24 17:38:22 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>

Character::Character(std::string name) : _name( name )
{
	if (DEBUG)
		std::cout << "\033[0;34mCharacter default Contructor called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(const Character &character) : _name(character.getName())
{
	if (DEBUG)
		std::cout << "\033[0;34mCharacter copy Contructor called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete (this->_materias[i]);
		if (character._materias[i])
			this->_materias[i] = character._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
}

Character::~Character(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mCharacter Destructor called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		delete (this->_materias[i]);
};

Character &Character::operator=(const Character &character)
{
	if (DEBUG)
		std::cout << "\033[0;34mCharacter copy Operator called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete (this->_materias[i]);
		if (character._materias[i])
			this->_materias[i] = character._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;
	while (i < 4 && this->_materias[i])
		i++;
	if (i < 4)
		this->_materias[i] = m;
	else
		std::cout << "\033[0;33mWarning : \033[0;31m" << this->_name << "\033[0;33m already have 4 materias equiped\033[0m" << std::endl;
}

void	Character::unequip(int idx)
{
	this->_materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->_materias[idx])
		this->_materias[idx]->use(target);
}
