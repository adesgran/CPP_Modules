/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:26:04 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/24 15:56:40 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice(void) : AMateria("ice")
{
	if (DEBUG)
		std::cout << "\033[0;34mIce default Contructor called\033[0m" << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria(ice.getType())
{
	if (DEBUG)
		std::cout << "\033[0;34mIce copy Contructor called\033[0m" << std::endl;
}

Ice::~Ice(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mIce Destructor called\033[0m" << std::endl;
};

Ice &Ice::operator=(const Ice &ice)
{
	if (DEBUG)
		std::cout << "\033[0;34mIce copy Operator called\033[0m" << std::endl;
	(void)ice;
	return (*this);
}

Ice	*Ice::clone() const
{
	Ice	*res = new Ice();
	return (res);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at \033[0;31m" << target.getName() << "\033[0m *" << std::endl;
}
