/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:41:00 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/24 17:58:17 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>

MateriaSource::MateriaSource(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mMateriaSource default Contructor called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiasource)
{
	if (DEBUG)
		std::cout << "\033[0;34mMateriaSource copy Contructor called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (materiasource._materias[i])
			this->_materias[i] = materiasource._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mMateriaSource Destructor called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		delete (this->_materias[i]);
};

MateriaSource &MateriaSource::operator=(const MateriaSource &materiasource)
{
	if (DEBUG)
		std::cout << "\033[0;34mMateriaSource copy Operator called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (materiasource._materias[i])
			this->_materias[i] = materiasource._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int	i = 0;
	while (i < 4 && this->_materias[i])
		i++;
	if (i < 4)
		this->_materias[i] = materia;
	else
		std::cout << "\033[0;33mWarning : MateriaSource already have 4 materia stored\033[0m" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i = 3;
	while (i >= 0)
	{
		if (this->_materias[i])
		{
			if (this->_materias[i]->getType().compare(type) == 0)
				return (this->_materias[i]->clone());
		}
		i--;
	}
	std::cout << "\033[0;34mWarning : Can't create the materia\033[0m" << std::endl;
	return (NULL);
}
