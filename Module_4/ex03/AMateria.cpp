/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:54:55 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/22 16:01:44 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria(void) : _name( "UNKNOWN" )
{
	if (DEBUG)
		std::cout << "\033[0;34mAMateria default Contructor called\033[0m" << std::endl;
}

AMateria::AMateria(std::string name) : _name( name )
{
	if (DEBUG)
		std::cout << "\033[0;34mAMateria default Contructor called\033[0m" << std::endl;
}

AMateria::AMateria(const AMateria &amateria) : _name( amateria::_name )
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
}

