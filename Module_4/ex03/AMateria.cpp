/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:54:55 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/24 17:10:29 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria(void) : _type( "UNKNOWN" )
{
	if (DEBUG)
		std::cout << "\033[0;34mAMateria default Contructor called\033[0m" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type( type )
{
	if (DEBUG)
		std::cout << "\033[0;34mAMateria default Contructor called\033[0m" << std::endl;
}

AMateria::AMateria(const AMateria &amateria) : _type( amateria.getType() )
{
	if (DEBUG)
		std::cout << "\033[0;34mAMateria copy Contructor called\033[0m" << std::endl;
}

AMateria::~AMateria(void)
{
	if (DEBUG)
		std::cout << "\033[0;34mAMateria Destructor called\033[0m" << std::endl;
};

AMateria &AMateria::operator=(const AMateria &amateria)
{
	if (DEBUG)
		std::cout << "\033[0;34mAMateria copy Operator called\033[0m" << std::endl;
	(void)amateria;
	return (*this);
}

std::string const	&AMateria::getType( void ) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	if (this->_type.compare("ice") == 0)
		std::cout << "* shoots an ice bolt at \033[0;31m" << target.getName() << "\033[0m *" << std::endl;
	else if (this->_type.compare("cure") == 0)
		std::cout << "* heal \033[0;32m" << target.getName() << "\033[0m's wounds *" << std::endl;
	else
		std::cout << "Error : Unknown Materia type" << std::endl;
}
