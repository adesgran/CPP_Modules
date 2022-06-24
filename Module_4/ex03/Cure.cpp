/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:36:16 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/24 16:02:15 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure(void) : AMateria( "cure" )
{
	if (DEBUG)
		std::cout << "\033[0;34mCure default Contructor called\033[0m" << std::endl;
}

Cure::Cure(const Cure &cure) : AMateria( cure.getType() )
{
	if (DEBUG)
		std::cout << "\033[0;34mCure copy Contructor called\033[0m" << std::endl;
}

Cure::~Cure(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mCure Destructor called\033[0m" << std::endl;
};

Cure &Cure::operator=(const Cure &cure)
{
	if (DEBUG)
		std::cout << "\033[0;34mCure copy Operator called\033[0m" << std::endl;
	(void)cure;
	return (*this);
}

Cure	*Cure::clone() const
{
	Cure	*res = new Cure();
	return (res);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heal \033[0;32m" << target.getName() << "\033[0m's wounds *" << std::endl;
}
